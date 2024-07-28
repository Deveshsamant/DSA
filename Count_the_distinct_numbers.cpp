#include <iostream>
#include <vector>
#include <algorithm>
#include<set>
#include <unordered_map>

using namespace std;
int gdn(vector<int> &A,pair<int,int> Q,int N){
    set<int> S;
    vector<int> B(N);
    A[Q.first-1]=A[Q.first-1]-Q.second;
    B[0]=A[0];
    S.insert(B[0]);
    for(int i=1;i<N;i++){
        B[i]=min(A[i],B[i-1]);
        S.insert(B[i]);
    }
    return S.size();

}


vector<int> getres(vector<int> &A,vector<pair<int,int>> Q,int N,int M){
    vector<int> res;
    for(int i=0;i<M;i++){
        int x=gdn(A,Q[i],N);
        res.push_back(x);
    }


    return res;
}
int main(){
    int N;
    int M;
    cin>>N;
    cin>>M;

    vector<int> A;
    for(int i=0;i<N;i++){
        int x;
        cin>>x;
        A.push_back(x);
    }
    vector<pair<int,int>> Q;
    for(int i=0;i<M;i++){
        int a;
        int b;
        cin>>a;
        cin>>b;
        Q.push_back({a,b});
    }
    vector<int> res=getres(A,Q,N,M);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
    return 0;
}