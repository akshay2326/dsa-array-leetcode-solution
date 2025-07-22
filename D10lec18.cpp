#include<iostream>
using namespace std;
int main(){
    int i,j,index,n,arr[20];
    for(i=0;i<6;i++){
        cin>>arr[i];
    }
    for(i=0;i<n-1;i++){
        index=i;
    }
    for(j=i+1;j<n;j++){
     if(arr[j]<arr[index]){
        index=j;
     }swap(arr[i],arr[index]);
    }
    for(i=0;i<n;i++){cout<<arr[i];}
}







// #include<iostream>
// using namespace std;

// int main() {
//     int i, j, index, n, arr[20];

//     // Input size of array
//     cout << "Enter the number of elements: ";
//     cin >> n;

//     // Input elements into the array
//     cout << "Enter the elements: ";
//     for(i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     // Selection sort
//     for(i = 0; i < n - 1; i++) {
//         index = i;
//         for(j = i + 1; j < n; j++) {
//             if(arr[j] < arr[index]) {
//                 index = j;
//             }
//         }
//         swap(arr[i], arr[index]);
//     }

//     // Output sorted array
//     cout << "Sorted array: ";
//     for(i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }
