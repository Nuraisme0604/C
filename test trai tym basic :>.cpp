#include <stdio.h>
#include <conio.h>
#include <stdlib.h> // cái này cho hàm system("") dùng để xoá màn hình console hoặc là để đổi màu
#include <unistd.h> // khai báo cho hàm sleep ( nếu dùng)
void traitym(int height) {   // đệch mợ cái này để viết hàm vẽ trái tym nhá :)))))) 
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
        system("color C");// biến màu code thành màu light purple
	while (k=1){
	printf(" Nhap size cua trai tim:");
	scanf("%d",&x);
	traitym(x);
	getch();
	system("cls");// cái này dùng để xoá màn hình kiểu sau khi mà vẽ trái tym xong vẽ cái mới nó trở về ban đầu
	}
	printf("Xong roi ne !!!! :>");// 2 dòng này dư ra nếu muốn nó hoạt động thì chèn thêm cái lệnh k=2; vào trước cái ngoặc ngay ở trên
	getch();
}
