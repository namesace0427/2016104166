#include <stdio.h>
 
int main() {
    for (int i = 1; i <= 9; i++) {  // 8을 9로 변경 하면 됨
        for (int j = 1; j <= 9; j++) {
            printf("%3d x %3d = %2d", j, i, (i*j));
        }
        printf("\n");
    }
 
    return 0;
}
