#include <iostream>
using namespace std;
int Binary_Search(int arr[],int n,int target){
    int l=0;
    int r=n-1;
    int mid;
    while(l<=r){
        mid=r+((l-r)/2);
        if(arr[mid]==target){
            return mid;
        }
        if(arr[mid]>target){
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"enter length of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout <<"enter the number you want to find:";
    cin>>target;
    int r=Binary_Search(arr,n,target);
    if (r != -1) {
        cout << "Element found at index " << r <<endl;
    } else {
        cout << "Element not found" <<endl;
    }
    return 0;
}