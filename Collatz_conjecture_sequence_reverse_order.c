#include <stdio.h>
#include<math.h>

int main() {
    int a ;
    printf("Enter a positive integer: ");
    scanf("%d", &a);

    if (a <= 0) {
        printf("Please enter a positive number.\n");
        return 0;
    }
    int temp , n;
    n = 1;
    for(temp = a; temp != 1;  )
    {

        if (temp % 2 == 0)
            temp = temp / 2;
        else
            temp = 3 * temp + 1;
            n ++;
    }
     for (int i = n; i >= 1; i--) {


          int value, steps;
        for (value = a, steps = 1; steps < i; steps++) {
            if (value % 2 == 0)
                value = value / 2;
            else
                value = 3 * value + 1;
        }

        printf("%d ", value);
    }
    return 0;
}