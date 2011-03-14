#ifndef CYGONCE_DEVS_ADDERII_ETH_INL
#define CYGONCE_DEVS_ADDERII_ETH_INL
//==========================================================================
//
//      adderii_eth.inl
//
//      Hardware specifics for A&M AdderII ethernet support
//
//==========================================================================
//####ECOSGPLCOPYRIGHTBEGIN####
// -------------------------------------------
// This file is part of eCos, the Embedded Configurable Operating System.
// Copyright (C) 1998, 1999, 2000, 2001, 2002 Red Hat, Inc.
// Copyright (C) 2002, 2003 Gary Thomas
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
//#####DESCRIPTIONBEGIN####
//
// Author(s):    gthomas
// Contributors: gthomas,F.Robbins
// Date:         2002-09-03
// Purpose:      
// Description:  
//              
//####DESCRIPTIONEND####
//
//==========================================================================


extern int  _adder_get_leds(void);
extern void _adder_set_leds(int);

#define _get_led()  _adder_get_leds()
#define _set_led(v) _adder_set_leds(v)

#define LED_TxACTIVE  1
#define LED_RxACTIVE  2
#define LED_IntACTIVE 3

// Interrupt generated by device
#define FEC_ETH_INT CYGNUM_HAL_INTERRUPT_SIU_LVL1
// Address of PHY (transceiver) device
#define FEC_ETH_PHY 0

// Reset the PHY - analagous to hardware reset
#define FEC_ETH_RESET_PHY()                                     \
    eppc->pip_pbdat &= ~0x00010000;  /* Reset PHY chip pb15 */       \
    CYGACC_CALL_IF_DELAY_US(10000);  /* 10ms */                 \
    eppc->pip_pbdat |= 0x00010000;   /* Enable PHY chip pb15 */

#endif  // CYGONCE_DEVS_ADDERII_ETH_INL
// ------------------------------------------------------------------------
