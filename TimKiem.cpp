void timKiem(Hopdonglaodong a[], int n){
	char maCantim[10];
	int timThay = 0;
	cout<<"Nhap ma hop dong can tim: ";
	cin>>maCantim;
	for(int i = 0; i < n; i++){
		if(strcmp(a[i].maHD, maCantim)==0){
			cout<<"\nTim thay hop dong!\n";
			cout<<"Thong tin hop dong:"<<endl;
			a[i].xuat();
			timThay= 1;
			break;
		}
	}
	if(timThay==0){
		cout<<"\nKhong tim thay hop dong!"<<endl;
	}
}
