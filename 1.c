//Ввести вес и рост человека.
//Рассчитать и вывести индекс массы тела по формуле I=m/(h*h),
//где m-масса тела в килограммах, h - рост в метрах.


#include <stdio.h>


int main() {
    printf("Enter the mass: ");
    float mass;
    scanf("%g", &mass);

    printf("Enter the height: ");
    int height;
    scanf("%i", &height);

    float index;  // body mass index
    index = mass / (height * height);

    printf("Your body mass index is %g", index);
}