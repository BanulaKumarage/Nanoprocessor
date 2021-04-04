/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2013 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/


#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2013 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/


#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
typedef void (*funcp)(char *, char *);
extern int main(int, char**);
extern void execute_296(char*, char *);
extern void execute_297(char*, char *);
extern void execute_295(char*, char *);
extern void execute_17(char*, char *);
extern void execute_24(char*, char *);
extern void execute_25(char*, char *);
extern void execute_26(char*, char *);
extern void execute_27(char*, char *);
extern void execute_28(char*, char *);
extern void execute_29(char*, char *);
extern void execute_30(char*, char *);
extern void execute_31(char*, char *);
extern void execute_20(char*, char *);
extern void execute_21(char*, char *);
extern void execute_22(char*, char *);
extern void execute_23(char*, char *);
extern void execute_36(char*, char *);
extern void execute_41(char*, char *);
extern void execute_42(char*, char *);
extern void execute_40(char*, char *);
extern void execute_44(char*, char *);
extern void execute_46(char*, char *);
extern void execute_50(char*, char *);
extern void execute_52(char*, char *);
extern void execute_63(char*, char *);
extern void execute_64(char*, char *);
extern void execute_58(char*, char *);
extern void execute_59(char*, char *);
extern void execute_85(char*, char *);
extern void execute_91(char*, char *);
extern void execute_128(char*, char *);
extern void execute_129(char*, char *);
extern void execute_130(char*, char *);
extern void execute_143(char*, char *);
extern void execute_144(char*, char *);
extern void execute_145(char*, char *);
extern void execute_146(char*, char *);
extern void execute_147(char*, char *);
extern void execute_148(char*, char *);
extern void execute_149(char*, char *);
extern void execute_150(char*, char *);
extern void execute_153(char*, char *);
extern void vhdl_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
extern void transaction_1(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_7(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_22(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_23(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_24(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_36(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_37(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_38(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_39(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_95(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_96(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_135(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_136(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_143(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_144(char*, char*, unsigned, unsigned, unsigned);
funcp funcTab[58] = {(funcp)execute_296, (funcp)execute_297, (funcp)execute_295, (funcp)execute_17, (funcp)execute_24, (funcp)execute_25, (funcp)execute_26, (funcp)execute_27, (funcp)execute_28, (funcp)execute_29, (funcp)execute_30, (funcp)execute_31, (funcp)execute_20, (funcp)execute_21, (funcp)execute_22, (funcp)execute_23, (funcp)execute_36, (funcp)execute_41, (funcp)execute_42, (funcp)execute_40, (funcp)execute_44, (funcp)execute_46, (funcp)execute_50, (funcp)execute_52, (funcp)execute_63, (funcp)execute_64, (funcp)execute_58, (funcp)execute_59, (funcp)execute_85, (funcp)execute_91, (funcp)execute_128, (funcp)execute_129, (funcp)execute_130, (funcp)execute_143, (funcp)execute_144, (funcp)execute_145, (funcp)execute_146, (funcp)execute_147, (funcp)execute_148, (funcp)execute_149, (funcp)execute_150, (funcp)execute_153, (funcp)vhdl_transfunc_eventcallback, (funcp)transaction_1, (funcp)transaction_7, (funcp)transaction_22, (funcp)transaction_23, (funcp)transaction_24, (funcp)transaction_36, (funcp)transaction_37, (funcp)transaction_38, (funcp)transaction_39, (funcp)transaction_95, (funcp)transaction_96, (funcp)transaction_135, (funcp)transaction_136, (funcp)transaction_143, (funcp)transaction_144};
const int NumRelocateId= 58;

void relocate(char *dp)
{
	iki_relocate(dp, "xsim.dir/nanoprocessor_sim_behav/xsim.reloc",  (void **)funcTab, 58);
	iki_vhdl_file_variable_register(dp + 39336);
	iki_vhdl_file_variable_register(dp + 39392);


	/*Populate the transaction function pointer field in the whole net structure */
}

void sensitize(char *dp)
{
	iki_sensitize(dp, "xsim.dir/nanoprocessor_sim_behav/xsim.reloc");
}

void simulate(char *dp)
{
	iki_schedule_processes_at_time_zero(dp, "xsim.dir/nanoprocessor_sim_behav/xsim.reloc");
	// Initialize Verilog nets in mixed simulation, for the cases when the value at time 0 should be propagated from the mixed language Vhdl net
	iki_execute_processes();

	// Schedule resolution functions for the multiply driven Verilog nets that have strength
	// Schedule transaction functions for the singly driven Verilog nets that have strength

}
#include "iki_bridge.h"
void relocate(char *);

void sensitize(char *);

void simulate(char *);

extern SYSTEMCLIB_IMP_DLLSPEC void local_register_implicit_channel(int, char*);
extern void implicit_HDL_SCinstatiate();

extern SYSTEMCLIB_IMP_DLLSPEC int xsim_argc_copy ;
extern SYSTEMCLIB_IMP_DLLSPEC char** xsim_argv_copy ;

int main(int argc, char **argv)
{
    iki_heap_initialize("ms", "isimmm", 0, 2147483648) ;
    iki_set_sv_type_file_path_name("xsim.dir/nanoprocessor_sim_behav/xsim.svtype");
    iki_set_crvs_dump_file_path_name("xsim.dir/nanoprocessor_sim_behav/xsim.crvsdump");
    void* design_handle = iki_create_design("xsim.dir/nanoprocessor_sim_behav/xsim.mem", (void *)relocate, (void *)sensitize, (void *)simulate, 0, isimBridge_getWdbWriter(), 0, argc, argv);
     iki_set_rc_trial_count(100);
    (void) design_handle;
    return iki_simulate_design();
}
