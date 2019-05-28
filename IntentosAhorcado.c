#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int aleatorio(int N){

srand(time(NULL));

return rand() % (N+1);

}
