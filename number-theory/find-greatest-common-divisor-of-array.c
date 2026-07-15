int findGCD(int* nums, int numsSize) {
    int a=nums[0];
    int b=nums[0];
    int c;

    for (int i=0;i<numsSize;i++){
        if (nums[i]<=a){
            a=nums[i];

        }
        if (nums[i]>=b){
        b=nums[i];
       }}
    for (int j=1;j<=b;j++){
        if (a%j==0 && b % j==0){
            c=j;
        }
    }
    return c;
}