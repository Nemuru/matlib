#ifndef HEADERS
#define HEADERS
//#define DEBUG
#ifdef DEBUG
#define DBG(I,KOD) if(I==DEBUG) {KOD}
#include <cstdio>
#else 
#define DBG(I,KOD)
#endif
#include <algorithm>
#define REP(I, N) for(int I=0; I<(N); ++I)
#define FOR(I, M, N) for(int I=(M); I<=(N); ++I)
#define FORD(I, M, N) for(int I=(M); I>=(N); --I)
#define FOREACH(IT, CON) for(__typeof((CON).begin() IT=(CON).begin(); IT != (CON).end(); ++IT)
using namespace std;
namespace mat{};
using namespace mat;
#endif
