/* mach64_drv.c -- mach64 (Rage Pro) driver -*- linux-c -*-
 * Created: Fri Nov 24 18:34:32 2000 by gareth@valinux.com
 *
 * Copyright 2000 Gareth Hughes
 * All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * GARETH HUGHES BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * Authors:
 *    Gareth Hughes <gareth@valinux.com>
 *    Leif Delgass <ldelgass@retinalburn.net>
 */

#include <linux/module.h>

#include <drm/drmP.h>
#include "mach64_drm.h"
#include "mach64_drv.h"

#define mach64_PCI_IDS \
	{0x1002, 0x4749, PCI_ANY_ID, PCI_ANY_ID, 0, 0, 0}, \
	{0x1002, 0x4750, PCI_ANY_ID, PCI_ANY_ID, 0, 0, 0}, \
	{0x1002, 0x4751, PCI_ANY_ID, PCI_ANY_ID, 0, 0, 0}, \
	{0x1002, 0x4742, PCI_ANY_ID, PCI_ANY_ID, 0, 0, 0}, \
	{0x1002, 0x4744, PCI_ANY_ID, PCI_ANY_ID, 0, 0, 0}, \
	{0x1002, 0x4c49, PCI_ANY_ID, PCI_ANY_ID, 0, 0, 0}, \
	{0x1002, 0x4c50, PCI_ANY_ID, PCI_ANY_ID, 0, 0, 0}, \
	{0x1002, 0x4c51, PCI_ANY_ID, PCI_ANY_ID, 0, 0, 0}, \
	{0x1002, 0x4c42, PCI_ANY_ID, PCI_ANY_ID, 0, 0, 0}, \
	{0x1002, 0x4c44, PCI_ANY_ID, PCI_ANY_ID, 0, 0, 0}, \
	{0x1002, 0x474c, PCI_ANY_ID, PCI_ANY_ID, 0, 0, 0}, \
	{0x1002, 0x474f, PCI_ANY_ID, PCI_ANY_ID, 0, 0, 0}, \
	{0x1002, 0x4752, PCI_ANY_ID, PCI_ANY_ID, 0, 0, 0}, \
	{0x1002, 0x4753, PCI_ANY_ID, PCI_ANY_ID, 0, 0, 0}, \
	{0x1002, 0x474d, PCI_ANY_ID, PCI_ANY_ID, 0, 0, 0}, \
	{0x1002, 0x474e, PCI_ANY_ID, PCI_ANY_ID, 0, 0, 0}, \
	{0x1002, 0x4c52, PCI_ANY_ID, PCI_ANY_ID, 0, 0, 0}, \
	{0x1002, 0x4c53, PCI_ANY_ID, PCI_ANY_ID, 0, 0, 0}, \
	{0x1002, 0x4c4d, PCI_ANY_ID, PCI_ANY_ID, 0, 0, 0}, \
	{0x1002, 0x4c4e, PCI_ANY_ID, PCI_ANY_ID, 0, 0, 0}, \
	{0, 0, 0}

static struct pci_device_id pciidlist[] = {
	mach64_PCI_IDS
};

static const struct file_operations mach64_driver_fops = {
	.owner = THIS_MODULE,
	.open = drm_open,
	.release = drm_release,
	.unlocked_ioctl = drm_ioctl,
	.mmap = drm_legacy_mmap,
	.poll = drm_poll,
	.llseek = noop_llseek,
};

static struct drm_driver driver = {
	.driver_features =
	    DRIVER_USE_AGP | DRIVER_PCI_DMA | DRIVER_HAVE_DMA
	    | DRIVER_HAVE_IRQ | DRIVER_IRQ_SHARED | DRIVER_LEGACY,
	.lastclose = mach64_driver_lastclose,
	.get_vblank_counter = mach64_get_vblank_counter,
	.enable_vblank = mach64_enable_vblank,
	.disable_vblank = mach64_disable_vblank,
	.irq_preinstall = mach64_driver_irq_preinstall,
	.irq_postinstall = mach64_driver_irq_postinstall,
	.irq_uninstall = mach64_driver_irq_uninstall,
	.irq_handler = mach64_driver_irq_handler,
	.ioctls = mach64_ioctls,
	.dma_ioctl = mach64_dma_buffers,
	.fops = &mach64_driver_fops,
	.name = DRIVER_NAME,
	.desc = DRIVER_DESC,
	.date = DRIVER_DATE,
	.major = DRIVER_MAJOR,
	.minor = DRIVER_MINOR,
	.patchlevel = DRIVER_PATCHLEVEL,
};

static struct pci_driver mach64_pci_driver = {
	.name = DRIVER_NAME,
	.id_table = pciidlist,
};

static int __init mach64_init(void)
{
	driver.num_ioctls = mach64_max_ioctl;
	return drm_legacy_pci_init(&driver, &mach64_pci_driver);
}

static void __exit mach64_exit(void)
{
	drm_legacy_pci_exit(&driver, &mach64_pci_driver);
}

module_init(mach64_init);
module_exit(mach64_exit);

MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL and additional rights");
