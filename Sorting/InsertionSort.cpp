#include<iostream>
using namespace std;

int main(){
    int n;
    void insertion_sort(int arr[],int);
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    insertion_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

void insertion_sort(int arr[],int n){
    for(int i = 1; i<n ; i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }
}