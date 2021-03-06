/* stdcl.h
 *
 * Copyright (c) 2009-2012 Brown Deer Technology, LLC.  All Rights Reserved.
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

#ifndef _STDCL_H
#define _STDCL_H


#if defined(__OPENCL_VERSION__) 

#include "stdcl_kernel_openclcompat.h"

#elif defined(__STDCL_KERNEL_VERSION__) && __STDCL_KERNEL_VERSION__ >=  020000

#include "stdcl_kernel.h"

#else

#include "stdcl_host.h"

#endif


#endif

