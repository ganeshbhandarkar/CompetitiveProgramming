int solve(int n) {
    long long sum = 0;
    int cnt = 0;
    if(n==0)return 0;
    for(int i=1;i<100000;i++){
        
        if(i&1)sum+=i,cnt++;
        if(cnt==n)break;
    }
    return sum;
}