//khushi aggarwal
//2010990383
//Set 04
//Question 1
#include<iostream>
#include<unordered_set>
using namespace std;
void consecutive(int arr[],int n){
    if(n<=1){
        cout<<"The array contain consecutive number"<<endl;
    }
    int min=arr[0];
    int max=arr[0];
    for(int i=0;i<n;i++){
    if(arr[i]<min){
        min=arr[i];
    }
    if(arr[i]>max){
        max=arr[i];
    }
    }
    if(max - min != n -1){
       unordered_set<int> visited;
    for (int i = 0; i < n; i++){
        if (visited.find(arr[i]) != visited.end()) {
            cout<<"The array does not contains consecutive integers as element "<<arr[i]<<" is repeated"<<endl;
        }
        visited.insert(arr[i]);
    }
    }
    else{
         cout<<"The array contain consecutive integers from "<<min<<" to "<<max<<endl;
    }
    
    
}
int main(){
    int arr[]={-1,5,4,2,0,3,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    consecutive(arr,n);
}