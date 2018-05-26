//
// Created by 程方明 on 2018/5/25.
//

#ifndef XPLAY_SLAUDIOPLAY_H
#define XPLAY_SLAUDIOPLAY_H


#include "IAudioPlay.h"

class SLAudioPlay : public IAudioPlay{
public:
    virtual bool StartPlay(XParameter out);
    void PlayCall(void *bufq);
    SLAudioPlay();
    virtual ~SLAudioPlay();
protected:
    unsigned char *buf = 0;
};


#endif //XPLAY_SLAUDIOPLAY_H
