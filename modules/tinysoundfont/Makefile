#axoloti_api ?= ../../../api
#axoloti_env ?= ../../../env
#axoloti_runtime ?= ../../..

module=tinysoundfont

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
	-O2

LDFLAGS += \
	-Wl,-Ur \
	-Wl,--gc-sections \
	-Wl,--require-defined=tinysoundfont_factory \
	-Wl,--wrap -Wl,memset \
	-Wl,--wrap -Wl,memcpy

CPPFLAGS = $(CCFLAGS) $(DEFS) $(IINCDIR) -MD -MP
