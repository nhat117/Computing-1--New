#include <stdio.h>
#include <string.h>

int main() {
    const int max_word_length = 60;
    char longest[max_word_length];
    char shortest[max_word_length];
    char current[max_word_length];

    size_t longest_length = 0;
    size_t shortest_length = max_word_length;
    size_t current_length = 0;

    freopen("help.txt", "r", stdin);
    freopen("output", "w", stdout);

    while (scanf("%s", current) > 0) {
        current_length = strlen(current);
        if ( current_length > longest_length) {
            longest_length = current_length;
            strcpy(longest, current);
        }

        if (current_length < shortest_length) {
            shortest_length = current_length;
            strcpy(shortest, current);
        }
    }


    printf("%s %s", shortest, longest);

    return 0;
}