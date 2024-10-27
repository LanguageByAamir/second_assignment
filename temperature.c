#include <stdio.h>

int main() {
    float temperature;
    char unit;

    // Input temperature and unit from the user
    printf("Enter temperature: ");
    scanf("%f", &temperature);
    
    printf("Is this in Celsius (C) or Fahrenheit (F)? ");
    scanf(" %c", &unit);

    // Convert based on the unit
    if (unit == 'C' || unit == 'c') {
        float fahrenheit = (temperature * 9.0 / 5.0) + 32;
        printf("%.2f Celsius is %.2f Fahrenheit.\n", temperature, fahrenheit);
    } else if (unit == 'F' || unit == 'f') {
        float celsius = (temperature - 32) * 5.0 / 9.0;
        printf("%.2f Fahrenheit is %.2f Celsius.\n", temperature, celsius);
    } else {
        printf("Error: Invalid unit. Please enter 'C' or 'F'.\n");
    }

    return 0;
}
