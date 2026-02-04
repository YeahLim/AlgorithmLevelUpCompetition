import java.util.*;

class Solution {
    
    class Mineral {
        int diamond, iron, stone;
        int total;
        
        public void calculateTotal() {
            this.total = diamond + iron + stone;
        }
    }
    
    public int solution(int[] picks, String[] minerals) {
        
        PriorityQueue<Mineral> pq = new PriorityQueue<>((a, b) -> {
            // if (a.total != b.total) {
            //     return b.total - a.total;
            // }
            // else {
                if (a.diamond == b.diamond) {
                    if (a.iron == b.iron) {
                        return b.stone - a.stone;
                    }
                    return b.iron - a.iron;
                }
                return b.diamond - a.diamond;
            // }
        });
        
        // 5개씩 광물 분류하기
        int diamondPick = picks[0];
        int ironPick = picks[1];
        int stonePick = picks[2];
        int totalPick = diamondPick + ironPick + stonePick;
        int availablePick = 0;
        Mineral curr = new Mineral();
        for (int i = 0; i < minerals.length && availablePick < totalPick; i++) {
            
            if (i % 5 == 0 && i > 0) {
                availablePick++;
                curr.calculateTotal();
                pq.add(curr);
                curr = new Mineral();
            } 
            
            if (minerals[i].equals("diamond")) {
                curr.diamond++;
            } else if (minerals[i].equals("iron")) {
                curr.iron++;
            } else if (minerals[i].equals("stone")) {
                curr.stone++;
            }   
        }
        
        // 마지막 광물 추가
        if (minerals.length % 5 == 0 || availablePick < totalPick) {
            curr.calculateTotal();
            pq.add(curr);
        }

        // 광물 캐기
        int answer = 0;
        while (!pq.isEmpty()) {
            curr = pq.poll();
            System.out.println(curr.diamond + " " + curr.iron + " " + curr.stone);
            if (diamondPick != 0) {
                diamondPick--;
                answer += curr.diamond + curr.iron + curr.stone;
            } else if (ironPick != 0) {
                ironPick--;
                answer += (curr.diamond * 5) + curr.iron + curr.stone;
            } else if (stonePick != 0) {
                stonePick--;
                answer += (curr.diamond * 25) + (curr.iron * 5) + curr.stone;
            }
            
        }
        
        return answer;
    }
}