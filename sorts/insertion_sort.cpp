//decreasing order insertion sort
void insertion_sort_dec (int arr[], int length){
	 	int j, temp;
		
	for (int i = 0; i < length; i++){
		j = i;
		
		while (j > 0 && arr[j] < arr[j-1]){
			  temp = arr[j];
			  arr[j] = arr[j-1];
			  arr[j-1] = temp;
			  j--;
			  }
		}
}

//increasing order insertion sort
void insertion_sort_inc (int arr[], int length){
		int j, temp;

	for	(int i = length; i > 0; i--){
		j = i;

		while( j < length && arr[j-1] < arr [j]){
			temp = arr[j-1];
			arr[j-1] = arr [j];
			arr[j] = temp;
			j++;
			}
	}
}	