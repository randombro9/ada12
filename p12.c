#include <stdio.h>
#include <math.h>
int count=0,X[100];

void main()
{
    int n;
    printf("\t\t\tN-Queen's Problem\n");
    printf("\nEnter the no. of queens:");
    scanf("%d",&n);
    nqueen(1,n);
    if(count==0)
    {
        printf("\nThere is no solution for %d Queen's problem",n);
    }
    else
    {
        printf("Total no. of solutions %d",count);
    }
}

int place(int k,int i)
{
    int j;
    for(j=1;j<k;j++)
    if((X[j]==i)||abs(X[j]-i)==abs(j-k))
    return 0;
    return 1;
}
void nqueen(int k,int n)
{
    int i,j,p;
    for(i=1;i<=n;i++)
    if(place(k,i))
    {
        X[k]=i;
        if(k==n)
        {
            count++;
            for(j=1;j<=n;j++)
            {
                for(p=1;p<=n;p++)
                {
                    if(X[j]==p)
                    printf("q");
                    else
                    printf("0");
                }
                printf("\n");
            }
        }
        else{
            nqueen(k+1,n);
        }
    }
    printf("\n");
}
