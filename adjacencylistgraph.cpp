#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,e;
    cout<<"enter no of vertices";

    cin>>n;
    cout<<"enter the no of edges";
    cin>>e;
    vector<vector<int>>adjlist(n);
    
    for (int i=1;i<=e;i++){
        int a,b;
        cout<<"enter the end points"<<i;
        cin >>a>>b;
        adjlist[a].push_back(b);
        adjlist[b].push_back(a);

    }
    for (int i=0;i<n;i++){
        cout<<i<<":";

        for (int j=0;j<adjlist[i].size();j++){
            cout<<adjlist[i][j]<<" \t";
        
        }
        cout<<"\n";
    }
}