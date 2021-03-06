#ifndef DCPP_H
#define DCPP_H
#include "operators.h"
#include <var.h>

namespace dCpp{

    void initSpace(int order);
    void init(var &v);
    void initPlaceHolder(var &v);

    var cos(const var& v);
    var sin(const var& v);
    var tan(const var& v);
    var cot(const var& v);
    var ln(const var& v);
    var log(double base, const var& v);
    var exp(const var& v);
}

#endif // DCPP_H
