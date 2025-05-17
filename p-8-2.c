#include <stdio.h>


void cubeArray(int *ptr, int size)
{
    for (int i = 0; i < size * size; i++) 
	{
        printf("%d\t", (*(ptr + i)) * (*(ptr + i)) * (*(ptr + i)));
    }
    printf("\n");
}

int main() 
{
    int size;
    printf("Enter array's size: ");
    scanf("%d", &size);

    int a[size][size];


    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }


    printf("Cubes of all elements:\n");
    cubeArray(&a[0][0], size);


}