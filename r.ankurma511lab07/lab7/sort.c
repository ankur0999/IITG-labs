void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    }

void sort(int arr[], int m){
    
    for(int i=0;i<m-1;i++){
        int min_index = i;
        for(int j=i+1; j<m; j++){
            if(arr[min_index] > arr[j])
                min_index = j;
               }
                if(min_index != i){
                    swap(&arr[min_index], &arr[i]);
                 }
                 }   }
            
