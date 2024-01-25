import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader((System.in)));

        String blanket = br.readLine();

        if(!checkBlanket(blanket)){
            System.out.println(0);
        }else{
            int val = getBlanketValue(blanket,0,blanket.length()-1,1);
            System.out.println(val);
        }
    }
    //올바른 괄호인지 확인하는 메소드
    public static boolean checkBlanket(String blanket){
        Stack<Character> stack = new Stack<>();

        for(int i=0;i<blanket.length();i++){
            if(blanket.charAt(i) == '(' || blanket.charAt(i) == '['){
                stack.add(blanket.charAt(i));
            }else if(stack.isEmpty()){
                return false;
            }else if(stack.peek() == '[' && blanket.charAt(i) == ']'){
                stack.pop();
            }else if(stack.peek() == '(' && blanket.charAt(i) == ')'){
                stack.pop();
            }else{
                return false;
            }
        }
        return true;
    }
    //괄호값을 재귀로 구하는 메소드
    public static int getBlanketValue(String blanket,int l, int r,int val){
        if(r < l){
            return val;
        }

        int idx = l;
        int start = idx;
        Stack<Integer> stack = new Stack<>();
        List<Range> rangeList = new ArrayList<>();

        //현재 문자열 범위에서 괄호 영역을 나누는 부분
        while(idx <=r){
            if(blanket.charAt(idx) == '('
                    || blanket.charAt(idx) == '['){
                stack.add(idx);
            }else{
                start = stack.pop();

                if(stack.isEmpty()){
                    rangeList.add(new Range(start, idx));
                }
            }
            idx++;
        }

        int sum = 0;

        //나눈 괄호 영역을 더하는 부분
        for(Range range : rangeList){
            sum += getBlanketValue(blanket,range.start+1,range.end-1,blanket.charAt(range.start) == '(' ? 2 : 3);
        }

        //곱셈 처리를 하는 부분
        return sum * val;
    }
}

class Range{
    int start;
    int end;

    public Range(int start, int end){
        this.start = start;
        this.end = end;
    }

    public String toString(){
        return start+" ~ "+end;
    }
}