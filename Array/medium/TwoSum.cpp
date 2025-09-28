// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {

        //brute force

        // int n = nums.size();
        // for(int i=0;i<n-1;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(nums[i]+nums[j]==target){
        //             return {i,j};
        //         }
        //     }
        // }
        // return {};
        //Time complexity: O(n^2)
        //Space complexity: O(1)

        //Better approach
        // unordered_map<int,int> mp; // value -> index
        
        // for(int i = 0; i < nums.size(); i++) {
        //     int rem = target - nums[i];
        //     if(mp.find(rem) != mp.end()) {
        //         return {mp[rem], i}; // found pair
        //     }
        //     mp[nums[i]] = i; // store index
        // }
        // return {};
        //Time complexity: O(n)
        //Space complexity: O(n)


        //Optimal approach
//         // sort the array and use 2 pointer approach
//         int n=nums.size();
//         vector<pair<int,int>>mp;
//         for(int i=0;i<n;i++){
//             mp.push_back({nums[i],i});
//         }
//         sort(mp.begin(),mp.end());
//         int l=0;
//         int r=n-1;
//         while(l<r){
//             int sum = mp[l].first+mp[r].first;
//             if(sum==target){
//                 return {mp[l].second , mp[r].second};
//                 }
            
//             else if(sum>target){
//                 r--;
//             }
//             else{
//                 l++;
//             }
//         }
//         return {};
//     }
// };

//Time complexity: O(nlogn) + O(n) ~ O(nlogn)
//Space complexity: O(n)