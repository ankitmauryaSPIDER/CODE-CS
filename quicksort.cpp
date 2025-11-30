#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int partition(int arr[],int low,int high){
    int pivot=arr[low];
    int i=low;
    int j=high+1;
    do{
        do{
            i++;
        }while(arr[i]<=pivot);
        do{
            j--;
        }while(arr[j]>pivot);
        if(i<j){
            swap(arr[i],arr[j]);

        }

    }while(i<j);
    swap(arr[low],arr[j]);
    return j;
    
}
void quicksort(int arr[],int low,int high){
    if(low<high){
        int j=partition(arr,low,high);
        quicksort(arr,low,j);
        quicksort(arr,j+1,high);
    }

}
int main(){
    int arr[13]={12,-2,-5,6,-7,2,9,-9,0,4,8,-1,INT_MAX};
    int n=12;
    
    quicksort(arr,0,n-1);
    cout<<"Sorted array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}