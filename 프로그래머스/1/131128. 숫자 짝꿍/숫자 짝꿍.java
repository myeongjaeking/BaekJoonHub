class Solution {
    public String solution(String X, String Y) {
        int[] countX = new int[10];
        int[] countY = new int[10];
        
        for (char c : X.toCharArray()) {
            int num = Integer.parseInt(String.valueOf(c));
            countX[num]++;
        }
    
        for (char c : Y.toCharArray()) {
            int num = Integer.parseInt(String.valueOf(c));
            countY[num]++;
        }
        
        StringBuilder result = new StringBuilder();
        for (int i = 9; i >= 0; i--) {
            int count = Math.min(countX[i], countY[i]);
            for (int j = 0; j < count; j++) {
                result.append(i);
            }
        }
        
        if (result.length() == 0) {
            return "-1";
        }
        
        if (result.charAt(0) == '0') {
            return "0";
        }
        
        return result.toString();
    }
}