#include <stdio.h>

int main(void) {
    int n;

    scanf("%d", &n);

    for (int i = n; i > 0; i--) {
        int line, len;
        char *map = ".*";

        scanf("%d %d", &line, &len);

        for (int j = 1; j <= line; j++) {
            int flag;

            for (int k = 1; k <= len; k++) {
                flag = 1 == j || line == j || 1 == k || len == k;

                printf("%c", map[flag]);
            }

            printf("\n");
        }

        printf("\n");
    }

	return 0;
}
