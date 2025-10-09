import java.util.HashMap;

        /**
         schedules % 100 + 10 < 60 -> schedules = schedules + 10
         schedules % 100 + 10 >= 60 -> schedules = schedules + 50
         
         startday = 1
         for문  i = 5,6 continue
         
         startday = 2
         for문 i = 4,5 continue
         
         startday = 2
         for문 i = 3,4 continue
         
         startday + i + 1 -> 6 or 7 continue
        **/

class Solution {
    public int solution(int[] schedules, int[][] timelogs, int startday) {
        int answer = 0;

        HashMap<Integer, Integer> map = new HashMap<>();

        
        for (int i = 0; i < schedules.length; i++) {
            if (schedules[i] % 100 + 10 < 60) {
                schedules[i] = schedules[i] + 10;
            } else {
                schedules[i] = schedules[i] + 50;
            }
            map.put(i + 1, schedules[i]);
        }

        for (int i = 0; i < schedules.length; i++) {
            boolean pass = true;
            
            for (int j = 0; j < 7; j++) {
                 if ((startday + j) % 7 == 6 || (startday + j) % 7 == 0) {
                    continue;
                }
                
                if (map.get(i + 1) < timelogs[i][j]) {
                    pass = false;
                    break;
                }
            }
            if (pass) {
                answer++;
            }
        }

        return answer;
    }
}