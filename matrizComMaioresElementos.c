#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    int firstMat[4][4];
    int secondMat[4][4];
    int matWithBigElements[4][4];

    srand(time(NULL));

    for (int row = 0; row < 4; row++) {
        for (int col = 0; col < 4; col++) {
            firstMat[row][col] = rand();
            secondMat[row][col] = rand();

            if (firstMat[row][col] > secondMat[row][col]) {
                matWithBigElements[row][col] = firstMat[row][col];
            }
            else {
                matWithBigElements[row][col] = secondMat[row][col];
            }
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d \n", matWithBigElements[i][j]);
        }
    }
}
