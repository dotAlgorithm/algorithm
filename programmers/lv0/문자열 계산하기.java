class Solution {
    public int solution(String my_string) {
        String[] s = my_string.split(" ");
        int sum = Integer.valueOf(s[0]);
        for (int i = 2; i < s.length; i += 2) {
            if (s[i-1].equals("-")) {
                sum -= Integer.valueOf(s[i]);
            } else {
                sum += Integer.valueOf(s[i]);
            }
        }
        return sum;
    }
}