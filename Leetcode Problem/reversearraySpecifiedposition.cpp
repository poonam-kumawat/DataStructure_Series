void reverseArray(vector<int> &arr,int m){
    int s=m+1;e=arr.size()-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}