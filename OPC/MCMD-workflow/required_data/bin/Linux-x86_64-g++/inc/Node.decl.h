#ifndef _DECL_Node_H_
#define _DECL_Node_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
#ifndef GROUPDEPNUM_DECLARED
# define GROUPDEPNUM_DECLARED
struct GroupDepNum
{
  int groupDepNum;
  explicit GroupDepNum(int g = 0) : groupDepNum{g} { }
  operator int() const { return groupDepNum; }
};
#endif
/* DECLS: message GroupInitMsg;
 */
class GroupInitMsg;
class CMessage_GroupInitMsg:public CkMessage{
  public:
    static int __idx;
    void* operator new(size_t, void*p) { return p; }
    void* operator new(size_t);
    void* operator new(size_t, int*, const int);
    void* operator new(size_t, int*, const int, const GroupDepNum);
    void* operator new(size_t, int*);
#if CMK_MULTIPLE_DELETE
    void operator delete(void*p, void*){dealloc(p);}
    void operator delete(void*p){dealloc(p);}
    void operator delete(void*p, int*, const int){dealloc(p);}
    void operator delete(void*p, int*, const int, const GroupDepNum){dealloc(p);}
    void operator delete(void*p, int*){dealloc(p);}
#endif
    void operator delete(void*p, size_t){dealloc(p);}
    static void* alloc(int,size_t, int*, int, GroupDepNum);
    static void dealloc(void *p);
    CMessage_GroupInitMsg();
    static void *pack(GroupInitMsg *p);
    static GroupInitMsg* unpack(void* p);
    void *operator new(size_t, const int);
    void *operator new(size_t, const int, const GroupDepNum);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
    void operator delete(void *p, const int, const GroupDepNum){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

#ifndef GROUPDEPNUM_DECLARED
# define GROUPDEPNUM_DECLARED
struct GroupDepNum
{
  int groupDepNum;
  explicit GroupDepNum(int g = 0) : groupDepNum{g} { }
  operator int() const { return groupDepNum; }
};
#endif
/* DECLS: message ScriptParamMsg;
 */
class ScriptParamMsg;
class CMessage_ScriptParamMsg:public CkMessage{
  public:
    static int __idx;
    void* operator new(size_t, void*p) { return p; }
    void* operator new(size_t);
    void* operator new(size_t, int*, const int);
    void* operator new(size_t, int*, const int, const GroupDepNum);
    void* operator new(size_t, int*);
#if CMK_MULTIPLE_DELETE
    void operator delete(void*p, void*){dealloc(p);}
    void operator delete(void*p){dealloc(p);}
    void operator delete(void*p, int*, const int){dealloc(p);}
    void operator delete(void*p, int*, const int, const GroupDepNum){dealloc(p);}
    void operator delete(void*p, int*){dealloc(p);}
#endif
    void operator delete(void*p, size_t){dealloc(p);}
    static void* alloc(int,size_t, int*, int, GroupDepNum);
    static void dealloc(void *p);
    CMessage_ScriptParamMsg();
    static void *pack(ScriptParamMsg *p);
    static ScriptParamMsg* unpack(void* p);
    void *operator new(size_t, const int);
    void *operator new(size_t, const int, const GroupDepNum);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
    void operator delete(void *p, const int, const GroupDepNum){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

#ifndef GROUPDEPNUM_DECLARED
# define GROUPDEPNUM_DECLARED
struct GroupDepNum
{
  int groupDepNum;
  explicit GroupDepNum(int g = 0) : groupDepNum{g} { }
  operator int() const { return groupDepNum; }
};
#endif
/* DECLS: message CheckpointMsg{
char key[];
}
;
 */
class CheckpointMsg;
class CMessage_CheckpointMsg:public CkMessage{
  public:
    static int __idx;
    void* operator new(size_t, void*p) { return p; }
    void* operator new(size_t);
    void* operator new(size_t, int*, const int);
    void* operator new(size_t, int*, const int, const GroupDepNum);
    void* operator new(size_t, int*);
#if CMK_MULTIPLE_DELETE
    void operator delete(void*p, void*){dealloc(p);}
    void operator delete(void*p){dealloc(p);}
    void operator delete(void*p, int*, const int){dealloc(p);}
    void operator delete(void*p, int*, const int, const GroupDepNum){dealloc(p);}
    void operator delete(void*p, int*){dealloc(p);}
#endif
    void operator delete(void*p, size_t){dealloc(p);}
    static void* alloc(int,size_t, int*, int, GroupDepNum);
    static void dealloc(void *p);
    CMessage_CheckpointMsg();
    static void *pack(CheckpointMsg *p);
    static CheckpointMsg* unpack(void* p);
    void *operator new(size_t, int);
    void *operator new(size_t, int, const int);
    void *operator new(size_t, int, const int, const GroupDepNum);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, int){dealloc(p);}
    void operator delete(void *p, int, const int){dealloc(p);}
    void operator delete(void *p, int, const int, const GroupDepNum){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: group Node: IrrGroup{
Node(GroupInitMsg* impl_msg);
void startup();
void mallocTest(int impl_noname_0);
void mallocTestQd();
void run();
void scriptBarrier();
void scriptParam(ScriptParamMsg* impl_msg);
void reloadCharges(const float *charge, int n);
void reloadGridforceGrid(int gridnum);
void updateGridScale(int gridnum, float sx, float sy, float sz);
void resendMolecule();
void resendMolecule2();
void recvCheckpointReq(CheckpointMsg* impl_msg);
void recvCheckpointAck(CheckpointMsg* impl_msg);
void recvEnableExitScheduler();
void exitScheduler();
void recvEnableEarlyExit();
void earlyExit();
void startHPM();
void stopHPM();
void traceBarrier(int impl_noname_1, int impl_noname_2);
void resumeAfterTraceBarrier(CkReductionMsg* impl_msg);
void papiMeasureBarrier(int impl_noname_3, int impl_noname_4);
void resumeAfterPapiMeasureBarrier(CkReductionMsg* impl_msg);
};
 */
 class Node;
 class CkIndex_Node;
 class CProxy_Node;
 class CProxyElement_Node;
 class CProxySection_Node;
/* --------------- index object ------------------ */
class CkIndex_Node:public CkIndex_IrrGroup{
  public:
    typedef Node local_t;
    typedef CkIndex_Node index_t;
    typedef CProxy_Node proxy_t;
    typedef CProxyElement_Node element_t;
    typedef CProxySection_Node section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: Node(GroupInitMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_Node_GroupInitMsg();
    // Entry point index lookup
    
    inline static int idx_Node_GroupInitMsg() {
      static int epidx = reg_Node_GroupInitMsg();
      return epidx;
    }

    
    static int ckNew(GroupInitMsg* impl_msg) { return idx_Node_GroupInitMsg(); }
    
    static void _call_Node_GroupInitMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Node_GroupInitMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void startup();
     */
    // Entry point registration at startup
    
    static int reg_startup_void();
    // Entry point index lookup
    
    inline static int idx_startup_void() {
      static int epidx = reg_startup_void();
      return epidx;
    }

    
    inline static int idx_startup(void (Node::*)() ) {
      return idx_startup_void();
    }


    
    static int startup() { return idx_startup_void(); }
    
    static void _call_startup_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_startup_void(void* impl_msg, void* impl_obj);
    /* DECLS: void mallocTest(int impl_noname_0);
     */
    // Entry point registration at startup
    
    static int reg_mallocTest_marshall3();
    // Entry point index lookup
    
    inline static int idx_mallocTest_marshall3() {
      static int epidx = reg_mallocTest_marshall3();
      return epidx;
    }

    
    inline static int idx_mallocTest(void (Node::*)(int impl_noname_0) ) {
      return idx_mallocTest_marshall3();
    }


    
    static int mallocTest(int impl_noname_0) { return idx_mallocTest_marshall3(); }
    
    static void _call_mallocTest_marshall3(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_mallocTest_marshall3(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_mallocTest_marshall3(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_mallocTest_marshall3(PUP::er &p,void *msg);
    /* DECLS: void mallocTestQd();
     */
    // Entry point registration at startup
    
    static int reg_mallocTestQd_void();
    // Entry point index lookup
    
    inline static int idx_mallocTestQd_void() {
      static int epidx = reg_mallocTestQd_void();
      return epidx;
    }

    
    inline static int idx_mallocTestQd(void (Node::*)() ) {
      return idx_mallocTestQd_void();
    }


    
    static int mallocTestQd() { return idx_mallocTestQd_void(); }
    
    static void _call_mallocTestQd_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_mallocTestQd_void(void* impl_msg, void* impl_obj);
    /* DECLS: void run();
     */
    // Entry point registration at startup
    
    static int reg_run_void();
    // Entry point index lookup
    
    inline static int idx_run_void() {
      static int epidx = reg_run_void();
      return epidx;
    }

    
    inline static int idx_run(void (Node::*)() ) {
      return idx_run_void();
    }


    
    static int run() { return idx_run_void(); }
    
    static void _call_run_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_run_void(void* impl_msg, void* impl_obj);
    /* DECLS: void scriptBarrier();
     */
    // Entry point registration at startup
    
    static int reg_scriptBarrier_void();
    // Entry point index lookup
    
    inline static int idx_scriptBarrier_void() {
      static int epidx = reg_scriptBarrier_void();
      return epidx;
    }

    
    inline static int idx_scriptBarrier(void (Node::*)() ) {
      return idx_scriptBarrier_void();
    }


    
    static int scriptBarrier() { return idx_scriptBarrier_void(); }
    
    static void _call_scriptBarrier_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_scriptBarrier_void(void* impl_msg, void* impl_obj);
    /* DECLS: void scriptParam(ScriptParamMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_scriptParam_ScriptParamMsg();
    // Entry point index lookup
    
    inline static int idx_scriptParam_ScriptParamMsg() {
      static int epidx = reg_scriptParam_ScriptParamMsg();
      return epidx;
    }

    
    inline static int idx_scriptParam(void (Node::*)(ScriptParamMsg* impl_msg) ) {
      return idx_scriptParam_ScriptParamMsg();
    }


    
    static int scriptParam(ScriptParamMsg* impl_msg) { return idx_scriptParam_ScriptParamMsg(); }
    
    static void _call_scriptParam_ScriptParamMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_scriptParam_ScriptParamMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void reloadCharges(const float *charge, int n);
     */
    // Entry point registration at startup
    
    static int reg_reloadCharges_marshall8();
    // Entry point index lookup
    
    inline static int idx_reloadCharges_marshall8() {
      static int epidx = reg_reloadCharges_marshall8();
      return epidx;
    }

    
    inline static int idx_reloadCharges(void (Node::*)(const float *charge, int n) ) {
      return idx_reloadCharges_marshall8();
    }


    
    static int reloadCharges(const float *charge, int n) { return idx_reloadCharges_marshall8(); }
    
    static void _call_reloadCharges_marshall8(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_reloadCharges_marshall8(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_reloadCharges_marshall8(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_reloadCharges_marshall8(PUP::er &p,void *msg);
    /* DECLS: void reloadGridforceGrid(int gridnum);
     */
    // Entry point registration at startup
    
    static int reg_reloadGridforceGrid_marshall9();
    // Entry point index lookup
    
    inline static int idx_reloadGridforceGrid_marshall9() {
      static int epidx = reg_reloadGridforceGrid_marshall9();
      return epidx;
    }

    
    inline static int idx_reloadGridforceGrid(void (Node::*)(int gridnum) ) {
      return idx_reloadGridforceGrid_marshall9();
    }


    
    static int reloadGridforceGrid(int gridnum) { return idx_reloadGridforceGrid_marshall9(); }
    
    static void _call_reloadGridforceGrid_marshall9(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_reloadGridforceGrid_marshall9(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_reloadGridforceGrid_marshall9(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_reloadGridforceGrid_marshall9(PUP::er &p,void *msg);
    /* DECLS: void updateGridScale(int gridnum, float sx, float sy, float sz);
     */
    // Entry point registration at startup
    
    static int reg_updateGridScale_marshall10();
    // Entry point index lookup
    
    inline static int idx_updateGridScale_marshall10() {
      static int epidx = reg_updateGridScale_marshall10();
      return epidx;
    }

    
    inline static int idx_updateGridScale(void (Node::*)(int gridnum, float sx, float sy, float sz) ) {
      return idx_updateGridScale_marshall10();
    }


    
    static int updateGridScale(int gridnum, float sx, float sy, float sz) { return idx_updateGridScale_marshall10(); }
    
    static void _call_updateGridScale_marshall10(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_updateGridScale_marshall10(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_updateGridScale_marshall10(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_updateGridScale_marshall10(PUP::er &p,void *msg);
    /* DECLS: void resendMolecule();
     */
    // Entry point registration at startup
    
    static int reg_resendMolecule_void();
    // Entry point index lookup
    
    inline static int idx_resendMolecule_void() {
      static int epidx = reg_resendMolecule_void();
      return epidx;
    }

    
    inline static int idx_resendMolecule(void (Node::*)() ) {
      return idx_resendMolecule_void();
    }


    
    static int resendMolecule() { return idx_resendMolecule_void(); }
    
    static void _call_resendMolecule_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_resendMolecule_void(void* impl_msg, void* impl_obj);
    /* DECLS: void resendMolecule2();
     */
    // Entry point registration at startup
    
    static int reg_resendMolecule2_void();
    // Entry point index lookup
    
    inline static int idx_resendMolecule2_void() {
      static int epidx = reg_resendMolecule2_void();
      return epidx;
    }

    
    inline static int idx_resendMolecule2(void (Node::*)() ) {
      return idx_resendMolecule2_void();
    }


    
    static int resendMolecule2() { return idx_resendMolecule2_void(); }
    
    static void _call_resendMolecule2_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_resendMolecule2_void(void* impl_msg, void* impl_obj);
    /* DECLS: void recvCheckpointReq(CheckpointMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvCheckpointReq_CheckpointMsg();
    // Entry point index lookup
    
    inline static int idx_recvCheckpointReq_CheckpointMsg() {
      static int epidx = reg_recvCheckpointReq_CheckpointMsg();
      return epidx;
    }

    
    inline static int idx_recvCheckpointReq(void (Node::*)(CheckpointMsg* impl_msg) ) {
      return idx_recvCheckpointReq_CheckpointMsg();
    }


    
    static int recvCheckpointReq(CheckpointMsg* impl_msg) { return idx_recvCheckpointReq_CheckpointMsg(); }
    
    static void _call_recvCheckpointReq_CheckpointMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvCheckpointReq_CheckpointMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvCheckpointAck(CheckpointMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvCheckpointAck_CheckpointMsg();
    // Entry point index lookup
    
    inline static int idx_recvCheckpointAck_CheckpointMsg() {
      static int epidx = reg_recvCheckpointAck_CheckpointMsg();
      return epidx;
    }

    
    inline static int idx_recvCheckpointAck(void (Node::*)(CheckpointMsg* impl_msg) ) {
      return idx_recvCheckpointAck_CheckpointMsg();
    }


    
    static int recvCheckpointAck(CheckpointMsg* impl_msg) { return idx_recvCheckpointAck_CheckpointMsg(); }
    
    static void _call_recvCheckpointAck_CheckpointMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvCheckpointAck_CheckpointMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvEnableExitScheduler();
     */
    // Entry point registration at startup
    
    static int reg_recvEnableExitScheduler_void();
    // Entry point index lookup
    
    inline static int idx_recvEnableExitScheduler_void() {
      static int epidx = reg_recvEnableExitScheduler_void();
      return epidx;
    }

    
    inline static int idx_recvEnableExitScheduler(void (Node::*)() ) {
      return idx_recvEnableExitScheduler_void();
    }


    
    static int recvEnableExitScheduler() { return idx_recvEnableExitScheduler_void(); }
    
    static void _call_recvEnableExitScheduler_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvEnableExitScheduler_void(void* impl_msg, void* impl_obj);
    /* DECLS: void exitScheduler();
     */
    // Entry point registration at startup
    
    static int reg_exitScheduler_void();
    // Entry point index lookup
    
    inline static int idx_exitScheduler_void() {
      static int epidx = reg_exitScheduler_void();
      return epidx;
    }

    
    inline static int idx_exitScheduler(void (Node::*)() ) {
      return idx_exitScheduler_void();
    }


    
    static int exitScheduler() { return idx_exitScheduler_void(); }
    
    static void _call_exitScheduler_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_exitScheduler_void(void* impl_msg, void* impl_obj);
    /* DECLS: void recvEnableEarlyExit();
     */
    // Entry point registration at startup
    
    static int reg_recvEnableEarlyExit_void();
    // Entry point index lookup
    
    inline static int idx_recvEnableEarlyExit_void() {
      static int epidx = reg_recvEnableEarlyExit_void();
      return epidx;
    }

    
    inline static int idx_recvEnableEarlyExit(void (Node::*)() ) {
      return idx_recvEnableEarlyExit_void();
    }


    
    static int recvEnableEarlyExit() { return idx_recvEnableEarlyExit_void(); }
    
    static void _call_recvEnableEarlyExit_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvEnableEarlyExit_void(void* impl_msg, void* impl_obj);
    /* DECLS: void earlyExit();
     */
    // Entry point registration at startup
    
    static int reg_earlyExit_void();
    // Entry point index lookup
    
    inline static int idx_earlyExit_void() {
      static int epidx = reg_earlyExit_void();
      return epidx;
    }

    
    inline static int idx_earlyExit(void (Node::*)() ) {
      return idx_earlyExit_void();
    }


    
    static int earlyExit() { return idx_earlyExit_void(); }
    
    static void _call_earlyExit_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_earlyExit_void(void* impl_msg, void* impl_obj);
    /* DECLS: void startHPM();
     */
    // Entry point registration at startup
    
    static int reg_startHPM_void();
    // Entry point index lookup
    
    inline static int idx_startHPM_void() {
      static int epidx = reg_startHPM_void();
      return epidx;
    }

    
    inline static int idx_startHPM(void (Node::*)() ) {
      return idx_startHPM_void();
    }


    
    static int startHPM() { return idx_startHPM_void(); }
    
    static void _call_startHPM_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_startHPM_void(void* impl_msg, void* impl_obj);
    /* DECLS: void stopHPM();
     */
    // Entry point registration at startup
    
    static int reg_stopHPM_void();
    // Entry point index lookup
    
    inline static int idx_stopHPM_void() {
      static int epidx = reg_stopHPM_void();
      return epidx;
    }

    
    inline static int idx_stopHPM(void (Node::*)() ) {
      return idx_stopHPM_void();
    }


    
    static int stopHPM() { return idx_stopHPM_void(); }
    
    static void _call_stopHPM_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_stopHPM_void(void* impl_msg, void* impl_obj);
    /* DECLS: void traceBarrier(int impl_noname_1, int impl_noname_2);
     */
    // Entry point registration at startup
    
    static int reg_traceBarrier_marshall21();
    // Entry point index lookup
    
    inline static int idx_traceBarrier_marshall21() {
      static int epidx = reg_traceBarrier_marshall21();
      return epidx;
    }

    
    inline static int idx_traceBarrier(void (Node::*)(int impl_noname_1, int impl_noname_2) ) {
      return idx_traceBarrier_marshall21();
    }


    
    static int traceBarrier(int impl_noname_1, int impl_noname_2) { return idx_traceBarrier_marshall21(); }
    
    static void _call_traceBarrier_marshall21(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_traceBarrier_marshall21(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_traceBarrier_marshall21(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_traceBarrier_marshall21(PUP::er &p,void *msg);
    /* DECLS: void resumeAfterTraceBarrier(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_resumeAfterTraceBarrier_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_resumeAfterTraceBarrier_CkReductionMsg() {
      static int epidx = reg_resumeAfterTraceBarrier_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_resumeAfterTraceBarrier(void (Node::*)(CkReductionMsg* impl_msg) ) {
      return idx_resumeAfterTraceBarrier_CkReductionMsg();
    }


    
    static int resumeAfterTraceBarrier(CkReductionMsg* impl_msg) { return idx_resumeAfterTraceBarrier_CkReductionMsg(); }
    
    static void _call_resumeAfterTraceBarrier_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_resumeAfterTraceBarrier_CkReductionMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void papiMeasureBarrier(int impl_noname_3, int impl_noname_4);
     */
    // Entry point registration at startup
    
    static int reg_papiMeasureBarrier_marshall23();
    // Entry point index lookup
    
    inline static int idx_papiMeasureBarrier_marshall23() {
      static int epidx = reg_papiMeasureBarrier_marshall23();
      return epidx;
    }

    
    inline static int idx_papiMeasureBarrier(void (Node::*)(int impl_noname_3, int impl_noname_4) ) {
      return idx_papiMeasureBarrier_marshall23();
    }


    
    static int papiMeasureBarrier(int impl_noname_3, int impl_noname_4) { return idx_papiMeasureBarrier_marshall23(); }
    
    static void _call_papiMeasureBarrier_marshall23(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_papiMeasureBarrier_marshall23(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_papiMeasureBarrier_marshall23(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_papiMeasureBarrier_marshall23(PUP::er &p,void *msg);
    /* DECLS: void resumeAfterPapiMeasureBarrier(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_resumeAfterPapiMeasureBarrier_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_resumeAfterPapiMeasureBarrier_CkReductionMsg() {
      static int epidx = reg_resumeAfterPapiMeasureBarrier_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_resumeAfterPapiMeasureBarrier(void (Node::*)(CkReductionMsg* impl_msg) ) {
      return idx_resumeAfterPapiMeasureBarrier_CkReductionMsg();
    }


    
    static int resumeAfterPapiMeasureBarrier(CkReductionMsg* impl_msg) { return idx_resumeAfterPapiMeasureBarrier_CkReductionMsg(); }
    
    static void _call_resumeAfterPapiMeasureBarrier_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_resumeAfterPapiMeasureBarrier_CkReductionMsg(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_Node: public CProxyElement_IrrGroup{
  public:
    typedef Node local_t;
    typedef CkIndex_Node index_t;
    typedef CProxy_Node proxy_t;
    typedef CProxyElement_Node element_t;
    typedef CProxySection_Node section_t;


    /* TRAM aggregators */

    CProxyElement_Node(void) {
    }
    CProxyElement_Node(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_Node(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_Node(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
    }

    int ckIsDelegated(void) const
    { return CProxyElement_IrrGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_IrrGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_IrrGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_IrrGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxyElement_IrrGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxyElement_IrrGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxyElement_IrrGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_IrrGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_IrrGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_IrrGroup::ckSetReductionClient(cb); }
int ckGetGroupPe(void) const
{return CProxyElement_IrrGroup::ckGetGroupPe();}

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_IrrGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_IrrGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_IrrGroup::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxyElement_IrrGroup::ckSetGroupID(g);
    }
    Node* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static Node* ckLocalBranch(CkGroupID gID) {
      return (Node*)CkLocalBranch(gID);
    }
/* DECLS: Node(GroupInitMsg* impl_msg);
 */
    

/* DECLS: void startup();
 */
    
    void startup(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void mallocTest(int impl_noname_0);
 */
    
    void mallocTest(int impl_noname_0, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void mallocTestQd();
 */
    
    void mallocTestQd(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void run();
 */
    
    void run(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void scriptBarrier();
 */
    
    void scriptBarrier(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void scriptParam(ScriptParamMsg* impl_msg);
 */
    
    void scriptParam(ScriptParamMsg* impl_msg);

/* DECLS: void reloadCharges(const float *charge, int n);
 */
    
    void reloadCharges(const float *charge, int n, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void reloadGridforceGrid(int gridnum);
 */
    
    void reloadGridforceGrid(int gridnum, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void updateGridScale(int gridnum, float sx, float sy, float sz);
 */
    
    void updateGridScale(int gridnum, float sx, float sy, float sz, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void resendMolecule();
 */
    
    void resendMolecule(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void resendMolecule2();
 */
    
    void resendMolecule2(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvCheckpointReq(CheckpointMsg* impl_msg);
 */
    
    void recvCheckpointReq(CheckpointMsg* impl_msg);

/* DECLS: void recvCheckpointAck(CheckpointMsg* impl_msg);
 */
    
    void recvCheckpointAck(CheckpointMsg* impl_msg);

/* DECLS: void recvEnableExitScheduler();
 */
    
    void recvEnableExitScheduler(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void exitScheduler();
 */
    
    void exitScheduler(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvEnableEarlyExit();
 */
    
    void recvEnableEarlyExit(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void earlyExit();
 */
    
    void earlyExit(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void startHPM();
 */
    
    void startHPM(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void stopHPM();
 */
    
    void stopHPM(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void traceBarrier(int impl_noname_1, int impl_noname_2);
 */
    
    void traceBarrier(int impl_noname_1, int impl_noname_2, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void resumeAfterTraceBarrier(CkReductionMsg* impl_msg);
 */
    
    void resumeAfterTraceBarrier(CkReductionMsg* impl_msg);

/* DECLS: void papiMeasureBarrier(int impl_noname_3, int impl_noname_4);
 */
    
    void papiMeasureBarrier(int impl_noname_3, int impl_noname_4, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void resumeAfterPapiMeasureBarrier(CkReductionMsg* impl_msg);
 */
    
    void resumeAfterPapiMeasureBarrier(CkReductionMsg* impl_msg);

};
/* ---------------- collective proxy -------------- */
class CProxy_Node: public CProxy_IrrGroup{
  public:
    typedef Node local_t;
    typedef CkIndex_Node index_t;
    typedef CProxy_Node proxy_t;
    typedef CProxyElement_Node element_t;
    typedef CProxySection_Node section_t;

    CProxy_Node(void) {
    }
    CProxy_Node(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_Node(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_Node(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_Node operator[](int onPE) const
      {return CProxyElement_Node(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

    int ckIsDelegated(void) const
    { return CProxy_IrrGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_IrrGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_IrrGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_IrrGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxy_IrrGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxy_IrrGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxy_IrrGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_IrrGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_IrrGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_IrrGroup::ckSetReductionClient(cb); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_IrrGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_IrrGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_IrrGroup::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxy_IrrGroup::ckSetGroupID(g);
    }
    Node* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static Node* ckLocalBranch(CkGroupID gID) {
      return (Node*)CkLocalBranch(gID);
    }
/* DECLS: Node(GroupInitMsg* impl_msg);
 */
    
    static CkGroupID ckNew(GroupInitMsg* impl_msg);
    CProxy_Node(GroupInitMsg* impl_msg);

/* DECLS: void startup();
 */
    
    void startup(const CkEntryOptions *impl_e_opts=NULL);
    
    void startup(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void startup(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void mallocTest(int impl_noname_0);
 */
    
    void mallocTest(int impl_noname_0, const CkEntryOptions *impl_e_opts=NULL);
    
    void mallocTest(int impl_noname_0, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void mallocTest(int impl_noname_0, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void mallocTestQd();
 */
    
    void mallocTestQd(const CkEntryOptions *impl_e_opts=NULL);
    
    void mallocTestQd(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void mallocTestQd(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void run();
 */
    
    void run(const CkEntryOptions *impl_e_opts=NULL);
    
    void run(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void run(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void scriptBarrier();
 */
    
    void scriptBarrier(const CkEntryOptions *impl_e_opts=NULL);
    
    void scriptBarrier(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void scriptBarrier(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void scriptParam(ScriptParamMsg* impl_msg);
 */
    
    void scriptParam(ScriptParamMsg* impl_msg);
    
    void scriptParam(ScriptParamMsg* impl_msg, int npes, int *pes);
    
    void scriptParam(ScriptParamMsg* impl_msg, CmiGroup &grp);

/* DECLS: void reloadCharges(const float *charge, int n);
 */
    
    void reloadCharges(const float *charge, int n, const CkEntryOptions *impl_e_opts=NULL);
    
    void reloadCharges(const float *charge, int n, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void reloadCharges(const float *charge, int n, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void reloadGridforceGrid(int gridnum);
 */
    
    void reloadGridforceGrid(int gridnum, const CkEntryOptions *impl_e_opts=NULL);
    
    void reloadGridforceGrid(int gridnum, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void reloadGridforceGrid(int gridnum, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void updateGridScale(int gridnum, float sx, float sy, float sz);
 */
    
    void updateGridScale(int gridnum, float sx, float sy, float sz, const CkEntryOptions *impl_e_opts=NULL);
    
    void updateGridScale(int gridnum, float sx, float sy, float sz, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void updateGridScale(int gridnum, float sx, float sy, float sz, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void resendMolecule();
 */
    
    void resendMolecule(const CkEntryOptions *impl_e_opts=NULL);
    
    void resendMolecule(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void resendMolecule(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void resendMolecule2();
 */
    
    void resendMolecule2(const CkEntryOptions *impl_e_opts=NULL);
    
    void resendMolecule2(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void resendMolecule2(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvCheckpointReq(CheckpointMsg* impl_msg);
 */
    
    void recvCheckpointReq(CheckpointMsg* impl_msg);
    
    void recvCheckpointReq(CheckpointMsg* impl_msg, int npes, int *pes);
    
    void recvCheckpointReq(CheckpointMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvCheckpointAck(CheckpointMsg* impl_msg);
 */
    
    void recvCheckpointAck(CheckpointMsg* impl_msg);
    
    void recvCheckpointAck(CheckpointMsg* impl_msg, int npes, int *pes);
    
    void recvCheckpointAck(CheckpointMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvEnableExitScheduler();
 */
    
    void recvEnableExitScheduler(const CkEntryOptions *impl_e_opts=NULL);
    
    void recvEnableExitScheduler(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void recvEnableExitScheduler(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void exitScheduler();
 */
    
    void exitScheduler(const CkEntryOptions *impl_e_opts=NULL);
    
    void exitScheduler(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void exitScheduler(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvEnableEarlyExit();
 */
    
    void recvEnableEarlyExit(const CkEntryOptions *impl_e_opts=NULL);
    
    void recvEnableEarlyExit(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void recvEnableEarlyExit(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void earlyExit();
 */
    
    void earlyExit(const CkEntryOptions *impl_e_opts=NULL);
    
    void earlyExit(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void earlyExit(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void startHPM();
 */
    
    void startHPM(const CkEntryOptions *impl_e_opts=NULL);
    
    void startHPM(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void startHPM(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void stopHPM();
 */
    
    void stopHPM(const CkEntryOptions *impl_e_opts=NULL);
    
    void stopHPM(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void stopHPM(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void traceBarrier(int impl_noname_1, int impl_noname_2);
 */
    
    void traceBarrier(int impl_noname_1, int impl_noname_2, const CkEntryOptions *impl_e_opts=NULL);
    
    void traceBarrier(int impl_noname_1, int impl_noname_2, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void traceBarrier(int impl_noname_1, int impl_noname_2, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void resumeAfterTraceBarrier(CkReductionMsg* impl_msg);
 */
    
    void resumeAfterTraceBarrier(CkReductionMsg* impl_msg);
    
    void resumeAfterTraceBarrier(CkReductionMsg* impl_msg, int npes, int *pes);
    
    void resumeAfterTraceBarrier(CkReductionMsg* impl_msg, CmiGroup &grp);

/* DECLS: void papiMeasureBarrier(int impl_noname_3, int impl_noname_4);
 */
    
    void papiMeasureBarrier(int impl_noname_3, int impl_noname_4, const CkEntryOptions *impl_e_opts=NULL);
    
    void papiMeasureBarrier(int impl_noname_3, int impl_noname_4, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void papiMeasureBarrier(int impl_noname_3, int impl_noname_4, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void resumeAfterPapiMeasureBarrier(CkReductionMsg* impl_msg);
 */
    
    void resumeAfterPapiMeasureBarrier(CkReductionMsg* impl_msg);
    
    void resumeAfterPapiMeasureBarrier(CkReductionMsg* impl_msg, int npes, int *pes);
    
    void resumeAfterPapiMeasureBarrier(CkReductionMsg* impl_msg, CmiGroup &grp);

};
/* ---------------- section proxy -------------- */
class CProxySection_Node: public CProxySection_IrrGroup{
  public:
    typedef Node local_t;
    typedef CkIndex_Node index_t;
    typedef CProxy_Node proxy_t;
    typedef CProxyElement_Node element_t;
    typedef CProxySection_Node section_t;

    CProxySection_Node(void) {
    }
    CProxySection_Node(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_Node(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_Node(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_Node(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_Node(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

    int ckIsDelegated(void) const
    { return CProxySection_IrrGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_IrrGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_IrrGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_IrrGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxySection_IrrGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxySection_IrrGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxySection_IrrGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_IrrGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_IrrGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_IrrGroup::ckSetReductionClient(cb); }
inline int ckGetNumSections() const
{ return CProxySection_IrrGroup::ckGetNumSections(); }
inline CkSectionInfo &ckGetSectionInfo()
{ return CProxySection_IrrGroup::ckGetSectionInfo(); }
inline CkSectionID *ckGetSectionIDs()
{ return CProxySection_IrrGroup::ckGetSectionIDs(); }
inline CkSectionID &ckGetSectionID()
{ return CProxySection_IrrGroup::ckGetSectionID(); }
inline CkSectionID &ckGetSectionID(int i)
{ return CProxySection_IrrGroup::ckGetSectionID(i); }
inline CkGroupID ckGetGroupIDn(int i) const
{ return CProxySection_IrrGroup::ckGetGroupIDn(i); }
inline const int *ckGetElements() const
{ return CProxySection_IrrGroup::ckGetElements(); }
inline const int *ckGetElements(int i) const
{ return CProxySection_IrrGroup::ckGetElements(i); }
inline int ckGetNumElements() const
{ return CProxySection_IrrGroup::ckGetNumElements(); } 
inline int ckGetNumElements(int i) const
{ return CProxySection_IrrGroup::ckGetNumElements(i); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_IrrGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_IrrGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_IrrGroup::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxySection_IrrGroup::ckSetGroupID(g);
    }
    Node* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static Node* ckLocalBranch(CkGroupID gID) {
      return (Node*)CkLocalBranch(gID);
    }
/* DECLS: Node(GroupInitMsg* impl_msg);
 */
    

/* DECLS: void startup();
 */
    
    void startup(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void mallocTest(int impl_noname_0);
 */
    
    void mallocTest(int impl_noname_0, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void mallocTestQd();
 */
    
    void mallocTestQd(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void run();
 */
    
    void run(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void scriptBarrier();
 */
    
    void scriptBarrier(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void scriptParam(ScriptParamMsg* impl_msg);
 */
    
    void scriptParam(ScriptParamMsg* impl_msg);

/* DECLS: void reloadCharges(const float *charge, int n);
 */
    
    void reloadCharges(const float *charge, int n, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void reloadGridforceGrid(int gridnum);
 */
    
    void reloadGridforceGrid(int gridnum, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void updateGridScale(int gridnum, float sx, float sy, float sz);
 */
    
    void updateGridScale(int gridnum, float sx, float sy, float sz, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void resendMolecule();
 */
    
    void resendMolecule(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void resendMolecule2();
 */
    
    void resendMolecule2(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvCheckpointReq(CheckpointMsg* impl_msg);
 */
    
    void recvCheckpointReq(CheckpointMsg* impl_msg);

/* DECLS: void recvCheckpointAck(CheckpointMsg* impl_msg);
 */
    
    void recvCheckpointAck(CheckpointMsg* impl_msg);

/* DECLS: void recvEnableExitScheduler();
 */
    
    void recvEnableExitScheduler(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void exitScheduler();
 */
    
    void exitScheduler(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvEnableEarlyExit();
 */
    
    void recvEnableEarlyExit(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void earlyExit();
 */
    
    void earlyExit(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void startHPM();
 */
    
    void startHPM(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void stopHPM();
 */
    
    void stopHPM(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void traceBarrier(int impl_noname_1, int impl_noname_2);
 */
    
    void traceBarrier(int impl_noname_1, int impl_noname_2, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void resumeAfterTraceBarrier(CkReductionMsg* impl_msg);
 */
    
    void resumeAfterTraceBarrier(CkReductionMsg* impl_msg);

/* DECLS: void papiMeasureBarrier(int impl_noname_3, int impl_noname_4);
 */
    
    void papiMeasureBarrier(int impl_noname_3, int impl_noname_4, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void resumeAfterPapiMeasureBarrier(CkReductionMsg* impl_msg);
 */
    
    void resumeAfterPapiMeasureBarrier(CkReductionMsg* impl_msg);

};
#define Node_SDAG_CODE 
typedef CBaseT1<Group, CProxy_Node>CBase_Node;




/* ---------------- method closures -------------- */
class Closure_Node {
  public:


    struct startup_2_closure;


    struct mallocTest_3_closure;


    struct mallocTestQd_4_closure;


    struct run_5_closure;


    struct scriptBarrier_6_closure;



    struct reloadCharges_8_closure;


    struct reloadGridforceGrid_9_closure;


    struct updateGridScale_10_closure;


    struct resendMolecule_11_closure;


    struct resendMolecule2_12_closure;




    struct recvEnableExitScheduler_15_closure;


    struct exitScheduler_16_closure;


    struct recvEnableEarlyExit_17_closure;


    struct earlyExit_18_closure;


    struct startHPM_19_closure;


    struct stopHPM_20_closure;


    struct traceBarrier_21_closure;



    struct papiMeasureBarrier_23_closure;


};

extern void _registerNode(void);
#endif
