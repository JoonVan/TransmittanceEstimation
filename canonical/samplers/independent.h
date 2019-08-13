#pragma once

#include "sampler.h"

class Independent : public Sampler {
public:
    Independent();
    Independent(unsigned int seed);
    Independent(unsigned int seedOne, unsigned int seedTwo);

    virtual ~Independent();

    virtual Float next1D();
    virtual Pdd next2D();

    uint32_t next1D_U();

    virtual void nextSample();

    virtual void reset();

    virtual Sampler* copy();

    virtual string getName() const;

protected:
};
