#include <stdio.h>
int main() {
    float radius;
    float area;
    printf("what is the radius of the circle?\n");
    scanf("%f", &radius);

    area = radius * radius * 3.14;

printf("%f", area);

return 0;
}