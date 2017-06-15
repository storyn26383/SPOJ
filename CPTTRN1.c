#include <stdio.h>

int main(void) {
    int n;

    scanf("%d", &n);

    for (int i = n; i > 0; i--) {
        int line, len;
        char *map = "*.";

        scanf("%d %d", &line, &len);

        for (int j = 1; j <= line; j++) {
            int flag = 1;

            if (j & 1) {
                flag = 0;
            }

            for (int k = 1; k <= len; k++) {
                printf("%c", map[flag]);

                flag = (flag + 1) % 2;
            }

            printf("\n");
        }

        printf("\n");
    }

	return 0;
}
