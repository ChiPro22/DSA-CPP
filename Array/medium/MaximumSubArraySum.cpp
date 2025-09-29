// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         //Brute force Approach
//         // int maxi =INT_MIN;
//         // int n = nums.size();
//         // for(int i=0;i<n;i++){
//         //     int count=0;
//         //     for(int j=i;j<n;j++){
//         //         count+=nums[j];
//         //         maxi = max(maxi,count);
//         //     }
//         // }
//         // return maxi;
//         //Time Complexity --> O(N^2);
//         //Space Complexity --> O(1);

//         //Optimal Solution
//         //Kadane's Algorithm

//         // int sum =0;
//         // int maxi = INT_MIN;
//         // int n = nums.size();
//         // for(int i=0;i<n;i++){
//         //     sum+=nums[i];
//         //     if(sum>maxi){
//         //         maxi = sum;
//         //     }
//         //     if(sum<0){
//         //         sum=0;
//         //     }
//         // }
//         // return maxi;

//         //Time complexity -->O(N);
//         //Space complexity -->O(1);
//     }
// };