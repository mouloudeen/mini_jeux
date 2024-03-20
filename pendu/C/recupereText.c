#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>

/* k est il dans cette list L*/
bool exist(int k, int *L, int taille){
    for (int i = 0; i < taille; i++){
        if (L[i] == k){
            return true;
        }
        
    }
    return false;
    
}

/* Liste de 100 chiffres alétoire qui est entre 0 et la TailleListe*/
int * ListNombre(int tailleListe){
    int * L = malloc(sizeof(int)*100);
    if (L == NULL){
        fprintf(stderr, "List_alloc: error: memory full\n");
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < 100;i++){
        L[i] = -1;
    }
    srand(time(NULL));
    int n = 0;
    int cpt = 0;
    for (int i = 0; i < 100; i++){
        n = rand()%tailleListe;
        while (exist(n, L, tailleListe)){
            n = rand()%tailleListe;
        }
        L[cpt]=n;
        cpt += 1;
    }
    return L;
}




void recupereText(){
    FILE *fichier;
    
    fichier = fopen("pli07.txt","r");
    
    if (fichier == NULL){
        exit(1);
    }
    int taille;
    char p[30];
    
    
    int n3 = 0;
    int n4 = 0;
    int n5 = 0;
    int n6= 0;
    int n7 = 0;
    int n8 = 0;
    int n9= 0;
    int n10= 0;
    int n20= 0;
    
    while(!feof(fichier)){
        fscanf(fichier,"%s",p);
        taille = strlen(p);
        
        switch(taille){
            
            case 1:
                break;
            case 2:
                break;
            case 3:
                n3 += 1;
            case 4:
                n4 += 1;
                break;
            case 5:
                n5 += 1;
                break;
            case 6:
                n6 += 1;
                break;
            case 7:
                n7 += 1;
                break;
            case 8:
                n8 += 1;
                break;
            case 9:
                n9 += 1;
                break;
            case 10:
                n10 += 1;
                break;
            default:
                n20 += 1;
        }
    }
    char L3[n3][30];
    char L4[n4][30];
    char L5[n5][30];
    char L6[n6][30];
    char L7[n7][30];
    char L8[n8][30];
    char L9[n9][30];
    char L10[n10][30];
    char L20[n20][30];
    
    fichier = fopen("pli07.txt","r");
    
    if (fichier == NULL){
        exit(1);
    }
    int cpt3 =0;
    int cpt4 =0;
    int cpt5 =0;
    int cpt6 =0;
    int cpt7 =0;
    int cpt8 =0;
    int cpt9 =0;
    int cpt10 =0;
    int cpt20 =0;
    
    while(!feof(fichier)){
        fscanf(fichier,"%s",p);
        taille = strlen(p);
        
        switch(taille){
            
            case 1:
                break;
            case 2:
                break;
            case 3:
                strcpy(L3[cpt3], p);
                cpt3 += 1;
            case 4:
                strcpy(L4[cpt4], p);
                cpt4 += 1;
                break;
            case 5:
                strcpy(L5[cpt5], p);
                cpt5 += 1;
                break;
            case 6:
                strcpy(L6[cpt6], p);
                cpt6 += 1;
                break;
            case 7:
                strcpy(L7[cpt7] , p);
                cpt7 += 1;
                break;
            case 8:
                strcpy(L8[cpt8], p);
                cpt8 += 1;
                break;
            case 9:
                strcpy(L9[cpt9], p);
                cpt9 += 1;
                break;
            case 10:
                strcpy(L10[cpt10], p);
                cpt10 += 1;
                break;
            default:
                strcpy(L20[cpt20], p);
                cpt20 += 1;
        }
    }
    
    fclose(fichier);
    
    int * C3 = ListNombre(n3);
    int * C4 = ListNombre(n4);
    int * C5 = ListNombre(n5);
    int * C6 = ListNombre(n6);
    int * C7 = ListNombre(n7);
    int * C8 = ListNombre(n8);
    int * C9 = ListNombre(n9);
    int * C10 = ListNombre(n10);
    int * C20 = ListNombre(n20);
    
    fichier = fopen("listeMot.h","w+");
    if (fichier == NULL){
        exit(1);
    }
    
    fprintf(fichier,"#ifndef listeMot_h\n#define listeMot_h\n\n");
    
    fprintf(fichier,"char * L3[] = {");
    for (int i = 0; i < 100; i++){
        if (i == 99 ){
            fprintf(fichier," \"%s\"};\n\n",L3[C3[i]]);
        }
        else{
            fprintf(fichier," \"%s\", ",L3[C3[i]]);
        }
    }
    
    fprintf(fichier,"char * L4[] = {");
    for (int i = 0; i < 100; i++){
        if (i == 99 ){
            fprintf(fichier," \"%s\"};\n\n",L4[C4[i]]);
        }
        else{
            fprintf(fichier," \"%s\", ",L4[C4[i]]);
        }
    }
    
    fprintf(fichier,"char * L5[] = {");
    for (int i = 0; i < 100; i++){
        if (i == 99 ){
            fprintf(fichier," \"%s\"};\n\n",L5[C5[i]]);
        }
        else{
            fprintf(fichier," \"%s\", ",L5[C5[i]]);
        }
    }
    
    fprintf(fichier,"char * L6[] = {");
    for (int i = 0; i < 100; i++){
        if (i == 99 ){
            fprintf(fichier," \"%s\"};\n\n",L6[C6[i]]);
        }
        else{
            fprintf(fichier," \"%s\", ",L6[C6[i]]);
        }
    }
    
    fprintf(fichier,"char * L7[] = {");
    for (int i = 0; i < 100; i++){
        if (i == 99 ){
            fprintf(fichier," \"%s\"};\n\n",L7[C7[i]]);
        }
        else{
            fprintf(fichier," \"%s\", ",L7[C7[i]]);
        }
    }
    
    fprintf(fichier,"char * L8[] = {");
    for (int i = 0; i < 100; i++){
        if (i == 99 ){
            fprintf(fichier," \"%s\"};\n\n",L8[C8[i]]);
        }
        else{
            fprintf(fichier," \"%s\", ",L8[C8[i]]);
        }
    }
    
    fprintf(fichier,"char * L9[] = {");
    for (int i = 0; i < 100; i++){
        if (i == 99 ){
            fprintf(fichier," \"%s\"};\n\n",L9[C9[i]]);
        }
        else{
            fprintf(fichier," \"%s\", ",L9[C9[i]]);
        }
    }
    
    fprintf(fichier,"char * L10[] = {");
    for (int i = 0; i < 100; i++){
        if (i == 99 ){
            fprintf(fichier," \"%s\"};\n\n",L10[C10[i]]);
        }
        else{
            fprintf(fichier," \"%s\", ",L10[C10[i]]);
        }
    }
    
    fprintf(fichier,"char * L20[] = {");
    for (int i = 0; i < 100; i++){
        if (i == 99 ){
            fprintf(fichier," \"%s\"};\n\n",L20[C20[i]]);
        }
        else{
            fprintf(fichier," \"%s\", ",L20[C20[i]]);
        }
    }
    
    fprintf(fichier,"#endif /* listeMot_h*/\n");
    fclose(fichier);
    
}


