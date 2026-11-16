
import java.util.ArrayDeque;
import java.util.Queue;

class Solution {
	public int solution(int bridge_length, int weight, int[] truck_weights) {
		Queue<Integer> bridge = new ArrayDeque<>();

		for (int i = 0; i < bridge_length; i++) {
			bridge.offer(0);
		}

		int time = 0;
		int currentWeight = 0;
		int index = 0;

		while (index < truck_weights.length) {
			time++;

			currentWeight -= bridge.poll();

			if (currentWeight + truck_weights[index] <= weight) {
				bridge.offer(truck_weights[index]);
				currentWeight += truck_weights[index];
				index++;
			} else {
				bridge.offer(0);
			}
		}

		return time + bridge_length;
	}
}
