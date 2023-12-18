//category: 2D-Array
//tag: pattern Question

#include <iostream>
#include <algorithm> // for std::max
#include <climits>

using namespace std;

int main() {
    int arr[6][6];
    
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            cin>>arr[i][j];
        }  
    }
    int max_sum = INT_MIN;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            int curr_sum = arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+2]+arr[i+2][j+3];
            max_sum = max(max_sum,curr_sum);
        }
    }
    cout<<max_sum;
    return 0;
}
