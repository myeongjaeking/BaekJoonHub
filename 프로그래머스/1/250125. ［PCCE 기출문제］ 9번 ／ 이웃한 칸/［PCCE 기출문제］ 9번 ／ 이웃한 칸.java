class Solution {
    public int solution(String[][] board, int h, int w) {
        int row = board.length;
        int col = board[0].length;
        String color = board[h][w];
        int count = 0;
        
        if (h - 1 >= 0 && color.equals(board[h - 1][w])) {
            count++;
        }
        if (h + 1 < row && color.equals(board[h + 1][w])) {
            count++;
        }
        if (w - 1 >= 0 && color.equals(board[h][w - 1])) {
            count++;
        }
        if (w + 1 < col && color.equals(board[h][w + 1])) {
            count++;
        }
        
        return count;
    }
}