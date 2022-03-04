#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,k,ans=0,j;
	    scanf("%d %d",&n,&k);
	    for(j=1;j<=k;j++){
	        if(n%j>ans){
	            ans=n%j;
	        }
	    }
	    printf("%d\n",ans);
	}
	return 0;
}


