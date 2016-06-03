#include "Graph.h"

void main() {
    Edge a;
    reb(0, 1, 1, &a);
    Edge b;
    reb(1, 2, 4, &b);
    Edge c;
    reb(2, 3, 5, &c);
    Edge d;
    reb(3, 4, 3, &d);
    Edge e;
    reb(1, 3, 1, &e);
    Edge f;
    reb(1, 4, 1, &f);
    Edge g;
    reb(0, 4, 2, &g);
    Edge r[7] = { a, b, c, d, e, f, g };
    Graph ggg;
    gr(5, 7, r, &ggg);
    Graph ooo;
    Krusk(&ggg, &ooo);
    print(&ooo);
}
