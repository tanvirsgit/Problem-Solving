#include <iostream>
using namespace std;
int main(){
	int t;
	long long n,m,sum;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		sum=0;
		cin>>n>>m;
		sum=(n/2)*m;
		cout<<"Case "<<i<<": "<<sum<<"\n";
	}
	return 0;
}