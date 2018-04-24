#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int main()
{
	//vector<int> a;
	stack<int> r;
	int t,n,m,d,k,y,z,temp;
	char op;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		cin>>n>>m;
		int a[n];
		for(int i=0;i<n;i++)
		{
				cin>>temp;
				a[i]=temp;
		}
		for(int i=m;i>0;i--)
		{
				cin>>op;
				if(op=='P')
				{
					cin>>y>>z;
					temp=a[y];
					a[y]=a[z];
					a[z]=temp;
				}
				else if(op=='M')
				{
					cin>>d;
					for(int i=0;i<n;i++)
					{
						a[i]*=d;
					}
				}
				else if(op=='S')
				{
					cin>>d;
					for(int i=0;i<n;i++)
					{
						a[i]+=d;
					}
				}
				else if(op=='D')
				{
					cin>>k;
					for(int i=0;i<n;i++)
					{
						a[i]/=k;
					}
				}
				else if(op=='R')
				{
					for(int i=0;i<n;i++)
					{
						r.push(a[i]);
					}
					for(int i=0;i<n;i++)
					{
						a[i]=r.top();
						r.pop();
					}
				}
		}
		cout<<"Case "<<i<<":\n";
		for(int i=0;i<n;i++)
		{
			if(i==n-1)
				cout<<a[i]<<"\n";
			else
				cout<<a[i]<<" ";
		}
	}	
}