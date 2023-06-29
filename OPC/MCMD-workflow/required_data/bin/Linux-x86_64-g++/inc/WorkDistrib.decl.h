#ifndef _DECL_WorkDistrib_H_
#define _DECL_WorkDistrib_H_
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
/* DECLS: message LocalWorkMsg;
 */
class LocalWorkMsg;
class CMessage_LocalWorkMsg:public CkMessage{
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
    CMessage_LocalWorkMsg();
    static void *pack(LocalWorkMsg *p);
    static LocalWorkMsg* unpack(void* p);
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
/* DECLS: message FinishWorkMsg;
 */
class FinishWorkMsg;
class CMessage_FinishWorkMsg:public CkMessage{
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
    CMessage_FinishWorkMsg();
    static void *pack(FinishWorkMsg *p);
    static FinishWorkMsg* unpack(void* p);
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
/* DECLS: message ComputeMapChangeMsg{
int newNodes[];
char newNumPartitions[];
}
;
 */
class ComputeMapChangeMsg;
class CMessage_ComputeMapChangeMsg:public CkMessage{
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
    CMessage_ComputeMapChangeMsg();
    static void *pack(ComputeMapChangeMsg *p);
    static ComputeMapChangeMsg* unpack(void* p);
    void *operator new(size_t, int, int);
    void *operator new(size_t, int, int, const int);
    void *operator new(size_t, int, int, const int, const GroupDepNum);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, int, int){dealloc(p);}
    void operator delete(void *p, int, int, const int){dealloc(p);}
    void operator delete(void *p, int, int, const int, const GroupDepNum){dealloc(p);}
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
/* DECLS: message PatchMapMsg{
char patchMapData[];
}
;
 */
class PatchMapMsg;
class CMessage_PatchMapMsg:public CkMessage{
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
    CMessage_PatchMapMsg();
    static void *pack(PatchMapMsg *p);
    static PatchMapMsg* unpack(void* p);
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

/* DECLS: group WorkDistrib: IrrGroup{
WorkDistrib();
void peOrderingReady();
void savePatchMap(PatchMapMsg* impl_msg);
void recvComputeMapChanges(ComputeMapChangeMsg* impl_msg);
void doneSaveComputeMap(CkReductionMsg* impl_msg);
void enqueueWork(LocalWorkMsg* impl_msg);
void enqueueExcls(LocalWorkMsg* impl_msg);
void enqueueBonds(LocalWorkMsg* impl_msg);
void enqueueAngles(LocalWorkMsg* impl_msg);
void enqueueDihedrals(LocalWorkMsg* impl_msg);
void enqueueImpropers(LocalWorkMsg* impl_msg);
void enqueueThole(LocalWorkMsg* impl_msg);
void enqueueAniso(LocalWorkMsg* impl_msg);
void enqueueCrossterms(LocalWorkMsg* impl_msg);
void enqueueGromacsPair(LocalWorkMsg* impl_msg);
void enqueueCUDA(LocalWorkMsg* impl_msg);
void enqueueCUDAP2(LocalWorkMsg* impl_msg);
void enqueueCUDAP3(LocalWorkMsg* impl_msg);
void finishCUDAPatch(FinishWorkMsg* impl_msg);
void finishCUDA(LocalWorkMsg* impl_msg);
void finishCUDAP2(LocalWorkMsg* impl_msg);
void finishCUDAP3(LocalWorkMsg* impl_msg);
void enqueueMIC(LocalWorkMsg* impl_msg);
void finishMIC(LocalWorkMsg* impl_msg);
void enqueuePme(LocalWorkMsg* impl_msg);
void enqueueSelfA1(LocalWorkMsg* impl_msg);
void enqueueSelfA2(LocalWorkMsg* impl_msg);
void enqueueSelfA3(LocalWorkMsg* impl_msg);
void enqueueSelfB1(LocalWorkMsg* impl_msg);
void enqueueSelfB2(LocalWorkMsg* impl_msg);
void enqueueSelfB3(LocalWorkMsg* impl_msg);
void enqueueWorkA1(LocalWorkMsg* impl_msg);
void enqueueWorkA2(LocalWorkMsg* impl_msg);
void enqueueWorkA3(LocalWorkMsg* impl_msg);
void enqueueWorkB1(LocalWorkMsg* impl_msg);
void enqueueWorkB2(LocalWorkMsg* impl_msg);
void enqueueWorkB3(LocalWorkMsg* impl_msg);
void enqueueWorkC(LocalWorkMsg* impl_msg);
void enqueueLCPO(LocalWorkMsg* impl_msg);
void initHostDeviceLDB();
void contributeHostDeviceLDB(int peSetLen, const int *peSet);
void setDeviceLDBParams(int dt, int hs, int sp1, int pp1, int pp2);
};
 */
 class WorkDistrib;
 class CkIndex_WorkDistrib;
 class CProxy_WorkDistrib;
 class CProxyElement_WorkDistrib;
 class CProxySection_WorkDistrib;
/* --------------- index object ------------------ */
class CkIndex_WorkDistrib:public CkIndex_IrrGroup{
  public:
    typedef WorkDistrib local_t;
    typedef CkIndex_WorkDistrib index_t;
    typedef CProxy_WorkDistrib proxy_t;
    typedef CProxyElement_WorkDistrib element_t;
    typedef CProxySection_WorkDistrib section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: WorkDistrib();
     */
    // Entry point registration at startup
    
    static int reg_WorkDistrib_void();
    // Entry point index lookup
    
    inline static int idx_WorkDistrib_void() {
      static int epidx = reg_WorkDistrib_void();
      return epidx;
    }

    
    static int ckNew() { return idx_WorkDistrib_void(); }
    
    static void _call_WorkDistrib_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_WorkDistrib_void(void* impl_msg, void* impl_obj);
    /* DECLS: void peOrderingReady();
     */
    // Entry point registration at startup
    
    static int reg_peOrderingReady_void();
    // Entry point index lookup
    
    inline static int idx_peOrderingReady_void() {
      static int epidx = reg_peOrderingReady_void();
      return epidx;
    }

    
    inline static int idx_peOrderingReady(void (WorkDistrib::*)() ) {
      return idx_peOrderingReady_void();
    }


    
    static int peOrderingReady() { return idx_peOrderingReady_void(); }
    
    static void _call_peOrderingReady_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_peOrderingReady_void(void* impl_msg, void* impl_obj);
    /* DECLS: void savePatchMap(PatchMapMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_savePatchMap_PatchMapMsg();
    // Entry point index lookup
    
    inline static int idx_savePatchMap_PatchMapMsg() {
      static int epidx = reg_savePatchMap_PatchMapMsg();
      return epidx;
    }

    
    inline static int idx_savePatchMap(void (WorkDistrib::*)(PatchMapMsg* impl_msg) ) {
      return idx_savePatchMap_PatchMapMsg();
    }


    
    static int savePatchMap(PatchMapMsg* impl_msg) { return idx_savePatchMap_PatchMapMsg(); }
    
    static void _call_savePatchMap_PatchMapMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_savePatchMap_PatchMapMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvComputeMapChanges(ComputeMapChangeMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvComputeMapChanges_ComputeMapChangeMsg();
    // Entry point index lookup
    
    inline static int idx_recvComputeMapChanges_ComputeMapChangeMsg() {
      static int epidx = reg_recvComputeMapChanges_ComputeMapChangeMsg();
      return epidx;
    }

    
    inline static int idx_recvComputeMapChanges(void (WorkDistrib::*)(ComputeMapChangeMsg* impl_msg) ) {
      return idx_recvComputeMapChanges_ComputeMapChangeMsg();
    }


    
    static int recvComputeMapChanges(ComputeMapChangeMsg* impl_msg) { return idx_recvComputeMapChanges_ComputeMapChangeMsg(); }
    
    static void _call_recvComputeMapChanges_ComputeMapChangeMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvComputeMapChanges_ComputeMapChangeMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void doneSaveComputeMap(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_doneSaveComputeMap_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_doneSaveComputeMap_CkReductionMsg() {
      static int epidx = reg_doneSaveComputeMap_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_doneSaveComputeMap(void (WorkDistrib::*)(CkReductionMsg* impl_msg) ) {
      return idx_doneSaveComputeMap_CkReductionMsg();
    }


    
    static int doneSaveComputeMap(CkReductionMsg* impl_msg) { return idx_doneSaveComputeMap_CkReductionMsg(); }
    
    static void _call_doneSaveComputeMap_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_doneSaveComputeMap_CkReductionMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void enqueueWork(LocalWorkMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_enqueueWork_LocalWorkMsg();
    // Entry point index lookup
    
    inline static int idx_enqueueWork_LocalWorkMsg() {
      static int epidx = reg_enqueueWork_LocalWorkMsg();
      return epidx;
    }

    
    inline static int idx_enqueueWork(void (WorkDistrib::*)(LocalWorkMsg* impl_msg) ) {
      return idx_enqueueWork_LocalWorkMsg();
    }


    
    static int enqueueWork(LocalWorkMsg* impl_msg) { return idx_enqueueWork_LocalWorkMsg(); }
    
    static void _call_enqueueWork_LocalWorkMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_enqueueWork_LocalWorkMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void enqueueExcls(LocalWorkMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_enqueueExcls_LocalWorkMsg();
    // Entry point index lookup
    
    inline static int idx_enqueueExcls_LocalWorkMsg() {
      static int epidx = reg_enqueueExcls_LocalWorkMsg();
      return epidx;
    }

    
    inline static int idx_enqueueExcls(void (WorkDistrib::*)(LocalWorkMsg* impl_msg) ) {
      return idx_enqueueExcls_LocalWorkMsg();
    }


    
    static int enqueueExcls(LocalWorkMsg* impl_msg) { return idx_enqueueExcls_LocalWorkMsg(); }
    
    static void _call_enqueueExcls_LocalWorkMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_enqueueExcls_LocalWorkMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void enqueueBonds(LocalWorkMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_enqueueBonds_LocalWorkMsg();
    // Entry point index lookup
    
    inline static int idx_enqueueBonds_LocalWorkMsg() {
      static int epidx = reg_enqueueBonds_LocalWorkMsg();
      return epidx;
    }

    
    inline static int idx_enqueueBonds(void (WorkDistrib::*)(LocalWorkMsg* impl_msg) ) {
      return idx_enqueueBonds_LocalWorkMsg();
    }


    
    static int enqueueBonds(LocalWorkMsg* impl_msg) { return idx_enqueueBonds_LocalWorkMsg(); }
    
    static void _call_enqueueBonds_LocalWorkMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_enqueueBonds_LocalWorkMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void enqueueAngles(LocalWorkMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_enqueueAngles_LocalWorkMsg();
    // Entry point index lookup
    
    inline static int idx_enqueueAngles_LocalWorkMsg() {
      static int epidx = reg_enqueueAngles_LocalWorkMsg();
      return epidx;
    }

    
    inline static int idx_enqueueAngles(void (WorkDistrib::*)(LocalWorkMsg* impl_msg) ) {
      return idx_enqueueAngles_LocalWorkMsg();
    }


    
    static int enqueueAngles(LocalWorkMsg* impl_msg) { return idx_enqueueAngles_LocalWorkMsg(); }
    
    static void _call_enqueueAngles_LocalWorkMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_enqueueAngles_LocalWorkMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void enqueueDihedrals(LocalWorkMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_enqueueDihedrals_LocalWorkMsg();
    // Entry point index lookup
    
    inline static int idx_enqueueDihedrals_LocalWorkMsg() {
      static int epidx = reg_enqueueDihedrals_LocalWorkMsg();
      return epidx;
    }

    
    inline static int idx_enqueueDihedrals(void (WorkDistrib::*)(LocalWorkMsg* impl_msg) ) {
      return idx_enqueueDihedrals_LocalWorkMsg();
    }


    
    static int enqueueDihedrals(LocalWorkMsg* impl_msg) { return idx_enqueueDihedrals_LocalWorkMsg(); }
    
    static void _call_enqueueDihedrals_LocalWorkMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_enqueueDihedrals_LocalWorkMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void enqueueImpropers(LocalWorkMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_enqueueImpropers_LocalWorkMsg();
    // Entry point index lookup
    
    inline static int idx_enqueueImpropers_LocalWorkMsg() {
      static int epidx = reg_enqueueImpropers_LocalWorkMsg();
      return epidx;
    }

    
    inline static int idx_enqueueImpropers(void (WorkDistrib::*)(LocalWorkMsg* impl_msg) ) {
      return idx_enqueueImpropers_LocalWorkMsg();
    }


    
    static int enqueueImpropers(LocalWorkMsg* impl_msg) { return idx_enqueueImpropers_LocalWorkMsg(); }
    
    static void _call_enqueueImpropers_LocalWorkMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_enqueueImpropers_LocalWorkMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void enqueueThole(LocalWorkMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_enqueueThole_LocalWorkMsg();
    // Entry point index lookup
    
    inline static int idx_enqueueThole_LocalWorkMsg() {
      static int epidx = reg_enqueueThole_LocalWorkMsg();
      return epidx;
    }

    
    inline static int idx_enqueueThole(void (WorkDistrib::*)(LocalWorkMsg* impl_msg) ) {
      return idx_enqueueThole_LocalWorkMsg();
    }


    
    static int enqueueThole(LocalWorkMsg* impl_msg) { return idx_enqueueThole_LocalWorkMsg(); }
    
    static void _call_enqueueThole_LocalWorkMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_enqueueThole_LocalWorkMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void enqueueAniso(LocalWorkMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_enqueueAniso_LocalWorkMsg();
    // Entry point index lookup
    
    inline static int idx_enqueueAniso_LocalWorkMsg() {
      static int epidx = reg_enqueueAniso_LocalWorkMsg();
      return epidx;
    }

    
    inline static int idx_enqueueAniso(void (WorkDistrib::*)(LocalWorkMsg* impl_msg) ) {
      return idx_enqueueAniso_LocalWorkMsg();
    }


    
    static int enqueueAniso(LocalWorkMsg* impl_msg) { return idx_enqueueAniso_LocalWorkMsg(); }
    
    static void _call_enqueueAniso_LocalWorkMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_enqueueAniso_LocalWorkMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void enqueueCrossterms(LocalWorkMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_enqueueCrossterms_LocalWorkMsg();
    // Entry point index lookup
    
    inline static int idx_enqueueCrossterms_LocalWorkMsg() {
      static int epidx = reg_enqueueCrossterms_LocalWorkMsg();
      return epidx;
    }

    
    inline static int idx_enqueueCrossterms(void (WorkDistrib::*)(LocalWorkMsg* impl_msg) ) {
      return idx_enqueueCrossterms_LocalWorkMsg();
    }


    
    static int enqueueCrossterms(LocalWorkMsg* impl_msg) { return idx_enqueueCrossterms_LocalWorkMsg(); }
    
    static void _call_enqueueCrossterms_LocalWorkMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_enqueueCrossterms_LocalWorkMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void enqueueGromacsPair(LocalWorkMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_enqueueGromacsPair_LocalWorkMsg();
    // Entry point index lookup
    
    inline static int idx_enqueueGromacsPair_LocalWorkMsg() {
      static int epidx = reg_enqueueGromacsPair_LocalWorkMsg();
      return epidx;
    }

    
    inline static int idx_enqueueGromacsPair(void (WorkDistrib::*)(LocalWorkMsg* impl_msg) ) {
      return idx_enqueueGromacsPair_LocalWorkMsg();
    }


    
    static int enqueueGromacsPair(LocalWorkMsg* impl_msg) { return idx_enqueueGromacsPair_LocalWorkMsg(); }
    
    static void _call_enqueueGromacsPair_LocalWorkMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_enqueueGromacsPair_LocalWorkMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void enqueueCUDA(LocalWorkMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_enqueueCUDA_LocalWorkMsg();
    // Entry point index lookup
    
    inline static int idx_enqueueCUDA_LocalWorkMsg() {
      static int epidx = reg_enqueueCUDA_LocalWorkMsg();
      return epidx;
    }

    
    inline static int idx_enqueueCUDA(void (WorkDistrib::*)(LocalWorkMsg* impl_msg) ) {
      return idx_enqueueCUDA_LocalWorkMsg();
    }


    
    static int enqueueCUDA(LocalWorkMsg* impl_msg) { return idx_enqueueCUDA_LocalWorkMsg(); }
    
    static void _call_enqueueCUDA_LocalWorkMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_enqueueCUDA_LocalWorkMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void enqueueCUDAP2(LocalWorkMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_enqueueCUDAP2_LocalWorkMsg();
    // Entry point index lookup
    
    inline static int idx_enqueueCUDAP2_LocalWorkMsg() {
      static int epidx = reg_enqueueCUDAP2_LocalWorkMsg();
      return epidx;
    }

    
    inline static int idx_enqueueCUDAP2(void (WorkDistrib::*)(LocalWorkMsg* impl_msg) ) {
      return idx_enqueueCUDAP2_LocalWorkMsg();
    }


    
    static int enqueueCUDAP2(LocalWorkMsg* impl_msg) { return idx_enqueueCUDAP2_LocalWorkMsg(); }
    
    static void _call_enqueueCUDAP2_LocalWorkMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_enqueueCUDAP2_LocalWorkMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void enqueueCUDAP3(LocalWorkMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_enqueueCUDAP3_LocalWorkMsg();
    // Entry point index lookup
    
    inline static int idx_enqueueCUDAP3_LocalWorkMsg() {
      static int epidx = reg_enqueueCUDAP3_LocalWorkMsg();
      return epidx;
    }

    
    inline static int idx_enqueueCUDAP3(void (WorkDistrib::*)(LocalWorkMsg* impl_msg) ) {
      return idx_enqueueCUDAP3_LocalWorkMsg();
    }


    
    static int enqueueCUDAP3(LocalWorkMsg* impl_msg) { return idx_enqueueCUDAP3_LocalWorkMsg(); }
    
    static void _call_enqueueCUDAP3_LocalWorkMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_enqueueCUDAP3_LocalWorkMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void finishCUDAPatch(FinishWorkMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_finishCUDAPatch_FinishWorkMsg();
    // Entry point index lookup
    
    inline static int idx_finishCUDAPatch_FinishWorkMsg() {
      static int epidx = reg_finishCUDAPatch_FinishWorkMsg();
      return epidx;
    }

    
    inline static int idx_finishCUDAPatch(void (WorkDistrib::*)(FinishWorkMsg* impl_msg) ) {
      return idx_finishCUDAPatch_FinishWorkMsg();
    }


    
    static int finishCUDAPatch(FinishWorkMsg* impl_msg) { return idx_finishCUDAPatch_FinishWorkMsg(); }
    
    static void _call_finishCUDAPatch_FinishWorkMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_finishCUDAPatch_FinishWorkMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void finishCUDA(LocalWorkMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_finishCUDA_LocalWorkMsg();
    // Entry point index lookup
    
    inline static int idx_finishCUDA_LocalWorkMsg() {
      static int epidx = reg_finishCUDA_LocalWorkMsg();
      return epidx;
    }

    
    inline static int idx_finishCUDA(void (WorkDistrib::*)(LocalWorkMsg* impl_msg) ) {
      return idx_finishCUDA_LocalWorkMsg();
    }


    
    static int finishCUDA(LocalWorkMsg* impl_msg) { return idx_finishCUDA_LocalWorkMsg(); }
    
    static void _call_finishCUDA_LocalWorkMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_finishCUDA_LocalWorkMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void finishCUDAP2(LocalWorkMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_finishCUDAP2_LocalWorkMsg();
    // Entry point index lookup
    
    inline static int idx_finishCUDAP2_LocalWorkMsg() {
      static int epidx = reg_finishCUDAP2_LocalWorkMsg();
      return epidx;
    }

    
    inline static int idx_finishCUDAP2(void (WorkDistrib::*)(LocalWorkMsg* impl_msg) ) {
      return idx_finishCUDAP2_LocalWorkMsg();
    }


    
    static int finishCUDAP2(LocalWorkMsg* impl_msg) { return idx_finishCUDAP2_LocalWorkMsg(); }
    
    static void _call_finishCUDAP2_LocalWorkMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_finishCUDAP2_LocalWorkMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void finishCUDAP3(LocalWorkMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_finishCUDAP3_LocalWorkMsg();
    // Entry point index lookup
    
    inline static int idx_finishCUDAP3_LocalWorkMsg() {
      static int epidx = reg_finishCUDAP3_LocalWorkMsg();
      return epidx;
    }

    
    inline static int idx_finishCUDAP3(void (WorkDistrib::*)(LocalWorkMsg* impl_msg) ) {
      return idx_finishCUDAP3_LocalWorkMsg();
    }


    
    static int finishCUDAP3(LocalWorkMsg* impl_msg) { return idx_finishCUDAP3_LocalWorkMsg(); }
    
    static void _call_finishCUDAP3_LocalWorkMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_finishCUDAP3_LocalWorkMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void enqueueMIC(LocalWorkMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_enqueueMIC_LocalWorkMsg();
    // Entry point index lookup
    
    inline static int idx_enqueueMIC_LocalWorkMsg() {
      static int epidx = reg_enqueueMIC_LocalWorkMsg();
      return epidx;
    }

    
    inline static int idx_enqueueMIC(void (WorkDistrib::*)(LocalWorkMsg* impl_msg) ) {
      return idx_enqueueMIC_LocalWorkMsg();
    }


    
    static int enqueueMIC(LocalWorkMsg* impl_msg) { return idx_enqueueMIC_LocalWorkMsg(); }
    
    static void _call_enqueueMIC_LocalWorkMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_enqueueMIC_LocalWorkMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void finishMIC(LocalWorkMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_finishMIC_LocalWorkMsg();
    // Entry point index lookup
    
    inline static int idx_finishMIC_LocalWorkMsg() {
      static int epidx = reg_finishMIC_LocalWorkMsg();
      return epidx;
    }

    
    inline static int idx_finishMIC(void (WorkDistrib::*)(LocalWorkMsg* impl_msg) ) {
      return idx_finishMIC_LocalWorkMsg();
    }


    
    static int finishMIC(LocalWorkMsg* impl_msg) { return idx_finishMIC_LocalWorkMsg(); }
    
    static void _call_finishMIC_LocalWorkMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_finishMIC_LocalWorkMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void enqueuePme(LocalWorkMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_enqueuePme_LocalWorkMsg();
    // Entry point index lookup
    
    inline static int idx_enqueuePme_LocalWorkMsg() {
      static int epidx = reg_enqueuePme_LocalWorkMsg();
      return epidx;
    }

    
    inline static int idx_enqueuePme(void (WorkDistrib::*)(LocalWorkMsg* impl_msg) ) {
      return idx_enqueuePme_LocalWorkMsg();
    }


    
    static int enqueuePme(LocalWorkMsg* impl_msg) { return idx_enqueuePme_LocalWorkMsg(); }
    
    static void _call_enqueuePme_LocalWorkMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_enqueuePme_LocalWorkMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void enqueueSelfA1(LocalWorkMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_enqueueSelfA1_LocalWorkMsg();
    // Entry point index lookup
    
    inline static int idx_enqueueSelfA1_LocalWorkMsg() {
      static int epidx = reg_enqueueSelfA1_LocalWorkMsg();
      return epidx;
    }

    
    inline static int idx_enqueueSelfA1(void (WorkDistrib::*)(LocalWorkMsg* impl_msg) ) {
      return idx_enqueueSelfA1_LocalWorkMsg();
    }


    
    static int enqueueSelfA1(LocalWorkMsg* impl_msg) { return idx_enqueueSelfA1_LocalWorkMsg(); }
    
    static void _call_enqueueSelfA1_LocalWorkMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_enqueueSelfA1_LocalWorkMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void enqueueSelfA2(LocalWorkMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_enqueueSelfA2_LocalWorkMsg();
    // Entry point index lookup
    
    inline static int idx_enqueueSelfA2_LocalWorkMsg() {
      static int epidx = reg_enqueueSelfA2_LocalWorkMsg();
      return epidx;
    }

    
    inline static int idx_enqueueSelfA2(void (WorkDistrib::*)(LocalWorkMsg* impl_msg) ) {
      return idx_enqueueSelfA2_LocalWorkMsg();
    }


    
    static int enqueueSelfA2(LocalWorkMsg* impl_msg) { return idx_enqueueSelfA2_LocalWorkMsg(); }
    
    static void _call_enqueueSelfA2_LocalWorkMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_enqueueSelfA2_LocalWorkMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void enqueueSelfA3(LocalWorkMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_enqueueSelfA3_LocalWorkMsg();
    // Entry point index lookup
    
    inline static int idx_enqueueSelfA3_LocalWorkMsg() {
      static int epidx = reg_enqueueSelfA3_LocalWorkMsg();
      return epidx;
    }

    
    inline static int idx_enqueueSelfA3(void (WorkDistrib::*)(LocalWorkMsg* impl_msg) ) {
      return idx_enqueueSelfA3_LocalWorkMsg();
    }


    
    static int enqueueSelfA3(LocalWorkMsg* impl_msg) { return idx_enqueueSelfA3_LocalWorkMsg(); }
    
    static void _call_enqueueSelfA3_LocalWorkMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_enqueueSelfA3_LocalWorkMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void enqueueSelfB1(LocalWorkMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_enqueueSelfB1_LocalWorkMsg();
    // Entry point index lookup
    
    inline static int idx_enqueueSelfB1_LocalWorkMsg() {
      static int epidx = reg_enqueueSelfB1_LocalWorkMsg();
      return epidx;
    }

    
    inline static int idx_enqueueSelfB1(void (WorkDistrib::*)(LocalWorkMsg* impl_msg) ) {
      return idx_enqueueSelfB1_LocalWorkMsg();
    }


    
    static int enqueueSelfB1(LocalWorkMsg* impl_msg) { return idx_enqueueSelfB1_LocalWorkMsg(); }
    
    static void _call_enqueueSelfB1_LocalWorkMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_enqueueSelfB1_LocalWorkMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void enqueueSelfB2(LocalWorkMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_enqueueSelfB2_LocalWorkMsg();
    // Entry point index lookup
    
    inline static int idx_enqueueSelfB2_LocalWorkMsg() {
      static int epidx = reg_enqueueSelfB2_LocalWorkMsg();
      return epidx;
    }

    
    inline static int idx_enqueueSelfB2(void (WorkDistrib::*)(LocalWorkMsg* impl_msg) ) {
      return idx_enqueueSelfB2_LocalWorkMsg();
    }


    
    static int enqueueSelfB2(LocalWorkMsg* impl_msg) { return idx_enqueueSelfB2_LocalWorkMsg(); }
    
    static void _call_enqueueSelfB2_LocalWorkMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_enqueueSelfB2_LocalWorkMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void enqueueSelfB3(LocalWorkMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_enqueueSelfB3_LocalWorkMsg();
    // Entry point index lookup
    
    inline static int idx_enqueueSelfB3_LocalWorkMsg() {
      static int epidx = reg_enqueueSelfB3_LocalWorkMsg();
      return epidx;
    }

    
    inline static int idx_enqueueSelfB3(void (WorkDistrib::*)(LocalWorkMsg* impl_msg) ) {
      return idx_enqueueSelfB3_LocalWorkMsg();
    }


    
    static int enqueueSelfB3(LocalWorkMsg* impl_msg) { return idx_enqueueSelfB3_LocalWorkMsg(); }
    
    static void _call_enqueueSelfB3_LocalWorkMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_enqueueSelfB3_LocalWorkMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void enqueueWorkA1(LocalWorkMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_enqueueWorkA1_LocalWorkMsg();
    // Entry point index lookup
    
    inline static int idx_enqueueWorkA1_LocalWorkMsg() {
      static int epidx = reg_enqueueWorkA1_LocalWorkMsg();
      return epidx;
    }

    
    inline static int idx_enqueueWorkA1(void (WorkDistrib::*)(LocalWorkMsg* impl_msg) ) {
      return idx_enqueueWorkA1_LocalWorkMsg();
    }


    
    static int enqueueWorkA1(LocalWorkMsg* impl_msg) { return idx_enqueueWorkA1_LocalWorkMsg(); }
    
    static void _call_enqueueWorkA1_LocalWorkMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_enqueueWorkA1_LocalWorkMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void enqueueWorkA2(LocalWorkMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_enqueueWorkA2_LocalWorkMsg();
    // Entry point index lookup
    
    inline static int idx_enqueueWorkA2_LocalWorkMsg() {
      static int epidx = reg_enqueueWorkA2_LocalWorkMsg();
      return epidx;
    }

    
    inline static int idx_enqueueWorkA2(void (WorkDistrib::*)(LocalWorkMsg* impl_msg) ) {
      return idx_enqueueWorkA2_LocalWorkMsg();
    }


    
    static int enqueueWorkA2(LocalWorkMsg* impl_msg) { return idx_enqueueWorkA2_LocalWorkMsg(); }
    
    static void _call_enqueueWorkA2_LocalWorkMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_enqueueWorkA2_LocalWorkMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void enqueueWorkA3(LocalWorkMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_enqueueWorkA3_LocalWorkMsg();
    // Entry point index lookup
    
    inline static int idx_enqueueWorkA3_LocalWorkMsg() {
      static int epidx = reg_enqueueWorkA3_LocalWorkMsg();
      return epidx;
    }

    
    inline static int idx_enqueueWorkA3(void (WorkDistrib::*)(LocalWorkMsg* impl_msg) ) {
      return idx_enqueueWorkA3_LocalWorkMsg();
    }


    
    static int enqueueWorkA3(LocalWorkMsg* impl_msg) { return idx_enqueueWorkA3_LocalWorkMsg(); }
    
    static void _call_enqueueWorkA3_LocalWorkMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_enqueueWorkA3_LocalWorkMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void enqueueWorkB1(LocalWorkMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_enqueueWorkB1_LocalWorkMsg();
    // Entry point index lookup
    
    inline static int idx_enqueueWorkB1_LocalWorkMsg() {
      static int epidx = reg_enqueueWorkB1_LocalWorkMsg();
      return epidx;
    }

    
    inline static int idx_enqueueWorkB1(void (WorkDistrib::*)(LocalWorkMsg* impl_msg) ) {
      return idx_enqueueWorkB1_LocalWorkMsg();
    }


    
    static int enqueueWorkB1(LocalWorkMsg* impl_msg) { return idx_enqueueWorkB1_LocalWorkMsg(); }
    
    static void _call_enqueueWorkB1_LocalWorkMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_enqueueWorkB1_LocalWorkMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void enqueueWorkB2(LocalWorkMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_enqueueWorkB2_LocalWorkMsg();
    // Entry point index lookup
    
    inline static int idx_enqueueWorkB2_LocalWorkMsg() {
      static int epidx = reg_enqueueWorkB2_LocalWorkMsg();
      return epidx;
    }

    
    inline static int idx_enqueueWorkB2(void (WorkDistrib::*)(LocalWorkMsg* impl_msg) ) {
      return idx_enqueueWorkB2_LocalWorkMsg();
    }


    
    static int enqueueWorkB2(LocalWorkMsg* impl_msg) { return idx_enqueueWorkB2_LocalWorkMsg(); }
    
    static void _call_enqueueWorkB2_LocalWorkMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_enqueueWorkB2_LocalWorkMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void enqueueWorkB3(LocalWorkMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_enqueueWorkB3_LocalWorkMsg();
    // Entry point index lookup
    
    inline static int idx_enqueueWorkB3_LocalWorkMsg() {
      static int epidx = reg_enqueueWorkB3_LocalWorkMsg();
      return epidx;
    }

    
    inline static int idx_enqueueWorkB3(void (WorkDistrib::*)(LocalWorkMsg* impl_msg) ) {
      return idx_enqueueWorkB3_LocalWorkMsg();
    }


    
    static int enqueueWorkB3(LocalWorkMsg* impl_msg) { return idx_enqueueWorkB3_LocalWorkMsg(); }
    
    static void _call_enqueueWorkB3_LocalWorkMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_enqueueWorkB3_LocalWorkMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void enqueueWorkC(LocalWorkMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_enqueueWorkC_LocalWorkMsg();
    // Entry point index lookup
    
    inline static int idx_enqueueWorkC_LocalWorkMsg() {
      static int epidx = reg_enqueueWorkC_LocalWorkMsg();
      return epidx;
    }

    
    inline static int idx_enqueueWorkC(void (WorkDistrib::*)(LocalWorkMsg* impl_msg) ) {
      return idx_enqueueWorkC_LocalWorkMsg();
    }


    
    static int enqueueWorkC(LocalWorkMsg* impl_msg) { return idx_enqueueWorkC_LocalWorkMsg(); }
    
    static void _call_enqueueWorkC_LocalWorkMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_enqueueWorkC_LocalWorkMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void enqueueLCPO(LocalWorkMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_enqueueLCPO_LocalWorkMsg();
    // Entry point index lookup
    
    inline static int idx_enqueueLCPO_LocalWorkMsg() {
      static int epidx = reg_enqueueLCPO_LocalWorkMsg();
      return epidx;
    }

    
    inline static int idx_enqueueLCPO(void (WorkDistrib::*)(LocalWorkMsg* impl_msg) ) {
      return idx_enqueueLCPO_LocalWorkMsg();
    }


    
    static int enqueueLCPO(LocalWorkMsg* impl_msg) { return idx_enqueueLCPO_LocalWorkMsg(); }
    
    static void _call_enqueueLCPO_LocalWorkMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_enqueueLCPO_LocalWorkMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void initHostDeviceLDB();
     */
    // Entry point registration at startup
    
    static int reg_initHostDeviceLDB_void();
    // Entry point index lookup
    
    inline static int idx_initHostDeviceLDB_void() {
      static int epidx = reg_initHostDeviceLDB_void();
      return epidx;
    }

    
    inline static int idx_initHostDeviceLDB(void (WorkDistrib::*)() ) {
      return idx_initHostDeviceLDB_void();
    }


    
    static int initHostDeviceLDB() { return idx_initHostDeviceLDB_void(); }
    
    static void _call_initHostDeviceLDB_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_initHostDeviceLDB_void(void* impl_msg, void* impl_obj);
    /* DECLS: void contributeHostDeviceLDB(int peSetLen, const int *peSet);
     */
    // Entry point registration at startup
    
    static int reg_contributeHostDeviceLDB_marshall41();
    // Entry point index lookup
    
    inline static int idx_contributeHostDeviceLDB_marshall41() {
      static int epidx = reg_contributeHostDeviceLDB_marshall41();
      return epidx;
    }

    
    inline static int idx_contributeHostDeviceLDB(void (WorkDistrib::*)(int peSetLen, const int *peSet) ) {
      return idx_contributeHostDeviceLDB_marshall41();
    }


    
    static int contributeHostDeviceLDB(int peSetLen, const int *peSet) { return idx_contributeHostDeviceLDB_marshall41(); }
    
    static void _call_contributeHostDeviceLDB_marshall41(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_contributeHostDeviceLDB_marshall41(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_contributeHostDeviceLDB_marshall41(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_contributeHostDeviceLDB_marshall41(PUP::er &p,void *msg);
    /* DECLS: void setDeviceLDBParams(int dt, int hs, int sp1, int pp1, int pp2);
     */
    // Entry point registration at startup
    
    static int reg_setDeviceLDBParams_marshall42();
    // Entry point index lookup
    
    inline static int idx_setDeviceLDBParams_marshall42() {
      static int epidx = reg_setDeviceLDBParams_marshall42();
      return epidx;
    }

    
    inline static int idx_setDeviceLDBParams(void (WorkDistrib::*)(int dt, int hs, int sp1, int pp1, int pp2) ) {
      return idx_setDeviceLDBParams_marshall42();
    }


    
    static int setDeviceLDBParams(int dt, int hs, int sp1, int pp1, int pp2) { return idx_setDeviceLDBParams_marshall42(); }
    
    static void _call_setDeviceLDBParams_marshall42(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_setDeviceLDBParams_marshall42(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_setDeviceLDBParams_marshall42(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_setDeviceLDBParams_marshall42(PUP::er &p,void *msg);
};
/* --------------- element proxy ------------------ */
class CProxyElement_WorkDistrib: public CProxyElement_IrrGroup{
  public:
    typedef WorkDistrib local_t;
    typedef CkIndex_WorkDistrib index_t;
    typedef CProxy_WorkDistrib proxy_t;
    typedef CProxyElement_WorkDistrib element_t;
    typedef CProxySection_WorkDistrib section_t;


    /* TRAM aggregators */

    CProxyElement_WorkDistrib(void) {
    }
    CProxyElement_WorkDistrib(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_WorkDistrib(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_WorkDistrib(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    WorkDistrib* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static WorkDistrib* ckLocalBranch(CkGroupID gID) {
      return (WorkDistrib*)CkLocalBranch(gID);
    }
/* DECLS: WorkDistrib();
 */
    

/* DECLS: void peOrderingReady();
 */
    
    void peOrderingReady(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void savePatchMap(PatchMapMsg* impl_msg);
 */
    
    void savePatchMap(PatchMapMsg* impl_msg);

/* DECLS: void recvComputeMapChanges(ComputeMapChangeMsg* impl_msg);
 */
    
    void recvComputeMapChanges(ComputeMapChangeMsg* impl_msg);

/* DECLS: void doneSaveComputeMap(CkReductionMsg* impl_msg);
 */
    
    void doneSaveComputeMap(CkReductionMsg* impl_msg);

/* DECLS: void enqueueWork(LocalWorkMsg* impl_msg);
 */
    
    void enqueueWork(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueExcls(LocalWorkMsg* impl_msg);
 */
    
    void enqueueExcls(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueBonds(LocalWorkMsg* impl_msg);
 */
    
    void enqueueBonds(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueAngles(LocalWorkMsg* impl_msg);
 */
    
    void enqueueAngles(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueDihedrals(LocalWorkMsg* impl_msg);
 */
    
    void enqueueDihedrals(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueImpropers(LocalWorkMsg* impl_msg);
 */
    
    void enqueueImpropers(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueThole(LocalWorkMsg* impl_msg);
 */
    
    void enqueueThole(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueAniso(LocalWorkMsg* impl_msg);
 */
    
    void enqueueAniso(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueCrossterms(LocalWorkMsg* impl_msg);
 */
    
    void enqueueCrossterms(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueGromacsPair(LocalWorkMsg* impl_msg);
 */
    
    void enqueueGromacsPair(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueCUDA(LocalWorkMsg* impl_msg);
 */
    
    void enqueueCUDA(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueCUDAP2(LocalWorkMsg* impl_msg);
 */
    
    void enqueueCUDAP2(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueCUDAP3(LocalWorkMsg* impl_msg);
 */
    
    void enqueueCUDAP3(LocalWorkMsg* impl_msg);

/* DECLS: void finishCUDAPatch(FinishWorkMsg* impl_msg);
 */
    
    void finishCUDAPatch(FinishWorkMsg* impl_msg);

/* DECLS: void finishCUDA(LocalWorkMsg* impl_msg);
 */
    
    void finishCUDA(LocalWorkMsg* impl_msg);

/* DECLS: void finishCUDAP2(LocalWorkMsg* impl_msg);
 */
    
    void finishCUDAP2(LocalWorkMsg* impl_msg);

/* DECLS: void finishCUDAP3(LocalWorkMsg* impl_msg);
 */
    
    void finishCUDAP3(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueMIC(LocalWorkMsg* impl_msg);
 */
    
    void enqueueMIC(LocalWorkMsg* impl_msg);

/* DECLS: void finishMIC(LocalWorkMsg* impl_msg);
 */
    
    void finishMIC(LocalWorkMsg* impl_msg);

/* DECLS: void enqueuePme(LocalWorkMsg* impl_msg);
 */
    
    void enqueuePme(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueSelfA1(LocalWorkMsg* impl_msg);
 */
    
    void enqueueSelfA1(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueSelfA2(LocalWorkMsg* impl_msg);
 */
    
    void enqueueSelfA2(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueSelfA3(LocalWorkMsg* impl_msg);
 */
    
    void enqueueSelfA3(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueSelfB1(LocalWorkMsg* impl_msg);
 */
    
    void enqueueSelfB1(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueSelfB2(LocalWorkMsg* impl_msg);
 */
    
    void enqueueSelfB2(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueSelfB3(LocalWorkMsg* impl_msg);
 */
    
    void enqueueSelfB3(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueWorkA1(LocalWorkMsg* impl_msg);
 */
    
    void enqueueWorkA1(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueWorkA2(LocalWorkMsg* impl_msg);
 */
    
    void enqueueWorkA2(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueWorkA3(LocalWorkMsg* impl_msg);
 */
    
    void enqueueWorkA3(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueWorkB1(LocalWorkMsg* impl_msg);
 */
    
    void enqueueWorkB1(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueWorkB2(LocalWorkMsg* impl_msg);
 */
    
    void enqueueWorkB2(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueWorkB3(LocalWorkMsg* impl_msg);
 */
    
    void enqueueWorkB3(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueWorkC(LocalWorkMsg* impl_msg);
 */
    
    void enqueueWorkC(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueLCPO(LocalWorkMsg* impl_msg);
 */
    
    void enqueueLCPO(LocalWorkMsg* impl_msg);

/* DECLS: void initHostDeviceLDB();
 */
    
    void initHostDeviceLDB(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void contributeHostDeviceLDB(int peSetLen, const int *peSet);
 */
    
    void contributeHostDeviceLDB(int peSetLen, const int *peSet, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void setDeviceLDBParams(int dt, int hs, int sp1, int pp1, int pp2);
 */
    
    void setDeviceLDBParams(int dt, int hs, int sp1, int pp1, int pp2, const CkEntryOptions *impl_e_opts=NULL);

};
/* ---------------- collective proxy -------------- */
class CProxy_WorkDistrib: public CProxy_IrrGroup{
  public:
    typedef WorkDistrib local_t;
    typedef CkIndex_WorkDistrib index_t;
    typedef CProxy_WorkDistrib proxy_t;
    typedef CProxyElement_WorkDistrib element_t;
    typedef CProxySection_WorkDistrib section_t;

    CProxy_WorkDistrib(void) {
    }
    CProxy_WorkDistrib(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_WorkDistrib(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_WorkDistrib(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_WorkDistrib operator[](int onPE) const
      {return CProxyElement_WorkDistrib(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    WorkDistrib* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static WorkDistrib* ckLocalBranch(CkGroupID gID) {
      return (WorkDistrib*)CkLocalBranch(gID);
    }
/* DECLS: WorkDistrib();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void peOrderingReady();
 */
    
    void peOrderingReady(const CkEntryOptions *impl_e_opts=NULL);
    
    void peOrderingReady(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void peOrderingReady(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void savePatchMap(PatchMapMsg* impl_msg);
 */
    
    void savePatchMap(PatchMapMsg* impl_msg);
    
    void savePatchMap(PatchMapMsg* impl_msg, int npes, int *pes);
    
    void savePatchMap(PatchMapMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvComputeMapChanges(ComputeMapChangeMsg* impl_msg);
 */
    
    void recvComputeMapChanges(ComputeMapChangeMsg* impl_msg);
    
    void recvComputeMapChanges(ComputeMapChangeMsg* impl_msg, int npes, int *pes);
    
    void recvComputeMapChanges(ComputeMapChangeMsg* impl_msg, CmiGroup &grp);

/* DECLS: void doneSaveComputeMap(CkReductionMsg* impl_msg);
 */
    
    void doneSaveComputeMap(CkReductionMsg* impl_msg);
    
    void doneSaveComputeMap(CkReductionMsg* impl_msg, int npes, int *pes);
    
    void doneSaveComputeMap(CkReductionMsg* impl_msg, CmiGroup &grp);

/* DECLS: void enqueueWork(LocalWorkMsg* impl_msg);
 */
    
    void enqueueWork(LocalWorkMsg* impl_msg);
    
    void enqueueWork(LocalWorkMsg* impl_msg, int npes, int *pes);
    
    void enqueueWork(LocalWorkMsg* impl_msg, CmiGroup &grp);

/* DECLS: void enqueueExcls(LocalWorkMsg* impl_msg);
 */
    
    void enqueueExcls(LocalWorkMsg* impl_msg);
    
    void enqueueExcls(LocalWorkMsg* impl_msg, int npes, int *pes);
    
    void enqueueExcls(LocalWorkMsg* impl_msg, CmiGroup &grp);

/* DECLS: void enqueueBonds(LocalWorkMsg* impl_msg);
 */
    
    void enqueueBonds(LocalWorkMsg* impl_msg);
    
    void enqueueBonds(LocalWorkMsg* impl_msg, int npes, int *pes);
    
    void enqueueBonds(LocalWorkMsg* impl_msg, CmiGroup &grp);

/* DECLS: void enqueueAngles(LocalWorkMsg* impl_msg);
 */
    
    void enqueueAngles(LocalWorkMsg* impl_msg);
    
    void enqueueAngles(LocalWorkMsg* impl_msg, int npes, int *pes);
    
    void enqueueAngles(LocalWorkMsg* impl_msg, CmiGroup &grp);

/* DECLS: void enqueueDihedrals(LocalWorkMsg* impl_msg);
 */
    
    void enqueueDihedrals(LocalWorkMsg* impl_msg);
    
    void enqueueDihedrals(LocalWorkMsg* impl_msg, int npes, int *pes);
    
    void enqueueDihedrals(LocalWorkMsg* impl_msg, CmiGroup &grp);

/* DECLS: void enqueueImpropers(LocalWorkMsg* impl_msg);
 */
    
    void enqueueImpropers(LocalWorkMsg* impl_msg);
    
    void enqueueImpropers(LocalWorkMsg* impl_msg, int npes, int *pes);
    
    void enqueueImpropers(LocalWorkMsg* impl_msg, CmiGroup &grp);

/* DECLS: void enqueueThole(LocalWorkMsg* impl_msg);
 */
    
    void enqueueThole(LocalWorkMsg* impl_msg);
    
    void enqueueThole(LocalWorkMsg* impl_msg, int npes, int *pes);
    
    void enqueueThole(LocalWorkMsg* impl_msg, CmiGroup &grp);

/* DECLS: void enqueueAniso(LocalWorkMsg* impl_msg);
 */
    
    void enqueueAniso(LocalWorkMsg* impl_msg);
    
    void enqueueAniso(LocalWorkMsg* impl_msg, int npes, int *pes);
    
    void enqueueAniso(LocalWorkMsg* impl_msg, CmiGroup &grp);

/* DECLS: void enqueueCrossterms(LocalWorkMsg* impl_msg);
 */
    
    void enqueueCrossterms(LocalWorkMsg* impl_msg);
    
    void enqueueCrossterms(LocalWorkMsg* impl_msg, int npes, int *pes);
    
    void enqueueCrossterms(LocalWorkMsg* impl_msg, CmiGroup &grp);

/* DECLS: void enqueueGromacsPair(LocalWorkMsg* impl_msg);
 */
    
    void enqueueGromacsPair(LocalWorkMsg* impl_msg);
    
    void enqueueGromacsPair(LocalWorkMsg* impl_msg, int npes, int *pes);
    
    void enqueueGromacsPair(LocalWorkMsg* impl_msg, CmiGroup &grp);

/* DECLS: void enqueueCUDA(LocalWorkMsg* impl_msg);
 */
    
    void enqueueCUDA(LocalWorkMsg* impl_msg);
    
    void enqueueCUDA(LocalWorkMsg* impl_msg, int npes, int *pes);
    
    void enqueueCUDA(LocalWorkMsg* impl_msg, CmiGroup &grp);

/* DECLS: void enqueueCUDAP2(LocalWorkMsg* impl_msg);
 */
    
    void enqueueCUDAP2(LocalWorkMsg* impl_msg);
    
    void enqueueCUDAP2(LocalWorkMsg* impl_msg, int npes, int *pes);
    
    void enqueueCUDAP2(LocalWorkMsg* impl_msg, CmiGroup &grp);

/* DECLS: void enqueueCUDAP3(LocalWorkMsg* impl_msg);
 */
    
    void enqueueCUDAP3(LocalWorkMsg* impl_msg);
    
    void enqueueCUDAP3(LocalWorkMsg* impl_msg, int npes, int *pes);
    
    void enqueueCUDAP3(LocalWorkMsg* impl_msg, CmiGroup &grp);

/* DECLS: void finishCUDAPatch(FinishWorkMsg* impl_msg);
 */
    
    void finishCUDAPatch(FinishWorkMsg* impl_msg);
    
    void finishCUDAPatch(FinishWorkMsg* impl_msg, int npes, int *pes);
    
    void finishCUDAPatch(FinishWorkMsg* impl_msg, CmiGroup &grp);

/* DECLS: void finishCUDA(LocalWorkMsg* impl_msg);
 */
    
    void finishCUDA(LocalWorkMsg* impl_msg);
    
    void finishCUDA(LocalWorkMsg* impl_msg, int npes, int *pes);
    
    void finishCUDA(LocalWorkMsg* impl_msg, CmiGroup &grp);

/* DECLS: void finishCUDAP2(LocalWorkMsg* impl_msg);
 */
    
    void finishCUDAP2(LocalWorkMsg* impl_msg);
    
    void finishCUDAP2(LocalWorkMsg* impl_msg, int npes, int *pes);
    
    void finishCUDAP2(LocalWorkMsg* impl_msg, CmiGroup &grp);

/* DECLS: void finishCUDAP3(LocalWorkMsg* impl_msg);
 */
    
    void finishCUDAP3(LocalWorkMsg* impl_msg);
    
    void finishCUDAP3(LocalWorkMsg* impl_msg, int npes, int *pes);
    
    void finishCUDAP3(LocalWorkMsg* impl_msg, CmiGroup &grp);

/* DECLS: void enqueueMIC(LocalWorkMsg* impl_msg);
 */
    
    void enqueueMIC(LocalWorkMsg* impl_msg);
    
    void enqueueMIC(LocalWorkMsg* impl_msg, int npes, int *pes);
    
    void enqueueMIC(LocalWorkMsg* impl_msg, CmiGroup &grp);

/* DECLS: void finishMIC(LocalWorkMsg* impl_msg);
 */
    
    void finishMIC(LocalWorkMsg* impl_msg);
    
    void finishMIC(LocalWorkMsg* impl_msg, int npes, int *pes);
    
    void finishMIC(LocalWorkMsg* impl_msg, CmiGroup &grp);

/* DECLS: void enqueuePme(LocalWorkMsg* impl_msg);
 */
    
    void enqueuePme(LocalWorkMsg* impl_msg);
    
    void enqueuePme(LocalWorkMsg* impl_msg, int npes, int *pes);
    
    void enqueuePme(LocalWorkMsg* impl_msg, CmiGroup &grp);

/* DECLS: void enqueueSelfA1(LocalWorkMsg* impl_msg);
 */
    
    void enqueueSelfA1(LocalWorkMsg* impl_msg);
    
    void enqueueSelfA1(LocalWorkMsg* impl_msg, int npes, int *pes);
    
    void enqueueSelfA1(LocalWorkMsg* impl_msg, CmiGroup &grp);

/* DECLS: void enqueueSelfA2(LocalWorkMsg* impl_msg);
 */
    
    void enqueueSelfA2(LocalWorkMsg* impl_msg);
    
    void enqueueSelfA2(LocalWorkMsg* impl_msg, int npes, int *pes);
    
    void enqueueSelfA2(LocalWorkMsg* impl_msg, CmiGroup &grp);

/* DECLS: void enqueueSelfA3(LocalWorkMsg* impl_msg);
 */
    
    void enqueueSelfA3(LocalWorkMsg* impl_msg);
    
    void enqueueSelfA3(LocalWorkMsg* impl_msg, int npes, int *pes);
    
    void enqueueSelfA3(LocalWorkMsg* impl_msg, CmiGroup &grp);

/* DECLS: void enqueueSelfB1(LocalWorkMsg* impl_msg);
 */
    
    void enqueueSelfB1(LocalWorkMsg* impl_msg);
    
    void enqueueSelfB1(LocalWorkMsg* impl_msg, int npes, int *pes);
    
    void enqueueSelfB1(LocalWorkMsg* impl_msg, CmiGroup &grp);

/* DECLS: void enqueueSelfB2(LocalWorkMsg* impl_msg);
 */
    
    void enqueueSelfB2(LocalWorkMsg* impl_msg);
    
    void enqueueSelfB2(LocalWorkMsg* impl_msg, int npes, int *pes);
    
    void enqueueSelfB2(LocalWorkMsg* impl_msg, CmiGroup &grp);

/* DECLS: void enqueueSelfB3(LocalWorkMsg* impl_msg);
 */
    
    void enqueueSelfB3(LocalWorkMsg* impl_msg);
    
    void enqueueSelfB3(LocalWorkMsg* impl_msg, int npes, int *pes);
    
    void enqueueSelfB3(LocalWorkMsg* impl_msg, CmiGroup &grp);

/* DECLS: void enqueueWorkA1(LocalWorkMsg* impl_msg);
 */
    
    void enqueueWorkA1(LocalWorkMsg* impl_msg);
    
    void enqueueWorkA1(LocalWorkMsg* impl_msg, int npes, int *pes);
    
    void enqueueWorkA1(LocalWorkMsg* impl_msg, CmiGroup &grp);

/* DECLS: void enqueueWorkA2(LocalWorkMsg* impl_msg);
 */
    
    void enqueueWorkA2(LocalWorkMsg* impl_msg);
    
    void enqueueWorkA2(LocalWorkMsg* impl_msg, int npes, int *pes);
    
    void enqueueWorkA2(LocalWorkMsg* impl_msg, CmiGroup &grp);

/* DECLS: void enqueueWorkA3(LocalWorkMsg* impl_msg);
 */
    
    void enqueueWorkA3(LocalWorkMsg* impl_msg);
    
    void enqueueWorkA3(LocalWorkMsg* impl_msg, int npes, int *pes);
    
    void enqueueWorkA3(LocalWorkMsg* impl_msg, CmiGroup &grp);

/* DECLS: void enqueueWorkB1(LocalWorkMsg* impl_msg);
 */
    
    void enqueueWorkB1(LocalWorkMsg* impl_msg);
    
    void enqueueWorkB1(LocalWorkMsg* impl_msg, int npes, int *pes);
    
    void enqueueWorkB1(LocalWorkMsg* impl_msg, CmiGroup &grp);

/* DECLS: void enqueueWorkB2(LocalWorkMsg* impl_msg);
 */
    
    void enqueueWorkB2(LocalWorkMsg* impl_msg);
    
    void enqueueWorkB2(LocalWorkMsg* impl_msg, int npes, int *pes);
    
    void enqueueWorkB2(LocalWorkMsg* impl_msg, CmiGroup &grp);

/* DECLS: void enqueueWorkB3(LocalWorkMsg* impl_msg);
 */
    
    void enqueueWorkB3(LocalWorkMsg* impl_msg);
    
    void enqueueWorkB3(LocalWorkMsg* impl_msg, int npes, int *pes);
    
    void enqueueWorkB3(LocalWorkMsg* impl_msg, CmiGroup &grp);

/* DECLS: void enqueueWorkC(LocalWorkMsg* impl_msg);
 */
    
    void enqueueWorkC(LocalWorkMsg* impl_msg);
    
    void enqueueWorkC(LocalWorkMsg* impl_msg, int npes, int *pes);
    
    void enqueueWorkC(LocalWorkMsg* impl_msg, CmiGroup &grp);

/* DECLS: void enqueueLCPO(LocalWorkMsg* impl_msg);
 */
    
    void enqueueLCPO(LocalWorkMsg* impl_msg);
    
    void enqueueLCPO(LocalWorkMsg* impl_msg, int npes, int *pes);
    
    void enqueueLCPO(LocalWorkMsg* impl_msg, CmiGroup &grp);

/* DECLS: void initHostDeviceLDB();
 */
    
    void initHostDeviceLDB(const CkEntryOptions *impl_e_opts=NULL);
    
    void initHostDeviceLDB(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void initHostDeviceLDB(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void contributeHostDeviceLDB(int peSetLen, const int *peSet);
 */
    
    void contributeHostDeviceLDB(int peSetLen, const int *peSet, const CkEntryOptions *impl_e_opts=NULL);
    
    void contributeHostDeviceLDB(int peSetLen, const int *peSet, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void contributeHostDeviceLDB(int peSetLen, const int *peSet, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void setDeviceLDBParams(int dt, int hs, int sp1, int pp1, int pp2);
 */
    
    void setDeviceLDBParams(int dt, int hs, int sp1, int pp1, int pp2, const CkEntryOptions *impl_e_opts=NULL);
    
    void setDeviceLDBParams(int dt, int hs, int sp1, int pp1, int pp2, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void setDeviceLDBParams(int dt, int hs, int sp1, int pp1, int pp2, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

};
/* ---------------- section proxy -------------- */
class CProxySection_WorkDistrib: public CProxySection_IrrGroup{
  public:
    typedef WorkDistrib local_t;
    typedef CkIndex_WorkDistrib index_t;
    typedef CProxy_WorkDistrib proxy_t;
    typedef CProxyElement_WorkDistrib element_t;
    typedef CProxySection_WorkDistrib section_t;

    CProxySection_WorkDistrib(void) {
    }
    CProxySection_WorkDistrib(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_WorkDistrib(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_WorkDistrib(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_WorkDistrib(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_WorkDistrib(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    WorkDistrib* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static WorkDistrib* ckLocalBranch(CkGroupID gID) {
      return (WorkDistrib*)CkLocalBranch(gID);
    }
/* DECLS: WorkDistrib();
 */
    

/* DECLS: void peOrderingReady();
 */
    
    void peOrderingReady(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void savePatchMap(PatchMapMsg* impl_msg);
 */
    
    void savePatchMap(PatchMapMsg* impl_msg);

/* DECLS: void recvComputeMapChanges(ComputeMapChangeMsg* impl_msg);
 */
    
    void recvComputeMapChanges(ComputeMapChangeMsg* impl_msg);

/* DECLS: void doneSaveComputeMap(CkReductionMsg* impl_msg);
 */
    
    void doneSaveComputeMap(CkReductionMsg* impl_msg);

/* DECLS: void enqueueWork(LocalWorkMsg* impl_msg);
 */
    
    void enqueueWork(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueExcls(LocalWorkMsg* impl_msg);
 */
    
    void enqueueExcls(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueBonds(LocalWorkMsg* impl_msg);
 */
    
    void enqueueBonds(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueAngles(LocalWorkMsg* impl_msg);
 */
    
    void enqueueAngles(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueDihedrals(LocalWorkMsg* impl_msg);
 */
    
    void enqueueDihedrals(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueImpropers(LocalWorkMsg* impl_msg);
 */
    
    void enqueueImpropers(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueThole(LocalWorkMsg* impl_msg);
 */
    
    void enqueueThole(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueAniso(LocalWorkMsg* impl_msg);
 */
    
    void enqueueAniso(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueCrossterms(LocalWorkMsg* impl_msg);
 */
    
    void enqueueCrossterms(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueGromacsPair(LocalWorkMsg* impl_msg);
 */
    
    void enqueueGromacsPair(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueCUDA(LocalWorkMsg* impl_msg);
 */
    
    void enqueueCUDA(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueCUDAP2(LocalWorkMsg* impl_msg);
 */
    
    void enqueueCUDAP2(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueCUDAP3(LocalWorkMsg* impl_msg);
 */
    
    void enqueueCUDAP3(LocalWorkMsg* impl_msg);

/* DECLS: void finishCUDAPatch(FinishWorkMsg* impl_msg);
 */
    
    void finishCUDAPatch(FinishWorkMsg* impl_msg);

/* DECLS: void finishCUDA(LocalWorkMsg* impl_msg);
 */
    
    void finishCUDA(LocalWorkMsg* impl_msg);

/* DECLS: void finishCUDAP2(LocalWorkMsg* impl_msg);
 */
    
    void finishCUDAP2(LocalWorkMsg* impl_msg);

/* DECLS: void finishCUDAP3(LocalWorkMsg* impl_msg);
 */
    
    void finishCUDAP3(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueMIC(LocalWorkMsg* impl_msg);
 */
    
    void enqueueMIC(LocalWorkMsg* impl_msg);

/* DECLS: void finishMIC(LocalWorkMsg* impl_msg);
 */
    
    void finishMIC(LocalWorkMsg* impl_msg);

/* DECLS: void enqueuePme(LocalWorkMsg* impl_msg);
 */
    
    void enqueuePme(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueSelfA1(LocalWorkMsg* impl_msg);
 */
    
    void enqueueSelfA1(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueSelfA2(LocalWorkMsg* impl_msg);
 */
    
    void enqueueSelfA2(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueSelfA3(LocalWorkMsg* impl_msg);
 */
    
    void enqueueSelfA3(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueSelfB1(LocalWorkMsg* impl_msg);
 */
    
    void enqueueSelfB1(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueSelfB2(LocalWorkMsg* impl_msg);
 */
    
    void enqueueSelfB2(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueSelfB3(LocalWorkMsg* impl_msg);
 */
    
    void enqueueSelfB3(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueWorkA1(LocalWorkMsg* impl_msg);
 */
    
    void enqueueWorkA1(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueWorkA2(LocalWorkMsg* impl_msg);
 */
    
    void enqueueWorkA2(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueWorkA3(LocalWorkMsg* impl_msg);
 */
    
    void enqueueWorkA3(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueWorkB1(LocalWorkMsg* impl_msg);
 */
    
    void enqueueWorkB1(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueWorkB2(LocalWorkMsg* impl_msg);
 */
    
    void enqueueWorkB2(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueWorkB3(LocalWorkMsg* impl_msg);
 */
    
    void enqueueWorkB3(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueWorkC(LocalWorkMsg* impl_msg);
 */
    
    void enqueueWorkC(LocalWorkMsg* impl_msg);

/* DECLS: void enqueueLCPO(LocalWorkMsg* impl_msg);
 */
    
    void enqueueLCPO(LocalWorkMsg* impl_msg);

/* DECLS: void initHostDeviceLDB();
 */
    
    void initHostDeviceLDB(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void contributeHostDeviceLDB(int peSetLen, const int *peSet);
 */
    
    void contributeHostDeviceLDB(int peSetLen, const int *peSet, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void setDeviceLDBParams(int dt, int hs, int sp1, int pp1, int pp2);
 */
    
    void setDeviceLDBParams(int dt, int hs, int sp1, int pp1, int pp2, const CkEntryOptions *impl_e_opts=NULL);

};
#define WorkDistrib_SDAG_CODE 
typedef CBaseT1<Group, CProxy_WorkDistrib>CBase_WorkDistrib;





/* ---------------- method closures -------------- */
class Closure_WorkDistrib {
  public:


    struct peOrderingReady_2_closure;







































    struct initHostDeviceLDB_40_closure;


    struct contributeHostDeviceLDB_41_closure;


    struct setDeviceLDBParams_42_closure;

};

extern void _registerWorkDistrib(void);
#endif
