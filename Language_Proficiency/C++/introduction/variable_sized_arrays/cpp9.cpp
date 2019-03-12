#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT scanf("%d %ld %c %f %lf", &a,&b,&c,&d,&e);*/
    int n,q,b,c,d;
    scanf("%d %d",&n,&q);
    int x = pow(10,5);
    int temp[n];
    int **outer = new int *[n];
    for(int i =0;i < n; i++){
        scanf("%d", &temp[i]);
        outer[i] = new int[temp[i]];
        for (int j = 0; j < temp[i]; j++) {
          scanf("%d", &d);
          outer[i][j] = d;        
        }
    }
    for(int i = 0 ;i<q;i++){
        scanf("%d %d",&b,&c);
        printf("%d\n",outer[b][c]);
    }   
    return 0;
}

