#ifndef pendu_h
#define pendu_h

#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include <string.h>
#include <time.h>





/* rafraichir le buffer*/
void flush_buffer();

/* Les images du pendu*/
void hommePendu(int);

/* Il donne un mot à chercher*/
void cherche_mot(char *, int, int);

/* le pendu*/
void pendu();




#endif /* pendu */
