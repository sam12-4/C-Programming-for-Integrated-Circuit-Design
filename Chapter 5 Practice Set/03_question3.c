// \(F_{g}=\frac{Gm_{1}m_{2}}{d^{2}}\)

// Write a function to calculate force of attraction on a body of mass ‘m’ exerted by
// earth. Consider g = 9.8m/s2

#include <stdio.h>
#include <math.h>

int calculate_force_of_attraction(int mass_1, int mass__2);

int main(){
    float result  = calculate_force_of_attraction(3, 6);
    printf("The result is %f", result);
    return 0;
}


int calculate_force_of_attraction(int mass1, int mass2){
    double r= 63780;
    double x = 10, y = 11, z= 2;
    float G = 6.674 * pow(x, y);
    printf("%f", G);
    return ((G*mass1*mass2)/pow(r, z));
}