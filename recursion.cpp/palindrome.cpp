void palindrome(){
    if(i>= n/2) return true;

    if(s[i]!= s[n-i-1]) return false;

    return f(i+1);
}