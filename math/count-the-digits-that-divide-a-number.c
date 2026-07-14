int countDigits(int num) {
    int b,a=0;
    int c=num;

    while (num!=0){
        b=num%10;
        if (c%b==0){
            a++;
        }
        num=num/10;
    }
    return a;
}