/*******************************************************************************
 *   PRIMME PReconditioned Iterative MultiMethod Eigensolver
 *   Copyright (C) 2005  James R. McCombs,  Andreas Stathopoulos
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
 * File: inner_solve_private.h
 *
 * Purpose - Prototypes used exclusively by inner_solve.c
 *
 * Module name      : %M%
 * SID              : %I%
 * Date             : %G%
 ******************************************************************************/

#ifndef INNER_SOLVE_PRIVATE_H
#define INNER_SOLVE_PRIVATE_H

#define APPLYPROJECTEDPRECONDITIONER_FAILURE -1
#define APPLYSKEWPROJECTOR_FAILURE           -2
#define UDUSOLVE_FAILURE                     -3

static int apply_projected_preconditioner(@(type) *v, @(type) *Q, 
   @(type) *RprojectorQ, @(type) *x, @(type) *RprojectorX, 
   int sizeRprojectorQ, int sizeRprojectorX, @(type) *xKinvx, 
   @(type) *UDU, int *ipivot, @(type) *result, @(type) *rwork, 
   primme_params *primme);

static int apply_skew_projector(@(type) *Q, @(type) *Qhat, @(type) *UDU, 
   int *ipivot, int numCols, @(type) *v, @(type) *rwork, 
   primme_params *primme);

static void apply_projected_matrix(@(type) *v, double shift, @(type) *Q, 
   int dimQ, @(type) *result, @(type) *rwork, primme_params *primme);

static void apply_projector(@(type) *Q, int numCols, @(type) *v, 
   @(type) *rwork, primme_params *primme);

static @(type) dist_dot(@(type) *x, int incx,
   @(type) *y, int incy, primme_params *primme);

#endif