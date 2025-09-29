// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         //Brute Force
//         //check for each day
//         // int maxpro=0;
//         // int n = prices.size();
//         // for(int i=0;i<n;i++){
//         //     for(int j=i+1;j<n;j++){
//         //         maxpro = max(maxpro,prices[j]-prices[i]);
//         //     }
//         // }
//         // return maxpro;
//         //Time Complexity --->O(n^2)
//         //space Complexity--->O(1)

//         //Optimal Approach
//         // Update the minPrice if current Element is smaller then minPrice
//         // Take the difference of the minPrice with the current element of the array and compare and maintain it in maxPro.
//         // int minPrice = INT_MAX;
//         // int maxProfit =0;
//         // int n=prices.size();
//         // for(int i=0;i<n;i++){
//         //     minPrice = min(minPrice,prices[i]);
//         //     maxProfit = max(maxProfit,prices[i]-minPrice);
//         // }
//         // return maxProfit;
//         //Time Complexity -->O(N)
//         //Space Complexity-->O(1)


//     }
// };