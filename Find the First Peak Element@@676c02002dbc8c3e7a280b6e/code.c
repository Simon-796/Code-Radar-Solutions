#include <stdio.h>
int peak(int arr[], int n){
    for(int i=0; i<n; i++){
        if(arr[i+1]>arr[i] && arr[i+1]>arr[i+2]){
            return 1;
        }
    }

}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    peak(arr,n);
    printf("%d", arr[]);
    return 0;
}