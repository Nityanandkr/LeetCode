int reverse(int x){
    int a,b=0;
    int c=x;
    while (c != 0){
        a=c%10;
        b=b*10+a;
        c=c/10;
    }
    return b;
    

}