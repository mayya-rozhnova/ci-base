#ifndef SOLUTION_KRUSKUL_SET_GRAPH_H_
#define SOLUTION_KRUSKUL_SET_GRAPH_H_

#include <iostream>
#include <stack>
#include "Set.h"

struct Edge {
  int a;
  int b;
  int size;
};

struct Graph {
    int vnumb;
    int enumb;
    Edge* edges;
};

void reb(int, int, int, Edge*);
void gr(int, int, Edge*, Graph*);
void print(Graph *g);
void Krusk(Graph*, Graph*);

#endif  // SOLUTION_KRUSKUL_SET_GRAPH_H_
