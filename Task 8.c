Task 8
#include <stdio.h>

int main() {
    int Num1, Num2;
    printf("enter in Num1");
   
    scanf("%d", &Num1);
    printf("enter in num2");
    scanf("%d", &Num2);
    int sum=Num1+Num2;
    int product=Num1*Num2;
    float division=(float)Num1/Num2;
    printf("sum is %d\n", sum);
    printf("product is %d\n", product);
    printf("division is %.2f\n", division);
    
   return 0;
   
   
}
