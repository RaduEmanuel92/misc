#include <iostream>
#include<stdio.h>
using namespace std;

int bin_s_rec(int arr[], int l, int r, int k){
    if(l < r){
        int mid = (l + r)/2;
        if(arr[mid] == k)
            return mid;
        if(arr[mid] > k)
            return bin_s_rec(arr, l, mid-1, k);
        if(arr[mid] < k)
            return bin_s_rec(arr, mid+1, r, k);
    }
    else
        return -1;
}

int main()
{
    int arr[]= {10,20,30,40,50,60};
    int arr_len = (sizeof(arr))/(sizeof(arr[0]));
    int check = 40;
    int result = bin_s_rec(arr,0,arr_len, check);
    if(result > 0)
        cout<<"Value found at index "<<result<<endl;
    else
        cout<<"Value not found in array";

}
