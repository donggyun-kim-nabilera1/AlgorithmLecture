#include<stdio.h>
#define Num 10
#define Max 36
#define Min -20
#define Bias 1-(Min)

int main()
{
    static int a[]={-3,2,3,-1,-2,-6,2,-1,1,5};
    int i, rank[Max+Bias+1];

    for(i=Min+Bias; i<=Max+Bias;i++)
    {
        rank[i]=0;
    }

    for(i=0;i<Num;i++)
    {
        rank[a[i]+Bias]++;
    }

    rank[0]=1;

    for(i=Min+Bias; i<=Max+Bias;i++)
        rank[i]=rank[i]+rank[i-1];
    
    printf("Order---:");
    putchar('\n');
    for(i=0;i<Num;i++)
    {
        printf("%6d %6d\n", a[i], rank[a[i]+Bias-1]);
    }
    system("pause");
    return 0;
}