#include <iostream>

using namespace std;
//function to swap to elements of the array
void swapp( int *a, int *b){
    int temp = *a;
    *a= *b;
    *b = temp;
}
//selection sort module
void Sel_Sort(int arr[], int n){
    int min_val,i,j;
    for(i = 0; i < n-1; i++){//for one iteration of arr..
        min_val = i; // assign the current element as a start
        for(j = i+1; j < n; j++) //...then traverse the array
          if(arr[j] < arr[min_val])//..to find the minimum
            min_val = j;
        swapp(&arr[i],&arr[min_val]);//..then swap it with the current starting element on position i
    }
}
void print(int arr[], int n){
    for(size_t i=0; i<n;i++)
     cout<<arr[i]<<" ";
}


int main()
{
    int arr[]= {70,50,10,20,40,35,69,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Hello world!" << endl;
    cout<<"Vector size is "<<n<<endl;
    Sel_Sort(arr,n);
    print(arr, n);
    return 0;
}
