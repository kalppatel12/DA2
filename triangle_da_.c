// Get the three angles of a triangle as input.
// find the count of the type of the triangle.
// Continue the process for 5 times.
// If the sum of the three angles is greater than 180 then prompt for correct values. (the sum of all internal angles of a triangle is always equal to 180°). Keep the count of the wrong entries also.
// Acute Angled Triangle (all three angles less than 90°)
// Right-Angled Triangle (one angle that measures exactly 90°)
// Obtuse Angled Triangle (one angle that measures more than 90°)

#include <stdio.h>
int main() {
    int i, angle1, angle2, angle3;
    int acute_count = 0, right_count = 0, obtuse_count = 0, wrong_count = 0;
    for (i=0;i<5;i++){
        scanf("%d %d %d", &angle1, &angle2, &angle3);
        if (angle1 + angle2 + angle3 > 180) {
            printf("Invalid input! The sum of angles cannot be greater than 180.\n");
            wrong_count++;
            continue;
        }
        if (angle1 < 90 && angle2 < 90 && angle3 < 90) {
            printf("Acute angled triangle.\n");
            acute_count++;
        } else if (angle1 == 90 || angle2 == 90 || angle3 == 90) {
            printf("Right angled triangle.\n");
            right_count++;
        } else {
            printf("Obtuse angled triangle.\n");
            obtuse_count++;
        }
    }
    printf("\nResults:\n");
    printf("Acute angled triangles: %d\n", acute_count);
    printf("Right angled triangles: %d\n", right_count);
    printf("Obtuse angled triangles: %d\n", obtuse_count);
    printf("Wrong entries: %d\n", wrong_count);
    return 0;
}
