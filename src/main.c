/*
 * Copyright (c) 2012-2014 Wind River Systems, Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr/kernel.h>

int main(void)
{
 	while(1)
 	{

		printk("Hello World! %s\n", CONFIG_BOARD);
		K_sleep(K_SECONDS(1));
		return 0;
 	}
}
