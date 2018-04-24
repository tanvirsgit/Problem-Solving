#include <iostream>
#include <vector>
using namespace std;
int main()
{
	//ios_base::sync_with_stdio(false);
	int t,n,p,e,q,count;
	cin>>t;
	for(int i=1;i<=t;i++){
		n=0,p=0,q=0;
		cin>>n>>p>>q;
		count=0;
		vector<int> v;
		for(int i=0;i<n;i++){
			cin>>e;
			v.push_back(e);
		}
		for(int i=0;i<n;i++)
		{
			q=q-v[i];
			if(q<0||count==p) 
				break;
			else count++;
		}
		cout<<"Case "<<i<<": "<<count<<"\n";
	}
}