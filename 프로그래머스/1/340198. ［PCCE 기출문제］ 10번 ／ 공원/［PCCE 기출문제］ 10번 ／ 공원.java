class Solution {
    public int solution(int[] mats, String[][] park) {
        int answer = -1;
        for (int mat : mats) {
            answer = Math.max(answer, check(mat, park));
        }
        return answer;
    }

    private int check(int mat, String[][] park) {
        int answer = -1;
        for (int i = 0; i < park.length; i++) {
            for (int j = 0; j < park[i].length; j++) {
                answer = Math.max(answer, a(mat, park, i, j));
            }
        }
        return answer;
    }
    
    private int a(int mat, String[][] park, int target_i, int target_j) {
        if (target_i + mat > park.length || target_j + mat > park[0].length) {
            return -1;
        }
        for (int i = target_i; i < target_i + mat; i++) {
            for (int j = target_j; j < target_j + mat; j++) {
                if (!park[i][j].equals("-1")) {
                    return -1;
                }
            }
        }
        return mat;
    }
}