#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int insertionsort(int arr[],int n){
    for(int i=1;i<=n-1;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;

    }
    return 0;
}
int main(){
    int n=10;
    int arr[10];
    cout<<"Enter element ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    insertionsort(arr,n);
    cout<<"Sorted array ";
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}