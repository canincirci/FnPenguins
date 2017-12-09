#include <stdio.h>
#include "display.h"
#include "mapgen.h"
#include "datastrc.h"

int main()
{
    struct Gmdt gmdt;

    read_data("gie.txt", &gmdt);
    print_map(gmdt.map, gmdt.rows, gmdt.columns);

    // Test stuff here

    return 0;
}
