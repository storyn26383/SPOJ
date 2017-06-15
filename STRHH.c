#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {
    int n;

    scanf("%d", &n);

    for (int i = n; i > 0; i--) {
        char str[255];
        int len;

        scanf("%s", str);

        len = ceil(strlen(str) / 4.0);

        for (int j = 0; j < len; j++) {
            printf("%c", *(str + j * 2));
        }

        printf("\n");

        // for (char *j = str; *j; j++) {
        //     printf("%c\n", *j);
        // }

        // printf("%s\n", str);
        // printf("%p\n", &str);
    }

	return 0;
}
