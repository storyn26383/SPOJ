#include <stdio.h>

int main(void) {
	int a;

    while (1) {
        scanf("%d", &a);

        if (42 == a) {
            break;
        }

        printf("%d\n", a);
    }

	return 0;
}
