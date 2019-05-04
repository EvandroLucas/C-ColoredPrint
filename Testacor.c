#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
#include "color.h"

int main(){

    int a = 1;

    printf_red("Hello RED = %i  \n\n\n",a);
    printf_yellow("Hello YELLOW = %i\n",a);
    printf_green("Hello GREEN = %i\n",a);
    printf_cyan("Hello CYAN = %i\n",a);
    printf_blue("Hello BLUE = %i\n",a);
    printf_magenta("Hello MAGENTA = %i\n",a);

    printf_super_red("Hello SUPER RED = %i\n",a);
    printf_super_yellow("Hello SUPER YELLOW = %i\n",a);
    printf_super_green("Hello SUPER GREEN = %i\n",a);
    printf_super_cyan("Hello SUPER CYAN = %i\n",a);
    printf_super_blue("Hello SUPER BLUE = %i\n",a);
    printf_super_magenta("Hello SUPER MAGENTA = %i\n",a);

    printf("\n\n");

return 0;
}