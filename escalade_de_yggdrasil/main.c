#include <stdio.h>
#include <stdlib.h>

/// \param n le nombre de branches de l'arbre moins 1
/// \param differences la liste des différences en hauteur des branches
/// consécutives
void le_plus_grand_saut(int n, int *differences) {
    /* TODO Afficher le plus grand saut que devra effectuer Höder pour
    atteindre la branche la plus haute de l'Yggdrasil.  */
}

int main() {
    int n;
    scanf("%d", &n);
    int *differences = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; ++i)
        scanf("%d", &differences[i]);
    le_plus_grand_saut(n, differences);

    return 0;
}
