#include <stdio.h>

int main() {
    double a, b, temp;
    
    printf("Введите a: ");
    scanf("%lf", &a);
    
    printf("Введите b: ");
    scanf("%lf", &b);
    
    temp = a;
    
    a = b;
    
    b = temp;
    
    printf("\nПосле замены, a = %.2lf\n", a);
    printf("После замены, b = %.1lf", b);
    
    return 0;
}
