// 24-04-17 05:30 ~ 05:33
import java.util.*;
class Solution {
    public int solution(int[] sides) {
        int max = sides[0];
        for (int i = 1; i < sides.length; i++) {
            max = Math.max(sides[i], max);
        }
        if (max < Arrays.stream(sides).sum() - max) {
            return 1;
        }
        return 2;
    }
}