void odrediMjesecIDanUskrsa(int godina, int *mjesec, int *dan) {
    int X, Y;
    if (godina >= 1582 && godina <= 1699) { X = 22; Y = 2; }
    else if (godina <= 1799) { X = 23; Y = 3; }
    else if (godina <= 1899) { X = 23; Y = 4; }
    else if (godina <= 2099) { X = 24; Y = 5; }

    int A = godina % 19;
    int B = godina % 4;
    int C = godina % 7;
    int D = (A * 19 + X) % 30;
    int E = (2 * B + 4 * C + 6 * D + Y) % 7;

    int datum = 22 + D + E;
    if (datum <= 31) {
        *mjesec = 3;
        *dan = datum;
    } else {
        *mjesec = 4;
        *dan = D + E - 9;
    }
}
