#define object files in the module
# TODO: needs cleanup
# VPATH does not work with spaces

SPACE :=
SPACE +=

#axoloti_api ?= ../../../api
#axoloti_env ?= ../../../env
#axoloti_runtime ?= ../../..
#M ?= ./


#$(info axoloti_env = $(axoloti_env))
INCL = $(subst $(SPACE),\ ,${axoloti_env}/module.mk)
$(info INCL=$(INCL))
include $(INCL)

CCFLAGS += -ggdb3 \
	-mword-relocations \
	-mlong-calls \
	-nostdlib \
	-fno-common \
	-fno-exceptions \
	-fno-rtti \
	-fomit-frame-pointer \
	-fno-math-errno \
	-fno-threadsafe-statics \
	-fno-use-cxa-atexit \
	-O2

LDFLAGS1 = $(LDFLAGS) \
	-Wl,-Ur \
	-Wl,--gc-sections \
	-Wl,--require-defined=lmntsreverb_factory

ALLINCDIR += $(call sq,$(VPATH)/../mtblnstrmnts)

IINCDIR   = $(call qs,$(patsubst %,-I"%",$(ALLINCDIR)))
LLIBDIR   = $(call qsb,$(patsubst %,-L%,$(DLIBDIR) $(ULIBDIR)))
LDSCRIPT_ = $(call qsb,$(LDSCRIPT))

objs:= lmntsreverb.o
#deps := $(objs:.o=.d)

module=lmntsreverb

all: $(module).dbg.elf $(module).elf $(module).read $(module).lst \
	$(module).dbg.elf $(module).dbg.read $(module).dbg.lst

#-include $(deps)

clean: lmnts.clean
	$(info CLEAN)

#VPATH = ..

.SECONDARY:

#.dir:
#	@$(MKDIR_P) ${M}

lmntsreverb.o : #$(VPATH)%.cpp
	$(info compiling ${<})
	@"$(CPPC)" $(CCFLAGS) $(DEFS) $(IINCDIR) -MD -MP -c "$(VPATH)/lmntsreverb.cpp" -o "$@"

lmntsreverb.dbg.elf : $(objs)
	$(info linking $(@:.o=))
	@"$(LD)" $(LDFLAGS1) -T"${LDSCRIPT}" "$<" -Wl,-Map="$(@:.elf=.map)",--cref -o "$@"
	@#$(LD) $(LDFLAGS1) "$<" ${ALLLIBS} -T${LDSCRIPT_} -Wl,-Map="$(@:.elf=.map)",--cref -o "$@"

%.elf : %.dbg.elf
	@"$(STRP)" -g --strip-unneeded -o "$@" "$<"
	@"$(SZ)" -A "$@"

%.lst : %.elf
	@"$(OD)" -hpxdSsrt "$<" > "$@"

%.read : %.elf
	@"$(TRGT)readelf" -atSln "$<" > "$@"

%.clean :
	@rm -f $*.o
	@rm -f $*.elf
	@rm -f $*.read
	@rm -f $*.lst
	@rm -f $*.dbg.elf
	@rm -f $*.dbg.read
	@rm -f $*.dbg.lst
	@rm -f $*.dbg.map
	@rm -f $*.d
	@rm -f $*.map
