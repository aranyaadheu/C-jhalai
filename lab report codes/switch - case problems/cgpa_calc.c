#include <stdio.h>

int main(){
    float marks;
    printf("Enter your marks: ");
    scanf("%f", &marks);
    int range = (int) marks/ 5;
    
    switch(range){
        case 20:
        case 19:
        case 18:
        case 17:
        case 16:
            printf("Grade A(+)\n");
            break;
        case 15:
            printf("Grade A\n");
            break;
        case 14:
            printf("Grade A(-)\n");
            break;
        case 13: 
            printf("Grade B(+)\n");
            break;
        default:
            printf("Grade F\n");
            break;
    }

    return 0;
}



