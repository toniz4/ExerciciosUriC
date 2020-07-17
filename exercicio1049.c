#include <stdio.h>
#include <string.h>

int main(void)
{
    char subfilo[128];
    char class[128];
    char alimento[128];

    scanf("%s %s %s", subfilo, class, alimento);
    printf("%d", strcmp(subfilo, "vertebrado"));
    if (strcmp(subfilo, "vertebrado") == 0) {
        printf("vertebrado\n");
    }
    return 0;
}
