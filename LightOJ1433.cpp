#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
	int t;
	cin>>t;
	cout<<setprecision(8)<<fixed;
	int ox,oy,ax,ay,bx,by;
	double oa,ab;
	double th,ans;
	for(int i=1;i<=t;i++)
	{
		cin>>ox>>oy>>ax>>ay>>bx>>by;
		oa=sqrt(((ox-ax)*(ox-ax))+((oy-ay)*(oy-ay)));
		ab=sqrt(((ax-bx)*(ax-bx))+((ay-by)*(ay-by)));
		th=((oa*oa+oa*oa)-ab*ab)/(2*oa*oa);
		th=acos(th);
		ans=th*oa;
		cout<<"Case "<<i<<": "<<ans<<"\n";
	}
	return 0;
}