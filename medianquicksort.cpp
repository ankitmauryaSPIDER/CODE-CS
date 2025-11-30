#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int medianpartition(int arr[], int low, int high) {
    int mid = low + (high - low) / 2;
    vector<pair<int, int>> medians = { {arr[low], low}, {arr[mid], mid}, {arr[high], high} };
    sort(medians.begin(), medians.end());
    int medianIndex = medians[1].second;
    swap(arr[medianIndex], arr[high]);
    
    int pivot = arr[high];
    int i = (low - 1);
    
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}
void medianquicksort(int arr[], int low, int high) {
    if (low < high) {
        int pi = medianpartition(arr, low, high);
        medianquicksort(arr, low, pi - 1);
        medianquicksort(arr, pi + 1, high);
    }
}


int main(){
    int n;
    cin >> n;
    vector<int> arr(n,0);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    medianquicksort(arr.data(), 0, n - 1);
    cout << "Sorted array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
        
    }
    cout << endl;    
    return 0;
}