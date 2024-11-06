#include <stdio.h>
#include <math.h>

int main() {
    int floors = 10;
    float height_per_floor = 3.0;
    float acceleration = 9.8; 

    for (int i = floors; i >= 1; i--) {
        float distance = i * height_per_floor;

        float time = sqrt((2 * distance) / acceleration);

        printf("Time taken to reach floor %d from the top: %.2f seconds\n", i, time);
    }

    return 0;
}

/*Output:-
Time taken to reach floor 10 from the top: 2.47 seconds
Time taken to reach floor 9 from the top: 2.35 seconds
Time taken to reach floor 8 from the top: 2.21 seconds
Time taken to reach floor 7 from the top: 2.07 seconds
Time taken to reach floor 6 from the top: 1.92 seconds
Time taken to reach floor 5 from the top: 1.75 seconds
Time taken to reach floor 4 from the top: 1.56 seconds
Time taken to reach floor 3 from the top: 1.36 seconds
Time taken to reach floor 2 from the top: 1.11 seconds
Time taken to reach floor 1 from the top: 0.78 seconds*/
