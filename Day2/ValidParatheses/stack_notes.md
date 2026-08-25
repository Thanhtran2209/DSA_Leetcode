# std::stack in C++

## What is a stack?

A **stack** is a container adapter that gives Last-In-First-Out (LIFO) access —
the last element pushed is the first one popped. Like a stack of plates: add
to the top, remove from the top only. No access to the middle or bottom.

Built on top of another container (default `std::deque`) — it doesn't
implement storage itself, just restricts access to push/pop/top at one end.

```cpp
#include <stack>
```

## Declaration

```cpp
std::stack<int> s;                          // empty stack of int
std::stack<char> s2;                        // e.g. for Valid Parentheses
std::stack<int, std::vector<int>> s3;       // underlying container = vector instead of deque
```

## Core operations

| Function       | Meaning                              | Example            |
|----------------|---------------------------------------|---------------------|
| `push(val)`    | Add element to top                    | `s.push('(');`      |
| `pop()`        | Remove top element (returns nothing!) | `s.pop();`          |
| `top()`        | Access top element (reference)        | `char c = s.top();` |
| `empty()`      | true if no elements                   | `if (s.empty())`    |
| `size()`       | number of elements                    | `s.size()`          |
| `emplace(args)`| construct element in-place on top     | `s.emplace('x');`   |

**Gotcha:** `pop()` does NOT return the removed value — it just removes it.
To get-and-remove, call `top()` first, then `pop()`:

```cpp
char c = s.top();
s.pop();
```

Calling `top()` or `pop()` on an empty stack is **undefined behavior** —
always check `empty()` first.

## Example: Valid Parentheses

```cpp
#include <stack>
#include <string>

bool isValid(std::string s) {
    std::stack<char> st;
    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') {
            st.push(c);
        } else {
            if (st.empty()) return false;
            char top = st.top();
            st.pop();
            if ((c == ')' && top != '(') ||
                (c == ']' && top != '[') ||
                (c == '}' && top != '{')) {
                return false;
            }
        }
    }
    return st.empty();
}
```
