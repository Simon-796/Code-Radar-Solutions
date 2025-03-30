#include <stdio.h>
void rotate(int arr[], int a, int b){
    int temp;
    for(int i=a, j=b; i<j; i++,j--){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}
int main(){
    int k ,s, arr[k];
    scanf("%d", &k);
    for(int i=0; i<k; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &s);
    k = k%s;
    rotate(arr, 0, n-1);
    rotate(arr, 0, k-1);
    rotate(arr, k, n-1);
    for(int i =0 ; i<k; i++){
        printf("%d ", arr[i]);
    }


    return 0;
}