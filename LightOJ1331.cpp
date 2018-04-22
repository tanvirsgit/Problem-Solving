#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int t;
	cin>>t;
	double r1,r2,r3;
	cout<<setprecision(10)<<fixed;
	for(int i=1;i<=t;i++)
	{
		cin>>r1>>r2>>r3;
		double a,b,c,s,ta,tb,tc,area=0,a1,a2,a3;
		a=r1+r2;
		b=r1+r3;
		c=r3+r2;
		s=(a+b+c)/2;
		area=sqrt(s*(s-a)*(s-b)*(s-c));
		ta=acos((a*a+b*b-c*c)/(2*b*a));
		tb=acos((a*a+c*c-b*b)/(2*a*c));		//radian ro degree 180/pi
		tc=acos((c*c+b*b-a*a)/(2*b*c));
		a1=ta*r1*r1/2;
		a2=tb*r2*r2/2;
		a3=tc*r3*r3/2;
		area=area-a1-a2-a3;
		cout<<"Case "<<i<<": "<<area<<"\n";
	}
	return 0;
}