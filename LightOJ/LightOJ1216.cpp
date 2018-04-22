#include <stdio.h>
#include <math.h>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	double pi=acos(-1);
	for(int i=1;i<=t;i++)
	{
		int r1,r2,h,p;
		scanf("%d %d %d %d",&r1,&r2,&h,&p);
		double d,a,k,r,temp,v;
		d=r1-r2;
		a=d/h;
		k=a*(h-p);
		r=r1-k;
		temp=r2;
		v=pi*((r*r)+(r*temp)+(temp*temp))*p;
		printf("Case %d : %lf\n",i,v/3);
	}
	return 0;
}