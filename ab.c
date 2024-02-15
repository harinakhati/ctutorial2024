#include <stdio.h>
#include <math.h>

void func() {
    double angle;

    printf("Angle (radians) | Sine Value | Cosine Value\n");
    printf("--------------------------------------------\n");
    int i;
    for (i = 0; i <= 90; i += 15) {
        double angle=i*(3.141592/180);
        double sine_value = sin(angle);
        double cosine_value = cos(angle);
        printf("%d       | %f | %f\n", i, sine_value, cosine_value);
    }
}

int main(){
    func();
}