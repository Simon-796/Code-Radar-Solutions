#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        int a = i-1;
        for(int k=1; k<n-i; k++){
            printf(" ");
        }
            for(int j=1; j<=i; j++){
                printf("%d", j);
            }
            for(int s=1; s<=i-1;s++){
                printf("%d", a);
                a--;
            }
        
        printf("\n");
    }
    return 0;
}