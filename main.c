#include <stdio.h>
#define matrixSize 5


// 1 == 50,  98,  -4,  85,  -8;
// 2 == 40,  73,  -2,  -9,  -19;
// 3 == 1,    6 ,  73 , 21 ,  0;
// 4 == 0 ,  25,   2  , -5,   -3;
// 5 == 99,  19 , 95 , 92 , -7;

void PrintMatrix(int matrix[5][5])
{
    for(int PrintingLineIndex = 0; PrintingLineIndex < 30; PrintingLineIndex++)
    {
        printf("-");
    }
    printf("\n");
    for(int startIndex = 0; startIndex < 5; startIndex++)
    {
        for(int nextIndex = 0; nextIndex < 5; nextIndex++)
        {
            printf("%6d", matrix[startIndex][nextIndex]);
        }
        printf("\n");
    }
}


void selectionSort (int matrix[matrixSize][matrixSize]){
    int firstElement, secondElement = 0;
    
    int minimumIndex = 0;
    int temporaryIndex;
    
    
    
    for (firstElement = 0; firstElement < matrixSize; firstElement++) {
        
        for (secondElement = 0; secondElement < matrixSize; secondElement++) {
            
            printf("a[%d][%d] = ", firstElement + 1, secondElement + 1);
            
            scanf("%d", & matrix[firstElement][secondElement]);
        }
        
    }
    
    
    printf("\n");
    
    printf("Введена Матриця\n");
    PrintMatrix(matrix);
    printf("\n");
    
    for(int nextElement = 0; nextElement < 5; nextElement++)
    {
        for(int minimumElement = 0; minimumElement < 5; minimumElement++)
        {
            minimumIndex = minimumElement;
            for(int selectedElement = minimumElement + 1; secondElement < 5; selectedElement++)
            {
                if(matrix[minimumIndex][nextElement] > matrix[selectedElement][nextElement])
                    minimumIndex = selectedElement;
            }
            if(matrix[minimumElement][nextElement] > matrix[minimumIndex][nextElement])
            {
                temporaryIndex = matrix[minimumElement][nextElement];
                matrix[minimumElement][nextElement] = matrix[minimumIndex][nextElement];
                matrix[minimumIndex][nextElement] = temporaryIndex;
            }
        }
    }
    printf("Посортована Матриця\n");
    PrintMatrix(matrix);
    
    
    
    
}



int main() {
    
    
    static int matrix[matrixSize][matrixSize];
    
    selectionSort(matrix);
    
    
    
    
    int productOfMultipation [4] = {1, 1, 1, 1};
    for(int i = 0; i < 5; i++)
    {
        for(int j = i + 1; j < 5; j++)
        {
            productOfMultipation[i] *= matrix[i][j];
        }
        
    }
    
    for(int i = 0; i < 4; i++)
    {
        printf("\nРядок %d: % 6d\n",i + 1, productOfMultipation[i]);
    }
    
    float averageAriphmetical = 0.0;
    
    for(int i = 0; i < 4; ++i)
        averageAriphmetical += productOfMultipation[i];
    averageAriphmetical /= 4;
    
    printf("Середнє Значення: %f\n", averageAriphmetical);
    
    
    
    }

