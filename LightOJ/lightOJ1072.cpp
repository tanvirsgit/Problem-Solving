#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main(){
	int t,n;
	double q=0,r=0,a=0,d=0,pi=2*acos(0.0);
	cout<<setprecision(10)<<fixed;
	cin>>t;
	for (int i=1;i<=t;i++)
	{
		cin>>q;
		cin>>n;
		d=360/(2*(double)n);
		//cout<<d<<endl;
		a=d*pi/180;
		//cout<<a<<"\n";
		r=(q*sin(a))/(1+sin(a));
		cout<<"Case "<<i<<": "<<r<<"\n";
	}
}