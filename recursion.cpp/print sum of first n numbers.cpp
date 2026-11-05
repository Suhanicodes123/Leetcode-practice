void f(int i, int sum){
    if(i<1){
        print(sum);
        return;
    }
    f(i-1, sum+i);
}

int main(){
    int n;
    cin>>n;
    f(n, 0);
}

//functional recursion

int sum(int n){
    if(n==0) return 0;

    return n +sum(n - 1);
}

int main{
    int n;
    cin>>n;
    cout<<sum(n);

}