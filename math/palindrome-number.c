bool isPalindrome(int x) {
    long long a,b=0;
    long long c=x;
    if (x<0){
        return false;
    }
    while(x !=0){
        a=x%10;
        b=b*10+a;
        x=x/10;
    }
    
    if (c==b){
        return true;
    }
    else{
        return false;
}}