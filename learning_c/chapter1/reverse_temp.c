#include <stdio.h>

int main() {
    float fahr, celcius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celcius = lower;
    printf("+-----------------------+\n");
    printf("| celcius  |    fahr    |\n");
    printf("+-----------------------+\n");
    while (celcius <= upper) {
        fahr = celcius * (9.0 / 5.0) + 32.0;
        printf("|  %3.0f\t   |  %6.1f    |\n", celcius, fahr);
        celcius = celcius + step;
    }
    printf("+-----------------------+\n");
}
