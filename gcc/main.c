#include "CU_TM4C123.h"
#include "example.h"

int main(void)
{
	while(1){
        rainbow(3, 500000);

        flash(RED, 3, 500000);
        flash(GREEN, 3, 500000);
        flash(BLUE, 3, 500000);
        flash(CYAN, 3, 500000);
        flash(PURPLE, 3, 500000);
        flash(YELLOW, 3, 500000);
        flash(WHITE, 3, 500000);
    }
}
