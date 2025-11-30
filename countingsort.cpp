#include<iostream>
#include<vector>
using namespace std;
vector<int> countingsort(int arr[],int n,int k){
    vector<int>c(k,0);
    vector<int>b(n,0);
    for(int i=1;i<=n;i++){
        c[arr[i]]=c[arr[i]]+1;

    }
    for(int i=2;i<=k;i++){
        c[i]=c[i]+c[i-1];

    }
    for(int i=n;i>=1;i--){
        b[c[arr[i]]]=arr[i];
        c[arr[i]]=c[arr[i]]-1;
    }
    return b;

}
int main(){
    int n=12;
    int k;
    
    int arr[12];
    cout<<"Enter the elements: ";
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the range of elements: ";
    cin>>k;
    vector<int> sortedarray = countingsort( arr, n,  k);

    cout<<"Sorted array is: ";
    for(int i=1;i<=n;i++){
        cout<<sortedarray[i]<<" ";
    }
    cout<<endl;
    return 0;
}