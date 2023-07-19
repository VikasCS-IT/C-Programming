#include <stdio.h>
void main(){
    int i, j,k, a[3] = {2, 5, 7, 6}, b[8], u[8] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for(i=0;i<=3;i++){
        for(j=0;j<=8;j++){
            if(a[i]==u[j]){
                continue;
            }
            else{
                k = 0;
                b[k] = u[j];
                k++;
            }
        }
    }
    printf("Complement is :\n");
    for(i=0;i<=8;i++){
        printf(b[i]);
    }
}