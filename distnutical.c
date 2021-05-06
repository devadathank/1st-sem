#include<stdio.h>
#include<math.h>
void main()
{
    float l1,l2,g1,g2,D,PI=3.141592;
    printf("Enter latitude & longitude of first place(L1,G1):   \n");
    scanf("%f%f", &l1, &g1);
    printf("Enter latitude & longitude of second place(L1, G2)\n");
    scanf("%f%f", &l2, &g2);
    l1 = l1 * ( PI / 180.0 );
    l2 = l2 * ( PI / 180.0 );
    g1 = g1 * ( PI / 180.0 );
    g2 = g2 * ( PI / 180.0 );
    D = 3963 * acos( sin(l1) * sin(l2) + cos(l1) * cos(l2) * cos(g2 - g1) );
    printf("Distance in nautical miles, D = %f \n", d);
}
