#include <stdio.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
		int a,b;
		scanf("%d %d",&a,&b);
		int n1=0,n2=0;
		if(b%3==0)
			n1=2*(b/3);
		else if(b%3==2)
			n1=2*(b/3)+1;
		else if(b%3==1)
			n1=2*((b-1)/3);
		//printf("%d\n",n1 );
		if(a%3==0)
		{
			n2=2*(a/3);
			printf("Case %d: %d\n",i,(n1-n2)+1);
		}
		else if(a%3==2)
		{
			n2=2*(a/3)+1;
			printf("Case %d: %d\n",i,(n1-n2)+1);
		}
		else if(a%3==1)
			{
				if(a==1)
				{	//n2=2*((a+1)/3);
					n2=0;
					printf("Case %d: %d\n",i,(n1-n2));
				}
				else if(a>1)
				{
					n2=2*((a-1)/3);
					printf("Case %d: %d\n",i,(n1-n2));
				}
			}
			//printf("%d\n",n2 )
		/*if(a==1)
			printf("Case %d: %d\n",i,(n1-n2));
		else
*/			
	}

	return 0;
}