//----------------------------------------------------------------------
//    $Id: fe_support_points_q_dg0.cc 26376 2012-09-14 12:32:17Z bangerth $
//    Version: $Name$
//
//    Copyright (C) 2007, 2008, 2010, 2012 by the deal.II authors
//
//    This file is subject to QPL and may not be  distributed
//    without copyright and license information. Please refer
//    to the file deal.II/doc/license.html for the  text  and
//    further information on this license.
//
//----------------------------------------------------------------------
//
// Compute support points

#include "../tests.h"
#include "fe_support_points_common.h"


int
main()
{
  initlog(__FILE__);
  deallog.threshold_double(1.e-10);

  CHECK_ALL(Q_DG0,1,2);
  CHECK_ALL(Q_DG0,2,2);
  CHECK_ALL(Q_DG0,3,2);

  CHECK_ALL(Q_DG0,1,3);
  CHECK_ALL(Q_DG0,2,3);
}