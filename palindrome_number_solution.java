class Solution {
    public boolean isPalindrome(int x) {
              if(x < 0){
            return false;
        }
        if(x < 10){
            return true;
        }
        int f = 0;
        int y = x;
        while(x != 0){
            int t = x % 10;
            f = f * 10 + t;
            x /= 10;
        }
        if(f == y){
            return true;
        }
        return false;
    }
}
