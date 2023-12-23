// Platform: GeeksForGeek 
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        int l = 0;
        int r = 0;
        std::vector<int> ans;
        
        bool isFound = false;
        long long sum = arr[0];
        
        while(r<n){
            if(sum == s){
                isFound =true;
                break;
            }
            else if(sum<s){
                r++;
                if(r<n){
                sum +=arr[r];
                }
                
            }
            else{
                sum -= arr[l];
                l++;
            }
            
        }
        if(isFound){
            ans.push_back(l+1);
            ans.push_back(r+1);
            return ans;
        }
        else{
            ans.push_back(-1);
            return ans;
        }
    }
};