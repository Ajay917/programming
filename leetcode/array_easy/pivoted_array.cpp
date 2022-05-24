 int search(int arr[], int start, int end, int key){
        
        while(start <= end){
            int mid = (start+end)/2;
            if(arr[mid] == key){
                return mid;
            }
            if(arr[start] <= arr[mid]){
                if(arr[start] <= key && arr[mid] >= key) end = mid-1;
                else start = mid+1;
            }
            else if(arr[mid] <= arr[end]){
                if(arr[mid] <= key && arr[end] >= key ) start = mid+1;
                else end = mid-1;
            }
            
        }
        return -1;
    }