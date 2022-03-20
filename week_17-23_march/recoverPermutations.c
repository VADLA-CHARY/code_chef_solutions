#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int z=0,str[n],i,value=1;
		int arr[400000]={0};
		for(i=0;i<n;i++){
			scanf("%d",&str[i]);
		}
	
		for(i=0;i<n;i++){
			if(str[i]==1){
				printf("%d ",i+1);
				arr[i+1]++;
				// if(value==i+1){
				// 	value++;
				// }
	//			printf("value=%d ",value);
				while(value<i+1){
					if(arr[value]>0){
						value++;
						continue;
					}else{
						printf("%d ",value);
						value++;
	//				printf("value=%d\n",value);
						
					}
					if(value>n){
						break;
					}
					
				}
			}
		}

	printf("\n");
	}
}
