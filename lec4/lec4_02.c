#include <stdio.h>

// This function calculates the average of two double values
double get_average(double a, double b);

// This function calculates the sum of two double values
double get_sum(double a, double b);

int main() {
    int a;
    a = 10;

    int b = 7;

    double avg_result = get_average(17.0, 20.0);
    printf("The average of 10.0 and 20.0 is: %.2f\n", avg_result);
    
    double avg_result2 = get_sum(5.0, 15.0);
    printf("The average of 5.0 and 15.0 is: %.2f\n", avg_result2);
    
    return 0;
}
