class Solution {
    public int solution(int[] bandage, int health, int[][] attacks) {
        int time = attacks[attacks.length-1][0];
        int heal = 0;
        int start_health = health;
        int attackIndex = 0;
        
       for (int i = 1; i <= time; i++) {
            if (attackIndex < attacks.length && i == attacks[attackIndex][0]) {
                health -= attacks[attackIndex][1];
                
                if (health <= 0) {
                    return -1;
                }
                heal = 0; 
                attackIndex++;
            } 
            else {
                heal++;
                health += bandage[1];

                if (heal == bandage[0]) {
                    health += bandage[2];
                    heal = 0;
                }

                if (health > start_health) {
                    health = start_health;
                }
            }
        }

        return health;
    }
}