
bool findPair(int arr[], int l, int n){
    unordered_map<int,int> mp;
    for(int i=0;i<l;i++){
        mp[arr[i]]++;
    }
    
    for(int i=0;i<l;i++){
        if(mp.find(n+arr[i])!=mp.end()){
            return true;
        }
    }
    return false;
}