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


