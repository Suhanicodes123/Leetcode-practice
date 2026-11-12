
int arr=[];
void f(l, r){
    if(l >=r) return;

    swap(arr[l], arr[r]);
    f(l+1, r-1);

}

int main(){
    int arr;
    cin>>arr;
    f(0,n-1);
}