#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include <stdbool.h>

#include <string.h>

#include <ctype.h>

int UCLN(int a, int b) {
    if (a % b != 0) {
        return UCLN(b, a % b);
    } else {
        return b;
    }
}

int main(){
    int t, m;
    scanf("%d %d", &t, &m);
    int ucln = UCLN(t, m);
    t = t / ucln;
    m = m / ucln;
    if (m!=1)
    {
        if (m<0){
            m=m*-1;
            t=t*-1;
        }
        printf("%d/%d",t,m);
    }
    else{
        printf("%d",t);
    }
    return 0;
}