#include <stdio.h>
#include <math.h>
// s_area = surface area
// side = side length of the cube
void cal_sarea_vol(double side, double *s_area, double *vol)
{
    *s_area = 6 * pow(side, 2);
    *vol = pow(side, 3);
}
int main() {
    double side, s_area, vol;

    printf("Enter the side length of the cube: ");
    scanf("%lf", &side);

    cal_sarea_vol(side, &s_area, &vol);

    printf("Surface area: %.2f\n", s_area);
    printf("Volume: %.2f\n", vol);

    return 0;
}

