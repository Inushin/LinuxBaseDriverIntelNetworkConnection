#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xb3753869, "module_layout" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc08ffb53, "netdev_info" },
	{ 0x35216b26, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x17e87c4f, "ethtool_op_get_ts_info" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0x862258db, "timecounter_init" },
	{ 0x212342d0, "__pm_runtime_idle" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xe029c9c, "skb_clone_tx_timestamp" },
	{ 0x56b6e9c6, "__put_devmap_managed_page" },
	{ 0x63288b9a, "pci_write_config_word" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x5ab5b891, "param_ops_int" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0xb1c0a7a6, "napi_disable" },
	{ 0x96de5410, "pci_read_config_byte" },
	{ 0x71fded2d, "napi_schedule_prep" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0xd8fd6a9a, "dma_set_mask" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xae630ce8, "pci_disable_device" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x478cc26a, "pci_disable_msix" },
	{ 0x4ea25709, "dql_reset" },
	{ 0xecaf5c8a, "netif_carrier_on" },
	{ 0x28a8c058, "pm_qos_add_request" },
	{ 0xa41935ec, "pm_qos_remove_request" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x9d9b5eb4, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xbddf62d2, "dma_direct_sync_single_for_cpu" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x78fed34, "pci_write_config_byte" },
	{ 0x34c36bf5, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x436bd4c3, "pcie_capability_clear_and_set_word" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xd539f1b5, "__pm_runtime_resume" },
	{ 0x8127e80b, "pci_enable_wake" },
	{ 0x999e8297, "vfree" },
	{ 0x2b54d1d5, "dma_free_attrs" },
	{ 0xfbd9ad75, "pci_disable_link_state_locked" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x43d678f7, "_dev_notice" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x11e66d2, "__alloc_pages_nodemask" },
	{ 0x36e58bcd, "pv_ops" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x32ffdcca, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x368a4bc3, "__dynamic_netdev_dbg" },
	{ 0x18c692e, "skb_trim" },
	{ 0xeaee8786, "__netdev_alloc_skb" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x5bef4c35, "__pskb_pull_tail" },
	{ 0x157c56dc, "ptp_clock_unregister" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xfee56dca, "pci_set_master" },
	{ 0xb7411ad6, "netif_schedule_queue" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xbcbfbe44, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x1680cb90, "pci_enable_pcie_error_reporting" },
	{ 0x6b8283be, "convert_art_to_tsc" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x240a49d2, "netif_tx_wake_queue" },
	{ 0xa714a55b, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x1b44c663, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0x6ef7ab52, "ethtool_op_get_link" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xaadc6c4, "free_netdev" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x6700be79, "register_netdev" },
	{ 0xbdefdccb, "pci_read_config_word" },
	{ 0x37805d7b, "dma_direct_map_page" },
	{ 0x5792f848, "strlcpy" },
	{ 0xfda0bdf3, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xb11ba18d, "__dev_kfree_skb_irq" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xd9a7e9c7, "netif_napi_add" },
	{ 0xd635ff26, "ptp_clock_register" },
	{ 0x2072ee9b, "request_threaded_irq" },
	{ 0x45997b1d, "softnet_data" },
	{ 0x8225a203, "device_wakeup_enable" },
	{ 0xe6257e29, "_dev_err" },
	{ 0xdd69547d, "pci_enable_msi" },
	{ 0x276940fc, "pci_clear_master" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x6f9e763b, "timecounter_read" },
	{ 0x930b54a9, "pci_find_capability" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xe912db23, "pci_select_bars" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0x9e163a88, "dma_direct_unmap_page" },
	{ 0xb8212341, "timecounter_cyc2time" },
	{ 0x8d49a5f7, "netif_device_attach" },
	{ 0x8104bca3, "napi_gro_receive" },
	{ 0x9409627e, "_dev_info" },
	{ 0x1c8e6fb3, "kmem_cache_alloc_node_trace" },
	{ 0xf1036f24, "pci_disable_link_state" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x618911fc, "numa_node" },
	{ 0x3de31761, "netif_device_detach" },
	{ 0x16697637, "__alloc_skb" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x12a38747, "usleep_range" },
	{ 0xa48eeadc, "pci_enable_msix_range" },
	{ 0x7478c9a1, "__napi_schedule" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x7afa5105, "pci_cleanup_aer_uncorrect_error_status" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x9922d81, "pm_schedule_suspend" },
	{ 0x50c97d6a, "passthru_features_check" },
	{ 0xd1562ed1, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xa7703eea, "eth_type_trans" },
	{ 0x38c0115f, "dev_driver_string" },
	{ 0x7bcbaf39, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x60a8ac7a, "netdev_err" },
	{ 0x467df16d, "netdev_rss_key_fill" },
	{ 0x478f00e1, "pci_unregister_driver" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x944c43f, "node_states" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xaaa6cecd, "netdev_warn" },
	{ 0x6bfc595c, "eth_validate_addr" },
	{ 0xcf941b3e, "pci_disable_pcie_error_reporting" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x8107edeb, "___pskb_trim" },
	{ 0xa3bf6975, "param_array_ops" },
	{ 0x27c3c7a0, "ptp_clock_index" },
	{ 0xf83c1282, "pci_disable_msi" },
	{ 0xdcb76b2b, "dev_trans_start" },
	{  0xde88b, "get_device_system_crosststamp" },
	{ 0xedc03953, "iounmap" },
	{ 0x2901eed3, "pci_prepare_to_sleep" },
	{ 0xe63713e6, "pci_dev_run_wake" },
	{ 0xb893b480, "dma_direct_sync_single_for_device" },
	{ 0x24694125, "__pci_register_driver" },
	{ 0xe4233013, "pm_qos_update_request" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xc041bda5, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x9e0c711d, "vzalloc_node" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x116c8d71, "consume_skb" },
	{ 0x252fb348, "pci_enable_device_mem" },
	{ 0x9be5a20f, "__napi_alloc_skb" },
	{ 0x74e41a24, "skb_tstamp_tx" },
	{ 0x21d43104, "skb_put" },
	{ 0xa16b12ad, "pci_release_selected_regions" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x999f25e3, "param_ops_uint" },
	{ 0x7aae56f8, "skb_copy_bits" },
	{ 0x63484071, "pcie_capability_write_word" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xdd7bab0c, "dma_ops" },
	{ 0xdb82094f, "pci_request_selected_regions_exclusive" },
	{ 0xfde8f5cf, "__put_page" },
	{ 0x763bb516, "__skb_pad" },
	{ 0x6f2fb772, "pcie_capability_read_word" },
	{ 0x43ce8436, "dev_get_stats" },
	{ 0xec0542d, "device_set_wakeup_enable" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x55842ec1, "pci_save_state" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x57281fa4, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d0000105Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000105Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010A4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010BCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010A5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001060sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010D9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010DAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010D5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010B9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000107Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000107Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000107Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000108Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000108Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000109Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010D3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000150Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001096sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010BAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001098sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010BBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000104Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000104Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000104Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000104Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001049sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001501sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010BDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000294Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010E5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010BFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010CBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010CCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010CDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010CEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010DEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010DFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001525sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010EAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010EBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010EFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001502sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001503sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000153Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000153Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000155Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001559sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015A0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015A1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015A2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015A3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000156Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001570sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015B7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015B8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015B9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015D7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015D8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015E3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015D6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000D53sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000D55sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015BDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015BEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015BBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015BCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015DFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015E0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015E1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015E2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000D4Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000D4Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000D4Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000D4Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015FBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015FCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015F9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015FAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015F4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015F5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001A1Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001A1Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001A1Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001A1Dsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "559F545E49324123D9302EF");
