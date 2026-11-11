

#include <stdio.h>

int main() {
    int i, maxfiy=7, son;
    for(i=1; i<=5; i++){
        printf("%d-sonni kiriting: ", i);
        scanf("%d", &son);
       
        if(son==maxfiy){
            printf("tabriklaymiz toptingiz");
            break;
        }
        else{
            printf("Noto'g'ri qayta urinub ko'ring\n");
        }
        
    }
    if(son!=maxfiy){
     printf("Maxfiy son:  %d", maxfiy); 
    }
   
    return 0;
}