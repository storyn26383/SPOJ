#include <stdio.h>

int main(void) {
    int n;

    scanf("%d", &n);

    for (int i = n; i > 0; i--) {
        int row, column;
        char *map = ".*";

        scanf("%d %d", &row, &column);

        for (int j = 1; j <= row * 3 + 1; j++) {
            int flag;

            for (int k = 1; k <= column * 3 + 1; k++) {
                flag = 1 == j % 3 || 1 == k % 3;

                printf("%c", map[flag]);
            }

            printf("\n");
        }

        printf("\n");
    }

	return 0;
}
