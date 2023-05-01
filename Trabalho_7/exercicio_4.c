#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include<time.h>


int main() {

    int i, table[3][4], somas[] = {0, 0, 0}, multi[] = {1, 1, 1, 1};


    srand(time(NULL));
  
    for (i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            table[i][j] = rand() % 100;
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {   
            printf("Linha %d - ", i+1);
            printf("%d - ", table[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            somas[i] += table[i][j];
        }
    }

    for (i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            multi[i] *= table[j][i];
        }
    }
    
    for (i = 0; i < 3; i++)
    {
        printf("%d\n", somas[i]);
    }

    for (i = 0; i < 4; i++)
    {
        printf("%d\n", multi[i]);
    }
    

    return 0;
}