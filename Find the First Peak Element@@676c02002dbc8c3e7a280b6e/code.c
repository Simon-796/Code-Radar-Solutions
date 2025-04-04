#include <stdio.h>
int peak(int arr[], int n){
    for(int i=0; i<n; i++){
       if ((i == 0 && arr[i] > arr[i + 1]) || 
            (i == n - 1 && arr[i] > arr[i - 1]) || 
            (i > 0 && i < n - 1 && arr[i] > arr[i - 1] && arr[i] > arr[i + 1])) {
            
            printf("%d ", arr[i]);
        }
        return 1;

       
          
    }
    return -1;

}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    peak(arr,n);
    return 0;
}