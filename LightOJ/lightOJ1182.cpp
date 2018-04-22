#include <iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		long long n=0;
		int one=0;
		cin>>n;
		while(n>0)
		{
			if(n%2==0)
			{
				n=n/2;
			}
			else
			{
				n=n/2;
				one++;
			}
		}
		if(one%2!=0)
			cout<<"Case "<<i<<": "<<"odd"<<endl;
		else
			cout<<"Case "<<i<<": "<<"even"<<endl;
	}
	return 0;
}