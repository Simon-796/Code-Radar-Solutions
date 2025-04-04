#include <stdio.h>
void rotate(int arr[], int a, int b){
    for(int i=a, j=b; i<j; i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}
int main(){
    int n, r;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", arr[i]);
    }
    scanf("%d", &r);
    rotate(*arr, 0, n-1);
    rotate(*arr, 0, r-1);
    rotate(*arr, r, n-1);
    for(int i=0, i<n, i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}