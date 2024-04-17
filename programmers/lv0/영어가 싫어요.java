// 24-04-17 PM 04:34 ~ 04:37
class Solution {
    public long solution(String numbers) {
        String[][] map = {
            {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "zero"},
            {"1","2","3","4","5","6","7","8","9","0"}
        };
        for (int i = 0; i < 10; i++) {
            numbers = numbers.replaceAll(map[0][i], map[1][i]);
        }
        
        return Long.valueOf(numbers);
    }
}