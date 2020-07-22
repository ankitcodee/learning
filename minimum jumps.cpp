#include <iostream>
using namespace std;

int main() {
	int t=0;
	cin >> t;
	while(t--)
	{
	    int n=0;
	    cin >> n;
	    int a[n], dp[n];
	    for(int i=0; i<n; i++)
	    {
	        cin >> a[i];
	        dp[i] = 1000000;
	    }
	    if(a[0]==0)
	    {
	        cout<<"-1"<<endl;
	        break;
	    }
	    dp[0]=0;
	    for(int i=0; i<n; i++)
	    {
	        for(int j=i+1; (j<=(i+a[i])) && (j<n); j++)
	        {
	            if((dp[i]+1) < dp[j] )
	                dp[j] = dp[i]++;
	        }
	    }
	    if(dp[n-1]==1000000)
	        cout<<"-1"<<endl;
	    else
	        cout<<dp[n-1]<<endl;
	   
	    
	}
	return 0;
}