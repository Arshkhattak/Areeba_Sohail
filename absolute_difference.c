#include<stdio.h>
#include<math.h>
int main()
{
int y ;

const int x = 51 ;
printf("Entered the value\n");
scanf("%d" , &y);
if (y > x)
{
    int result = (y - x)*3;
    printf("Absolute differnece :%d\n" , result);
}
else {
    int result = 51 - y;
    printf(" No absolute difference: %d\n" , result);

}
return 0 ;
}