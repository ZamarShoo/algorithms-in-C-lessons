#include <stdio.h>


struct coordinates{
    int x;
    int y;
    int color;
};

int findColor(struct coordinates *c);

int main() {

    struct coordinates first;
    printf("Enter x1: ");
    scanf("%i", &first.x);
    printf("Enter y1: ");
    scanf("%i", &first.y);

    first.color = findColor(&first);

    struct coordinates second;
    printf("Enter x2: ");
    scanf("%i", &second.x);
    printf("Enter y2: ");
    scanf("%i", &second.y);

    second.color = findColor(&second);

    if (first.color == second.color) {
        printf("first and second coordinates have one colors");
    } else {
        printf("first and second coordinates have different colors");
    }

    return 0;
}

int findColor(struct coordinates *c){
    int x = c->x;
    int y = c->y;

    int result = (x % 2 ==0) && (y % 2 != 0);
    int anotherResult = (x % 2 !=0) && (y % 2 == 0);

    if (result || anotherResult){
        return 1;
    } else {
        return 0;
    }
}