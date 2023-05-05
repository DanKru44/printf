#include <stdio.h>

struct Data {
    int num;
    float floatNum;
    char character;
    char string[100];
};

int main() {
    struct Data data = {42, 3.14, 'a', "Entgültige Frage nach dem Leben, dem Universum und dem ganzen Rest"};

    printf("Die Ganzzahl ist: %d\n", data.num);
    printf("Die Gleitkommazahl ist: %f\n", data.floatNum);
    printf("Der Character ist: %c\n", data.character);
    printf("Der String ist: %s\n", data.string);

    return 0;
}

