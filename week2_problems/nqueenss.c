#include <stdio.h>
#include <stdlib.h>
int chary_check(int **arr,int row,int col,int n){
    int i=0,j;
    while(i<n){
        if(arr[row][i]==1){
            return 0;
        }
        if(arr[i][col]==1){
            return 0;
        }
        i++;
    }
    i=row;
    j=col;
    while(i>=0 && j>=0){
    	if(arr[i][j]==1){
    		return 0;
		}
		i--;
		j--;
	} 
	i=row;
    j=col;
    while(i>=0 && j<n){
    	if(arr[i][j]==1){
    		return 0;
		}
		i--;
		j++;
	} 
    return 1;
}

int setQueen(int **arr,int row,int col,int n ){
	if(row<n && col<n){
		if(chary_check(arr,row,col,n)){
			printf("check is ok row=%d col=%d\n",row,col);
			arr[row][col]=1;
			if(row==n-1){
				return 1;
			}
			if(setQueen(arr,row+1,0,n)){
				printf("next row also ok row=%d col=%d\n",row,col);
				return 1;
			}else{
				printf("not ok making zero reverse row=%d col=%d\n",row,col);
				arr[row][col]=0;
				setQueen(arr,row,col+1,n);
			}
			
		}else{
			printf("not ok col row=%d col=%d\n",row,col);
			setQueen(arr,row,col+1,n);
		}
		
	
	}else{
		return 0;
	}
}

int main(void) {
	// your code goes here
   int t;
   scanf("%d",&t);
   while(t--){
   		int n ,i,j;
        scanf("%d",&n);
        int **arr=malloc(sizeof(int *)*n);
        for(i=0;i<n;i++){
             *(arr+i)=malloc(n*sizeof(int));
             for(j=0;j<n;j++){
				 	*(*(arr+i)+j)=0;
             }
        }
        setQueen(arr,0,0,n);
        for(i=0;i<n;i++){
        	for(j=0;j<n;j++){
        		printf("%d ",arr[i][j]);
			}
			printf("\n");
		}
   }
	return 0;
}


