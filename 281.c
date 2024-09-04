#include <stdio.h>

main()
{
    int a = 50;
    int *b = &a;
    *b = *b + 20;
    printf("%d, %d\n", a, *b);
    char *s;
    s = "gilbut";

    for (int i = 0; i < 6; i += 2) {
        printf("s[%d] = %c, *(s + %d) = %c, s + %d = %s\n", i, s[i], i, *(s + i), i, s + i);
        printf("%c, ", s[i]);
        printf("%c, ", s[i + 1]);
        printf("%s\n", s +i);
    }
}
