#include <stdio.h>
int charyCall(int *petrol,int *costp,int start,int n,int *fuel){
    if(start>=n){
        return -1;
    }
    //loop one
    int i;
    
    for(i=start;i<n;i++){
        *fuel=*fuel+petrol[i];
        *fuel=*fuel-costp[i];
        if(*fuel<0){
            *fuel=0;
            // printf("next start=%d\n",start+1);
            return charyCall(petrol,costp,i+1,n,fuel);
        }
    }
    //loop two
    for(i=0;i<start;i++){
        *fuel=*fuel+petrol[i];
        *fuel=*fuel-costp[i];
        if(*fuel<0){
            *fuel=0;
            // printf("-1");
            return -1;
        }
    }
    if(i==start){
        // printf("start=%d\n",start);
        return start;
    }
    return-1;
}
int main(){
    int n,i=0;
    scanf("%d",&n);
    int petrol[n],costp[n];
    while(i<n){
        scanf("%d",&petrol[i++]);
    }i=0;
    while(i<n){
        scanf("%d",&costp[i++]);
    }
    int fuel=0,res;
    res=charyCall(petrol,costp,0,n,&fuel);
    printf("%d\n",res);
}
