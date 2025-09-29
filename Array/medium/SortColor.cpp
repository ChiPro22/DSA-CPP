// class Solution {
// public:
//     void sortColors(vector<int>& arr) {

//         // //brute force
//         // sort(arr.begin(),arr.end());
//         //Time complexity -> O(nlog N)
//         //space complexity -->O(1);


//         //better Approach
//         // int zero =0;
//         // int one =0;
//         // int two =0;
//         // for(int i=0;i<arr.size();i++){
//         //     if(arr[i]==0) zero++;
//         //     else if(arr[i]==1) one++;
//         //     else two++;
//         // }
//         // int i=0;
//         // while(zero--){
//         //     arr[i]=0;
//         //     i++;
//         // }
//         // while(one--){
//         //     arr[i]=1;
//         //     i++;
//         // }
//         // while(two--){
//         //     arr[i]=2;
//         //     i++;
//         // }

//         //Time Complexity --> O(n);
//         //space complexity --->O(1);

//         //Optimal-solution 
//         //Deuth National Flag Algorithm

//         // int low =0;
//         // int mid =0;
//         // int n = arr.size();
//         // int high =n-1;
//         // while(mid<=high){
//         //     if(arr[mid]==0){
//         //         swap(arr[low],arr[mid]);
//         //         low++;
//         //         mid++;
//         //     }
//         //     else if(arr[mid]==1){
//         //         mid++;
//         //     }
//         //     else{ // arr[mid]==2
//         //         swap(arr[mid],arr[high]);
//         //         high--;
//         //     }
//         // }
//         //Time Complexity --> O(n);
//         //Space complexity -->O(1);
//     }
// };