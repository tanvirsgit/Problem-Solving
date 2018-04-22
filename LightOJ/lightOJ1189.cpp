#include <iostream>
#include <vector>
using namespace std;
long long factorial(int n)
{
	if(n==0||n==1)
		return 1;
	else{
		long long x=1;
		for(int i=2;i<=n;i++)
		{
			x=x*i;
		}
		return x;
	}
}

int main(){
	long long f[21];
	for(int i=0;i<21;i++)
		f[i]=factorial(i);
	int t;
	cin>>t;
	long long n=0;
	for(int j=1;j<=t;j++){
		vector<int> v;
		cin>>n;
		int i=20;
		while(i>=0)
		{
			if(f[i]<=n)
			{
				//m=m+f[i];
				n=n-f[i];
				v.push_back(i);
			}
			i--;
			if(n==0)
			{
				cout<<"Case "<<j<<": ";
				for(int k=v.size()-1;k>=0;k--)
				{
					if(k==0)
						cout<<v[k]<<"!";
					else
						cout<<v[k]<<"!+";
				}
				cout<<endl;
				break;
			}
		}
		if(n!=0)
			cout<<"Case "<<j<<": "<<"impossible"<<endl;
	}
	
}