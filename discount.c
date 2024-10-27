#include <stdio.h>

int main() {
    float totalAmount, discount, finalAmount;

    // Input the total shopping amount
    printf("Enter the total shopping amount: ");
    scanf("%f", &totalAmount);

    // Calculate discount based on the amount
    if (totalAmount > 5000) {
        discount = totalAmount * 0.20; // 20% discount
    } else if (totalAmount >= 3000) {
        discount = totalAmount * 0.10; // 10% discount
    } else {
        discount = 0; // No discount
    }

    // Calculate final amount after applying the discount
    finalAmount = totalAmount - discount;

    // Output the final amount and discount
    printf("Total Amount: %.2f\n", totalAmount);
    printf("Discount: %.2f\n", discount);
    printf("Final Amount: %.2f\n", finalAmount);

    return 0;
}
