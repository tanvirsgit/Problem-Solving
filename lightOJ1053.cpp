#include <iostream>
using namespace std;
int main(){
	int t,x[3],max;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		cin>>x[0]>>x[1]>>x[2];
		if(x[0]<x[1])
		{
			max=x[0];
			x[0]=x[1];
			x[1]=max;
		}
		if(x[0]<x[2])
		{
			max=x[0];
			x[0]=x[2];
			x[2]=max;
		}
		if(x[0]*x[0]==(x[1]*x[1])+(x[2]*x[2]))
			cout<<"Case "<<i<<": "<<"yes\n";
		else
			cout<<"Case "<<i<<": "<<"no\n";
	}
	return 0;
}

