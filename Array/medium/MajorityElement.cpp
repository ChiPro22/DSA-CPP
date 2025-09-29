// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {

//         //Brute force
//         // int maxi =0;
//         // int maxfreq=0;
//         // int n = nums.size();
//         // for(int i=0;i<n;i++){
//         //     int count=0;
//         //     for(int j=0;j<n;j++){
//         //         if(nums[i]==nums[j]){
//         //             count++;
//         //         }
//         //     }
//         //     if(count>maxfreq){
//         //         maxfreq = count;
//         //         maxi = nums[i];
//         //     }
//         // }
//         // return maxi;
//         //Time Complexity --> O(n^2);
//         //space Complexity -->O(1)


//         //Better Approach
//         // unordered_map<int,int>mp;
//         // for(auto x:nums){
//         //     mp[x]++;
//         // }
//         // int maxi=0;
//         // int maxfreq=0;
//         // for(auto x:mp){
//         //     if(x.second>maxfreq){
//         //         maxi = x.first;
//         //         maxfreq = x.second;
//         //     }
//         // }
//         // return maxi;
//         //Time Complexity -->O(N)
//         //space Complexity -->O(N)
        
//         //Optimal Solution 
//         //Moor's Voting Algorithm
//         // int count =0;
//         // int num =nums[0];
//         // int n = nums.size();
//         // for(int i=0;i<n;i++){
//         //     if(count==0){
//         //         count++;
//         //         num = nums[i];
//         //     }
//         //     else if(nums[i]==num){
//         //         count++;
//         //         }
//         //     else{
//         //         count--;
//         //         }
//         //     }
//         // return num;
//         //Time complexity -->O(N);
//         //Space Complexity -->O(1);
//     }
// };