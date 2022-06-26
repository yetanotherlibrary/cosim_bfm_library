SHELL=/bin/sh

DIR_C       = ../c
DIR_VERILOG = ../verilog
LIB_DPI     = mydpi

all:
	gcc -g -fPIC -Wall -I${VCS_HOME}/include -c ${DIR_C}/function.c -o ${LIB_DPI}.o
	gcc -fPIC -shared -o ${LIB_DPI}.so ${LIB_DPI}.o
	vcs -timescale=1ps/1ps -full64 -sverilog -f run.f -debug_access+all
	./simv -l simv.log -sv_lib ${LIB_DPI}

all_one:
	xsc -o ${LIB_DPI}.so ${DIR_C}/function.c
	xelab -nolog -sv -svlog ${DIR_VERILOG}/file.sv -sv_lib ${LIB_DPI}
	xsim -nolog work.top -runall

#	./simv -gui=verdi-sx &
verdi:
	Verdi-SX -sv -f run.f &

clean:
	/bin/rm  -f   ${LIB_DPI}.so
	/bin/rm  -f   ${LIB_DPI}.o
	/bin/rm  -f   xelab.log
	/bin/rm  -f   xelab.pb
	/bin/rm  -f   xsc.log
	/bin/rm  -f   xsc.pb
	/bin/rm  -fr  xsim.dir
	/bin/rm  -f   webtalk_*.backup.jou
	/bin/rm  -f   webtalk_*.backup.log
	/bin/rm  -f   webtalk.jou
	/bin/rm  -f   webtalk.log
	/bin/rm  -f   xsim_*.backup.jou
	/bin/rm  -f   xsim_*.backup.log
	/bin/rm  -f   xsim.jou
	/bin/rm  -f   xsim.log
	/bin/rm  -fr  .Xil
	/bin/rm  -fr  csrc
	/bin/rm  -fr  simv.daidir
	/bin/rm  -fr  vc_hdrs.h
	/bin/rm  -fr  simv
	/bin/rm  -fr  simv.log
	/bin/rm  -fr  ucli.key
	/bin/rm  -fr  Verdi-SXLog
	/bin/rm  -fr  verdiLog

cleanup clobber: clean
	/bin/rm   -f   dpi.so

cleanupall distclean: cleanup

