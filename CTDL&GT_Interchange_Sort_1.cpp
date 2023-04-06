//Nguon: https://codelearn.io/sharing/cac-thuat-toan-sap-xep-trong-cpp
void Swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void InterchangeSort(int a[], int n){	
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
	        if(a[i] > a[j])  //nếu có nghịch thế thì đổi chỗ
		        Swap(a[i], a[j]);
}
