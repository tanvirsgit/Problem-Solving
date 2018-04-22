#include <iostream>
using namespace std;
int main(){
	int t,r1,c1,r2,c2,t1,t2;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		r1=0,r2=0,c1=0,c2=0;
		cin>>r1>>c1>>r2>>c2;
		if(r1>r2) t1=r1-r2;
		else t1=r2-r1;
		if(c1>c2) t2=c1-c2;
		else t2=c2-c1;
		if(t1==t2)
		{
			cout<<"Case "<<i<<": "<<1<<endl;
		}
		else if(((r1+c1)%2==0&&(r2+c2)%2!=0)||((r1+c1)%2!=0&&(r2+c2)%2==0))
			cout<<"Case "<<i<<": "<<"impossible"<<endl;
		else
			cout<<"Case "<<i<<": "<<2<<endl;
	}
	return 0;
}