#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>
int main() {
	system("Color 9");
	int kiemsoat=1;
    while (kiemsoat==1) { 
		float a,b,c,d,e,re;
		printf("Xin chao den voi phan mem tinh muc tieu tot nghiep^^");
		printf("\n\nLuu y 1: Trong phan CPA dung dau (.),khong dung dau (,) ");
		printf("\n\nLuu y 2: So tin tich luy hoac tong so tin phai la so nguyen nhe ^^ ");
		printf("\n\n...Press Enter to continued...");
		getch();
        system("cls");
		printf("Nhap tong so tin ma ban phai hoc:");
        scanf("%f",&c);
        if (c>200){
        	printf("\nMay hoc tien si a hoc ma lam the ? ");
        	printf("\n\nPress Enter to continued....");
        	getch();
        	system("cls");
		}else if(c<0){
			printf("\n??????:D");
			printf("\n\nPress Enter to continued....");
        	getch();
        	system("cls");
		}
		else{
			printf("\nNhap CPA muc tieu cua ban :");
			scanf("%f",&a);
			if(a>4||a<0){
				printf("\nUa?:D ngao game a???? :)))))");
				getch();
        	    system("cls");
			}else{
				printf("\nNhap CPA hien tai cua ban : ");
				scanf("%f",&b);
				if(b>4||b<0){
					printf("\nUa???? CPA >4 ??? M la sieu nhan a ?:)))))");
				    getch();
        	        system("cls");
				}else{
					printf("\nNhap so tin ma ban da tich luy duoc :");
			        scanf("%f",&d);
			        if(d>c||d<0){
			        	printf("\nDm, m tich luy nhieu hon tong so tin m phai hoc roi day :)))))))");
				        getch();
        	            system("cls");
					}else{
					    re=(a*c-b*d)/(c-d)+0.01;
					    if(re<4.0){
					    printf("\nDe dat duoc muc tieu, trung binh cac mon con lai ban can dat it nhat %.2f",re);
					    getch();
        	            system("cls");
						}else{
							printf("\nDeo on roi, phai hoc cai thien moi dat duoc:)))");
							getch();
        	            system("cls");
						}
					}
				}
			}
		}
		
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
            getch();
            kiemsoat=2;
        }else if(choice == 'n' || choice == 'N'){
        	kiemsoat=1;
		}
		else{
			printf("ua ban nhap cai dech gi vay?");
			printf("\n\nProgram Error, end game:)))))). Press Enter OK? :)))) ");
			getch();
			kiemsoat=2;
		}
        
    }
    exit(0);
    return 0;
}
