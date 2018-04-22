#include <iostream>
using namespace std;
int main(){
	int t,n,b;
	cin>>t;
	for (int i = 1; i <= t; i++)
	{
		cin>>n;
		cin>>b;
		long long int f=1;
		int count=0;
		for (long long int i = 1; i<=n; i++)
		{
			f=f*i;
		}
		while(f>0) {
		    f=f/b;
		    count++;
		}
		cout<<"Case "<<i<<": "<<count<<endl;
		count=0;
	}
}