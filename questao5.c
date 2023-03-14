#include <stdio.h>
#include <string.h>

void inverteString(char *str) {
    int len = strlen(str);
    int i, j;
    char temp;

    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str[100];

    printf("Digite uma string: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0'; // remove o caractere '\n' adicionado pelo fgets

    printf("String original: %s\n", str);

    inverteString(str);

    printf("String invertida: %s\n", str);

    return 0;
}
