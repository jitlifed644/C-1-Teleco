struct Gamer
{
    char name[25];
    int code;
};


int p_init(struct Gamer *tabla, int *numero);
int p_enrol();
int p_quit();
int p_filter();
int p_list();
