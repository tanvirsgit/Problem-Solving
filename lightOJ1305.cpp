#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int ax,ay,bx,by,cx,cy;
	for(int i=1;i<=t;i++)
	{
		cin>>ax>>ay>>bx>>by>>cx>>cy;
		int r=0,dx=0,dy=0;
		dx=ax+(cx-bx);
		dy=ay+(cy-by);
		r=0.5*abs(((ax*by)+(bx*cy)+(cx*dy)+(dx*ay))-((ay*bx)+(by*cx)+(cy*dx)+(dy*ax)));
		cout<<"Case "<<i<<": "<<dx<<" "<<dy<<" "<<r<<endl;
	}
	return 0;
}