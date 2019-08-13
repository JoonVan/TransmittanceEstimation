#pragma once

#include "func.h"

class LinIncFunc : public Func {
public:
    LinIncFunc();

    virtual Float evalFunction(Float x, Float a = 0.0, Float b = 1.0) const;

    virtual Float calculateMinEfficiency() const;
    virtual Float calculateMaxEfficiency() const;

    virtual void solveForIntegral(Float a, Float b, Float area);

    virtual Func* copy() const;

    virtual string getName(FuncType type) const;

    virtual bool needsDependent() const;

    virtual ExtinctionType getType() const;

    // setter methods
    void setM(Float param);
    void setY(Float param);

protected:
    virtual Float calculateMaxValue(Float a, Float b) const;
    virtual Float calculateMinValue(Float a, Float b) const;
    virtual Float calculateIntegral(Float a, Float b) const;
    virtual Float calculateVariance(Float a, Float b) const;

    Float m;
    Float y;
};
