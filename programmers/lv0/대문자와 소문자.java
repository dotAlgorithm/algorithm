// 24-04-17 PM 04:43 ~ 04:46
class Solution {
    public String solution(String my_string) {
        String answer = "";
        char[] temp = my_string.toCharArray();
        
        for (int i = 0; i < temp.length; i++) {
            if (temp[i] >= 'a' && temp[i] <= 'z') {
                temp[i] -= 32;
            } else {
                temp[i] += 32;
            }
        }
        return String.valueOf(temp);
    }
}