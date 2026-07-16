int countPrimes(int n) {
    int a=0;
    for (int i=0;i<n;i++){
        int count=0;
        for (int j=1;j<i+1;j++){
            if (i%j==0){
                count++;              
                }
        
            }
        if (count==2){
            a++;
        }
        }
    return a;
}