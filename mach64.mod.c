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
	{ 0xf06ee782, "module_layout" },
	{ 0x90655e6f, "drm_release" },
	{ 0x737e30bb, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x4d38b96b, "drm_pci_exit" },
	{ 0xe9faa02b, "drm_mmap" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc1a84907, "drm_core_ioremap" },
	{ 0xe02b91a9, "drm_vblank_init" },
	{ 0x5d12916, "drm_pci_free" },
	{ 0x4f8b5ddb, "_copy_to_user" },
	{ 0xbf0fa738, "drm_handle_vblank" },
	{ 0xfb578fc5, "memset" },
	{ 0x29c47db2, "current_task" },
	{ 0x27e1a049, "printk" },
	{ 0xeae8b9ca, "noop_llseek" },
	{ 0x9745d638, "drm_err" },
	{ 0x8f492075, "drm_core_ioremapfree" },
	{ 0xee2e6975, "drm_getsarea" },
	{ 0x33e128bc, "drm_ioctl" },
	{ 0x1dbf08da, "drm_irq_uninstall" },
	{ 0xbfb222b, "drm_pci_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2bf9e1f0, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xaf688152, "drm_pci_init" },
	{ 0x498dcb5e, "drm_ut_debug_printk" },
	{ 0x4f6b400b, "_copy_from_user" },
	{ 0xac75ce18, "drm_poll" },
	{ 0xdb5cd151, "drm_fasync" },
	{ 0x4486f127, "drm_open" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=drm";

