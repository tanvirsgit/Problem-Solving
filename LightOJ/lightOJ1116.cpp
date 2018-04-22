#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int t;
	long long w,n,m;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		int counter=0;
		cin>>w;
		for(long long j=2;j<w/2;j*=2)
		{
			if(w%j==0)
			{
				if((w/j)%2!=0)
				{
					n=w/j;
					m=j;
					cout<<"Case "<<i<<": "<<n<<" "<<m<<endl;
					counter++;
					break;
				}
			}
		}
		if(counter==0)
			cout<<"Case "<<i<<": "<<"Impossible"<<endl;

	}
	return 0;
}