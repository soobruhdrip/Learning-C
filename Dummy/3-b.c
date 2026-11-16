#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    int x = (a == b) + (b == c) + (a == c);

    switch (x) {
        case 3:
            printf("Equilateral Triangle\n");
            break;
        case 1:
            printf("Isosceles Triangle\n");
            break;
        case 0:
            printf("Scalene Triangle\n");
            break;
    }

    return 0;
}
