#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int k=0; k<n-i; k++){
            printf(" ");
        }
        for(int j=0; j<=i; j++){
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}