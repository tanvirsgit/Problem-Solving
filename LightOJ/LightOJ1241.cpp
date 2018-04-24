#include <bits/stdc++.h>
using namespace std;
int main(){
	int t,n,d;
	cin>>t;
	for(int i=1;i<=t;i++){
		cin>>n;
		vector<int> v;
		int count=0;
		for(int i=0;i<n;i++){
			cin>>d;
			v.push_back(d);
		}
		for(int i=0;i<n;i++){
			if(v[i]==2)
				continue;
			if(i==0&&v[i]>2){
				if(v[i]-2>=5){
					int temp=v[i]-2;
					if(temp%5)
						count=count+(temp/5)+1;
					else
						count=count+(temp/5);
				}
				else if(v[i]-2<5)
					count++;

			}
			else if(i>=1&&v[i]>2){
				if(v[i]>v[i-1])
				{
					if((v[i]-v[i-1])<5)
						count++;
					if((v[i]-v[i-1])>=5)
					{
						int temp=v[i]-v[i-1];
						if(temp%5)
							count=count+(temp/5)+1;
						else
							count=count+(temp/5);
					}
				}
				else
					continue;
			}
		}
		cout<<"Case "<<i<<": "<<count<<"\n";
	}
}