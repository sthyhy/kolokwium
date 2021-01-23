#include <stdio.h>
#include <math.h>

int main()
{
float a,b,c,c1,delta;
b=2;
printf("do wzoru a*x^2+2*x-4*b=0\n");
printf("podaj wspolczynnik a: ");
scanf("%f",&a);
printf("podaj wspolczynnik b: ");
scanf("%f",&c);
c1=c*4;
delta =(b*b)-(4*a*c1);
if
        (a==0)
        {
        printf("to nie rownanie kwadratowe");
        }
else
        {

        if
                (delta>0)
                {
                printf("pierwsze rozwiazanie x: %2f\n",(-b-sqrt(delta))/(2*a));
                printf("drugie rozwiazanie x: %2f\n",(-b+sqrt(delta))/(2*a));
                }
        else
        {

                if
                        (delta == 0)
                        {
                        printf("istnieje jedno rozwiazanie x: %2f\n",-b/(2*a));
                        }
                else
                        {
                        if
                        (delta < 0)
                        {
                        printf("brak rozwiazan");
                        }
                }
        }
}

return 0;
}
