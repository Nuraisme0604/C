#include <bits/stdc++.h>
#include <conio.h>
#include <iomanip>
using namespace std;
// chuong trinh tinh tien dien
/* Cần tính giá điện của từng phòng theo sóo của nhà nước 
    Ta có : gt1<= số điện <= gt2 => tiền phải trả
            bảng giá như sau
            0->50 :1728
            51->100: 1786
            101->200 :2074
            201->300 : 2612
            301->400 : 2919
            lớn hơn 401 :3015
*/
float thamsocuaphong(int sd)
{
    // hàm này để tính ra phòng trả tiền điện theo mức số nào 
    if (sd>=0 && sd<51) return 1728;
    if (sd>=51 && sd<101) return 1786;
    if (sd>=101 && sd<201) return 2074;
    if (sd>=201 && sd<301) return 2612;
    if (sd>=301 && sd<401) return 2919;
    if (sd>=401) return 3015;
    return 0;
}
int main () 
{
    int key = 1;
    while (key == 1)
    {
        int sd2,sd3,sodau2,sodau3,socuoi2,socuoi3;
        float tiendientang2, tiendientang3, tiendienchung, tongtiendien;
        cout << "Tong tien dien thang nay la ";
        cin >> tongtiendien;
        cout << "So dien tang 2 thang nay la :";
        cin >> sodau2;
        cout << "So dien tang 2 thang truoc la : ";
        cin >> socuoi2;
        sd2 = sodau2-socuoi2;
        if (sd2<0)
        {
            cout << "Error. So dien khong the nho hon 0"<< endl << "Vui long thuc hien lai chuong trinh";
            getch();
            return 0;
        }
        cout<<"------------------------------------------------------------------"<<endl;
        cout << "So dien tang 3 thang nay la : ";
        cin >> sodau3;
        cout << "So dien tang 3 thang truoc la : ";
        cin >> socuoi3;
        sd3=sodau3-socuoi3;
        if (sd3<0)
        {
            cout << "Error. So dien khong the nho hon 0"<< endl << "Vui long thuc hien lai chuong trinh";
            getch();
            return 0;
        }
        cout<<"------------------------------------------------------------------"<<endl;
        cout << setprecision(2)<<fixed; // làm tròn đến số thập phân thứ 2 & ngăn cấm in r a dạng xxEx
        cout << "So dien su dung cua tang 2 la : "<<sd2<<endl;
        cout << "So dien su dung cua tang 3 la : "<<sd3<<endl;
        cout<<"------------------------------------------------------------------"<<endl;
        #define tdc tiendienchung // làm gọn biến
        #define td2 tiendientang2
        #define td3 tiendientang3
        float tdr2, tdr3;
        tdc = tongtiendien-sd2*thamsocuaphong(sd2)-sd3*thamsocuaphong(sd3) ;
        td2 = tdc/3 + sd2*thamsocuaphong(sd2);
        td3 = tdc/3*2 + sd3*thamsocuaphong(sd3);
        cout << "Tien dien sinh hoat chung = " << fixed << tdc << "\n";
        cout << "Tien dien sinh hoat rieng cua tang 2 = "<<fixed<< sd2*thamsocuaphong(sd2)<<endl;
        cout << "Tien dien sinh hoat rieng cua tang 3 =  "<<fixed<< sd3*thamsocuaphong(sd3)<<endl;
        cout<<"------------------------------------------------------------------"<<endl;
        cout << "So tien tang 2 phai tra = "<< td2 <<endl;
        cout << "So tien tang 3 phai tra = "<< td3 <<endl<<endl<<"Press any key to continued";
        getch();
        system("cls");
    }
}
