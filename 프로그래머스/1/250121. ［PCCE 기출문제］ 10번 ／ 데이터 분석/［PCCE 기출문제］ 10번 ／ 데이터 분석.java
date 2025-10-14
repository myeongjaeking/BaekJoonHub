import java.util.*;

class Solution {
    public int[][] solution(int[][] data, String ext, int val_ext, String sort_by) {
        HashMap<String, Integer> index = new HashMap<>();
        index.put("code", 0);
        index.put("date", 1);
        index.put("maximum", 2);
        index.put("remain", 3);
        
        int ext_index = index.get(ext);
        int sort_index = index.get(sort_by);
        
        List<int[]> filtered = new ArrayList<>();
        for (int i = 0; i < data.length; i++) {
            if (data[i][ext_index] <= val_ext) {
                filtered.add(data[i]);
            }
        }
        
        filtered.sort(Comparator.comparingInt(a -> a[sort_index]));
        
        int[][] answer = new int[filtered.size()][];
        for (int i = 0; i < filtered.size(); i++) {
            answer[i] = filtered.get(i);
        }
        
        return answer;
    }
}
