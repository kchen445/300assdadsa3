//
// Created by kev-laptop on 2018-03-10.
//
#ifndef INC_300ASSIGNMENT3_OSCOMMANDS_H
#define INC_300ASSIGNMENT3_OSCOMMANDS_H
#include "Report.h"
#include "list.h"
#include "process.h"
#include <string.h>


extern PROCESS INIT_PROCESS;
extern PROCESS runningProcess;
extern LIST* readyQueueHighPriority;
extern LIST* readyQueueMedPriority;
extern LIST* readyQueueLowPriority;
extern LIST* blockedQueue;

REPORT Create(int priority);
REPORT Fork();
REPORT Kill(int pid);
REPORT Exit();
REPORT Quantum();
REPORT Send(int pid, char msg[]);
REPORT Receive();
REPORT Reply(int pid, char msg[]);
REPORT NewSemaphore(int semID, int initialValue);
REPORT SemaphoreP(int semID);
REPORT SemaphoreV(int semID);
REPORT Procinfo(int pid);
REPORT Totalinfo();

#endif //INC_300ASSIGNMENT3_OSCOMMANDS_H
