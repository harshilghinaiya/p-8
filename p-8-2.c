#include <stdio.h>


void har(int *ptr, int size)
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
    printf("Enter array's s: ");
    scanf("%d", &s);

    int a[s][s];


    printf("Enter array elements:\n");
    for (int i = 0; i < s i++) {
        for (int j = 0; j < s; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }


    printf("har of all elements:\n");
    cubeArray(&a[0][0], s);



}
/*
Enter array's s: 2
Enter array elements:
a[0][0] = 3
a[0][1] = 2
a[1][0] = 5
a[1][1] = 4
har of all elements:
27      8       125     64
*/
