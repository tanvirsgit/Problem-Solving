#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
	int t;
	cin>>t;
	cout<<setprecision(2)<<fixed;
	double pi=2*acos(0.0),a,s,r,result;
	for(int i=1;i<=t;i++)
	{
		cin>>r;
		a=pi*r*r;
		s=2*r*2*r;
		cout<<"Case "<<i<<": "<<s-a<<"\n";
	}
	return 0;
}