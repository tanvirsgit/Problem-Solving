#include <iostream>
using namespace std;
int main(){
	int t,x1,x2,y1,y2,m;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		cin>>x1>>y1>>x2>>y2;
		cin>>m;
		cout<<"Case "<<i<<":"<<endl;
		while(m>0)
		{
			int x,y;
			cin>>x>>y;
			if((x>=x1&&x<=x2)&&(y>=y1&&y<=y2))
				cout<<"Yes"<<endl;
			else
				cout<<"No"<<endl;
			m--;
		}
	}
	return 0;
}