class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0,product=1;
        while(n>0){
            int remender=n%10;
            sum+=remender;
            product*=remender;
            n=n/10;
        }
        return product-sum;
    }
};
