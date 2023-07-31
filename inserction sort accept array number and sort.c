#include<stdio.h>
#include<string.h>
void main()
{
	char a[20][20],ch;
	int i,pass,n;
	printf("Enter limit=");
	scanf("%d",&n);
	printf("Enter %d numbers=\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%s",&a[i]);
	}
	for(pass=1;pass<n;pass++)
	{
		strcpy(ch,a[pass]);
		for(i=pass-1;i>=0&&strcmp(a[i],ch)>0;i--)
		{
			strcpy(a[i+i],a[i]);
		}
		strcpy(a[i+1],ch);
	}
	printf("\n sorted array=\n");
		for(i=0;i<n;i++)
		{
			printf("%s\t",a[i]);
		}
}
