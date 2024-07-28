#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;
int highscore(vector<int>& dup){
    int l=0;
    int r=dup.size()-1;
    int c=1;
    if(dup.size()%2==0){
        while(l<r)
        {
            c*=dup[l]+dup[r];
            r--;
            l++;
            
        }
    }
    else{
        int mid=r+((l-r)/2);
        while(l<r)
        {
            c*=dup[l]+dup[r];
            r--;
            l++;
            
        }
        c=c*dup[mid];
    }
    
    return c;

}
int highscorearr(vector<int>& dup){
    int l=0;
    int r=dup.size()-1;
    int c=1;
    for(int i=0;i<dup.size();i+=2){
        c*=dup[i]+dup[i+1];
    }
    
    return c;

}


int findindex(vector<int> dup,int index){
    int l=0;
    int r=dup.size()-1;
    int mid=(l+r)/2;
    return r-index;
}
int minswap(vector<int>& arr,vector<int>& dup)
{
    int mincount=0;
    vector<int> used(arr);
    int duph=highscore(dup);
    int arrh=highscorearr(used);
    if(duph==arrh){
        return mincount;
    }
    for(int i=0;i<arr.size();i=i+2)
    {
        //finding element in dup array
        auto it = find(dup.begin(), dup.end(), used[i]);
        int index = it-dup.begin();
        int indo=index;
        int cd=findindex(dup,indo);
        auto arrit = find(used.begin(), used.end(), dup[cd]);
        int indexarr = arrit-used.begin();
        if(used[indexarr]==used[i+1]){
            continue;
        }
        else{
            mincount++;
            swap(used[indexarr],used[i+1]);
        }
        arrh=highscorearr(used);
        if(duph==arrh){
            return mincount;
        }
        
    }
    return mincount;
}



int main() {
    int N;
    cin >> N;

    vector<int> arr;
    for (int i = 0; i < N; i++) {
        int x;
        cin >>x ;
        arr.push_back(x);
    }
    vector<int> dup(arr);
    sort(dup.begin(),dup.end());
    
    
    int r=minswap(arr,dup);
    cout<<r;
    return 0;
}
