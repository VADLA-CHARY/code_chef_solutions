#include <stdio.h>

int charu(int arr[], int n){
    int flag = 0;
    for (int i = 0; i <= (n/2); i++){
        if (arr[i] != arr[n - 1 - i]){
            printf("no\n");
            return 0;
        }
        if (arr[i] > flag + 1){
            printf("no\n");
            return 0;
        }
        flag = arr[i];
    }
    if (flag == 7){
        printf("yes\n");
    }
    else{
        printf("no\n");
    }
    return 0;
}

int main(){
    int t, n;
    scanf("%d", &t);
    while (t--){
        scanf("%d", &n);
        int arr[n];
        int flag = 1;
        for (int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
        }
        charu(arr, n);
    }
    return 0;
}
