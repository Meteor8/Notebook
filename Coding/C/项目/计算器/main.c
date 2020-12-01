#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define M_PI 3.14159265358979323846


int main()
{
    do
    {
/*
    double v=0,q=0,d=0;     //算速度水头
    printf("q=");
    scanf("%lf",&q);
    printf("d=");
    scanf("%lf",&d);
    v=pow(4*q/M_PI/(d*d),2.0)/(2*980);
    printf("%lf\n",v);
*/

    int i=0;                //算hf
    double h=0,z[4];
    for(i=0;i<4;i++)
    {
        printf("z%d:",i+3);
        scanf("%lf",&z[i]);
    }
    h=0.5*(z[0]-z[1])+(z[2]-z[3]);
    printf("%lf\n",h);

    }while(1);
    return 0;
}
