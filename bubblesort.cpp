#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void bubblesort(int arr[],int n){
    for(int i=0;i<=n-2;i++){
        for(int j=0;j<=n-2-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main(){
    int n=10;
    int arr[10];
    cout<<"Enter elements ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    bubblesort(arr,n);
    cout<<"Sorted array ";
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}