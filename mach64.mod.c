#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
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
	{ 0xf1f15049, "module_layout" },
	{ 0x62b4b07, "drm_release" },
	{ 0x48bed6d1, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xaae823c9, "drm_pci_exit" },
	{ 0xe86e0281, "drm_mmap" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf2be7f98, "drm_core_ioremap" },
	{ 0x967123c5, "drm_vblank_init" },
	{ 0x6499b14d, "drm_pci_free" },
	{ 0x4f8b5ddb, "_copy_to_user" },
	{ 0x388db8cb, "drm_handle_vblank" },
	{ 0xfb578fc5, "memset" },
	{ 0x192b1873, "current_task" },
	{ 0x27e1a049, "printk" },
	{ 0xb4390f9a, "mcount" },
	{ 0x83d8d369, "noop_llseek" },
	{ 0x9745d638, "drm_err" },
	{ 0x12745dc0, "drm_core_ioremapfree" },
	{ 0xdc4ba706, "drm_getsarea" },
	{ 0xb886d363, "drm_ioctl" },
	{ 0x852013f3, "drm_irq_uninstall" },
	{ 0x30a45969, "drm_pci_alloc" },
	{ 0xa5a363b4, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc6c70cd8, "drm_pci_init" },
	{ 0x498dcb5e, "drm_ut_debug_printk" },
	{ 0x4f6b400b, "_copy_from_user" },
	{ 0x7a60debe, "drm_poll" },
	{ 0x2638e5c7, "drm_fasync" },
	{ 0x9df3094c, "drm_open" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=drm";

