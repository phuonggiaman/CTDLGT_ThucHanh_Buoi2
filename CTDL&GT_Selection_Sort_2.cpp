// Nguon: bai bao cao của nhom
#include<stdio.h>

void nhap(int a[], int &n ){
 	printf("Nhap so phan tu : ");
	scanf("%d", &n);
 	for(int i = 0; i < n; i++) {
 		printf("a[%d] = ", i + 1);
 		scanf("%d", &a[i]);
	}
}

void xuat(int a[], int &n ) {
 	for(int i = 0; i < n; i++) {
 		printf("%5d", a[i]);
	 }
}
void swap(int &i, int &j ) {
	int min = i;
	i = j;
	j = min;
}

void selectionSort(int a[], int &n) {
	for(int i = 0; i < n - 1; i++) {
		int min = i;
		for(int j = i + 1; j < n; j++) {
			if(a[j] < a[min]) {
				min = j;
			}
		}	
		swap(a[min], a[i]);
	}
}
 

 
int main() {
	int a[100], n;
	nhap(a, n);
	printf("\nMang vua nhap la: ");
	xuat(a, n);
	selectionSort(a, n);
	printf("\nMang da sap xep: ");
	xuat(a, n);
 	return  0;
}
