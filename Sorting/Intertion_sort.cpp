#include <iostream>
using namespace std;
void Intertion_Sort(int arr[],int x){
    for(int i=0;i<x;i++){
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;

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
    Intertion_Sort(arr,x);
    return 0;
}
