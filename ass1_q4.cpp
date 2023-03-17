#include <stdio.h>

struct VOLUME {
    int Liter;
    int Milliliter;
};

int main() {
    struct VOLUME volume1, volume2, result;
    printf("Enter the value of first volume (in liters and milliliters separated by a space): ");
    scanf("%d %d", &volume1.Liter, &volume1.Milliliter);
    printf("Enter the value of second volume (in liters and milliliters separated by a space): ");
    scanf("%d %d", &volume2.Liter, &volume2.Milliliter);
    result.Liter = volume1.Liter + volume2.Liter;
    result.Milliliter = volume1.Milliliter + volume2.Milliliter;
    if (result.Milliliter >= 1000) {
        result.Liter += result.Milliliter / 1000;
        result.Milliliter = result.Milliliter % 1000;
    }
    printf("The total volume is %d liters and %d milliliters.\n", result.Liter, result.Milliliter);
    return 0;
}
