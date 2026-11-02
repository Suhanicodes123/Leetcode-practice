int count(int n){
    int cnt=0;
    while(n>0){
        last digit = n%10;//extraction of digits
        //int cnt = (int)log10(n);
        cnt = cnt + 1;
        n = n/10;
    }
    return cnt;
}
