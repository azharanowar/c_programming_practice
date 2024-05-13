#include <stdio.h>

void print_array(int arr[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }

        printf("\n");
    }

}

int main()
{
    int data[2][3] = { {1, 2, 3}, {4, 5, 6} };
    print_array(data, 2, 3);

    return 0;
}