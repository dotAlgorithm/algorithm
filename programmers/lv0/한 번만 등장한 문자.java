// 24-04-17 PM 03:16 ~ 03:25

class Solution {
    public String solution(String s) {
        int ch[] = new int[26];
        for (char c : s.toCharArray()) {
            ch[c-'a']++;
        }
        String answer = "";
        for (int i = 0; i < 26; i++) {
            if (ch[i] == 1) answer += (char)(i+'a');
        }
        return answer;
    }
}