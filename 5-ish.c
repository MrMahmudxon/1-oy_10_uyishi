

#include <stdio.h>

int main() {
    int i, sum=1, num;
    printf("Sonni kiriting!");
    scanf("%d", &num);
    for(i=1; i<=num; i++){
        sum=sum*i;
      
    }
     printf("%d sonining foktariali: %d\n", num,  sum); 
   
    return 0;
}