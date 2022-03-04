#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    long long int n,sumeven=0,sumodd=0,i;
	    scanf("%lld",&n);
	    long long int array[n];
	    for(i=0;i<n;i++){
	        scanf("%lld",&array[i]);
	       
	    }
	    long long out=0;
	    for(i=0;i<n;i++){
	       if(i%2==0){
	           sumeven+=array[i];
	       }else{
	           sumodd+=array[i];
	       }
	    }
	    out=sumodd>sumeven?sumodd:sumeven;
	    printf("%d\n",out);
	    
	}
	return 0;
}


