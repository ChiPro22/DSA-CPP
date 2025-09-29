// class Solution {
// public:
//     void nextPermutation(vector<int>& nums) {
//         //Using Inbuild Function 
//         // int n = nums.size();
//         // next_permutation(nums.begin(), nums.end());
//         //timecomplexity -->O(N)
//         //space complexity-->O(1)


//         //similar to above In-Build function it is inner implementation of this function
//         //Optimal Solution
//         // int ind = -1; // break point
//         // for (int i = n - 2; i >= 0; i--) {
//         // if (nums[i] < nums[i + 1]) {
//         //     ind = i;
//         //     break;
//         //  }
//         // }
//         // If break point does not exist:
//         // if (ind == -1) {
//         // reverse the whole array:
//         // reverse(nums.begin(), nums.end());
//         // return nums;
//         // }

//          // Step 2: Find the next greater element
//         //and swap it with arr[ind]:

//         // for (int i = n - 1; i > ind; i--) {
//         // if (nums[i] > nums[ind]) {
//         //     swap(nums[i], nums[ind]);
//         //     break;
//         //     }
//         // }

//          // Step 3: reverse the right half:
//         // reverse(nums.begin() + ind + 1, nums.end());
//         // return nums;
// }
    
//     }
// };