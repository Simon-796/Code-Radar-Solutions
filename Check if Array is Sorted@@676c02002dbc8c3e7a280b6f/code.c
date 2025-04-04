#include <stdio.h>
int sort(int arr[], int n){

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-2; j++){ 
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            } return 1;
        }
    }
    return 0;


}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
        if(sort(arr, n)){
            printf("Sorted");
        }
        else{
            printf("Not Sorted");
        }
    return 0;
}