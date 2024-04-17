// 24-04-17 PM 05:03 ~ 05:07
class Solution {
    public int solution(int order) {
        int answer = 0;
        while (order > 0) {
            int mod = order % 10;
            if (mod != 0 && mod % 3 == 0) answer++;
            order /= 10;
        }
        return answer;
    }
}