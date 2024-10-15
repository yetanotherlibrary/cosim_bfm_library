#-------------------------------------------------------------------------------
SHELL           = /bin/sh
MAKEFILE        = Makefile
#-------------------------------------------------------------------------------
ifndef COSIM_HOME
   $(warning COSIM_HOME environment variable not defined.)
   export COSIM_HOME = $(abspath ../../../../..)
endif
PLATFORM  = $(shell uname -s | tr '[:upper:]' '[:lower:]')
MACHINE   = $(shell uname -m)
export COSIM_LIB      = cosim_dpi_bfm
export DIR_COSIM_ROOT = $(COSIM_HOME)/lib/vcs/$(PLATFORM)_$(MACHINE)
export DIR_DPI_BFM    = $(COSIM_HOME)/include/verilog
export DPI_BFM        = $(DIR_DPI_BFM)/cosim_bfm_axi_dpi.sv

#-------------------------------------------------------------------------------
export GUI        ?= 0
export OPTIONS    ?= 

#-------------------------------------------------------------------------------
all: elab sim

#xelab -prj xsim.prj -sv_root $(DIR_COSIM_ROOT) -sv_lib $(COSIM_LIB) -debug typical top -s top
elab compile:
	vcs -timescale=1ns/1ps -full64 -sverilog -f run.f -debug_access+all

#	./simv -l simv.log -sv_root $(DIR_COMSIM_ROOT) -sv_lib $(COSIM_LIB)
sim run:
	./simv -l simv.log -sv_lib $(DIR_COSIM_ROOT)/$(COSIM_LIB)

verdi:
	Verdi-SX -f run.f -sv &

clean:
	/bin/rm -f  top.wdb
	/bin/rm -f  wave.vcd
	/bin/rm -f  webtalk_*.backup.jou
	/bin/rm -f  webtalk_*.backup.log
	/bin/rm -f  webtalk.jou
	/bin/rm -f  webtalk.log
	/bin/rm -f  xelab.log
	/bin/rm -f  xelab.pb
	/bin/rm -fr .Xil/
	/bin/rm -f  xsim_*.backup.jou
	/bin/rm -f  xsim_*.backup.log
	/bin/rm -fr xsim.dir/
	/bin/rm -f  xsim.jou
	/bin/rm -f  xsim.log
	/bin/rm -f  xvlog.log
	/bin/rm -f  xvlog.pb
	/bin/rm -rf  csrc
	/bin/rm -rf  simv.daidir
	/bin/rm -rf  simv simv.log ucli.key vc_hdrs.h
	/bin/rm -rf  Verdi-SXLog
	/bin/rm -rf  novas_dump.log
	/bin/rm -rf  *.fsdb

cleanup clobber: clean

cleanupall distclean: cleanup
