class Solution {
public:
    int findComplement(int num) {
        string str = "";
        while(num>0){
            if(num%2==1){
                str+="0";
            }
            else{
                str+="1";
            }
            num/=2;
        }
        cout<<str;
        int result=0;
        for(int i=0;i<str.size();i++){
            if(str[i]=='1'){
                result+=pow(2,i);
            }
            else{
                result+=0;
            }
        }
        return result;
    }
};
