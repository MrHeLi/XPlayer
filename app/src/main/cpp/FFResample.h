//
// Created by 程方明 on 2018/5/23.
//

#ifndef XPLAY_FFRESAMPLE_H
#define XPLAY_FFRESAMPLE_H


#include "IResample.h"
struct SwrContext;
class FFResample: public IResample {
public:
    virtual bool Open(XParameter in, XParameter out = XParameter());
    virtual XData Resample(XData indata);
protected:
    SwrContext *actx = 0;


};


#endif //XPLAY_FFRESAMPLE_H
