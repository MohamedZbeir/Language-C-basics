#include <stdio.h>

int main(){

    const int var1 = 5;
    printf("var1 : %d ",var1);

    printf("%s",__DATE__);
    printf("%s",__TIME__);
    printf("%i",__LINE__);
    return 0;

    // diference entre include and require ?
}