# Nh-m-1---B-i-t-p-A2
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
