#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
/* Dme c�i progr n�y l� d? vi?t 1 c�i chuong tr�nh ki?u nh?p t�n v� nh?p 1 c�i id c? m? n�o d� do admin cung c?p cho ngu?i d�ng
sau m� c� nh?p d�ng th� n� tr? c�i g� d�, nh?p sai th� n� tr? v? 1 c�i g� d� ki?u ki?u th? */
void traitym() {   
/* H�m n�y d? v? tr�i tim = m?y c�i "*" 
co m� thu?t to�n ra sao h?i tao tao cung ch?u . 
Th?y ngu?i ta l�m th� tao l�m theo ch? d?c code l� vc */
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
	    // do?n n�y � tu?ng l� l?m d?ng v�ng l?p while d? chuong tr�nh ch?y l?i t? d?u mu?n end t khai con m? kiemsoat = 1 gia tri kh�c n� check sai => end
    char CMND1[] = "0604";// d�y l� ch? d? nh?p id d�y
	char CMND2[] = "1602";
	char user[50], CCCD[12];
	int a,b;
	printf("Xin chao den voi chuong trinh cua toi ^^ \n");
	printf("-Cho 1 ty de tui load da ");
	    sleep(1); // do?n n�y d? l�m m�u th�i, cho d?u "." n� nh�y nh�y cho n� sinh d?ng!
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
    scanf("%[^\n]s", user); // dcm c�i "%[^\n]s" d? nh?p c? d?u c�ch v�o kh� nh? vkl => c�u code n�y c� nghia l� nh?p chu?i cho d?n khi g?p k� t? xu?ng d�ng.
	                    // dau d?u qu� th� d�ng "fgets(user, sizeof(user), stdin);" => c�u n�y c� nghia l� nh?p chu�i tu b�n ph�m
    printf("Nhap so ID cua ban:");
    scanf("%s",CCCD);
    system ("cls");
    if (strcmp(CCCD, CMND1) == 0){
	    // c�i h�m strcmp d�ng khi khai b�o thu vi?n <string.h> m� dcm c? b? nh?m
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
	    // do?n n�y code cho id2
		printf("->He thong xin chuc mung ban da nhan duoc quyen truy cap dac biet<-\n",user);
		sleep(2);
		printf("Admin said to %s: Nguoi iuu oiiiii, anh yeuuu emmmmmmm <3 \n",user);
		sleep(2);
		printf("->Hay don nhan lay tinh yeu cua tui<-\n");
		sleep(2);
		traitym();
		sleep(2);
		printf("Xong roi, nhan enter de tiep tuc ne^^");
		getch();// con n�y c?a thu vi?n <conio.h>
		system ("cls"); // con n�y l� c?a thu vi?n <stdlib.h>
	}else{
	    //do?n n�y code cho id kh�c
		printf("Xin chao %s, chuc ban 1 ngay moi vui ve ^^ \n",user);
	sleep(1);
	    printf("Rat tiec, id cua ban khong co quyen truy cap dac biet nao:( \n");
	sleep(3);
}
	    //do?n n�y l� sau khi k?t th�c chuong tr�nh cho c�c id
        printf("\nChuong trinh se tiep tuc sau 2s");
        sleep(1);
        printf(".");
        sleep(1);
        printf(".");
        sleep(1);
        system ("cls");
        
        char choice;
        printf("\n Het rui, ban co muon ket thuc chuong trinh khong ? (y/n): ");// c�i n�y l� d? ch?y l?i v�ng l?p n�y. 
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
            kiemsoat=2;// d�y n?u d�o choice y th� n� v?n =1 => v?n ch?y, d�o tin ch?y code n�y xo� cmn d�ng n�y di xem, y�u nhau du?c ngay =)))) 
        }
        
    }
    exit(0);
    return 0;
}
