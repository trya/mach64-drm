#
# Makefile for the drm device driver.  This driver provides support for the
# Direct Rendering Infrastructure (DRI) in XFree86 4.1.0 and higher.

KSRC=/lib/modules/`uname -r`/build

ccflags-y := -Iinclude/drm
mach64-y := mach64_drv.o mach64_dma.o mach64_irq.o mach64_state.o
obj-m := mach64.o

default:
	make -C ${KSRC} M=`pwd` modules

clean:
	make -C ${KSRC} M=`pwd` clean

install:
	make -C ${KSRC} M=`pwd` modules_install
	depmod -a

uninstall:
	rm /lib/modules/`uname -r`/extra/mach64.ko
	depmod -a
