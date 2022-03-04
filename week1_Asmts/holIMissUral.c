#include <stdio.h>

int main(void) {
int t;
scanf("%d",&t);
while(t--){
   unsigned long long int n,k,i,a,b,p[100000],d[100000];
   scanf("%llu%llu",&n,&k);
   for(i=0;i<n;i++){
       scanf("%llu",&d[i]);
   }
   for(i=0;i<n;i++){
       scanf("%dllu",&p[i]);
   }
   a=(d[0]*k)+p[0];
   for(i=0;i<n;i++){
       b=(d[i]*k)+p[i];
       if(b<=a)
       a=b;
   }
   printf("%llu\n",a);
}
return 0;
}
