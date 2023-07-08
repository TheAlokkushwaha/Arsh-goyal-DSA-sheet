#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
        sort(a.begin(), a.end());
        long long mindiff = LLONG_MAX;
        for(int i=0; i+m-1<n; i++) {
            mindiff = min(a[i+m-1] - a[i], mindiff);
        }
        return mindiff;
    
    }   
};


int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}
