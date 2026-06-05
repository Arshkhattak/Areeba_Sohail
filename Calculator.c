#include <stdio.h>
#include<math.h>

int main() {
   int a ;
   int b ;
   char op ;
   char choice ;
 do {
   printf("Entered the first number\n");
   scanf("%d" , &a);
   printf("Select the operations(+,-,*,/)\n");
   scanf(" %c", &op);
   printf("Entered the second number\n");
   scanf("%d" , &b);

    switch (op){
        case'+':
             printf("%d + %d = %d\n" , a , b , a+b);
           break;
        case'-':
             printf("%d - %d = %d\n" , a , b , a-b);
           break;
        case'*':
             printf("%d * %d = %d\n" , a , b ,a*b);
           break;
        case'/':
            if (b!=0)
                 printf("%d / %d = %d\n" ,a , b , a/b);
            else
                printf("Infinite\n");
            break;
     default:
              printf("Use following operation(+,-,*,/)\n");


    }
    printf("Do you want to perform futher calculation? (Y/N)\n");
    scanf(" %c", &choice);
 }
 while(choice == 'Y' || choice =='y');
 printf("..................Have A Nice Day!.............................. \n");
 printf("______________________Goodbye____________________________________\n");
 return 0;
}