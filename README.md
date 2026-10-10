
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
