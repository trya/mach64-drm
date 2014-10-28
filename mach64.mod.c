#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x8b3819a4, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xd078ef08, __VMLINUX_SYMBOL_STR(drm_release) },
	{ 0x43fea726, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xdf30c9e6, __VMLINUX_SYMBOL_STR(drm_pci_exit) },
	{ 0x1dfb929, __VMLINUX_SYMBOL_STR(drm_mmap) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x5a7b02c3, __VMLINUX_SYMBOL_STR(drm_core_ioremap) },
	{ 0xd83eba66, __VMLINUX_SYMBOL_STR(drm_vblank_init) },
	{ 0x83a78e19, __VMLINUX_SYMBOL_STR(drm_pci_free) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x342a6ccd, __VMLINUX_SYMBOL_STR(drm_handle_vblank) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x9cb4a4a, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xefd33b01, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0x9745d638, __VMLINUX_SYMBOL_STR(drm_err) },
	{ 0xeaa6c700, __VMLINUX_SYMBOL_STR(drm_core_ioremapfree) },
	{ 0x20645642, __VMLINUX_SYMBOL_STR(drm_debug) },
	{ 0x41557571, __VMLINUX_SYMBOL_STR(drm_getsarea) },
	{ 0x4ef82c98, __VMLINUX_SYMBOL_STR(drm_ioctl) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xfe23be8f, __VMLINUX_SYMBOL_STR(drm_irq_uninstall) },
	{ 0xf93886fc, __VMLINUX_SYMBOL_STR(drm_pci_alloc) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x8829c16f, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xb25f06f8, __VMLINUX_SYMBOL_STR(drm_pci_init) },
	{ 0xc360e7e2, __VMLINUX_SYMBOL_STR(drm_ut_debug_printk) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x227b4b2e, __VMLINUX_SYMBOL_STR(drm_poll) },
	{ 0x8d6e639c, __VMLINUX_SYMBOL_STR(drm_open) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=drm";

