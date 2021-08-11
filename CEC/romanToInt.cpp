class Solution {
public:
    int romanToInt(string s) {
     int l = int(s.length());
     if(0==l){
         return 0;
     }
      
      int a=0;
        for(int i=0;i<l;i++){
            switch(s[i]){
                    case'I':
                        a += 1;
                        break;
                    case'V':
                        a += 5;
                        break;
                    case'X':
                        a += 10;
                        break;
                    case'L':
                        a += 50;
                        break;
                    case'C':
                        a += 100;
                        break;
                    case'D':
                        a += 500;
                        break;
                    case'M':
                        a += 1000;
                        break;
            }
        }
        
        for(int i=1;i<l;i++){
            if((s[i]=='V'||s[i]=='X')&&s[i-1]=='I'){
                a-=1+1;
            }
            if((s[i]=='L'||s[i]=='C')&&s[i-1]=='X'){
                a-=10+10;
            }
            if((s[i]=='D'||s[i]=='M')&&s[i-1]=='C'){
                a-=100+100;
            }
        }
        return a;
    }
};