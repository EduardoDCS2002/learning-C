#include <stdio.h>
#include <assert.h>
#include <math.h>
int main()
{

    int e;
    printf("Introduza o tamanho do padrao\n");
    assert(scanf("%d", &e));
    for (int i = 0; i < e; i++)
    {
        for (int j = 0; j < e * 2; j++)
        {
            if (j <= i || e * 2 - j <= i + 1)
                putchar('*'); //canto superior
            else
                putchar('.'); //esquerdo desenhado
        }
        putchar('\n');
    }
    for (int i = e - 1; i > 0; i--)
    {
        for (int j = 0; j < e * 2; j++)
        {
            if (j < i || e * 2 - j <= i)
                putchar('*');
            else
                putchar('.');
        }
        putchar('\n');
    }
    return 0;
}