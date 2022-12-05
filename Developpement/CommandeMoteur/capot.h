#ifndef CAPOT_H
#define CAPOT_H

#include "mcculdaq.h"

class Capot : public MccUldaq
{
public:
    Capot(const MccUldaq _laCarte, const int _numDio, int * QObject);
    void onTimerCapot_timeout();
    bool getEtatCapot() const;
private:
    MccUldaq &laCarte;
    int numDio;
    bool etatCapot;
};

#endif // CAPOT_H
