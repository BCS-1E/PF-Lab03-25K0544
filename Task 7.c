Task 7
#include <stdio.h>

int main() {
    char name [50];
    int age;
    printf("enter in your age");
    scanf("%d", &age);
    printf("enter in your name");
    scanf("%49s", name);
    printf("hello %s, you are %d years old\n",name,age);
    return 0;
   
   
}
