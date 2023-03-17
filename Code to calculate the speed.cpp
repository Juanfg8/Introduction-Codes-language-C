	#include <stdio.h>
	int main() {
		float distance, time, speed;
	
		printf("Enter the distance traveled (in km): ");
		scanf("%f", &distance);
		
		printf("Enter the time taken (in hours): ");
		scanf("%f", &time);
		
		// Formula to calculate speed: speed = distance / time
		speed = distance / time;
		
		printf("the speed of the car is %.2f km/hr\n", speed);
		
		return 0;
		
	}
