#include <stdio.h>

int main(void) {
    int n;

    scanf("%d", &n);

    for (int i = n; i > 0; i--) {
        int line, len, height, width;
        char *map = ".*";

        scanf("%d %d %d %d", &line, &len, &height, &width);

        width++;
        height++;

        for (int j = 1; j <= line * height + 1; j++) {
            int flag;

            for (int k = 1; k <= len * width + 1; k++) {
                flag = 1 == j % height || 1 == k % width;

                printf("%c", map[flag]);
            }

            printf("\n");
        }

        printf("\n");
    }

	return 0;
}
