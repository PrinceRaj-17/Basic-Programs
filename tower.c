#include <stdio.h>

void towerOfHanoi(int n, char from, char to, char aux){
    if(n == 1){
        printf("Move Disk 1 from rod %c to rod %c. \n", from, to);
        return;
    }
    towerOfHanoi(n-1, from, aux, to);
    printf("Move disk %d from rod %c to rod %c. \n", n, from, to);
    towerOfHanoi(n-1, aux, to, from);
}

int main(){
    int n;
    printf("Enter the Number Of Disks: ");
    scanf("%d", &n);
    printf("\n");
    towerOfHanoi(n, 'A', 'B', 'C');
    return 0;
}
