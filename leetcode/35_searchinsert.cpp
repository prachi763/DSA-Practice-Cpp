

int bSearch(int length, int arr[], int element){
    int s=0, e=length-1;
    while(s<=e){
        int mid = (s+e)/2;

        if(arr[mid]==element){
            return mid;
        }
        else if(arr[mid]<element){
            s=mid+1;
        }
        else if(arr[mid]>element){
            e=mid-1;
        }
    }
    return -1;
}