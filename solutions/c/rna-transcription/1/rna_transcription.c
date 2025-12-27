#include "rna_transcription.h"

char *to_rna(const char *dna) {
    char *rna = malloc(strlen(dna)*sizeof(char));

    for (unsigned long int i = 0; i < strlen(dna); i++) {
        switch (dna[i]) {
            case 'G':
                rna[i] = 'C';
                break;
            case 'C':
                rna[i] = 'G';
                break;
            case 'T':
                rna[i] = 'A';
                break;
            case 'A':
                rna[i] = 'U';
                break;
        }
    }

    return rna;
}
