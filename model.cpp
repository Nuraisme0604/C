#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
void traitym() {
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
    while (1) { 
    char CMND1[] = "0604";
	char CMND2[] = "1602";
	char user[50], CCCD[12];
	int a,b;
	printf("Xin chao den voi chuong trinh cua toi ^^ \n");
	printf("-Cho 1 ty de tui load da ");
	        sleep(1);
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
    scanf("%s", user);
    printf("Nhap so ID cua ban:");
    scanf("%s",CCCD);
    system ("cls");
    if (strcmp(CCCD, CMND1) == 0){
    	printf("Chuc mung %s \nBan da duoc cap quyen truy cap admin \n",user);
    	sleep(1);
    	printf("cai nay chua biet lam cai gi ca\n");
    	sleep(2);
	}else if(strcmp(CCCD, CMND2) == 0){
		printf("->He thong xin chuc mung ban da nhan duoc quyen truy cap dac biet<-\n",user);
		sleep(2);
		printf("Minh said to %s: Nguoi iuu oiiiii, anh yeuuu emmmmmmm <3 \n",user);
		sleep(2);
		printf("->Hay don nhan lay tinh yeu cua tui<-\n");
		sleep(2);
		traitym();
		sleep(2);
		printf("Xong roi, nhan enter de tiep tuc ne^^");
		getch();
		system ("cls");
	}else{
		printf("Xin chao %s, chuc ban 1 ngay moi vui ve ^^ \n",user);
	sleep(1);
	    printf("Rat tiec, id cua ban khong co quyen truy cap dac biet nao:( \n");
	sleep(3);
}
        
        printf("\nChuong trinh se tiep tuc sau 2s");
        sleep(1);
        printf(".");
        sleep(1);
        printf(".");
        sleep(1);
        system ("cls");
        
        char choice;
        printf("\n Het rui, ban co muon ket thuc chuong trinh khong ? (y/n): ");
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
            exit(0);
        }
        
    }
    
    return 0;
}
