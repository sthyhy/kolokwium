#include<stdio.h>
#include<stdlib.h>



int main()
{
  
   
    int tablica[10], i,liczba, min,minind;  
    for(i =0; i < 10; i++)
        {
            printf("podaj %d liczbe: ", i+1);
            scanf("%d",&liczba);
			tablica[i] = liczba;
        }
    int h;
    min = tablica[0];
    minind=11;
	for(h = 0; h <10; h++)
    {
       
        
         if (tablica[h] < min)
        {
            min  = tablica[h];
        	minind = h;
		}
    }
    printf("Najmniejsza liczba ma wartosc: %d i znajduje sie pod indeksem %d",min,minind);

    return 0;
}


