#include <stdio.h>
#include <string.h>

// Function to calculate slab-based energy charges.
float calculateEnergyCharge(int units) {
    float cost = 0;

    if (units <= 100) {
        cost = units * 1.5;
    }
    else if (units <= 200) {
        cost = (100 * 1.5) + (units - 100) * 2.5;
    }
    else if (units <= 300) {
        cost = (100 * 1.5) + (100 * 2.5) + (units - 200) * 4.0;
    }
    else {
        cost = (100 * 1.5) + (100 * 2.5) + (100 * 4.0) + (units - 300) * 6.0;
    }

    return cost;
}

int main() {
    char consumerName[50], month[15];
    int units;
    float energyCharge, fixedCharge = 75;
    float peakCharge = 0, ecoDiscount = 0, totalBill;

    printf("\n--- SMART ELECTRICITY BILL CALCULATOR ---\n");

    printf("Enter Consumer Name: ");
    scanf(" %[^\n]", consumerName);

    printf("Enter Billing Month: ");
    scanf(" %s", month);

    printf("Enter Units Consumed: ");
    scanf("%d", &units);

    // Calculate energy charge
    energyCharge = calculateEnergyCharge(units);

    // Peak hour surcharge
    if (units > 250) {
        peakCharge = energyCharge * 0.05;
    }

    // Eco saver discount
    if (units <= 100) {
        ecoDiscount = 30;
    }

    // Final bill calculation
    totalBill = energyCharge + fixedCharge + peakCharge - ecoDiscount;

    // Display formatted bill
    printf("\n---------------------------------------\n");
    printf("          ELECTRICITY BILL\n");
    printf("---------------------------------------\n");
    printf("Consumer Name     : %s\n", consumerName);
    printf("Billing Month     : %s\n", month);
    printf("Units Consumed    : %d\n", units);
    printf("Energy Charge     : Rs. %.2f\n", energyCharge);
    printf("Fixed Charge      : Rs. %.2f\n", fixedCharge);
    printf("Peak Hour Charge  : Rs. %.2f\n", peakCharge);
    printf("Eco Discount      : Rs. %.2f\n", ecoDiscount);
    printf("---------------------------------------\n");
    printf("TOTAL BILL AMOUNT : Rs. %.2f\n", totalBill);
    printf("---------------------------------------\n");

    return 0;
}
