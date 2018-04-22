#include <iostream>
using namespace std;
int main(){
	int t,mp,lp;
	cin>>t;
	if(t<=25)
	{
		for(int i=1;i<=t;i++)
		{
			cin>>mp>>lp;
			if(mp!=0&&mp<=100)
			{
				int at;
				if(mp>lp) at=(mp-lp)*4;
				else at=(lp-mp)*4;
				int et=(2*3)+5;
				int gt=mp*4;
				int xt=3+5;
				cout<<"Case "<<i<<": "<<at+et+gt+xt<<"\n";
			}
		}
	}
	return 0;
}