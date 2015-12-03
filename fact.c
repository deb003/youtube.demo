#include <stdio.h>

int main()
{
    int i,n,s,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    	{
    		 s=1;
    		 scanf("%d",&n);
    		 for(i=n;i>=1;i--)
    		 {
    		 	s=s*i;
    		 }
    		 printf("%d",s);
    	}
    return 0;
}
/* This is for Github */
/* Again just for gitHub */