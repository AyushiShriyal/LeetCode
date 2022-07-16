class Solution {
public boolean isPalindrome(int x) {

    if(x<0){
        return false;
    }
    int i=x,rev=0;
    while(i>0){
        rev = rev*10+i%10;
        i/=10;
    }
    return rev==x;
}
}