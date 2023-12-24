// Platform: GeeksForGeek 
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
         // Your code here
            long long sum = arr[0];
        
        if(sum == s) return {1,1};
        
        int l=0,r=0;
        while(r<n-1){
            if(sum+arr[r+1]<=s){
                r++;
                sum+=arr[r];
            }
            else{
                if(l==r){
                    l++;
                    r++;
                    sum=arr[l];
                }
                else{
                    sum-=arr[l];
                    l++;
                   }
                }
                if(sum==s){
                    return{l+1,r+1};
                }
            }
            return{-1};
        }
};