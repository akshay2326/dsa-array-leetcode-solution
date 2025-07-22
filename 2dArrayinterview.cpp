
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int row,col;
    int ar[100][100];
    cout<<"enter row and columns";
    cin>>row ;
    cin>>col;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>ar[i][j];
        }}
         for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<ar[i][j]<<" ";
        }cout<<endl;
    }
    for(int j=0;j<col;j++){
        if(j%2==0){
        for(int i=0;i<row;i++){
            cout<<ar[i][j]<<" ";
        }cout<<endl;}
        else 
    {
        for(int i=row;i>=0;i--){
        cout<<ar[i][j]<<" ";
        }cout<<endl;
    }}
}