void func(i, n){
    if(i<1) return;
    func(i-1,n)
    cout<<"i";
}

int main(){
    int n;
    cin>>n;
    func(n, n);
}