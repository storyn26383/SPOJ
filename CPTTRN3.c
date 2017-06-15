#include <stdio.h>

int main(void) {
    int n;

    scanf("%d", &n);

    for (int i = n; i > 0; i--) {
        int line, len;
        char *map = ".*";

        scanf("%d %d", &line, &len);

        for (int j = 1; j <= line * 3 + 1; j++) {
            int flag;

            for (int k = 1; k <= len * 3 + 1; k++) {
                flag = 1 == j % 3 || 1 == k % 3;

                printf("%c", map[flag]);
            }

            printf("\n");
        }

        printf("\n");
    }

	return 0;
}
