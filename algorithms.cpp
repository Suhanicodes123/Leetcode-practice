void algorithms(){
    sort(a, a+n);
    sort(v.begin(), v.end());

    sort(a+2, a+4);

    sort(a, a+n, greater<int>);//sort in descending order

    pair<int,int> a[] = {{1, 2}, {2,1}, {4,1}};
    sort(a, a+n, comp);//sort my way

    bool comp(pair<int, int> p1, pair<int, int> p2){

        if(p1.second>p1.first) return true;
        if(p1.second>p1.second) return false;
        if(p1.first>p2.first) return true;
        return false;

    }
}