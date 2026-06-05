#include<stdio.h>
#include<math.h>

int main() {
    int order_value;
    int is_holiday;
    float discount = 0;
    int delivery = 0;
    float final_amount;


    printf("Enter Order Value: ");
    scanf("%d", &order_value);

    printf("Is it Sunday? (1 = Yes, 0 = No): ");
    scanf("%d", &is_holiday);


    if (order_value >= 3000) {
        delivery = 0;
        if (is_holiday == 1) {
            discount = 0.20 * order_value;
        }else
        {
            discount = 0.10 * order_value;
        }
    } else if (order_value >= 1500 && order_value < 3000) {
        if (is_holiday == 1) {
            delivery = 0;
        } else {
            delivery = 100;
        }
    } else if (order_value >= 1000 && order_value < 1500) {
        if (is_holiday == 1) {
            delivery = 0;
        } else {
            delivery = 200;
        }
    } else {
        if (is_holiday == 1) {
            delivery = 0;
        } else {
            delivery = 300;
        }
    }
    final_amount = order_value - discount + delivery;

    printf("\n****Sunday Special Deal****\n");
    printf("\nOrder Value: Rs. %d", order_value);
    printf("\nHoliday (Sunday): %s", (is_holiday == 1) ? "Yes" : "No");
    printf("\nDiscount: Rs. %.2f", discount);
    printf("\nDelivery Charges: Rs. %d", delivery);
    printf("\nFinal Payable Amount: Rs. %.2f\n", final_amount);

    return 0;
}