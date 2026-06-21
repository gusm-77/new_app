#include <iostream>
#include <algorithm>
using namespace std;

int arr[]={10,12,11,15,14,13,17,16};

int main(){
    int *ptr;
    ptr=find(arr,arr+8,15);
    cout<<"Find the value before sorting :"<<(ptr-arr)<<endl;
    sort(arr,arr+8);
    for(int j=0;j<8;j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl;
    int *ptr1=find(arr,arr+8,15);
    cout<<"Find the value after sorting : "<<(ptr1-arr)<<endl;
    return 0;
}
