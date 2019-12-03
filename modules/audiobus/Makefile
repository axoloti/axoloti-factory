#axoloti_api ?= ../../../api
#axoloti_env ?= ../../../env
#axoloti_runtime ?= ../../..

module=audiobus

objs := ${module}.o
deps := $(objs:.o=.d)

all: Makefile.uptodate \
	${module}.elf \
	${module}.read \
	${module}.lst \
	${module}.dbg.read \
	${module}.dbg.lst


include ${axoloti_env}/module.mk
include ${axoloti_env}/module-rules.mk

CCFLAGS += -ggdb3 \
	-nostdlib \
	-fno-common \
	-fno-exceptions \
	-fno-rtti \
	-fomit-frame-pointer \
	-fno-math-errno \
	-fno-threadsafe-statics \
	-fno-use-cxa-atexit \
	-Os

LDFLAGS += \
	-Wl,-Ur \
	-Wl,--gc-sections \
	-Wl,--require-defined=audiobus_add \
	-Wl,--require-defined=audiobus_sub \
	-Wl,--require-defined=audiobus_get

ALLINCDIR += $(VPATH)/../mtblnstrmnts
CPPFLAGS = $(CCFLAGS) $(DEFS) $(IINCDIR) -MD -MP
