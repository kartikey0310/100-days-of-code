#include <stdio.h>

enum Color {
    RED,
    GREEN,
    BLUE,
    COLOR_COUNT
};

int main(void) {
    const char *names[] = {
        "RED",
        "GREEN",
        "BLUE"
    };

    for (int i = 0; i < COLOR_COUNT; i++) {
        printf("%s = %d\n", names[i], i);
    }

    return 0;
}