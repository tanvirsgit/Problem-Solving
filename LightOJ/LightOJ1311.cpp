#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int t;
	cin>>t;
	double v1,v2,v3,a1,a2,l,r,d,b,t1,t2,s;
	for(int i=1;i<=t;i++)
	{
		cin>>v1>>v2>>v3>>a1>>a2;
		t1=v1/a1;								//Fomula used:::v=v0+at, s=(v+v0)*t/2
		t2=v2/a2;
		l=v1*t1/2;
		r=v2*t2/2;
		d=l+r;
		if(t1>t2) b=t1*v3;
		else b=t2*v3;
		cout<<setprecision(10)<<fixed;
		cout<<"Case "<<i<<": "<<d<<" "<<b<<endl;
	}
	return 0;
}