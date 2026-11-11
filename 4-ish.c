

#include <stdio.h>

int main() {
    int i, sum=1, num;
    printf("Sonni kiriting!");
    scanf("%d", &num);
    for(i=1; i<=10; i++){
        sum=num*i;
       printf("natija: %d*%d=%d\n", num, i, sum); 
    }
    
   
    return 0;
}