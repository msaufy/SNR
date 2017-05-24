#include<stdio.h>
#include<math.h>

int snr(int a,int b,int c,int d);
int main()
{
int a=11;
int b=22;
int c=33;
int d=44;
printf("snr=%lf\n",snr(a,b,c,d));

}

int snr(int a,int b,int c,int d)
{
/*  x=(a*a)+(b*b);
    y=((a-c)*(a-c))+((b-d)*(b-d))
    z=x/y
    snr=10*log10(z)
*/

    int x=(a*a)+(b*b);
    int ac=(a-c)*(a-c);
    int bd=(b-d)*(b-d);
    int y=ac-bd;
    int z=x/y;
    int snr=10*log10(z);
    return snr;

}
