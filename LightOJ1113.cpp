#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
	stack<string> back;
	stack<string> forward;
	int t;
	string command,currentPage;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		while(!forward.empty())
		{
			forward.pop();
		}
		while(!back.empty())
		{
			back.pop();
		}
		currentPage="http://www.lightoj.com/";
		cout<<"Case "<<i<<":\n";
		while(cin>>command)
		{
			if(command=="QUIT")
				break;
			if(command=="BACK")
			{
				if(back.empty())
					cout<<"Ignored"<<"\n";
				else
				{
					forward.push(currentPage);
					currentPage=back.top();
					back.pop();
					cout<<currentPage<<"\n";
				}
			}
			if(command=="FORWARD")
			{
				if(forward.empty())
					cout<<"Ignored"<<"\n";
				else
				{
					back.push(currentPage);
					currentPage=forward.top();
					forward.pop();
					cout<<currentPage<<"\n";
				}
			}
			if(command=="VISIT")
			{
				back.push(currentPage);
				cin>>currentPage;
				while(!forward.empty())
				{
					forward.pop();
				}
				cout<<currentPage<<"\n";
			}
		}
	}
}