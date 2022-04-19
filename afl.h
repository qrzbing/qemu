#ifndef __AFL_H__
#define __AFL_H__

extern const char *aflFile;
extern unsigned long aflPanicAddr;
extern unsigned long aflDmesgAddr;

extern int aflEnableTicks;
extern int aflStart;
extern int aflGotLog;
extern target_ulong afl_start_code, afl_end_code;
extern int afl_need_start, afl_need_stop;
extern unsigned char afl_fork_child;
extern int afl_wants_cpu_to_stop;
extern int start_trace;

void afl_setup(void);
void afl_forkserver(CPUArchState*);

#endif