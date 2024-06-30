
#include <stdio.h>

struct card
{
    int face;
    int shape;
    int color;
};

int main()
{
    struct card deck[52] = {{1, 0, 0}, {2, 0, 0}, {1, 1, 0}};
    printf("%d \n", deck[0].face);
    printf("%d \n", deck[0].shape);
    printf("%d ", deck[1].face);
}