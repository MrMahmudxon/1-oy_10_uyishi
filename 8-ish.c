

#include <stdio.h>

int main() {
    int i, num;
    for(i=1; i<=10; i++){
        printf("%d-Sonni kiriting!  ", i);
        scanf("%d", &num);
        if(num<0){
            break;
        }
      printf("%d\n", i); 
    }
     
   
    return 0;
}