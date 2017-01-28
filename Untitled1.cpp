#include<iostream>
#include<math.h>
#define f(x) (x*x*x)+(x*x)+(x)+7
int main()
{
	int i=1;
	float x0,x1,x2;
	double f1,f2,f0,t;
	float x,a,b,  P,aerr;
	int maxitr=14,itr=1;
	printf("ENTER\n1)a:\n2)b:\n3)allowed error:\n");
	scanf("%f %f %f %d",&a,&b,&aerr);
	x=bisect(a,b);
	printf("\niteration %d\tX%d=%f\n",itr,itr,x);
	for(itr=2;itr<=maxitr;itr++)
	{
		if(f(a)*f(x)<0)
		b=x;
		else
		a=x;
		x1=bisect(a,b);
	    printf("iteration %d\tX%d=%f\n",itr,itr,x);
		if(fabs(x1-x)<aerr)
		{
			printf("\nROOT=%0.4f AFTER %d ITERATION\n\n",x,itr);
			break;
		}
		else
		x=x1;
	}
	if(itr>maxitr)
	{
	    printf("\nsolution does not converges\n\n");
	}
	return 0;
}
}
