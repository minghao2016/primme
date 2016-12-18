/*******************************************************************************
 * Copyright (c) 2016, College of William & Mary
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of the College of William & Mary nor the
 *       names of its contributors may be used to endorse or promote products
 *       derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COLLEGE OF WILLIAM & MARY BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * PRIMME: https://github.com/primme/primme
 * Contact: Andreas Stathopoulos, a n d r e a s _at_ c s . w m . e d u
 *******************************************************************************
 *   NOTE: THIS FILE IS AUTOMATICALLY GENERATED. PLEASE DON'T MODIFY
 ******************************************************************************/


#ifndef auxiliary_eigs_H
#define auxiliary_eigs_H
#if !defined(CHECK_TEMPLATE) && !defined(Num_compute_residual_Sprimme)
#  define Num_compute_residual_Sprimme CONCAT(Num_compute_residual_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_compute_residual_Rprimme)
#  define Num_compute_residual_Rprimme CONCAT(Num_compute_residual_,REAL_SUF)
#endif
void Num_compute_residual_dprimme(int64_t n, double eval, double *x,
   double *Ax, double *r);
#if !defined(CHECK_TEMPLATE) && !defined(Num_update_VWXR_Sprimme)
#  define Num_update_VWXR_Sprimme CONCAT(Num_update_VWXR_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_update_VWXR_Rprimme)
#  define Num_update_VWXR_Rprimme CONCAT(Num_update_VWXR_,REAL_SUF)
#endif
int Num_update_VWXR_dprimme(double *V, double *W, int64_t mV, int nV,
      int64_t ldV, double *h, int nh, int ldh, double *hVals,
      double *X0, int nX0b, int nX0e, int64_t ldX0,
      double *X1, int nX1b, int nX1e, int64_t ldX1,
      double *X2, int nX2b, int nX2e, int64_t ldX2,
      double *Wo, int nWob, int nWoe, int64_t ldWo,
      double *R, int nRb, int nRe, int64_t ldR, double *Rnorms,
      double *rnorms, int nrb, int nre,
      double *rwork, int lrwork, primme_params *primme);
#if !defined(CHECK_TEMPLATE) && !defined(applyPreconditioner_Sprimme)
#  define applyPreconditioner_Sprimme CONCAT(applyPreconditioner_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(applyPreconditioner_Rprimme)
#  define applyPreconditioner_Rprimme CONCAT(applyPreconditioner_,REAL_SUF)
#endif
int applyPreconditioner_dprimme(double *V, int64_t nLocal, int64_t ldV,
      double *W, int64_t ldW, int blockSize, primme_params *primme);
#if !defined(CHECK_TEMPLATE) && !defined(convTestFun_Sprimme)
#  define convTestFun_Sprimme CONCAT(convTestFun_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(convTestFun_Rprimme)
#  define convTestFun_Rprimme CONCAT(convTestFun_,REAL_SUF)
#endif
int convTestFun_dprimme(double eval, double *evec, double rNorm, int *isconv,
      struct primme_params *primme);
void Num_compute_residual_zprimme(int64_t n, PRIMME_COMPLEX_DOUBLE eval, PRIMME_COMPLEX_DOUBLE *x,
   PRIMME_COMPLEX_DOUBLE *Ax, PRIMME_COMPLEX_DOUBLE *r);
int Num_update_VWXR_zprimme(PRIMME_COMPLEX_DOUBLE *V, PRIMME_COMPLEX_DOUBLE *W, int64_t mV, int nV,
      int64_t ldV, PRIMME_COMPLEX_DOUBLE *h, int nh, int ldh, double *hVals,
      PRIMME_COMPLEX_DOUBLE *X0, int nX0b, int nX0e, int64_t ldX0,
      PRIMME_COMPLEX_DOUBLE *X1, int nX1b, int nX1e, int64_t ldX1,
      PRIMME_COMPLEX_DOUBLE *X2, int nX2b, int nX2e, int64_t ldX2,
      PRIMME_COMPLEX_DOUBLE *Wo, int nWob, int nWoe, int64_t ldWo,
      PRIMME_COMPLEX_DOUBLE *R, int nRb, int nRe, int64_t ldR, double *Rnorms,
      double *rnorms, int nrb, int nre,
      PRIMME_COMPLEX_DOUBLE *rwork, int lrwork, primme_params *primme);
int applyPreconditioner_zprimme(PRIMME_COMPLEX_DOUBLE *V, int64_t nLocal, int64_t ldV,
      PRIMME_COMPLEX_DOUBLE *W, int64_t ldW, int blockSize, primme_params *primme);
int convTestFun_zprimme(double eval, PRIMME_COMPLEX_DOUBLE *evec, double rNorm, int *isconv,
      struct primme_params *primme);
void Num_compute_residual_sprimme(int64_t n, float eval, float *x,
   float *Ax, float *r);
int Num_update_VWXR_sprimme(float *V, float *W, int64_t mV, int nV,
      int64_t ldV, float *h, int nh, int ldh, float *hVals,
      float *X0, int nX0b, int nX0e, int64_t ldX0,
      float *X1, int nX1b, int nX1e, int64_t ldX1,
      float *X2, int nX2b, int nX2e, int64_t ldX2,
      float *Wo, int nWob, int nWoe, int64_t ldWo,
      float *R, int nRb, int nRe, int64_t ldR, float *Rnorms,
      float *rnorms, int nrb, int nre,
      float *rwork, int lrwork, primme_params *primme);
int applyPreconditioner_sprimme(float *V, int64_t nLocal, int64_t ldV,
      float *W, int64_t ldW, int blockSize, primme_params *primme);
int convTestFun_sprimme(float eval, float *evec, float rNorm, int *isconv,
      struct primme_params *primme);
void Num_compute_residual_cprimme(int64_t n, PRIMME_COMPLEX_FLOAT eval, PRIMME_COMPLEX_FLOAT *x,
   PRIMME_COMPLEX_FLOAT *Ax, PRIMME_COMPLEX_FLOAT *r);
int Num_update_VWXR_cprimme(PRIMME_COMPLEX_FLOAT *V, PRIMME_COMPLEX_FLOAT *W, int64_t mV, int nV,
      int64_t ldV, PRIMME_COMPLEX_FLOAT *h, int nh, int ldh, float *hVals,
      PRIMME_COMPLEX_FLOAT *X0, int nX0b, int nX0e, int64_t ldX0,
      PRIMME_COMPLEX_FLOAT *X1, int nX1b, int nX1e, int64_t ldX1,
      PRIMME_COMPLEX_FLOAT *X2, int nX2b, int nX2e, int64_t ldX2,
      PRIMME_COMPLEX_FLOAT *Wo, int nWob, int nWoe, int64_t ldWo,
      PRIMME_COMPLEX_FLOAT *R, int nRb, int nRe, int64_t ldR, float *Rnorms,
      float *rnorms, int nrb, int nre,
      PRIMME_COMPLEX_FLOAT *rwork, int lrwork, primme_params *primme);
int applyPreconditioner_cprimme(PRIMME_COMPLEX_FLOAT *V, int64_t nLocal, int64_t ldV,
      PRIMME_COMPLEX_FLOAT *W, int64_t ldW, int blockSize, primme_params *primme);
int convTestFun_cprimme(float eval, PRIMME_COMPLEX_FLOAT *evec, float rNorm, int *isconv,
      struct primme_params *primme);
#endif
