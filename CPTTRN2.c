#include <stdio.h>

int main(void) {
    int n;

    scanf("%d", &n);

    for (int i = n; i > 0; i--) {
        int row, column;
        char *map = ".*";

        scanf("%d %d", &row, &column);

        for (int j = 1; j <= row; j++) {
            int flag;

            for (int k = 1; k <= column; k++) {
                flag = 1 == j || row == j || 1 == k || column == k;

                printf("%c", map[flag]);
            }

            printf("\n");
        }

        printf("\n");
    }

	return 0;
}
