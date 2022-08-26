//khushi aggarwal
//2010990383
//Set 04
//Question 1
#include <iostream>
#include<unordered_set>
using namespace std;
int findMinIndex(int arr[], int n)
{
    int minIndex = n;
    unordered_set<int> set;
    for (int i = n - 1; i >= 0; i--)
    {
        if (set.find(arr[i]) != set.end()) {
            minIndex = i;
        }
        else {
            set.insert(arr[i]);
        }
    }
    
    
    return minIndex;
}
 
int main()
{   
    int arr[]={1,2,3,4,5,6};
     int n=sizeof(arr)/sizeof(arr[0]);
    int minIndex = findMinIndex(arr, n);
 
    if (minIndex != n) {
        cout << "The minimum index of the repeating element is " << minIndex;
    }
    else {
        cout << "Invalid Input";
    }
 
    return 0;
}
