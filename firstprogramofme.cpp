#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
/* Dme cái progr này là để viết 1 cái chương trình kiểu nhập tên và nhập 1 cái id củ mẹ nào đó do admin cung cấp cho người dùng
sau mà có nhập đúng thì nó trả cái gì đó, nhập sai thì nó trả về 1 cái gì đó kiểu kiểu thế */
void traitym() {   
/* Hàm này để vẽ trái tim = mấy cái "*" 
cơ mà thuật toán ra sao hỏi tao tao cũng chịu . 
Thấy người ta làm thì tao làm theo chứ đọc code lú vc */
int height = 9; 
    for (int i = height / 2; i <= height; i += 2) {
        for (int j = 1; j < height - i; j += 2) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
    sleep(1); 
        for (int j = 1; j <= height - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
    sleep(1);
        printf("\n");
    }
    sleep(1);
    for (int i = height; i >= 1; i--) {
        for (int j = i; j < height; j++) {
            printf(" ");
        }
        for (int j = 1; j <= (i * 2) - 1; j++) {
            printf("*");
        }
    sleep(1);
        printf("\n");
    }
}
int main() {
    int kiemsoat=1;
    while (kiemsoat==1) { 
	    // đoạn này ý tưởng là lạm dụng vòng lặp while để chương trình chạy lại từ đầu muốn end t khai con mẹ kiemsoat = 1 gia tri khác nó check sai => end
    char CMND1[] = "0604";// đây là chỗ để nhập id đây
	char CMND2[] = "1602";
	char user[50], CCCD[12];
	int a,b;
	printf("Xin chao den voi chuong trinh cua toi ^^ \n");
	printf("-Cho 1 ty de tui load da ");
	    sleep(1); // đoạn này để làm màu thôi, cho dấu "." nó nháy nháy cho nó sinh động!
            printf(".");
            sleep(1);
            printf(".");
            sleep(1);
            printf(".\n");
	printf(">Nhan phim bat ky de tiep tuc< \n");
	getch();
	system ("cls");
	printf("Ten cua ban la gi ?\n");
	printf("Nhap ten cua ban:");
    scanf("%[^\n]s", user); // đcm cái "%[^\n]s" để nhập cả dấu cách vào khó nhớ vkl => câu code này có nghĩa là nhập chuỗi cho đến khi gặp kí tự xuống dòng.
	                    // đau đầu quá thì dùng "fgets(user, sizeof(user), stdin);" => câu này có nghĩa là nhập chuõi tư bàn phím
    printf("Nhap so ID cua ban:");
    scanf("%s",CCCD);
    system ("cls");
    if (strcmp(CCCD, CMND1) == 0){
	    // cái hàm strcmp dùng khi khai báo thư viện <string.h> mà đcm cứ bị nhầm
    	printf("Chuc mung %s \nBan da duoc cap quyen truy cap admin \n",user);
    	sleep(1);
    	printf("cai nay chua biet lam cai gi ca\n");
    	printf("Sau day la code cua chuong trinh nay\n");
    	printf("https://github.com/Nuraisme0604/C/blob/main/model.cpp");
    	printf("\nNhan enter di");
    	getch();
    	sleep(2);
	    // xong code cho id1
	    // xong code cho id1 . Quan trong la dieu kien if thoi con lai code ben trong muon lam cai deo gi thi lam.
	}else if(strcmp(CCCD, CMND2) == 0){
	    // đoạn này code cho id2
		printf("->He thong xin chuc mung ban da nhan duoc quyen truy cap dac biet<-\n",user);
		sleep(2);
		printf("Admin said to %s: Nguoi iuu oiiiii, anh yeuuu emmmmmmm <3 \n",user);
		sleep(2);
		printf("->Hay don nhan lay tinh yeu cua tui<-\n");
		sleep(2);
		traitym();
		sleep(2);
		printf("Xong roi, nhan enter de tiep tuc ne^^");
		getch();// con này của thư viện <conio.h>
		system ("cls"); // con này là của thư viện <stdlib.h>
	}else{
	    //đoạn này code cho id khác
		printf("Xin chao %s, chuc ban 1 ngay moi vui ve ^^ \n",user);
	sleep(1);
	    printf("Rat tiec, id cua ban khong co quyen truy cap dac biet nao:( \n");
	sleep(3);
}
	    //đoạn này là sau khi kết thúc chương trình cho các id
        printf("\nChuong trinh se tiep tuc sau 2s");
        sleep(1);
        printf(".");
        sleep(1);
        printf(".");
        sleep(1);
        system ("cls");
        
        char choice;
        printf("\n Het rui, ban co muon ket thuc chuong trinh khong ? (y/n): ");// cái này là để chạy lại vòng lặp này. 
        scanf(" %c", &choice);
        system ("cls");
        if (choice == 'y' || choice == 'Y') {
            int time = 1;
            printf("Vui long cho 3 giay");
            sleep(1);
            printf(".");
            sleep(1);
            printf(".");
            sleep(1);
            printf(".");
            sleep(time);
            printf("\nXin chao va hen gap lai, nhan phim bat ky chuong trinh se tu dong tat \n");
            kiemsoat=2;// đây nếu đéo choice y thì nó vẫn =1 => vẫn chạy, đéo tin chạy code này xoá cmn dòng này đi xem, yêu nhau được ngay =)))) 
        }
        
    }
    exit(0);
    return 0;
}
