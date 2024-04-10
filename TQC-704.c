#include <stdio.h>
int main() {
    int n, half, flag=0;
    scanf("%d", &n);
    int count[n], num[n];
    if (n % 2) {
        half = (n+1) / 2;
    } else {
        half = n/2 + 1;
    }
    for (int i=0; i<n; i++) {
        scanf("%d", &num[i]);
        count[i] = 1;
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<i; j++) {
            if (num[i] == num[j]) {
                count[i]++;
            }
        }
    }
    for (int i=n-1; i>=0; i--) {
        if (count[i] >= half) {
            printf("%d", num[i]);
            flag = 1;
            break;
        }
    }
    if (flag == 0) {
        printf("error");
    }
}