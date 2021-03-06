/* device.h 
 *
 * Copyright (c) 2009-2013 Brown Deer Technology, LLC.  All Rights Reserved.
 *
 * This software was developed by Brown Deer Technology, LLC.
 * For more information contact info@browndeertechnology.com
 *
 * This program is free software: you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License version 3 (LGPLv3)
 * as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/* DAR */

#ifndef _device_h
#define _device_h

#include "coprthr_device.h"

typedef int (*coprthr_init_device_call_t) (void);

#define coprthr_device_init(initfn) \
static inline coprthr_init_device_call_t __init_device_call_test(void) \
{ return initfn; } \
int coprthr_init_device(void) __attribute__((alias(#initfn)));

int coprthr_register_device( struct coprthr_device* dev );


void __do_discover_devices_1(
   unsigned int* p_ndevices,
   struct coprthr_device*** p_devtab,
   int flag
);

extern struct coprthr_device** __devtab;
extern unsigned int __ndev;
extern struct coprthr_device* __ddtab[256];
extern int __ddtab_nxt0;

#endif

