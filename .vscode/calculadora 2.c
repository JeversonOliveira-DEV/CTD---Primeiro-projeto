#include <stdio.h>

void main()
{
    float a, b;
    char op; 

    scanf("%f %c %f", &a, &op, &b);
     switch (op)
     {
     case '+':
        printf("%f%c%f", a + b);
        break;

    case '-':
        printf("%f%c%f", a - b);
        break;
    
    case '*':
        printf("%f%c%f", a * b);
        break;

    case '/':
        printf("%f%c%f", a / b);
        break;
     
     default:
        printf("Operador Invalido");
        break;
     }
}