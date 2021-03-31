#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ALEATOR(int nr_min, int nr_max, int num)
{
    int random=rand()%nr_max;
    return random;
}
int main()
{
    int nr_min=0, nr_max=10001, num=1, nr, n;
    /*srand(time(NULL));*/
    nr=ALEATOR(nr_min, nr_max, num);
    printf("                        Ghiceste numarul!");
    printf("\n   Daca renuntati introduceti -1!");
    printf("\n   Introduceri numarul din intervalul 0-10000 (MINIM O INCERCARE): ");
    scanf("%d",&n);
    while(n>=0)
    {
        if(n==nr)
        {  printf("Felicitari, ai gicit numarul!");
           break;}
         else
            if(n>nr) printf("Numarul este mai mic\n");
             else
                if(n<nr) printf("Numarul este mai mare\n");
        scanf("%d",&n);
        if(n<0)
        { printf("Ai renuntat, numarul era %d",nr);
          break;}
    }
    return 0;
}
