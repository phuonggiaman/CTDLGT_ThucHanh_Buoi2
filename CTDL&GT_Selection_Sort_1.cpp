// Nguon: bai bao cao của nhom
void Swap(int &i, int &j){
    int min = i;
    i = j;
    i = min;
}

void SelectionSort(int a[], int &n){	
    for (int i = 0; i < n - 1; i++){
      int min=i;
        for (int j = i + 1; j < n; j++)
	        if(a[j] < a[min]){
            min=j;
            }
		        Swap(a[min], a[]);
     }
}
