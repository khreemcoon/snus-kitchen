#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define jiebrayi 3
//SNUS KITCHEN SNUS KITCHEN
int main(int argc, char** args){
    char* adjp[21]={"marinated ", "stewed ", "boiled ", "sauteed ", "fried ", "steamed ", "dry aged ", "fucked ", "fentanyl injected ", "chewed ", "mashed ", "diddled ", "dirty ", "burnt ", "rolled ", "soggy ", "mashamoo ", "jewish ", "sticky ", "overspiced ", "raw "};
    char* meat[21]={"pork ","beef ","venison ","chicken ","veal ","salmon ","tuna ","scallop ","human ","seabass ","mosquito ","janitor ","wellies ","shoes ","plantpot ","bucket ","frog ", "computer ","literal piece of shit ","stove "};
    char* food[15]={"hamburg ","sausage ","wellington ","ribs ","sauce ","corndog ","hotdog ","schashlik ","chop ","soup ","hash ","sandewich ","spiral ","digestion ","slop "};
    char* extr[21]={"rice ","macaroni ","beans ","potatoes ","toenails ","flowers ","bones ","hair ","blended pcb's","glass shards ","califlower ","cabbage ","steroids ","peppermint ","berries ","snakes ","eyes ","earrings ","oil ","ink ","sewage water "};
    srand(time(NULL));
    int anum=rand()%21,mnum=rand()%21,fnum=rand()%15,anum2=rand()%21,xnum=rand()%21;
    printf("\033cWELCOME TO SNUS KITCHEN\n-----------------------\nYOUR DISH TODAY:\n");
    printf("%s%s%swith %s%s...\nhave fun!\n-----------------------\n",adjp[anum],meat[mnum],food[fnum],adjp[anum2],extr[xnum]);

    return jiebrayi;
}
