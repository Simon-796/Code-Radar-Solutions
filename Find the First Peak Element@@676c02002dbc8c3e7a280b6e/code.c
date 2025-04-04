#include <stdio.h>
void peak(int arr[], int n){
    for(int i=0; i<n; i++){

        arr[i+1]>arr[i];
        arr[i+1]>arr[i+2];  
    }
    return;

}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    peak(arr,n);
    printf("%d", );
    return 0;
}