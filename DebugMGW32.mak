.SUFFIXES:

TOPDIR 		?= 	$(CURDIR)

TARGET		:= 	mhxx_editor

BUILD		:= 	Debug
INCLUDES	:= 	Includes Sim

WXCXX		:=  $(shell wx-config --cxx)
WXCXXFLAGS 	:=  $(shell wx-config --cxxflags)
WXLD		:=  $(shell wx-config --ld)
WXLIBS		:=  $(shell wx-config --libs all)

#CURLLIB     := -L $(CURL)/lib -lcurl -lwldap32 -lws2_32
#CURLINCLUDE := -I $(CURL)/include 
#-I$(CURL)/lib


SOURCES 	:= 	Sources \
				Sources/GUI \
				Sources/GUI/Sub \
				Sources/Tools \
				Sources/Tools/Sim \
				Sources/Tools/crypto \
				Sources/Save \
				Sources/Quest \
				Sim

#---------------------------------------------------------------------------------
# options for code generation
#---------------------------------------------------------------------------------
CFLAGS		:=	-g
#-DCURL_STATICLIB

CFLAGS		+=	$(INCLUDE) -I $(MINGWOPT)/include

CXXFLAGS	:= $(CFLAGS) -fno-rtti -fno-exceptions -std=gnu++11

LDFLAGS		:= -Os --gc-sections 
#-static

#---------------------------------------------------------------------------------
# no real need to edit anything past this point unless you need to add additional
# rules for different file extensions
#---------------------------------------------------------------------------------
ifneq ($(BUILD),$(notdir $(CURDIR)))
#---------------------------------------------------------------------------------

export OUTPUT	:=	$(CURDIR)/$(TARGET)
export TOPDIR	:=	$(CURDIR)
export VPATH	:=	$(foreach dir,$(SOURCES),$(CURDIR)/$(dir)) \
					$(foreach dir,$(DATA),$(CURDIR)/$(dir))

export DEPSDIR	:=	$(CURDIR)/$(BUILD)

CFILES			:=	$(foreach dir,$(SOURCES),$(notdir $(wildcard $(dir)/*.c)))
CPPFILES		:=	$(foreach dir,$(SOURCES),$(notdir $(wildcard $(dir)/*.cpp)))
#SFILES			:=	$(foreach dir,$(SOURCES),$(notdir $(wildcard $(dir)/*.s)))
#	BINFILES	:=	$(foreach dir,$(DATA),$(notdir $(wildcard $(dir)/*.*)))

export LD 		:= 	$(CXX)
export OFILES	:=	$(CPPFILES:.cpp=.o) $(CFILES:.c=.o) $(SFILES:.s=.o)
export INCLUDE	:=	$(foreach dir,$(INCLUDES),-I $(CURDIR)/$(dir) ) \
					$(foreach dir,$(LIBDIRS),-I $(dir)/include) \
					-I $(CURDIR)/$(BUILD)

export LIBPATHS	:=	$(foreach dir,$(LIBDIRS),-L $(dir)/Lib)

.PHONY: $(BUILD) clean all

#---------------------------------------------------------------------------------
all: $(BUILD)

$(BUILD):
	@[ -d $@ ] || mkdir -p $@
	@$(MAKE) --no-print-directory -C $(BUILD) -f $(CURDIR)/DebugMGW32.mak

#---------------------------------------------------------------------------------
clean:
	@echo clean ... 
	@rm -fr $(BUILD)

re: clean all

#---------------------------------------------------------------------------------

else

DEPENDS	:=	$(OFILES:.o=.d)

#---------------------------------------------------------------------------------
# main targets
#---------------------------------------------------------------------------------
$(OUTPUT).exe : $(OFILES)
#---------------------------------------------------------------------------------
# you need a rule like this for each extension you use as binary data
#---------------------------------------------------------------------------------
%.bin.o	:	%.bin
#---------------------------------------------------------------------------------
	@echo $(notdir $<)
	@$(bin2o)


%.o: %.cpp
	$(CXX) -c $(CFLAGS) $(WXCXXFLAGS) $< -o $@

#---------------------------------------------------------------------------------
%.exe:
	g++ $(OFILES) $(WXLIBS) -o $(OUTPUT)
	@echo creating $(notdir $@)

-include $(DEPENDS)

#---------------------------------------------------------------------------------------
endif
