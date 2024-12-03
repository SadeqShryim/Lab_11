#include "FractionHandler.h"

int ComputeGCD(int nume, int deno) {
    while (nume != deno) {
        if (nume > deno)
            nume -= deno;
        else
            nume -= deno;
    }
    return nume;
}


