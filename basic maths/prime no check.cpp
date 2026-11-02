cnt = 0;

for(int i = 1; i<=n; i++){
    if(n % i==0){
        cnt++;
    }

    if(cnt == 2){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
        
}