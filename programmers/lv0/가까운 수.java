// 24-04-17 PM 05:13 ~ 05:19
class Solution {
    public int solution(int[] array, int n) {
        int diff = 100;
        int answer = 1001;
        
        for (int i : array) {
            int temp = n - i;
            if (temp < 0) temp *= -1;
            
            if(diff == temp) {
                answer = answer > i ? i : answer;
            } else if (diff >= temp) {
                diff = temp;
                answer = i;
            }
        }
        
        return answer;
    }
}