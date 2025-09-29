// class Solution {
// public:
//     vector<int> rearrangeArray(vector<int>& nums) {
//         //Brute Force 
//         // vector<int>pos;
//         // vector<int>neg;
//         // vector<int>ans;
//         // int n = nums.size();
//         // for(int i=0;i<n;i++){
//         //     if(nums[i]>=0){
//         //         pos.push_back(nums[i]);
//         //     }
//         //     else{
//         //         neg.push_back(nums[i]);
//         //     }
//         // }
//         // int p = pos.size();
//         // int q = neg.size();
//         // int i=0;
//         // while(i<p && i<q){
//         //     ans.push_back(pos[i]);
//         //     ans.push_back(neg[i]);
//         //     i++;
//         // }
//         // return ans;
//         //Time Complexity -->O(N);
//         //Space Complexity -->O(2N);


//         //better Approach
//         // int ni = nums.size();
//         // vector<int>ans(ni);
//         // int p=0;
//         // int n=1;
//         // for(int i=0;i<ni;i++){
//         //     if(nums[i]>=0){
//         //         ans[p]=nums[i];
//         //         p+=2;
//         //     }
//         //     else{
//         //         ans[n]=nums[i];
//         //         n+=2;
//         //     }
//         // }
//         // return ans;
//         //Time Complexity -->O(N)
//         //Space Complexity-->O(N);
//     }
// };