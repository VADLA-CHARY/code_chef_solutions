#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int n,p=0,i;
        long long int maxsum = 0;
        scanf("%d",&n);

        long int a[n];
        for(i = 0; i< n ; i++)
        {
           scanf("%ld",&a[i]);
           if(a[i]>=0)
           {
                maxsum += a[i];
                p++ ;
           }
        }

        int ans[n],j=0;
        for(i = 0; i< p ; i++)
        {
            if(a[i]<0)
            {
                ans[j]=i+1;
                j++;
            }
        }

        for(i = p; i< n ; i++)
        {
            if(a[i]>=0)
            {
                ans[j]=i+1;
                j++;
            }
        }

        printf("%lld\n%d ",maxsum,j);

        for(i=0;i<j;i++)
        printf("%d ",ans[i]);

        printf("\n");



    }
    return 0;
}

