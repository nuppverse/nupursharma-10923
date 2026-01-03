#include <stdio.h>

int main() {
    int units;
    int bill = 0;

    printf("Enter total units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 1;
    }
    else if (units <= 200) {
        bill = (100 * 1) +
               (units - 100) * 2;
    }
    else {
        bill = (100 * 1) +
               (100 * 2) +
               (units - 200) * 3;
    }

    bill = bill + 50;

    printf("Total Electricity Bill = Rs. %d\n", bill);

    return 0;
}
