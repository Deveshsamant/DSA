#include <iostream>
using namespace std;
void Selection_Sort(int arr[],int x){
    int minindex=0;
    for(int i=0;i<x-1;i++){
        minindex=i;
        for(int j=i+1;j<x;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
        swap(arr[minindex],arr[i]);
    }

    for(int k=0;k<x;k++){
        cout<<arr[k]<<""; 
    }
}
 
//hi
int main(){
    int x;
    cout<<"Enter the Length of Array:";
    cin>>x;
    int arr[x];
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    Selection_Sort(arr,x);
    return 0;
}
