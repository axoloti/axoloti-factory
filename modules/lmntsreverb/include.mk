#$(info include.mk)

#$(info   MODULE_SRC_DIR=$(MODULE_SRC_DIR))
#$(info   MODULE=$(MODULE))

MODULE_INC=$(call sq,$(MODULE_SRC_DIR)/$(MODULE).h)
#$(info   MODULE_INC $(MODULE_INC))

ALLINC+= $(MODULE_INC)
MODULE_BDIR = $(call sq,${axoloti_home}/build/$(MODULE))
# TODO: ensure MODULE_BDIR exists...
trgt1:= $(call qsb,$(MODULE_BDIR))/$(MODULE).elf
$(info trgt1 = $(trgt1))

MODULEDEP := $(MODULE).elf
MODULEDEPS += $(MODULEDEP)

MODULEFILEDEPS += \
	$(call sq,$(MODULE_BDIR)/$(MODULE).elf) \
	$(call sq,/lib/$(MODULE).elf)

#$(info MODULEDEP $(MODULEDEP))

# TODO: needs cleanup
# VPATH does not work with spaces
VP2=$(subst $(SPACE),\ ,$(MODULE_SRC_DIR))
#$(info VP2=$(VP2))

#$(VP2)/$(MODULE).cpp $(VP2)/$(MODULE).h $(VP2)/Makefile
#$(MODULE).elf:
#$(call sq,$(MODULE_BDIR)/lmnts.elf):
$(MODULE).elf:
	@$(MKDIR_P) "$(call qs,$(MODULE_BDIR))"
	@make -f "$(MODULE_SRC_DIR)/Makefile" -C "$(call qs,$(MODULE_BDIR))" VPATH=$(VP2) all
