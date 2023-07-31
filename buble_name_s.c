#include<stdio.h>
#include<string.h>
char a[20][20];
void buble_s(int n)
{
	int i,pass;
	char temp[20];
	for(pass=1;pass<n;pass++)
    {
        for(i=0;i<n-pass;i++)
        {
            if((strcmp(a[i],a[i+1])>0))
            {    
                strcpy(temp,a[i]);
                strcpy(a[i],a[i+1]);
                strcpy(a[i+1],temp);
            }
        }
    }
    for(i=0;i<n;i++)
	 printf("%s\t",a[i]);

}
void main()
{
    int n,i,pass;
    printf("\n entre array limit=");
    scanf("%d",&n);
    printf("enter %d names=",n);
    for(i=0; i<n; i++)
    scanf("%s",a[i]);
    printf("\n sorted data:");
    buble_s(n);
    }