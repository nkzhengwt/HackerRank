#include <stdio.h>
#include <math.h>
void update(int *a,int *b) {
    // Complete this function
    int a1;
    int b1;
    int abs(int i);
    a1 = *a + *b;
    b1=abs(*a-*b);
    *a=a1;
    *b=b1;

}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

