#include <stdio.h>

int main(){
    int x, y, result;
    float div;
    char op;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("Enter an Operator (+, -, *, /): ");
    scanf(" %c", &op);

    switch(op){
        case '+':
            result = x + y;
            printf("%d + %d = %d\n", x, y, result);
            break;
        case '-':
            result = x - y;
            printf("%d - %d = %d\n", x, y, result);
            break;
        case '*':
            result = x * y;
            printf("%d * %d = %d\n", x, y, result);
            break;
        case '/':
            div = (float)x / y;
            printf("%d / %d = %f", x, y, div);
            break;
    }

    return 0;
}

