import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayDeque;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(br.readLine());
        long[] benchmarking = new long[N];

        ArrayDeque<Building> buildings = new ArrayDeque<>();

        for(int i=0;i<N;i++){
            Building building = new Building(i,Integer.parseInt(br.readLine()));

            while(!buildings.isEmpty()){
            	if(buildings.peekLast().height < building.height) {
            		Building before = buildings.pollLast();
                    benchmarking[before.seq] = building.seq - before.seq - 1;
            	}
            	else if(buildings.peekLast().height == building.height) {
            		Building before = buildings.pollLast();
            	}else {
            		break;
            	}
            }
            buildings.addLast(building);
        }

        if(!buildings.isEmpty()){
            Building building = buildings.pollLast();

            while(!buildings.isEmpty()){
                Building before = buildings.pollLast();
                
                benchmarking[before.seq] = building.seq - before.seq;
            }
        }
        
        System.out.println(Arrays.toString(benchmarking));
        
        System.out.println(Arrays.stream(benchmarking).sum());
    }
}
class Building{
    int seq;
    int height;

    public Building(int seq, int height){
        this.seq = seq;
        this.height = height;
    }
}	