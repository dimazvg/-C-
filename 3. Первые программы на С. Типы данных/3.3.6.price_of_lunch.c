/*
Студент хочет купить на обед в столовой 1 порцию риса за k_rice рублей и 2 салата за k_veg рублей каждый. 
Сколько стоит обед?
Sample Input:
15 30
Sample Output:
75 
*/
#include <stdio.h>

int main() {
    int k_rice = 0, k_veg = 0;  // стоимость порции риса и салата соответственно
    scanf("%d%d", &k_rice, &k_veg);

    int cost_lunch = k_rice + 2 * k_veg;
    
    printf("%d", cost_lunch);
    
    return 0;
}