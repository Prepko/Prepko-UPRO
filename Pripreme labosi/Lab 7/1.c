struct listic {
    long serijski_broj;
    int odigrana_kombinacija[6];
};

extern struct listic dobitni;

void ObradaIgre(struct listic *svi_listici, int N, int *izvuceni_brojevi) {
    for (int i = 0; i < N; i++) {
        int pogodak = 1;
        for (int j = 0; j < 6; j++) {
            if (svi_listici[i].odigrana_kombinacija[j] != izvuceni_brojevi[j]) {
                pogodak = 0;
                break;
            }
        }
        if (pogodak) {
            dobitni.serijski_broj = svi_listici[i].serijski_broj;
            for (int k = 0; k < 6; k++) {
                dobitni.odigrana_kombinacija[k] = svi_listici[i].odigrana_kombinacija[k];
            }
            return;
        }
    }
    dobitni.serijski_broj = -1;
}
