import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());

        PriorityQueue<Meat> pq = new PriorityQueue<>();

        for(int i=0;i<N;i++){
            st = new StringTokenizer(br.readLine());

            int weight = Integer.parseInt(st.nextToken());
            int price = Integer.parseInt(st.nextToken());

            pq.add(new Meat(price,weight));
        }

        int minPrice = -1; //최소 가격
        int weight = 0; //고기 총 무게
        int totalPrice = 0; //총 가격
        int beforePrice = 0; //이전 고기 가격

        while(!pq.isEmpty()){
            Meat curr = pq.poll();

            //고기 무게 더하기
            weight += curr.weight;

            //이전 고기 가격과 현재 고기 가격이 같다면 현재 고기 값을 추가로 지불.
            if(curr.price == beforePrice){
                totalPrice += curr.price;
            }
            //이전 고기 가격보다 현재 고기 가격이 비싸면 현재 고기 가격으로 모든 이전 고기를 살 수 있다.
            else{
                totalPrice = curr.price;
            }

            //원하는 고기 무게보다 많이 산 경우 최소 가격 찾기
            if(weight >= M){
                if(minPrice == -1){
                    minPrice = totalPrice;
                }else {
                    minPrice = Math.min(totalPrice, minPrice);
                }
            }

            beforePrice = curr.price;
        }

        System.out.println(minPrice);
    }
}

class Meat implements Comparable<Meat>{
    int price;
    int weight;

    public Meat(int price ,int weight){
        this.price = price;
        this.weight = weight;
    }

    //가격이 싸면서 무게가 무거운 순서로 정렬
    @Override
    public int compareTo(Meat o) {
        if(o.price == this.price){
            return o.weight - this.weight;
        }
        return this.price - o.price;
    }
}