#include <stdio.h>

int main(void) {
    int n;

    scanf("%d", &n);

    for (int i = n; i > 0; i--) {
        int line, len, size;

        scanf("%d %d %d", &line, &len, &size);

        size++;

        for (int j = 0; j < line * size + 1; j++) {
            for (int k = 0; k < len * size + 1; k++) {
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
