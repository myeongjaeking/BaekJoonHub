import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Scanner;
import java.util.stream.Collectors;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int firstLine = scanner.nextInt();
        int[] arr = new int[firstLine];

        for(int i = 0; i<firstLine;i++){
            arr[i] = scanner.nextInt();
        }

        int maxCurrent = arr[0];
        int max = arr[0];

        for(int i =1 ; i<firstLine;i++){
            maxCurrent = Math.max(arr[i], maxCurrent + arr[i]);

            if(maxCurrent > max){
                max = maxCurrent;
            }
        }

        System.out.println(max);
    }

}