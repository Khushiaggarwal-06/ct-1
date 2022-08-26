//khushi aggarwal
//2010990383
//Set 04
//Question 1
#include<iostream>
#include<unordered_set>
using namespace std;
void consecutive(int arr[],int n){
    if(n==1){
        cout<<"The array contain consecutive number"<<endl;
    }
    int min=0,max=0;
    for(int i=0;i<n;i++){
    if(min>arr[i]){
        min=arr[i];
    }
    if(max<arr[i]){
        max=arr[i];
    }
    }
    if(max - min = n - 1){
        cout<<"The array contains consecutive integer from "<<min<<" "<<max<<endl;
    }
    unordered_set<int> visited;
    for (int i = 0; i < n; i++){
        if (visited.find(arr[i]) != visited.end()) {
            cout<<"The array does not contains consecutive integer as element "<<arr[i]<<" is repeated"<<endl;
        }
        visited.insert(arr[i]);
    }
     cout<<"The array contains consecutive integer from "<<endl;
}
int main(){
    int arr[]={4,2,4,3,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    consecutive(arr,n);
}