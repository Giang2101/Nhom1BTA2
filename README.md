
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
=======

# Nh-m-1---B-i-t-p-A2
```cpp 
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
```
=======
=======

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
=======
# Nhom 1 chu de 15

