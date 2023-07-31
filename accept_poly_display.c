#include<stdio.h>
#include<math.h>
struct poli
{
    int coeff;
    int exp;
}p1[50];

void main()
{
    int i,po1,po2;
    printf("\n enter poly limit=");
    scanf("%d",&po1);
    //accept poly
    for(i=0;i<po1;i++)
    {
        printf("enter coefficient x^%d=",i);
        scanf("%d",&p1[i].coeff);
        p1[i].exp=i;
    }
    printf("\n %dx^%d",p1[po1-1].coeff,p1[po1-1].exp);
    for(i=po1-2;i>=0;i--)
    {
        printf(" +%dx^%d",p1[i].coeff,p1[i].exp);
    }
    printf("\n");
    /*for(i=0;i<po1;i++)
     printf(" +%dx^%d",p1[i].coeff,p1[i].exp);*/
}