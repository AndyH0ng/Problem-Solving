//
//  main.c
//  BJ1676
//
//  Created by 홍준우 on 6/24/24.
//

#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    printf("%d", n / 5 + n / 25 + n / 125);
    return 0;
}
