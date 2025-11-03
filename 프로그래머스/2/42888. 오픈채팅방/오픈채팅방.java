import java.util.*;

class Solution {
    public String[] solution(String[] record) {
        Map<String, String> userNickname = new HashMap<>();
        
        for (String oneRecord : record) {
            String[] elements = oneRecord.split(" ");
            String action = elements[0];
            String userId = elements[1];
            
            if (action.equals("Enter") || action.equals("Change")) {
                String nickname = elements[2];
                userNickname.put(userId, nickname);
            }
        }
        
        int count = 0;
        for (String oneRecord : record) {
            String[] elements = oneRecord.split(" ");
            String action = elements[0];
            
            if (action.equals("Enter") || action.equals("Leave")) {
                count++;
            }
        }
        
        String[] answer = new String[count];
        int i = 0;
        for (String oneRecord : record) {
            String[] elements = oneRecord.split(" ");
            String action = elements[0];
            String userId = elements[1];
            String nickname = userNickname.get(userId);
            
            if (action.equals("Enter")) {
                answer[i] = nickname + "님이 들어왔습니다.";
                i++;
            } else if (action.equals("Leave")) {
                answer[i] = nickname + "님이 나갔습니다.";
                i++;
            }
        }
        
        return answer;
    }
    
}