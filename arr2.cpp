#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

int arr1[]={10,16,13,14,8,9,13};
int arr2[]={21,23,25,96,27};

int dest[12];

int main(){
    merge(arr1,arr1+7,arr2,arr2+5,dest);
    for( int j=0;j<12;j++){
        cout<<dest[j]<<" ";
    }
    cout<<endl;
    sort(dest,dest+12,greater<int>());
    for(int j=0;j<12;j++){
        cout<<dest[j]<<" ";
    }
    cout<<endl;
    return 0;


}