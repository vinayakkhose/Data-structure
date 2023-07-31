#include<stdio.h>
#include<math.h>
struct poli
{
    int coeff;
    int exp;
}p1[50],p2[50],p3[50];

void main()
{
    int i,po1,po2,k=0,l=0,m=0;
    printf("\n enter firs poly limit=");
    scanf("%d",&po1);
    //accept poly
    for(i=0;i<po1;i++)
    {
        printf("enter coefficient x^%d=",i);
        scanf("%d",&p1[i].coeff);
        p1[k++].exp=i;
    }
    printf("\n Enter second poli limit=");
    scanf("%d",&po2);
    for(i=0;i<po2;i++)
    {
        printf("enter coefficient x^%d=",i);
        scanf("%d",&p2[i].coeff);
        p2[l++].exp=i;
    }
    printf("\n expresion 1= %dx^0",p1[0].coeff);
    for(i=1;i<po1;i++)
    {
        printf(" + %dx^%d",p1[i].coeff,p1[i].exp);
    }
    printf("\n expresion 2= %dx^0",p2[0].coeff);
    for(i=1;i<po2;i++)
    {
        printf(" + %dx^%d",p2[i].coeff,p2[i].exp);
    }
    if(po1>po2)
    {
        for(i=0;i<=po2;i++)
        {
            p3[m].coeff=p1[i].coeff+p2[i].coeff;
            p3[m].exp=p1[i].exp;
            m++;
        }
        for(i=po2+1;i<po1;i++)
        {
          p3[m].coeff=p1[i].coeff+p2[i].coeff;
          p3[m].exp=p1[i].exp;
          m++;
        }
    }
        else
    {
        for(i=0;i<=po1;i++)
        {
            p3[m].coeff=p1[i].coeff+p2[i].coeff;
            p3[m].exp=p1[i].exp;
            m++;
        }
        for(i=po1+1;i<po2;i++)
        {
          p3[m].coeff=p1[i].coeff+p2[i].coeff;
          p3[m].exp=p2[i].exp;
          m++;
        }
    }
    printf("\n   addition =%dx^0",p3[0].coeff);
    for(i=1;i<m;i++)
    {
    	printf(" + %dx^%d",p3[i].coeff,i);
	}
}