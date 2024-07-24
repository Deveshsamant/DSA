#include <iostream>
using namespace std;
void Bubble_Sort(int arr[],int x){
    for(int i=0;i<x;i++){
        for(int j=0;j<x-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int k=0;k<x;k++){
        cout<<arr[k]<<" ";
    }
}

int main(){
    int x;
    cout<<"Enter the Length of Array:";
    cin>>x;
    int arr[x];
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    Bubble_Sort(arr,x);
    return 0;
}
