#include <stdio.h>

char a[10];
int t,n,j,k,i,best;
int main()
{
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d",&n);
        best=0;
        int b[n+1][n+1];
        for (j=0;j<=n;j++)
            b[j][0]=0;
        for (j=1;j<=n;j++)
            b[0][j]=0;
        for(j=1;j<=n;j++)
        {
            scanf("%s",a);
            for(k=1;k<=n;k++)
            {
                if(a[k-1]=='.')
                {
                    b[j][k]=b[j][k-1]+1;
                    if(b[j][k]>best)
                    {
                        for(i=j-1;i>=j-b[j][k];i--)
                        {
                            if(j-i>best)
                                best=j-i;
                            if(b[i][k]<=best)
                                break;
                        }
                    }
                }
                else
                    b[j][k]=0;
            }
        }
        printf("%d\n",best);
    }
    return 0;
}