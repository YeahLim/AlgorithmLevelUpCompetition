import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());

        Map<String,Word> wordMap = new HashMap<>();

        //중복 문자열 개수 파악
        for(int i=0;i<N;i++){
            String value = br.readLine();

            Word word = wordMap.getOrDefault(value,new Word(value,0, value.length()));
            word.count++;

            wordMap.put(value,word);
        }

        PriorityQueue<Word> pq = new PriorityQueue<>();

        //우선순위에 맞게 단어 정렬
        for(String key : wordMap.keySet()){
            pq.add(wordMap.get(key));
        }

        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        //우선순위가 높은 순서로 단어 출력
        while(!pq.isEmpty()) {
            Word word = pq.poll();

            //M미만인 단어는 출력 스킵
            if (word.length < M) {
                continue;
            }

            bw.append(word.value);
            bw.newLine();
        }

        bw.flush();
    }
}

class Word implements Comparable<Word>{
    String value;
    int count;
    int length;

    public Word(String value, int count, int length){
        this.value = value;
        this.count = count;
        this.length = length;
    }

    @Override
    public int compareTo(Word o) {
        if(this.count == o.count){
            if(this.length == o.length){
                return this.value.compareTo(o.value);
            }
            return o.length - this.length;
        }
        return o.count - this.count;
    }
}