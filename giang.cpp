#include<iostream>
using namespace std;
class Hopdonglaodong{
	private:
    	char maHD[10];
    	char hoten[30];
    	char loaiHD[30];
        int ngayky, thangky, namky;
		int ngayhet, thanghet, namhet;
    	int luong,phucap;
    public:
    	Hopdonglaodong(){
            maHD[0] = '\0';
            hoten[0] = '\0';
            loaiHD[0] = '\0';
            ngayky = 0;
            thangky = 0;
            namky = 0;
            ngayhet = 0;
            thanghet = 0;
            namhet = 0;
            luong = 0;
            phucap = 0;
        }
    	void nhap(){
    		cout << "Nhap ma hop dong: ";
        	cin >> maHD;
         	cin.ignore();
        	cout << "Nhap ho ten nhan vien: ";
         	cin.getline(hoten,30);
          	cout << "Nhap loai hop dong (Thu viec/Thoi vu/Lau dai): ";
        	cin.getline(loaiHD,30);
        	cout << "Nhap ngay ky (ngay thang nam): ";
        	cin >> ngayky >> thangky >> namky;
         	cout << "Nhap ngay het han (ngay thang nam): ";
        	cin >> ngayhet >> thanghet >> namhet;
        	cout << "Nhap muc luong co ban: ";
        	cin >> luong;
        	cout << "Nhap phu cap: ";
        	cin >> phucap;
        }
		void xuat(){
			cout << "Ma hop dong:  " << maHD << "\n";
            cout << "Ho ten: " << hoten << "\n";
            cout << "Loai hop dong (Thu viec/Thoi vu/Lau dai): " << loaiHD << "\n";
            cout << "Ngay ki: " << ngayky << "/" << thangky << "/" << namky  << "\n";
            cout << "Ngay het han: " << ngayhet << "/" << thanghet << "/" << namhet  << "\n";
            cout << "Luong co ban: " << luong << "\n";
            cout << "Phu cap: " << phucap << "\n";
        }
    	friend void nhapds(Hopdonglaodong a[], int &n);
		friend void xuatds(Hopdonglaodong a[], int n);
};
void nhapds(Hopdonglaodong a[200], int &n){
	int i;
	do{
		cout << "Nhap so luong hop dong: ";
		cin >> n;
	}while(n < 0 || n > 200);
	
	for(i=0; i<n; i++){
		cout << "\nNhap thong tin hop dong thu " << i+1 << ":" << endl;
		a[i].nhap();
	}
}
void xuatds(Hopdonglaodong a[200], int n){
	int i;
	cout << "--------------------------------" << "\n";
	cout << "DANH SACH HOP DONG LAO DONG" << "\n";
	for(int i=0; i<n; i++){
		cout << "---Hop dong thu " << i+1 << "---" << endl;
		a[i].xuat();
	}
}
int main(){
	Hopdonglaodong a[200];
	int n,k;
	nhapds(a,n);
	xuatds(a,n);
	xuatds(a,n);
}


