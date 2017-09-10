//Merge Sort Algorithm
//Divide et impera
#include <iostream>
using namespace std;
void printA(int arr[], int n){
    for(int i = 0; i < n; i++)
        cout<<arr[i]<< " ";
    cout<<endl;
}
void Merge(int arr[], int l, int mid, int r){
    //create two temporary subarrays
    //to store the values of the arrays generated
    //by MergeSort
    //compare them and recreate a sorted arr[]
    int i, j, k;
    int n1 = mid - l +1 ;
    int n2 = r - mid;
    int L[n1], R[n2];
    //create temporary arrays
    for(i = 0; i < n1; i++)
        L[i] = arr[l+i];
    for(j=0; j < n2; j++)
        R[j] = arr[mid + 1+j];
     //reset counts
     i=j=0; //initial indexes of 1st and 2nd subarray
     k=l;//initial index of merged subarray
      cout<<"B---"<<endl;
     printA(L, n1);
     printA(R, n2);
     cout<<"---"<<endl;
     while(i < n1 && j < n2){
        if(L[i] <= R[j])
            arr[k] = L[i++];//put the L_elem and move up k and i
        else
            arr[k] = R[j++];
        k++;
     }
     //copy the remaining elements
     while(i < n1)
         arr[k++] = L[i++];

     while(j < n2)
        arr[k++] = R[j++];
     cout<<"A---"<<endl;
     printA(L, n1);
     printA(R, n2);
     cout<<"---"<<endl;
}

void MergeSort(int arr[], int l, int r){
    cout<<"[+] ";
    printA(arr, r-l+1);
    cout<<endl;
    if(l < r){
        int mid = (l + r)/2; //middle point to divide
        //sort first and 2nd halves
        MergeSort(arr, l, mid);
        MergeSort(arr, mid+1, r);

        Merge(arr, l, mid, r);
   }

}



int main()
{
    int arr[8] = {7,8,2,1,3,6,4,5};
    int len = sizeof(arr)/sizeof(arr[0]);
    cout<<"Current array is : ";
    printA(arr,len);
    cout<<"Size of the array is: "<<len<<endl;
    cout<<"Sorted array (Merge sort) is: ";
    MergeSort(arr, 0, len-1);
    printA(arr, len);

    return 0;
}
