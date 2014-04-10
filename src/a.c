#include <stdio.h>
main()
{
	int i,j,n;
	char c1,c2;
	scanf("%d%c%c",&n,&c1,&c2);
	if((n>=1)&&(n<=(2^15)))
   		if((c1=='u')||(c1=='U'))
		{
			if((c2=='o')||(c2=='O'))
			{
				for(i=1;i<=(n+1)/2;i++)
			{
				for(j=1;j<=2*i-1;j++)
				printf("*");
				printf("\n");
			}
			}
			else if((c2=='e')||(c2=='E'))
			{
				for(i=1;i<=n/2;i++)
			{
				for (j=1;j<=i;j++)
				printf("**");
				printf("\n");
			}
			}
			else if((c2>='A')&&(c2<='z'))
			{
			printf("a.txt中出现非法字符：%c\n",c2);
			}
			else
			{
				for(i=1;i<=n;i++)
			{
				for (j=1;j<=i;j++)
				printf("*");
				printf("\n");
			}
			}
		}
		else if((c1=='d')||(c1=='D'))
		{
			if((c2=='o')||(c2=='O'))
			{
			for(i=1;i<=(n+1)/2;i++)
			{
				for(j=0;j<=n-2*i+1;j++)
				printf("*");
         		printf("\n");
			}
			}
			else if((c2=='e')||(c2=='E'))
			{
			for(i=1;i<=n/2;i++)
			{
	    		for(j=0;j<=n-2*i;j++)
				printf("*");
         		printf("\n");
			}
			}
			else if((c2>='A')&&(c2<='z'))
			{
			printf("a.txt中出现非法字符：%c\n",c2);
			}
			else
			{
				for(i=1;i<=n;i++)
			{
				for(j=1;j<=n-i+1;j++)
				printf("*");
				printf("\n");
			}
			}
		}
		else
		printf("a.txt中没有指定金字塔的方向\n");
    else
        printf("a.txt中缺少金字塔层数\n");
}
