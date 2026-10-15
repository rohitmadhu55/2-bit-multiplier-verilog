#include "rna_transcription.h"
#include<stdlib.h>
#include<string.h>
char *to_rna(const char *dna){
    
    if(dna == NULL){
        return NULL;
    }size_t len;
    len = strlen(dna);
        char *rna= malloc(len+1);
    if(rna==NULL){
        return NULL;
    }
        for(size_t i=0;dna[i]!='\0';i++){
            if(dna[i]=='G'){
                rna[i]='C';
            }else if(dna[i]=='C'){
                rna[i]='G';
            }else if(dna[i]=='T'){
                rna[i]='A';
            }else if(dna[i]=='A'){
                rna[i]='U';
            }else{
                free(rna);
                return NULL;
            }
        }rna[len]='\0';
    return rna;
}