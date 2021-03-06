/*
 * Samsung Exynos SoC series VIPx driver
 *
 * Copyright (c) 2018 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __VERTEX_UTIL_H__
#define __VERTEX_UTIL_H__

#include <linux/bitmap.h>

void vertex_util_bitmap_init(unsigned long *bitmap, unsigned int nbits);
unsigned int vertex_util_bitmap_get_zero_bit(unsigned long *bitmap,
		unsigned int nbits);
void vertex_util_bitmap_clear_bit(unsigned long *bitmap, int bit);

#endif
