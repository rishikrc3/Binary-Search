
#include<bits/stdc++.h>
using namespace std;

int solve(int n,int k)
{
    int ans =0;
    int low =1, high = n;
    while(low<=high)
    {
        int mid = (low+high)/2;
        int t2= (mid*(mid+1))/2;
        int time = 5*t2+k;
        if(time==240)
        {
            return mid;
        }
        if(time>240)
        {
            high = mid-1;
        }
        else{
            ans = mid;
            low=mid+1;
            
        }
        
    }
    
    return ans; 
    
}

int main()
{
    //60*4=240
    int n,k;
    cin>>n>>k;
    
    int ans =solve(n,k);
    cout<<ans;
}
