#include <stdio.h>

int main() {
    char *name[3] = {"Alice", "Han", "Christopher"};
    char name2[3][11] = {"Alice", "Han", "Christopher"};

    printf("%lu %lu", sizeof(name)/sizeof(*name), sizeof(name2)/sizeof(char));
}
