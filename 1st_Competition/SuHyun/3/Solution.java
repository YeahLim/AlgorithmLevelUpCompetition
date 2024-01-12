import java.util.*;

/*
    효율성이 문제가 발생하면 nlogn -> n -> logn으로 생각
*/

class Solution {
    public int solution(int n, int[] cores) {
        int left = 0;   
        int right = Arrays.stream(cores).max().getAsInt()*n;    //걸릴 수 있는 최대 시간은 가장 오래걸리는 코어가 모든 작업을 수행하는 경우이다.
        int time = 0;  //현재 시간
        int workCount = 0;  //가능한 작업량

        //이분탐색으로 n개의 작업을 모두 할 수 있는 시간을 구한다
        while(left <= right){
            int mid = (left + right)/2; //현재 시간
            int count = cores.length;  //코어 개수

            for(int core : cores){  
                count += (mid/core);
            }

            if(count >= n){
                time = mid;
                right = mid - 1;
                workCount = count;
            }else{
                left = mid + 1;
            }
        }

        //현재 시간에서 가능한 작업량은 작업량보다 많거나 같으므로 작업량 만큼 빼주어 마지막 작업의 코어의 위치를 찾게 한다.
        workCount -= n;

        for(int i=cores.length-1;i>=0;i--){
            if(time % cores[i] == 0){
                if(workCount == 0){
                    return i+1;
                }
                workCount--;  
            }
        }

        return right;
    }
}
