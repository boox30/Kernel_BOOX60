//==========================================================================
//
//      proc_misc.c
//
//      HAL implementation miscellaneous functions
//
//==========================================================================
//####ECOSGPLCOPYRIGHTBEGIN####
// -------------------------------------------
// This file is part of eCos, the Embedded Configurable Operating System.
// Copyright (C) 1998, 1999, 2000, 2001, 2002 Red Hat, Inc.
//
// eCos is free software; you can redistribute it and/or modify it under
// the terms of the GNU General Public License as published by the Free
// Software Foundation; either version 2 or (at your option) any later version.
//
// eCos is distributed in the hope that it will be useful, but WITHOUT ANY
// WARRANTY; without even the implied warranty of MERCHANTABILITY or
// FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
// for more details.
//
// You should have received a copy of the GNU General Public License along
// with eCos; if not, write to the Free Software Foundation, Inc.,
// 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA.
//
// As a special exception, if other files instantiate templates or use macros
// or inline functions from this file, or you compile this file and link it
// with other works to produce a work based on this file, this file does not
// by itself cause the resulting work to be covered by the GNU General Public
// License. However the source code for this file must still be made available
// in accordance with section (3) of the GNU General Public License.
//
// This exception does not invalidate any other reasons why a work based on
// this file might be covered by the GNU General Public License.
//
// Alternative licenses for eCos may be arranged by contacting Red Hat, Inc.
// at http://sources.redhat.com/ecos/ecos-license/
// -------------------------------------------
//####ECOSGPLCOPYRIGHTEND####
//==========================================================================

#include <pkgconf/hal.h>
#include <cyg/infra/cyg_type.h>

#include <cyg/hal/proc_arch.h>
#include <cyg/hal/hal_memmap.h>

//      Define the global pointer to the SIM registers.

volatile mcf5272_sim_t * const mcf5272_sim_p = (mcf5272_sim_t *)MCF5272_MBAR;

//      Define a mirror copy of  the interrupt control  registers used to  set
// interrupt priorities.  In order to mask and unmask a specific interrupt, we
// must be able to set its priority  to  zero  and  then  restore  it  to  ist
// original priority.  We use  these  locations  to  determine  the  level  to
// restore the interrupt to in the unmask macro.

cyg_uint32 hal_icr_pri_mirror[4];

//--------------------------------------------------------------------------
// End of var_misc.c

