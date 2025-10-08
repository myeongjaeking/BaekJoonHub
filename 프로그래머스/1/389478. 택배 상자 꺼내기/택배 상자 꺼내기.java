class Solution {
    public int solution(int n, int w, int num) {
        int col = (n + w - 1) / w; 

        int[][] arr = new int[col][w];
        int value = 1;

        for (int i = 0; i < col; i++) {
            if (i % 2 == 0) {
                for (int j = 0; j < w && value <= n; j++) {
                    arr[i][j] = value++;
                }
            } else {
                for (int j = w - 1; j >= 0 && value <= n; j--) {
                    arr[i][j] = value++;
                }
            }
        }

        int targetRow = -1, targetCol = -1;
        for (int i = 0; i < col; i++) {
            for (int j = 0; j < w; j++) {
                if (arr[i][j] == num) {
                    targetRow = i;
                    targetCol = j;
                }
            }
        }

        int answer = 0;
        for (int i = targetRow; i < col; i++) {
            if (arr[i][targetCol] != 0) answer++;
        }

        return answer;
    }
}
