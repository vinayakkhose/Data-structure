#include<stdio.h>
#include<conio.h>
void bubble_sort(int a[],int n)
{
    int i,pass;
    char temp[20];
    for(pass=1;pass<n;pass++)
    {
        for(i=0;i<n-pass;i++)
        {
            if(a[i]>a[i+1])
            {    
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
}
void display(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	 printf("%d\t",a[i]);
}
void main()
{
    int a[100],n,i;
    printf("\n entre array limit=");
    scanf("%d",&n);
    printf("enter n numbers=");
    for(i=0; i<n; i++)
    scanf("%d",&a[i]);
    bubble_sort(a,n);
    printf("\n sorted data:");
    display(a,n);
    getch();
}