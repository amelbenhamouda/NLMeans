
/*
 * Copyright (c) 2009-2011, A. Buades <toni.buades@uib.es>
 * All rights reserved.
 *
 *
 * Patent warning:
 *
 * This file implements algorithms possibly linked to the patents
 *
 * # A. Buades, T. Coll and J.M. Morel, Image data processing method by
 * reducing image noise, and camera integrating means for implementing
 * said method, EP Patent 1,749,278 (Feb. 7, 2007).
 *
 * This file is made available for the exclusive aim of serving as
 * scientific tool to verify the soundness and completeness of the
 * algorithm description. Compilation, execution and redistribution
 * of this file may violate patents rights in certain countries.
 * The situation being different for every country and changing
 * over time, it is your responsibility to determine which patent
 * rights restrictions apply to you before you compile, use,
 * modify, or redistribute this file. A patent lawyer is qualified
 * to make this determination.
 * If and only if they don't conflict with any patent terms, you
 * can benefit from the following license terms attached to this
 * file.
 *
 * License:
 *
 * This program is provided for scientific and educational only:
 * you can use and/or modify it for these purposes, but you are
 * not allowed to redistribute this work or derivative works in
 * source or executable form. A license must be obtained from the
 * patent right holders for any other use.
 *
 *
 */

#ifndef _LIBDENOISING_H_
#define _LIBDENOISING_H_

#include "libauxiliar.h"

/**
 * @file   libdenoising.cpp
 * @brief  Denoising functions
 */
// void nlmeans_ipol(Half size of comparison window, Half size of research window, Noise parameter, Filtering parameter, Input, Output, Channels, Width, Height);
void nlmeans_ipol(int iDWin, int iDBloc, float fSigma, float fFiltPar, float **fpI, float **fpO, int iChannels, int iWidth,int iHeight);

#endif
