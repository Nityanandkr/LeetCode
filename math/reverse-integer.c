int reverse(int x){
    int a,b=0;
    int c=x;
    while (c != 0){
        a=c%10;
        if (b>INT_MAX){
            return 0;
        }
        else if (b<INT_MIN){
            return 0;
        }
        b=b*10+a;
        c=c/10;
    }
    return b;
    

}