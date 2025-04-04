#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int sort =1;
   
    for(int i=0; i<n-1-i; i++){
        
        for(int j=0; j<n-2; j++){
             
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                sort = 0;
            }
        }
    }
    
    
        if(sort){
            printf("Sorted");
        }
        else{
            printf("Not Sorted");
        }
    
    
   
    return 0;
}