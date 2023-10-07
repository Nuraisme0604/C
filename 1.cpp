#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
/* Dme cái progr này là d? vi?t 1 cái chuong trình ki?u nh?p tên và nh?p 1 cái id c? m? nào dó do admin cung c?p cho ngu?i dùng
sau mà có nh?p dúng thì nó tr? cái gì dó, nh?p sai thì nó tr? v? 1 cái gì dó ki?u ki?u th? */
void traitym() {   
/* Hàm này d? v? trái tim = m?y cái "*" 
co mà thu?t toán ra sao h?i tao tao cung ch?u . 
Th?y ngu?i ta làm thì tao làm theo ch? d?c code lú vc */
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
	    // do?n này ý tu?ng là l?m d?ng vòng l?p while d? chuong trình ch?y l?i t? d?u mu?n end t khai con m? kiemsoat = 1 gia tri khác nó check sai => end
    char CMND1[] = "0604";// dây là ch? d? nh?p id dây
	char CMND2[] = "1602";
	char user[50], CCCD[12];
	int a,b;
	printf("Xin chao den voi chuong trinh cua toi ^^ \n");
	printf("-Cho 1 ty de tui load da ");
	    sleep(1); // do?n này d? làm màu thôi, cho d?u "." nó nháy nháy cho nó sinh d?ng!
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
    scanf("%[^\n]s", user); // dcm cái "%[^\n]s" d? nh?p c? d?u cách vào khó nh? vkl => câu code này có nghia là nh?p chu?i cho d?n khi g?p kí t? xu?ng dòng.
	                    // dau d?u quá thì dùng "fgets(user, sizeof(user), stdin);" => câu này có nghia là nh?p chuõi tu bàn phím
    printf("Nhap so ID cua ban:");
    scanf("%s",CCCD);
    system ("cls");
    if (strcmp(CCCD, CMND1) == 0){
	    // cái hàm strcmp dùng khi khai báo thu vi?n <string.h> mà dcm c? b? nh?m
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
	    // do?n này code cho id2
		printf("->He thong xin chuc mung ban da nhan duoc quyen truy cap dac biet<-\n",user);
		sleep(2);
		printf("Admin said to %s: Nguoi iuu oiiiii, anh yeuuu emmmmmmm <3 \n",user);
		sleep(2);
		printf("->Hay don nhan lay tinh yeu cua tui<-\n");
		sleep(2);
		traitym();
		sleep(2);
		printf("Xong roi, nhan enter de tiep tuc ne^^");
		getch();// con này c?a thu vi?n <conio.h>
		system ("cls"); // con này là c?a thu vi?n <stdlib.h>
	}else{
	    //do?n này code cho id khác
		printf("Xin chao %s, chuc ban 1 ngay moi vui ve ^^ \n",user);
	sleep(1);
	    printf("Rat tiec, id cua ban khong co quyen truy cap dac biet nao:( \n");
	sleep(3);
}
	    //do?n này là sau khi k?t thúc chuong trình cho các id
        printf("\nChuong trinh se tiep tuc sau 2s");
        sleep(1);
        printf(".");
        sleep(1);
        printf(".");
        sleep(1);
        system ("cls");
        
        char choice;
        printf("\n Het rui, ban co muon ket thuc chuong trinh khong ? (y/n): ");// cái này là d? ch?y l?i vòng l?p này. 
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
            kiemsoat=2;// dây n?u déo choice y thì nó v?n =1 => v?n ch?y, déo tin ch?y code này xoá cmn dòng này di xem, yêu nhau du?c ngay =)))) 
        }
        
    }
    exit(0);
    return 0;
}
