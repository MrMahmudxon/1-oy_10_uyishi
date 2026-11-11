

#include <stdio.h>

int main() {
    int i, num=0;
    for(i=1; i<=50; i++){
       
        if(i%3!=0){
            continue;
        }
        num=num+i;
    }
     printf("%d\n", num); 
   
    return 0;
}