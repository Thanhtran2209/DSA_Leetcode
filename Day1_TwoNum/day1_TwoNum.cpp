#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
public:

    vector<int> twoSum(vector<int>& nums, int target) {
        
        
        // for (int idx= 0; idx < nums.size(); idx++ ) 

        // {
        //     for( int idx1 = idx+1; idx1 < nums.size(); idx1++)
        //     {
        //         int sum = 0; 
        //         sum = nums[idx] + nums[idx1];

        //         if (sum == target) {

        //             return {idx,idx1} ;
        //         };
            
            
        //     }
        // }

        unordered_map <int, int> num_map;
        for (int i = 0; i < nums.size(); ++i){
            int complement = target - nums[i];
            if (num_map.find(complement) != num_map.end()){
                return {num_map[complement], i};
            }
            num_map[nums[i]] = i;
        }

        return {}; // nếu không tìm thấy
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = sol.twoSum(nums, target);
    cout << "Indices: [" << result[0] << ", " << result[1] << "]" << endl;
    // result should be {0, 1}
    return 0;

}    