#include <iostream>
using namespace std;
int Linear_search(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return i;
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
    int r=Linear_search(arr,n,target);
    if (r != -1) {
        cout << "Element found at index " << r <<endl;
    } else {
        cout << "Element not found" <<endl;
    }
    return 0;
}
