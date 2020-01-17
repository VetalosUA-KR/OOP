#include "element.h"

class Pane
{
    bool isOut;
    int n;
    Ant* ant;
    Element** tab;
public:
    Pane(int);
    virtual ~Pane();
    void print() const;
    Ant* getAnt();
    void cycle();
    bool getIsOut();
};

