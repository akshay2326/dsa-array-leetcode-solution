// //search array
// #include<iostream>
// using namespace std;
// int main(){int i;
//     int arr[5]={1,4,5,6,8};
//     for (i=0;i<5;i++){
//         if(arr[i]==5){
//             cout<<i;
//         }
//     }
// }



//reverse array
// #include<iostream>
// using namespace std;
// int main(){int i,start,end;
//     int arr[6]={2,6,7,8,4,3};
//     start=0,end=5;
//     while(start<end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
//     for(int i=0;i<6;i++)
//     cout<<arr[i]<<" ";
// }



// second max
// #include<iostream>
//#include<climit>
// using namespace std;
// int main(){ int i,ans,second ;
// int arr[5]={2,3,46,7,9};
// ans=INT8_MIN;
// for(i=0;i<5;i++){
//     if(arr[i]>ans){
//         ans=arr[i];
//     }}
//     int second_max=INT8_MIN;
//     for(i=0;i<5;i++){
//     if(ans!=arr[i]){
//         second=max(second_max,arr[i]);
//      } cout<<second;
//     }}



// #include<iostream>
// #include<climits> // for INT_MIN
// using namespace std;

// int main() {
//     int i, maxVal, secondMax;
//     int arr[5] = {2, 3, 46, 7, 9};
    
//     maxVal = INT_MIN;
//     secondMax = INT_MIN;
    
//     // Find the maximum value
//     for(i = 0; i < 5; i++) {
//         if(arr[i] > maxVal) {
//             maxVal = arr[i];
//         }
//     }
    
//     // Find the second maximum value
//     for(i = 0; i < 5; i++) {
//         if(arr[i] != maxVal && arr[i] > secondMax) {
//             secondMax = arr[i];
//         }
//     }
    
//     // Output the second maximum value
//     cout << "The second largest element is: " << secondMax << endl;
    
//     return 0;
// }




//missing number
