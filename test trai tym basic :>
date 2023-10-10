#include <stdio.h>
#include <conio.h>
void traitym(int height) {   
    for (int i = height / 2; i <= height; i += 2) {
        for (int j = 1; j < height - i; j += 2) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        for (int j = 1; j <= height - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
 
        printf("\n");
    }

    for (int i = height; i >= 1; i--) {
        for (int j = i; j < height; j++) {
            printf(" ");
        }
        for (int j = 1; j <= (i * 2) - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
}
int main(){
	int x;int k=1;

	while (k=1){
	printf(" Nhap size cua trai tim:");
	scanf("%d",&x);
	traitym(x);
	}
	printf("Xong roi ne !!!! :>");
	getch();
}
