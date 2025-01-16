import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int T = Integer.parseInt(br.readLine());
        int[][] arry;
        for (int i = 0; i < T; i++) {
            StringTokenizer mnk = new StringTokenizer(br.readLine());
            int M = Integer.parseInt(mnk.nextToken());
            int N = Integer.parseInt(mnk.nextToken());
            int K = Integer.parseInt(mnk.nextToken());
            arry = new int[M][N];
            for (int j = 0; j < K; j++) {
                StringTokenizer xy = new StringTokenizer(br.readLine());
                int X = Integer.parseInt(xy.nextToken());
                int Y = Integer.parseInt(xy.nextToken());
                arry[X][Y] = 1;
            }
            System.out.println(dfs(arry, M, N));
        }

    }

    private static int dfs(int[][] arr, int M, int N) {
        int sum = 0;
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                if (arr[i][j] == 1) {
                    clear(arr, i, j, M, N);
                    sum++;
                }
            }
        }
        return sum;
    }

    private static void clear(int[][] arr, int i, int j, int M, int N) {
        if (i >= 0 && j >= 0 && i < M && j < N && arr[i][j] == 1) {
            arr[i][j] = 0;
            clear(arr, i - 1, j, M, N);
            clear(arr, i + 1, j, M, N);
            clear(arr, i, j - 1, M, N);
            clear(arr, i, j + 1, M, N);
        }
    }
    
}