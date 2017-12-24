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
	{ 0xc3fe5c11, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x197fdb39, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0xca0f5a27, __VMLINUX_SYMBOL_STR(device_remove_bin_file) },
	{ 0x505aafb, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x9924c496, __VMLINUX_SYMBOL_STR(__usb_get_extra_descriptor) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xb5b8afb8, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xe570d84b, __VMLINUX_SYMBOL_STR(framebuffer_release) },
	{ 0x487f831, __VMLINUX_SYMBOL_STR(fb_find_best_display) },
	{ 0xc9561772, __VMLINUX_SYMBOL_STR(fb_destroy_modelist) },
	{ 0xa1b759ce, __VMLINUX_SYMBOL_STR(fb_add_videomode) },
	{ 0xd578c875, __VMLINUX_SYMBOL_STR(fb_sys_read) },
	{ 0x858df928, __VMLINUX_SYMBOL_STR(__rt_mutex_init) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xe0afe59e, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0x7b52ac5a, __VMLINUX_SYMBOL_STR(_mutex_unlock) },
	{ 0xafb056b8, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x5ee52022, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x6f28c5d7, __VMLINUX_SYMBOL_STR(sys_copyarea) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x930f4f0a, __VMLINUX_SYMBOL_STR(rt_spin_lock) },
	{ 0x81af9a44, __VMLINUX_SYMBOL_STR(rt_spin_unlock) },
	{ 0x8ed8503b, __VMLINUX_SYMBOL_STR(usb_get_descriptor) },
	{ 0xc671e369, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x3744cf36, __VMLINUX_SYMBOL_STR(vmalloc_to_pfn) },
	{ 0xbbaf5b39, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x7a890c8, __VMLINUX_SYMBOL_STR(fb_alloc_cmap) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xd4ba27df, __VMLINUX_SYMBOL_STR(register_framebuffer) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xf05ffa15, __VMLINUX_SYMBOL_STR(fb_var_to_videomode) },
	{ 0x6dc6dd56, __VMLINUX_SYMBOL_STR(down) },
	{ 0x99e2a905, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0xa598e29c, __VMLINUX_SYMBOL_STR(vesa_modes) },
	{ 0xb87fcbcb, __VMLINUX_SYMBOL_STR(__rt_spin_lock_init) },
	{ 0x1ad3a5f5, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x98b71c6, __VMLINUX_SYMBOL_STR(fb_dealloc_cmap) },
	{ 0xc5bc1ac6, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xda8af7ad, __VMLINUX_SYMBOL_STR(fb_find_nearest_mode) },
	{ 0xd6c164b5, __VMLINUX_SYMBOL_STR(sys_fillrect) },
	{ 0x75090002, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb4c2c24c, __VMLINUX_SYMBOL_STR(sys_imageblit) },
	{ 0x42298786, __VMLINUX_SYMBOL_STR(fb_sys_write) },
	{ 0xff9ca065, __VMLINUX_SYMBOL_STR(fb_edid_to_monspecs) },
	{ 0x164f059, __VMLINUX_SYMBOL_STR(device_create_bin_file) },
	{ 0x1dc36131, __VMLINUX_SYMBOL_STR(fb_destroy_modedb) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x1386e010, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x8c0e3f10, __VMLINUX_SYMBOL_STR(framebuffer_alloc) },
	{ 0xba207827, __VMLINUX_SYMBOL_STR(fb_deferred_io_cleanup) },
	{ 0x394e44e3, __VMLINUX_SYMBOL_STR(fb_deferred_io_init) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe7add683, __VMLINUX_SYMBOL_STR(remap_pfn_range) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x78e739aa, __VMLINUX_SYMBOL_STR(up) },
	{ 0x56116426, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xc8c1188f, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x18d99daf, __VMLINUX_SYMBOL_STR(_mutex_lock) },
	{ 0xb5419b40, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x5ff3ba32, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xfbd7168c, __VMLINUX_SYMBOL_STR(down_timeout) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0xf5ac0753, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x65f3ad9a, __VMLINUX_SYMBOL_STR(fb_videomode_to_var) },
	{ 0xdb6b06c3, __VMLINUX_SYMBOL_STR(unregister_framebuffer) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbcore";

MODULE_ALIAS("usb:v1C40p04DCd*dc*dsc*dp*ic*isc*ip*in*");
