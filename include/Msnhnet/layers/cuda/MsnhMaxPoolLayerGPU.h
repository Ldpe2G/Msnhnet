﻿#ifndef MSNHMAXPOOLLAYERGPU_H
#define MSNHMAXPOOLLAYERGPU_H

#include "Msnhnet/utils/MsnhExport.h"
#include "Msnhnet/config/MsnhnetCuda.h"

namespace Msnhnet
{

class MaxPoolLayerGPU
{
public:
    static void forwardDepthGPU(const int &width, const int &height, const int &channel, const int &outWidth, const int &outHeight,
                                const int &outChannel, const int &batch, float *const &input, float *const &output);

    static void forwardNormalGPU(const int &width, const int &height, const int &channel, const int &outWidth, const int &outHeight,
                                 const int &outChannel, const int &strideX, const int &strideY, const int &kSizeX, const int kSizeY,
                                 const int &paddingX, const int &paddingY, const int &batch, float *const &input, float *const &output);
};

}

#endif
