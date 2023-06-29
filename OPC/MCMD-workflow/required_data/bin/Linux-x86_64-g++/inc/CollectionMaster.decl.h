#ifndef _DECL_CollectionMaster_H_
#define _DECL_CollectionMaster_H_
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
/* DECLS: message CollectVectorMsg{
AtomID aid[];
Vector data[];
FloatVector fdata[];
}
;
 */
class CollectVectorMsg;
class CMessage_CollectVectorMsg:public CkMessage{
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
    CMessage_CollectVectorMsg();
    static void *pack(CollectVectorMsg *p);
    static CollectVectorMsg* unpack(void* p);
    void *operator new(size_t, int, int, int);
    void *operator new(size_t, int, int, int, const int);
    void *operator new(size_t, int, int, int, const int, const GroupDepNum);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, int, int, int){dealloc(p);}
    void operator delete(void *p, int, int, int, const int){dealloc(p);}
    void operator delete(void *p, int, int, int, const int, const GroupDepNum){dealloc(p);}
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
/* DECLS: message DataStreamMsg;
 */
class DataStreamMsg;
class CMessage_DataStreamMsg:public CkMessage{
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
    CMessage_DataStreamMsg();
    static void *pack(DataStreamMsg *p);
    static DataStreamMsg* unpack(void* p);
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
/* DECLS: message CollectVectorVarMsg{
AtomID aid[];
Vector data[];
FloatVector fdata[];
}
;
 */
class CollectVectorVarMsg;
class CMessage_CollectVectorVarMsg:public CkMessage{
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
    CMessage_CollectVectorVarMsg();
    static void *pack(CollectVectorVarMsg *p);
    static CollectVectorVarMsg* unpack(void* p);
    void *operator new(size_t, int, int, int);
    void *operator new(size_t, int, int, int, const int);
    void *operator new(size_t, int, int, int, const int, const GroupDepNum);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, int, int, int){dealloc(p);}
    void operator delete(void *p, int, int, int, const int){dealloc(p);}
    void operator delete(void *p, int, int, int, const int, const GroupDepNum){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: chare CollectionMaster: Chare{
CollectionMaster();
void receivePositions(CollectVectorMsg* impl_msg);
void receiveVelocities(CollectVectorMsg* impl_msg);
void receiveForces(CollectVectorMsg* impl_msg);
void receiveDataStream(DataStreamMsg* impl_msg);
void receiveOutputPosReady(int seq);
void receiveOutputVelReady(int seq);
void receiveOutputForceReady(int seq);
void startNextRoundOutputPos(double totalT);
void startNextRoundOutputVel(double totalT);
void startNextRoundOutputForce(double totalT);
void wrapCoorFinished();
};
 */
 class CollectionMaster;
 class CkIndex_CollectionMaster;
 class CProxy_CollectionMaster;
/* --------------- index object ------------------ */
class CkIndex_CollectionMaster:public CkIndex_Chare{
  public:
    typedef CollectionMaster local_t;
    typedef CkIndex_CollectionMaster index_t;
    typedef CProxy_CollectionMaster proxy_t;
    typedef CProxy_CollectionMaster element_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: CollectionMaster();
     */
    // Entry point registration at startup
    
    static int reg_CollectionMaster_void();
    // Entry point index lookup
    
    inline static int idx_CollectionMaster_void() {
      static int epidx = reg_CollectionMaster_void();
      return epidx;
    }

    
    static int ckNew() { return idx_CollectionMaster_void(); }
    
    static void _call_CollectionMaster_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_CollectionMaster_void(void* impl_msg, void* impl_obj);
    /* DECLS: void receivePositions(CollectVectorMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_receivePositions_CollectVectorMsg();
    // Entry point index lookup
    
    inline static int idx_receivePositions_CollectVectorMsg() {
      static int epidx = reg_receivePositions_CollectVectorMsg();
      return epidx;
    }

    
    inline static int idx_receivePositions(void (CollectionMaster::*)(CollectVectorMsg* impl_msg) ) {
      return idx_receivePositions_CollectVectorMsg();
    }


    
    static int receivePositions(CollectVectorMsg* impl_msg) { return idx_receivePositions_CollectVectorMsg(); }
    
    static void _call_receivePositions_CollectVectorMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_receivePositions_CollectVectorMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void receiveVelocities(CollectVectorMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_receiveVelocities_CollectVectorMsg();
    // Entry point index lookup
    
    inline static int idx_receiveVelocities_CollectVectorMsg() {
      static int epidx = reg_receiveVelocities_CollectVectorMsg();
      return epidx;
    }

    
    inline static int idx_receiveVelocities(void (CollectionMaster::*)(CollectVectorMsg* impl_msg) ) {
      return idx_receiveVelocities_CollectVectorMsg();
    }


    
    static int receiveVelocities(CollectVectorMsg* impl_msg) { return idx_receiveVelocities_CollectVectorMsg(); }
    
    static void _call_receiveVelocities_CollectVectorMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_receiveVelocities_CollectVectorMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void receiveForces(CollectVectorMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_receiveForces_CollectVectorMsg();
    // Entry point index lookup
    
    inline static int idx_receiveForces_CollectVectorMsg() {
      static int epidx = reg_receiveForces_CollectVectorMsg();
      return epidx;
    }

    
    inline static int idx_receiveForces(void (CollectionMaster::*)(CollectVectorMsg* impl_msg) ) {
      return idx_receiveForces_CollectVectorMsg();
    }


    
    static int receiveForces(CollectVectorMsg* impl_msg) { return idx_receiveForces_CollectVectorMsg(); }
    
    static void _call_receiveForces_CollectVectorMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_receiveForces_CollectVectorMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void receiveDataStream(DataStreamMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_receiveDataStream_DataStreamMsg();
    // Entry point index lookup
    
    inline static int idx_receiveDataStream_DataStreamMsg() {
      static int epidx = reg_receiveDataStream_DataStreamMsg();
      return epidx;
    }

    
    inline static int idx_receiveDataStream(void (CollectionMaster::*)(DataStreamMsg* impl_msg) ) {
      return idx_receiveDataStream_DataStreamMsg();
    }


    
    static int receiveDataStream(DataStreamMsg* impl_msg) { return idx_receiveDataStream_DataStreamMsg(); }
    
    static void _call_receiveDataStream_DataStreamMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_receiveDataStream_DataStreamMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void receiveOutputPosReady(int seq);
     */
    // Entry point registration at startup
    
    static int reg_receiveOutputPosReady_marshall6();
    // Entry point index lookup
    
    inline static int idx_receiveOutputPosReady_marshall6() {
      static int epidx = reg_receiveOutputPosReady_marshall6();
      return epidx;
    }

    
    inline static int idx_receiveOutputPosReady(void (CollectionMaster::*)(int seq) ) {
      return idx_receiveOutputPosReady_marshall6();
    }


    
    static int receiveOutputPosReady(int seq) { return idx_receiveOutputPosReady_marshall6(); }
    
    static void _call_receiveOutputPosReady_marshall6(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_receiveOutputPosReady_marshall6(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_receiveOutputPosReady_marshall6(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_receiveOutputPosReady_marshall6(PUP::er &p,void *msg);
    /* DECLS: void receiveOutputVelReady(int seq);
     */
    // Entry point registration at startup
    
    static int reg_receiveOutputVelReady_marshall7();
    // Entry point index lookup
    
    inline static int idx_receiveOutputVelReady_marshall7() {
      static int epidx = reg_receiveOutputVelReady_marshall7();
      return epidx;
    }

    
    inline static int idx_receiveOutputVelReady(void (CollectionMaster::*)(int seq) ) {
      return idx_receiveOutputVelReady_marshall7();
    }


    
    static int receiveOutputVelReady(int seq) { return idx_receiveOutputVelReady_marshall7(); }
    
    static void _call_receiveOutputVelReady_marshall7(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_receiveOutputVelReady_marshall7(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_receiveOutputVelReady_marshall7(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_receiveOutputVelReady_marshall7(PUP::er &p,void *msg);
    /* DECLS: void receiveOutputForceReady(int seq);
     */
    // Entry point registration at startup
    
    static int reg_receiveOutputForceReady_marshall8();
    // Entry point index lookup
    
    inline static int idx_receiveOutputForceReady_marshall8() {
      static int epidx = reg_receiveOutputForceReady_marshall8();
      return epidx;
    }

    
    inline static int idx_receiveOutputForceReady(void (CollectionMaster::*)(int seq) ) {
      return idx_receiveOutputForceReady_marshall8();
    }


    
    static int receiveOutputForceReady(int seq) { return idx_receiveOutputForceReady_marshall8(); }
    
    static void _call_receiveOutputForceReady_marshall8(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_receiveOutputForceReady_marshall8(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_receiveOutputForceReady_marshall8(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_receiveOutputForceReady_marshall8(PUP::er &p,void *msg);
    /* DECLS: void startNextRoundOutputPos(double totalT);
     */
    // Entry point registration at startup
    
    static int reg_startNextRoundOutputPos_marshall9();
    // Entry point index lookup
    
    inline static int idx_startNextRoundOutputPos_marshall9() {
      static int epidx = reg_startNextRoundOutputPos_marshall9();
      return epidx;
    }

    
    inline static int idx_startNextRoundOutputPos(void (CollectionMaster::*)(double totalT) ) {
      return idx_startNextRoundOutputPos_marshall9();
    }


    
    static int startNextRoundOutputPos(double totalT) { return idx_startNextRoundOutputPos_marshall9(); }
    
    static void _call_startNextRoundOutputPos_marshall9(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_startNextRoundOutputPos_marshall9(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_startNextRoundOutputPos_marshall9(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_startNextRoundOutputPos_marshall9(PUP::er &p,void *msg);
    /* DECLS: void startNextRoundOutputVel(double totalT);
     */
    // Entry point registration at startup
    
    static int reg_startNextRoundOutputVel_marshall10();
    // Entry point index lookup
    
    inline static int idx_startNextRoundOutputVel_marshall10() {
      static int epidx = reg_startNextRoundOutputVel_marshall10();
      return epidx;
    }

    
    inline static int idx_startNextRoundOutputVel(void (CollectionMaster::*)(double totalT) ) {
      return idx_startNextRoundOutputVel_marshall10();
    }


    
    static int startNextRoundOutputVel(double totalT) { return idx_startNextRoundOutputVel_marshall10(); }
    
    static void _call_startNextRoundOutputVel_marshall10(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_startNextRoundOutputVel_marshall10(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_startNextRoundOutputVel_marshall10(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_startNextRoundOutputVel_marshall10(PUP::er &p,void *msg);
    /* DECLS: void startNextRoundOutputForce(double totalT);
     */
    // Entry point registration at startup
    
    static int reg_startNextRoundOutputForce_marshall11();
    // Entry point index lookup
    
    inline static int idx_startNextRoundOutputForce_marshall11() {
      static int epidx = reg_startNextRoundOutputForce_marshall11();
      return epidx;
    }

    
    inline static int idx_startNextRoundOutputForce(void (CollectionMaster::*)(double totalT) ) {
      return idx_startNextRoundOutputForce_marshall11();
    }


    
    static int startNextRoundOutputForce(double totalT) { return idx_startNextRoundOutputForce_marshall11(); }
    
    static void _call_startNextRoundOutputForce_marshall11(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_startNextRoundOutputForce_marshall11(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_startNextRoundOutputForce_marshall11(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_startNextRoundOutputForce_marshall11(PUP::er &p,void *msg);
    /* DECLS: void wrapCoorFinished();
     */
    // Entry point registration at startup
    
    static int reg_wrapCoorFinished_void();
    // Entry point index lookup
    
    inline static int idx_wrapCoorFinished_void() {
      static int epidx = reg_wrapCoorFinished_void();
      return epidx;
    }

    
    inline static int idx_wrapCoorFinished(void (CollectionMaster::*)() ) {
      return idx_wrapCoorFinished_void();
    }


    
    static int wrapCoorFinished() { return idx_wrapCoorFinished_void(); }
    
    static void _call_wrapCoorFinished_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_wrapCoorFinished_void(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxy_CollectionMaster:public CProxy_Chare{
  public:
    typedef CollectionMaster local_t;
    typedef CkIndex_CollectionMaster index_t;
    typedef CProxy_CollectionMaster proxy_t;
    typedef CProxy_CollectionMaster element_t;

    CProxy_CollectionMaster(void) {};
    CProxy_CollectionMaster(CkChareID __cid) : CProxy_Chare(__cid){  }
    CProxy_CollectionMaster(const Chare *c) : CProxy_Chare(c){  }

    int ckIsDelegated(void) const
    { return CProxy_Chare::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_Chare::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_Chare::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_Chare::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxy_Chare::ckCheck(); }
    const CkChareID &ckGetChareID(void) const
    { return CProxy_Chare::ckGetChareID(); }
    operator const CkChareID &(void) const
    { return ckGetChareID(); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_Chare::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_Chare::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_Chare::pup(p);
    }

    void ckSetChareID(const CkChareID &c)
    {      CProxy_Chare::ckSetChareID(c); }
    CollectionMaster *ckLocal(void) const
    { return (CollectionMaster *)CkLocalChare(&ckGetChareID()); }
/* DECLS: CollectionMaster();
 */
    static CkChareID ckNew(int onPE=CK_PE_ANY, const CkEntryOptions *impl_e_opts=NULL);
    static void ckNew(CkChareID* pcid, int onPE=CK_PE_ANY, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void receivePositions(CollectVectorMsg* impl_msg);
 */
    
    void receivePositions(CollectVectorMsg* impl_msg);

/* DECLS: void receiveVelocities(CollectVectorMsg* impl_msg);
 */
    
    void receiveVelocities(CollectVectorMsg* impl_msg);

/* DECLS: void receiveForces(CollectVectorMsg* impl_msg);
 */
    
    void receiveForces(CollectVectorMsg* impl_msg);

/* DECLS: void receiveDataStream(DataStreamMsg* impl_msg);
 */
    
    void receiveDataStream(DataStreamMsg* impl_msg);

/* DECLS: void receiveOutputPosReady(int seq);
 */
    
    void receiveOutputPosReady(int seq, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void receiveOutputVelReady(int seq);
 */
    
    void receiveOutputVelReady(int seq, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void receiveOutputForceReady(int seq);
 */
    
    void receiveOutputForceReady(int seq, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void startNextRoundOutputPos(double totalT);
 */
    
    void startNextRoundOutputPos(double totalT, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void startNextRoundOutputVel(double totalT);
 */
    
    void startNextRoundOutputVel(double totalT, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void startNextRoundOutputForce(double totalT);
 */
    
    void startNextRoundOutputForce(double totalT, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void wrapCoorFinished();
 */
    
    void wrapCoorFinished(const CkEntryOptions *impl_e_opts=NULL);

};
#define CollectionMaster_SDAG_CODE 
typedef CBaseT1<Chare, CProxy_CollectionMaster>CBase_CollectionMaster;




/* ---------------- method closures -------------- */
class Closure_CollectionMaster {
  public:






    struct receiveOutputPosReady_6_closure;


    struct receiveOutputVelReady_7_closure;


    struct receiveOutputForceReady_8_closure;


    struct startNextRoundOutputPos_9_closure;


    struct startNextRoundOutputVel_10_closure;


    struct startNextRoundOutputForce_11_closure;


    struct wrapCoorFinished_12_closure;

};

extern void _registerCollectionMaster(void);
#endif
