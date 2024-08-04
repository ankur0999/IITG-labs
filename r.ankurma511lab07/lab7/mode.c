int mode(int arr[], int m){
    int max_value = 0, max_count = 0, i, j;
    for(i =0; i<m; i++){
        int count =0;
        for(j =0; j<m; j++){
            if(arr[i] == arr[j]){
                count++;
                }
            if(count>max_count){
                max_count = count;
                max_value = arr[i];
                }
                }
                }
                return max_value;
                }
                
