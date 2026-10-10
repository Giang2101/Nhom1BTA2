#include<iostream>
#include<cstring>
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
		friend void sapxep(Hopdonglaodong a[], int n);
		friend void timKiem(Hopdonglaodong a[], int n);
		friend void bosung(Hopdonglaodong a[], int &n, int k);
		friend void xoa(Hopdonglaodong a[], int &n, int k);
};
void nhapds(Hopdonglaodong a[200], int &n){
	int i;
	do{
		cout << "Nhap so luong hop dong: ";
		cin >> n;
	}while(n <= 0 || n >= 200);
	for(i=0; i<n; i++){
		cout << "\nNhap thong tin hop dong thu " << i+1 << ":" << endl;
		a[i].nhap();
	}
}
void xuatds(Hopdonglaodong a[200], int n){
	int i;
	for(int i=0; i<n; i++){
		cout << "-----Hop dong thu " << i+1 << "-----" << endl;
		a[i].xuat();
	}
}
void sapxep(Hopdonglaodong a[], int n){
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){			
			if(a[i].namhet > a[j].namhet ||
			   (a[i].namhet == a[j].namhet && 
			    a[i].thanghet > a[j].thanghet) ||
			   (a[i].namhet == a[j].namhet && 
			    a[i].thanghet == a[j].thanghet && 
			    a[i].ngayhet > a[j].ngayhet))
			{
				Hopdonglaodong tam;
				tam = a[i];
				a[i] = a[j];
				a[j] = tam;
			}
		}
	}
}
void timKiem(Hopdonglaodong a[], int n){
	char maCantim[10];
	int timThay = 0,i;
	cout<<"Nhap ma hop dong can tim: ";
	cin>>maCantim;
	for(i = 0; i < n; i++){
		if(strcmp(a[i].maHD, maCantim)==0){
			cout<<"\nTim thay hop dong!\n";
			cout<<"Thong tin hop dong:"<<endl;
			a[i].xuat();
			timThay= 1;
			break;
		}
	}
	if(timThay==0){
		cout<<"\nKhong tim thay hop" << maCantim <<endl;
	}
}
void bosung(Hopdonglaodong a[], int &n, int k){
	int i;
	if(n >= 200){
		cout << "Danh sach da day! Khong the them!";
		return;
	}
    do{
    	cout << "\nVi tri hop dong muon them 1-"<< n+1 << ": ";
    	cin >> k;
    	if(k < 1  || k > n+1){
    		cout << "Vi tri khong phu hop! Vui long nhap lai!";
		}
	}while (k < 1 || k > n+1 );
    for(i = n ; i >= k; i--){
        a[i] = a[i-1];
    }
    cout << "Nhap hop dong can bo sung:\n";
    a[k-1].nhap();
    n++;
}
void xoa(Hopdonglaodong a[], int &n, int k){
    do {
        cout << endl;
        cout << "Nhap vi tri muon xoa tu 1-" << n << ": "; 
        cin >> k;
        if (k < 1 || k > n) { 
            cout << "Vi tri khong hop le! Vui long nhap lai.\n";
        }
    } while (k < 1 || k > n); 

    k--; 

    for(int i=k; i<n-1; i++){
        a[i]=a[i+1];
    }
    n--;
}
int main(){
	Hopdonglaodong a[200];
	int n=0,k,chon;
	do{
		cout << "\n================MENU================\n";
     	cout << "1. Nhap danh sach hop dong.\n";
    	cout << "2. Xuat danh sach hop dong.\n";
    	cout << "3. Sap xep danh sach theo thu tu ngay het han tang dan.\n";
    	cout << "4. Tim kiem hop dong theo ma.\n";
    	cout << "5. Bo sung 1 hop dong o 1 vi tri cho truoc trong danh sach.\n";
    	cout << "6. Xoa 1 hop dong o 1 vi tri cho truoc trong danh sach.\n";
    	cout << "0. Thoa man!\n";
	    cout << "======================================\n";
    	cout << "Nhap lua chon: ";;
		cin >> chon;
		switch (chon){
			case 1:
				nhapds(a,n);
				break;
			case 2:
				cout << "DANH SACH HOP DONG LAO DONG\n";
				xuatds(a,n);
				break;
			case 3:
				sapxep(a,n);
				cout << "DANH SACH HOP DONG LAO DONG SAU KHI SAP XEP\n";
				xuatds(a,n);
				break;
			case 4:
				timKiem(a,n);
				break;
			case 5:
				bosung(a,n,k);
				cout << "DANH SACH HOP DONG LAO DONG SAU KHI BO SUNG\n";
				xuatds(a,n);
				break;
			case 6:
				xoa(a,n,k);
				cout << "DANH SACH HOP DONG LAO DONG SAU KHI XOA\n";
				xuatds(a,n);
				break;
			case 0:
				cout << "Chuong trinh ket thuc!\n";
				break;
			default:
				cout << "Lua chon khong hop le!\n";	
		}
	}while (chon != 0);
}

