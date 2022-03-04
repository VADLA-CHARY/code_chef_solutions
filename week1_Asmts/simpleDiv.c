#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,x,y,i,count=0;
	    scanf("%d %d %d",&n,&x,&y);
	    int array[n];
	    for(i=0;i<n;i++){
	        scanf("%d",&array[i]);
	        if(array[i]<=x && array[i]%y==0){
	            count++;
	        }
	    }
	    printf("%d\n",count);
	}
	return 0;
}


