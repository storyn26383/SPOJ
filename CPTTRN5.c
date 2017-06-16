#include <stdio.h>

int main(void) {
    int n;

    scanf("%d", &n);

    for (int i = n; i > 0; i--) {
        int row, column, size;

        scanf("%d %d %d", &row, &column, &size);

        size++;

        for (int j = 0; j < row * size + 1; j++) {
            for (int k = 0; k < column * size + 1; k++) {
                if (0 == j % size || 0 == k % size) {
                    printf("*");
                } else if ((!(j / size & 1) && !(k / size & 1)) || (j / size & 1 && k / size & 1)) {
                    if (j % size == k % size) {
                        printf("\\");
                    } else {
                        printf(".");
                    }
                } else if ((!(j / size & 1) && k / size & 1) || (j / size & 1 && !(k / size & 1))) {
                    if (j % size == size - (k % size)) {
                        printf("/");
                    } else {
                        printf(".");
                    }
                }
            }

            printf("\n");
        }

        printf("\n");
    }

	return 0;
}
