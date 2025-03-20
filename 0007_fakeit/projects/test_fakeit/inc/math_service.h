#ifndef MATH_SERVICE_H
#define MATH_SERVICE_H


class MathService {
public:
    virtual ~MathService() = default;
    virtual int add(int a, int b) = 0;
};


#endif // MATH_SERVICE_H 
