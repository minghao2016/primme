/*******************************************************************************
 *   PRIMME PReconditioned Iterative MultiMethod Eigensolver
 *   Copyright (C) 2015 College of William & Mary,
 *   James R. McCombs, Eloy Romero Alcalde, Andreas Stathopoulos, Lingfei Wu
 *
 *   This file is part of PRIMME.
 *
 *   PRIMME is free software; you can redistribute it and/or
 *   modify it under the terms of the GNU Lesser General Public
 *   License as published by the Free Software Foundation; either
 *   version 2.1 of the License, or (at your option) any later version.
 *
 *   PRIMME is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *   Lesser General Public License for more details.
 *
 *   You should have received a copy of the GNU Lesser General Public
 *   License along with this library; if not, write to the Free Software
 *   Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 *******************************************************************************
 *   NOTE: THIS FILE IS AUTOMATICALLY GENERATED. PLEASE DON'T MODIFY
 ******************************************************************************/


#ifndef ortho_H
#define ortho_H
#if !defined(CHECK_TEMPLATE) && !defined(ortho_Sprimme)
#  define ortho_Sprimme CONCAT(ortho_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(ortho_Rprimme)
#  define ortho_Rprimme CONCAT(ortho_,REAL_SUF)
#endif
int ortho_dprimme(double *basis, int64_t ldBasis, double *R,
      int64_t ldR, int b1, int b2, double *locked, int64_t ldLocked,
      int numLocked, int64_t nLocal, int64_t *iseed, double machEps,
      double *rwork, size_t *rworkSize, primme_params *primme);
#if !defined(CHECK_TEMPLATE) && !defined(ortho_single_iteration_Sprimme)
#  define ortho_single_iteration_Sprimme CONCAT(ortho_single_iteration_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(ortho_single_iteration_Rprimme)
#  define ortho_single_iteration_Rprimme CONCAT(ortho_single_iteration_,REAL_SUF)
#endif
int ortho_single_iteration_dprimme(double *Q, int64_t mQ, int64_t nQ,
      int64_t ldQ, double *X, int *inX, int nX, int64_t ldX,
      double *overlaps, double *norms, double *rwork, size_t *lrwork,
      primme_params *primme);
int ortho_zprimme(_Complex double *basis, int64_t ldBasis, _Complex double *R,
      int64_t ldR, int b1, int b2, _Complex double *locked, int64_t ldLocked,
      int numLocked, int64_t nLocal, int64_t *iseed, double machEps,
      _Complex double *rwork, size_t *rworkSize, primme_params *primme);
int ortho_single_iteration_zprimme(_Complex double *Q, int64_t mQ, int64_t nQ,
      int64_t ldQ, _Complex double *X, int *inX, int nX, int64_t ldX,
      double *overlaps, double *norms, _Complex double *rwork, size_t *lrwork,
      primme_params *primme);
int ortho_sprimme(float *basis, int64_t ldBasis, float *R,
      int64_t ldR, int b1, int b2, float *locked, int64_t ldLocked,
      int numLocked, int64_t nLocal, int64_t *iseed, double machEps,
      float *rwork, size_t *rworkSize, primme_params *primme);
int ortho_single_iteration_sprimme(float *Q, int64_t mQ, int64_t nQ,
      int64_t ldQ, float *X, int *inX, int nX, int64_t ldX,
      float *overlaps, float *norms, float *rwork, size_t *lrwork,
      primme_params *primme);
int ortho_cprimme(_Complex float *basis, int64_t ldBasis, _Complex float *R,
      int64_t ldR, int b1, int b2, _Complex float *locked, int64_t ldLocked,
      int numLocked, int64_t nLocal, int64_t *iseed, double machEps,
      _Complex float *rwork, size_t *rworkSize, primme_params *primme);
int ortho_single_iteration_cprimme(_Complex float *Q, int64_t mQ, int64_t nQ,
      int64_t ldQ, _Complex float *X, int *inX, int nX, int64_t ldX,
      float *overlaps, float *norms, _Complex float *rwork, size_t *lrwork,
      primme_params *primme);
#endif