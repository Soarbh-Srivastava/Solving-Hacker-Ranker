// Category: Array-DS, Tag: reversed array
#include <iostream>
using namespace std;
int main(){
    int arr[1000],n;
    int arr_rev[1000]={0};
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        arr_rev[i]=arr[n-1-i];
    }
    for(int i=0;i<n;i++){
        cout<<arr_rev[i];
        cout<<" ";
    }   
}
