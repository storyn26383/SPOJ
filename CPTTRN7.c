#include <stdio.h>

int main(void) {
    int n;

    scanf("%d", &n);

    for (int i = n; i > 0; i--) {
        int row, column, size;

        scanf("%d %d %d", &row, &column, &size);

        row *= 2;
        column *= 2;

        for (int j = 0; j < row; j++) {
            for (int x = 0; x < size; x++) {
                for (int k = 0; k < column; k++) {
                    for (int y = 0; y < size; y++) {
                        if ((!(j % row & 1) && !(k % column & 1)) || (j % row & 1 && k % column & 1)) {
                            if ((size - 1) - x == y) {
                                printf("/");
                            } else {
                                printf(".");
                            }
                        } else {
                            if (x == y) {
                                printf("\\");
                            } else {
                                printf(".");
                            }
                        }
                    }
                }

                printf("\n");
            }

        }

        printf("\n");
    }

	return 0;
}
