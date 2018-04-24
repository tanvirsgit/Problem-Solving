#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	int t,n,l,w,h;
	cin>>t;
	for(int i=1;i<=t;i++){
		l=0,w=0,h=0;
		vector<string> names;
		vector<int> dim;
		string name,theif,victim;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>name;
			cin>>l>>w>>h;
			names.push_back(name);
			dim.push_back(l*w*h);
		}
		int max= *max_element(dim.begin(),dim.end());
		int min= *min_element(dim.begin(),dim.end());
		for(int i=0;i<n;i++)
		{
			if(min==max)
				break;
			else{
				if(dim[i]==max)
					theif=names[i];
				if(dim[i]==min)
					victim=names[i];
			}
		}
		if(!theif.empty())
			cout<<"Case "<<i<<": "<<theif<<" took chocolate from "<<victim<<"\n";
		else
			cout<<"Case "<<i<<": "<<"no theif\n";
	}
}