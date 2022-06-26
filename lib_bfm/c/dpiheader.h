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


/* NOTE: DO NOT EDIT. AUTOMATICALLY GENERATED FILE. CHANGES WILL BE LOST. */

#ifndef DPI_H
#define DPI_H
#ifdef __cplusplus
#define DPI_LINKER_DECL  extern "C" 
#else
#define DPI_LINKER_DECL
#endif

#include "svdpi.h"



/* Imported (by SV) function */
DPI_LINKER_DECL DPI_DLLESPEC 
 int cosim_ipc_open(
	int cid);


/* Imported (by SV) function */
DPI_LINKER_DECL DPI_DLLESPEC 
 int cosim_ipc_close(
	int cid);


/* Imported (by SV) function */
DPI_LINKER_DECL DPI_DLLESPEC 
 int cosim_ipc_barrier(
	int cid);


/* Imported (by SV) function */
DPI_LINKER_DECL DPI_DLLESPEC 
 int cosim_ipc_get(
	int cid ,
	int* pkt_cmd ,
	int* pkt_size ,
	int* pkt_length ,
	int* pkt_ack ,
	int* pkt_attr ,
	int* pkt_trans_id ,
	int* pkt_addr ,
	const svOpenArrayHandle pkt_data);


/* Imported (by SV) function */
DPI_LINKER_DECL DPI_DLLESPEC 
 int cosim_ipc_put(
	int cid ,
	int pkt_cmd ,
	int pkt_size ,
	int pkt_length ,
	int pkt_ack ,
	int pkt_attr ,
	int pkt_trans_id ,
	int pkt_addr ,
	const svOpenArrayHandle pkt_data);


/* Imported (by SV) function */
DPI_LINKER_DECL DPI_DLLESPEC 
 int cosim_ipc_rcv(
	int cid ,
	int* bnum ,
	const svOpenArrayHandle pkt_data);


/* Imported (by SV) function */
DPI_LINKER_DECL DPI_DLLESPEC 
 int cosim_ipc_snd(
	int cid ,
	int bnum ,
	const svOpenArrayHandle pkt_data);


/* Imported (by SV) function */
DPI_LINKER_DECL DPI_DLLESPEC 
 int cosim_ipc_set_verbose(
	int level);


#endif
