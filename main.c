//Hello
#include <stdio.h>
#define n 5


// 1 == 50,  98,  -4,  85,  -8;
// 2 == 40,  73,  -2,  -9,  -19;
// 3 == 1,    6 ,  73 , 21 ,  0;
// 4 == 0 ,  25,   2  , -5,   -3;
// 5 == 99,  19 , 95 , 92 , -7;

void PrintMatrix(int matrix[5][5])
{
    for(int i = 0; i < 30; i++)
    {
        printf("-");
    }
    printf("\n");
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf("%6d", matrix[i][j]);
        }
        printf("\n");
    }
}


void sort (int matrix[n][n]){
    int i,j = 0;
    
    int min = 0;
    int tmp;
    
    
    
    for (i = 0; i < n; i++) {
        
        for (j = 0; j < n; j++) {
            
            printf("a[%d][%d] = ", i + 1, j + 1);
            
            scanf("%d", & matrix[i][j]);
        }
        
    }
    
    
    
    printf("\n");
    
    
    
    
    printf("Введена Матриця\n");
    PrintMatrix(matrix);
    printf("\n");
    
    for(int k = 0; k < 5; k++)
    {
        for(int i = 0; i < 5; i++)
        {
            min = i;
            for(int j = i + 1; j < 5; ++j)
            {
                if(matrix[min][k] > matrix[j][k])
                    min = j;
            }
            if(matrix[i][k] > matrix[min][k])
            {
                tmp = matrix[i][k];
                matrix[i][k] = matrix[min][k];
                matrix[min][k] = tmp;
            }
        }
    }
    printf("Посортована Матриця\n");
    PrintMatrix(matrix);
    
    
    
    
}



int main() {
    
    
    static int matrix[n][n];
    
    sort(matrix);
    
    
    
    
    int Multiply[4] = {1, 1, 1, 1};
    for(int i = 0; i < 5; i++)
    {
        for(int j = i + 1; j < 5; j++)
        {
            Multiply[i] *= matrix[i][j];
        }
        
    }
    
    for(int i = 0; i < 4; i++)
    {
        printf("\nРядок %d: % 6d\n",i + 1, Multiply[i]);
    }
    
    float avg = 0.0;
    
    for(int i = 0; i < 4; ++i)
        avg += Multiply[i];
    avg /= 4;
    
    printf("Середнє Значення: %f\n", avg);
    
    
    
    }

