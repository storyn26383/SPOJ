#include <stdio.h>
#include <math.h>

int main(void) {
    int t;

    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int n, m;

        scanf("%d %d", &n, &m);

        if (n < 2) {
            n = 2;
        }

        for (int i = n; i <= m; i++) {
            int s = sqrt(i);
            int count = 0;

            for (int j = 2; j <= s; j++) {
                if (!(i % j)) {
                    count++;
                    break;
                }
            }

            if (!count) {
                printf("%d\n", i);
            }
        }

        printf("\n");
    }

	return 0;
}
