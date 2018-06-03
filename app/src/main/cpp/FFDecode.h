//
// Created by 程方明 on 2018/5/3.
//

#ifndef XPLAY_FFDECODE_H
#define XPLAY_FFDECODE_H

#include "XParameter.h"
#include "IDecode.h"

struct  AVCodecContext;
struct  AVFrame;
class FFDecode: public IDecode {
public:
    static void InitHard(void *vm);
    bool Open(XParameter para, bool isHard = false);
    // future模型，发送数据到线程解码
    bool SendPacket(XData pkt);
    // 从线程中获取解码结果,
    XData RecvFrame();
protected:
    AVCodecContext *codec = 0;
    AVFrame *frame = 0;
};


#endif //XPLAY_FFDECODE_H
