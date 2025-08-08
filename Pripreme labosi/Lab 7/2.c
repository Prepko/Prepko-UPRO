#define MAX_OZNAKA 5
#define MAX_NAZIV 20

struct dionica_s {
    char oznaka[MAX_OZNAKA + 1];
    float cijena;
    char naziv[MAX_NAZIV + 1];
};

struct portfelj_s {
    char oznaka[MAX_OZNAKA + 1];
    int kolicina;
};

float IzracunajVrijednostPortfelja(struct dionica_s *dionice, int broj_dionica, struct portfelj_s *moj_portfelj, int broj_dionica_u_mom_portfelju) {
    float ukupno = 0;
    for (int i = 0; i < broj_dionica_u_mom_portfelju; i++) {
        for (int j = 0; j < broj_dionica; j++) {
            if (strcmp(moj_portfelj[i].oznaka, dionice[j].oznaka) == 0) {
                ukupno += moj_portfelj[i].kolicina * dionice[j].cijena;
                break;
            }
        }
    }
    return ukupno;
}
