#include <stdio.h>

int main(void) {
    int n;

    scanf("%d", &n);

    for (int i = n; i > 0; i--) {
        int row, column, width, height;

        scanf("%d %d %d %d", &row, &column, &height, &width);

        row++;
        column++;
        width++;
        height++;

        for (int j = 0; j < row * height - 1; j++) {
            for (int k = 0; k < column * width - 1; k++) {
                if (j % height == height - 1 && k % width == width - 1) {
                    printf("+");
                } else if (j % height == height - 1) {
                    printf("-");
                } else if (k % width == width - 1) {
                    printf("|");
                } else {
                    printf(".");
                }
            }

            printf("\n");
        }

        printf("\n");
    }

	return 0;
}
