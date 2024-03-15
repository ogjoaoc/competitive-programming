#include <stdio.h>

int main() {

    int l, c;
    scanf("%d %d", &l, &c);

    int t1 = l*c + (l-1)*(c-1);
    int t2 = 2*c + 2*l -4;

    printf("%d\n", t1);
    printf("%d\n", t2);


    return 0;

}
