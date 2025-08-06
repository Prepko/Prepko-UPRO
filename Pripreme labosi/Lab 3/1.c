#include <stdio.h>

int main() {
    int m;
    printf("Upisite velicinu polja m > ");
    scanf("%d", &m);
    int a[m];

    printf("Upisite %d clanova polja m > ", m);
    for (int i = 0; i < m; i++) scanf("%d", &a[i]);

    int max_sum = a[0], current_sum = a[0], start = 0, end = 0, temp_start = 0;
    for (int i = 1; i < m; i++) {
        if (current_sum + a[i] < a[i]) {
            current_sum = a[i];
            temp_start = i;
        } else current_sum += a[i];
        if (current_sum > max_sum) {
            max_sum = current_sum;
            start = temp_start;
            end = i;
        }
    }

    printf("Pronadjeno pod-polje:");
    for (int i = start; i <= end; i++) printf(" %d", a[i]);

    printf("\nNajveca suma kontinuiranog pod-polja je: %d", max_sum);
    return 0;
}
