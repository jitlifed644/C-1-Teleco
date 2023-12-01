#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "screen.h"
#include "info.h"





int main()
{
    int numGamers;
    char mayus;
    struct Gamer gamers[100];
    int salir;

    p_init(gamers, &numGamers);

    border('-', 50);
    label("GAMER PROJECT\n");
    border('-', 50);
        

    do
    {
        printf(" E) Enrol\n Q) Quit\n L) List\n F) Filter\n X) Exit \n\n ");
        mayus = get_character("Chose an option: ", "EQLFX");

        switch (mayus)
        {
        case 'E':
            p_enrol();
            break;
        case 'Q':
            p_quit();
            break;
        case 'L':
            p_list(gamers, numGamers);
            break;
        case 'F':
            p_filter();
            break;
        case 'X':
            salir = check("Está usted seguro?");
            break;
        default:
            printf("Invalid option\n");
            break;
        }
    } while (salir != 1);
    return 0;
}





