#include<stdio.h>
#include<math.h>
int main()
{
printf("Before the triple sum condition \n");
int x ;
int y ;
printf("Entered the number for x :\n");
scanf("%d" , &x);
 printf("Entered the number for y:\n");
 scanf("%d" , &y);
 if (x == y) {
        int result = (x + y) * 3;  // triple the sum
        printf("Both numbers are equal. Triple sum = %d\n", result);}
else{
    int result = x + y;        // normal sum
        printf("Numbers are not equal. Sum = %d\n", result);
    }
 return 0 ;