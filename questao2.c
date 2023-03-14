#include <stdio.h>

int main()
{
    int num, fib1 = 0, fib2 = 1, proximo, pertence = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    while (proximo < num)
    {
        proximo = fib1 + fib2;
        fib1 = fib2;
        fib2 = proximo;
    }

    if (proximo == num)
    {
        pertence = 1;
    }

    if (pertence == 1)
    {
        printf("%d pertence a sequencia de Fibonacci\n", num);
    }
    else
    {
        printf("%d nao pertence a sequencia de Fibonacci\n", num);
    }

    return 0;
}
