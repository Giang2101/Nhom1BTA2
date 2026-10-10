int main(){
	Hopdonglaodong a[200];
	int n,k;
	nhapds(a,n);
	cout << "-------------------------------------\n";
	cout << "DANH SACH HOP DONG LAO DONG" << "\n";
	xuatds(a,n);
	cout << "-------------------------------------\n";
	timKiem(a,n);
	cout << "-------------------------------------\n";
	sapxep(a,n);
	cout << "DANH SACH HOP DONG LAO DONG SAU SAP XEP\n";
	xuatds(a,n);
	cout << "-------------------------------------\n";
	bosung(a,n,k);
	cout << "DANH SACH HOP DONG LAO DONG SAU BO SUNG\n";
	xuatds(a,n);
	cout << "-------------------------------------\n";
	xoa(a,n,k);
	cout << "DANH SACH HOP DONG LAO DONG SAU KHI XOA\n";
	xuatds(a,n);
}

