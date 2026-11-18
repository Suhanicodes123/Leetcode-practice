#include<bits/stdc++.h>

int partition(vector<int>, int arr, int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i <j){
        while(arr[i] <= pivot && i <= high-1){
            i++;
        }
        while(arr[j]> pivot && j>= low+1){
            j--;
        }
        if(i<j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}