#include <stdio.h>
#include <math.h>
int add(int *arr,int row,int n,int a){
	int i;
	if(a==1){
		for(i=0;i<4;i++){
			arr[i]+=pow(2,row);
		}
	}else{
		for(i=0;i<4;i++){
			arr[i]-=pow(2,row);
		}
	}
}
int print(int *arr,int n){
	int i;
	for(i=0;i<4;i++){
			printf("%d ",arr[i]);
	}
}
int rev(int *arr,int n){
	int i=0,j=n-1,temp;
	while(i<j){
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		i++;
		j--;
	}
}
int chary_gray(int *arr,int row,int n){
	if(row<=n){
		int i;
		rev(arr,4);
		add(arr,row-1,n,1);
		print(arr,n);
		if(row==n){
			return;
		}
		chary_gray(arr,row+1,n);
		rev(arr,4);
		add(arr,row-1,n,0);
		print(arr,4);
	}
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,i=0;
		scanf("%d",&n);
		int arr[]={0,1,3,2};
		for(i=0;i<pow(2,n);i++){
			if(i>=4){
				break;
			}
			printf("%d ",arr[i]);
		}
		if(n>2){
			chary_gray(arr,3,n);
		}
	}
}
