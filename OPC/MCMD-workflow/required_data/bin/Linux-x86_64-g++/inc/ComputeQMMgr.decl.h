#ifndef _DECL_ComputeQMMgr_H_
#define _DECL_ComputeQMMgr_H_
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
/* DECLS: message QMCoordMsg{
ComputeQMAtom coord[];
int pcIndxs[];
}
;
 */
class QMCoordMsg;
class CMessage_QMCoordMsg:public CkMessage{
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
    CMessage_QMCoordMsg();
    static void *pack(QMCoordMsg *p);
    static QMCoordMsg* unpack(void* p);
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
/* DECLS: message QMPntChrgMsg{
ComputeQMPntChrg coord[];
}
;
 */
class QMPntChrgMsg;
class CMessage_QMPntChrgMsg:public CkMessage{
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
    CMessage_QMPntChrgMsg();
    static void *pack(QMPntChrgMsg *p);
    static QMPntChrgMsg* unpack(void* p);
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

#ifndef GROUPDEPNUM_DECLARED
# define GROUPDEPNUM_DECLARED
struct GroupDepNum
{
  int groupDepNum;
  explicit GroupDepNum(int g = 0) : groupDepNum{g} { }
  operator int() const { return groupDepNum; }
};
#endif
/* DECLS: message QMForceMsg{
QMForce force[];
LSSSubsDat lssDat[];
}
;
 */
class QMForceMsg;
class CMessage_QMForceMsg:public CkMessage{
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
    CMessage_QMForceMsg();
    static void *pack(QMForceMsg *p);
    static QMForceMsg* unpack(void* p);
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
/* DECLS: message QMGrpResMsg{
QMForce force[];
}
;
 */
class QMGrpResMsg;
class CMessage_QMGrpResMsg:public CkMessage{
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
    CMessage_QMGrpResMsg();
    static void *pack(QMGrpResMsg *p);
    static QMGrpResMsg* unpack(void* p);
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

#ifndef GROUPDEPNUM_DECLARED
# define GROUPDEPNUM_DECLARED
struct GroupDepNum
{
  int groupDepNum;
  explicit GroupDepNum(int g = 0) : groupDepNum{g} { }
  operator int() const { return groupDepNum; }
};
#endif
/* DECLS: message QMGrpCalcMsg{
QMAtomData data[];
char configLines[];
}
;
 */
class QMGrpCalcMsg;
class CMessage_QMGrpCalcMsg:public CkMessage{
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
    CMessage_QMGrpCalcMsg();
    static void *pack(QMGrpCalcMsg *p);
    static QMGrpCalcMsg* unpack(void* p);
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

/* DECLS: group ComputeQMMgr: IrrGroup{
ComputeQMMgr();
void recvPartQM(QMCoordMsg* impl_msg);
void recvFullQM(QMCoordMsg* impl_msg);
void recvPntChrg(QMPntChrgMsg* impl_msg);
void calcMOPAC(QMGrpCalcMsg* impl_msg);
void calcORCA(QMGrpCalcMsg* impl_msg);
void calcUSR(QMGrpCalcMsg* impl_msg);
void recvQMRes(QMGrpResMsg* impl_msg);
void storeQMRes(QMGrpResMsg* impl_msg);
void procQMRes();
void recvForce(QMForceMsg* impl_msg);
void recvQMResLoop();
};
 */
 class ComputeQMMgr;
 class CkIndex_ComputeQMMgr;
 class CProxy_ComputeQMMgr;
 class CProxyElement_ComputeQMMgr;
 class CProxySection_ComputeQMMgr;
/* --------------- index object ------------------ */
class CkIndex_ComputeQMMgr:public CkIndex_IrrGroup{
  public:
    typedef ComputeQMMgr local_t;
    typedef CkIndex_ComputeQMMgr index_t;
    typedef CProxy_ComputeQMMgr proxy_t;
    typedef CProxyElement_ComputeQMMgr element_t;
    typedef CProxySection_ComputeQMMgr section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: ComputeQMMgr();
     */
    // Entry point registration at startup
    
    static int reg_ComputeQMMgr_void();
    // Entry point index lookup
    
    inline static int idx_ComputeQMMgr_void() {
      static int epidx = reg_ComputeQMMgr_void();
      return epidx;
    }

    
    static int ckNew() { return idx_ComputeQMMgr_void(); }
    
    static void _call_ComputeQMMgr_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ComputeQMMgr_void(void* impl_msg, void* impl_obj);
    /* DECLS: void recvPartQM(QMCoordMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvPartQM_QMCoordMsg();
    // Entry point index lookup
    
    inline static int idx_recvPartQM_QMCoordMsg() {
      static int epidx = reg_recvPartQM_QMCoordMsg();
      return epidx;
    }

    
    inline static int idx_recvPartQM(void (ComputeQMMgr::*)(QMCoordMsg* impl_msg) ) {
      return idx_recvPartQM_QMCoordMsg();
    }


    
    static int recvPartQM(QMCoordMsg* impl_msg) { return idx_recvPartQM_QMCoordMsg(); }
    
    static void _call_recvPartQM_QMCoordMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvPartQM_QMCoordMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvFullQM(QMCoordMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvFullQM_QMCoordMsg();
    // Entry point index lookup
    
    inline static int idx_recvFullQM_QMCoordMsg() {
      static int epidx = reg_recvFullQM_QMCoordMsg();
      return epidx;
    }

    
    inline static int idx_recvFullQM(void (ComputeQMMgr::*)(QMCoordMsg* impl_msg) ) {
      return idx_recvFullQM_QMCoordMsg();
    }


    
    static int recvFullQM(QMCoordMsg* impl_msg) { return idx_recvFullQM_QMCoordMsg(); }
    
    static void _call_recvFullQM_QMCoordMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvFullQM_QMCoordMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvPntChrg(QMPntChrgMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvPntChrg_QMPntChrgMsg();
    // Entry point index lookup
    
    inline static int idx_recvPntChrg_QMPntChrgMsg() {
      static int epidx = reg_recvPntChrg_QMPntChrgMsg();
      return epidx;
    }

    
    inline static int idx_recvPntChrg(void (ComputeQMMgr::*)(QMPntChrgMsg* impl_msg) ) {
      return idx_recvPntChrg_QMPntChrgMsg();
    }


    
    static int recvPntChrg(QMPntChrgMsg* impl_msg) { return idx_recvPntChrg_QMPntChrgMsg(); }
    
    static void _call_recvPntChrg_QMPntChrgMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvPntChrg_QMPntChrgMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void calcMOPAC(QMGrpCalcMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_calcMOPAC_QMGrpCalcMsg();
    // Entry point index lookup
    
    inline static int idx_calcMOPAC_QMGrpCalcMsg() {
      static int epidx = reg_calcMOPAC_QMGrpCalcMsg();
      return epidx;
    }

    
    inline static int idx_calcMOPAC(void (ComputeQMMgr::*)(QMGrpCalcMsg* impl_msg) ) {
      return idx_calcMOPAC_QMGrpCalcMsg();
    }


    
    static int calcMOPAC(QMGrpCalcMsg* impl_msg) { return idx_calcMOPAC_QMGrpCalcMsg(); }
    
    static void _call_calcMOPAC_QMGrpCalcMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_calcMOPAC_QMGrpCalcMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void calcORCA(QMGrpCalcMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_calcORCA_QMGrpCalcMsg();
    // Entry point index lookup
    
    inline static int idx_calcORCA_QMGrpCalcMsg() {
      static int epidx = reg_calcORCA_QMGrpCalcMsg();
      return epidx;
    }

    
    inline static int idx_calcORCA(void (ComputeQMMgr::*)(QMGrpCalcMsg* impl_msg) ) {
      return idx_calcORCA_QMGrpCalcMsg();
    }


    
    static int calcORCA(QMGrpCalcMsg* impl_msg) { return idx_calcORCA_QMGrpCalcMsg(); }
    
    static void _call_calcORCA_QMGrpCalcMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_calcORCA_QMGrpCalcMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void calcUSR(QMGrpCalcMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_calcUSR_QMGrpCalcMsg();
    // Entry point index lookup
    
    inline static int idx_calcUSR_QMGrpCalcMsg() {
      static int epidx = reg_calcUSR_QMGrpCalcMsg();
      return epidx;
    }

    
    inline static int idx_calcUSR(void (ComputeQMMgr::*)(QMGrpCalcMsg* impl_msg) ) {
      return idx_calcUSR_QMGrpCalcMsg();
    }


    
    static int calcUSR(QMGrpCalcMsg* impl_msg) { return idx_calcUSR_QMGrpCalcMsg(); }
    
    static void _call_calcUSR_QMGrpCalcMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_calcUSR_QMGrpCalcMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvQMRes(QMGrpResMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvQMRes_QMGrpResMsg();
    // Entry point index lookup
    
    inline static int idx_recvQMRes_QMGrpResMsg() {
      static int epidx = reg_recvQMRes_QMGrpResMsg();
      return epidx;
    }

    
    inline static int idx_recvQMRes(void (ComputeQMMgr::*)(QMGrpResMsg* impl_msg) ) {
      return idx_recvQMRes_QMGrpResMsg();
    }


    
    static int recvQMRes(QMGrpResMsg* impl_msg) { return idx_recvQMRes_QMGrpResMsg(); }
    
    static void _call_recvQMRes_QMGrpResMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvQMRes_QMGrpResMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void storeQMRes(QMGrpResMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_storeQMRes_QMGrpResMsg();
    // Entry point index lookup
    
    inline static int idx_storeQMRes_QMGrpResMsg() {
      static int epidx = reg_storeQMRes_QMGrpResMsg();
      return epidx;
    }

    
    inline static int idx_storeQMRes(void (ComputeQMMgr::*)(QMGrpResMsg* impl_msg) ) {
      return idx_storeQMRes_QMGrpResMsg();
    }


    
    static int storeQMRes(QMGrpResMsg* impl_msg) { return idx_storeQMRes_QMGrpResMsg(); }
    
    static void _call_storeQMRes_QMGrpResMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_storeQMRes_QMGrpResMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void procQMRes();
     */
    // Entry point registration at startup
    
    static int reg_procQMRes_void();
    // Entry point index lookup
    
    inline static int idx_procQMRes_void() {
      static int epidx = reg_procQMRes_void();
      return epidx;
    }

    
    inline static int idx_procQMRes(void (ComputeQMMgr::*)() ) {
      return idx_procQMRes_void();
    }


    
    static int procQMRes() { return idx_procQMRes_void(); }
    
    static void _call_procQMRes_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_procQMRes_void(void* impl_msg, void* impl_obj);
    /* DECLS: void recvForce(QMForceMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvForce_QMForceMsg();
    // Entry point index lookup
    
    inline static int idx_recvForce_QMForceMsg() {
      static int epidx = reg_recvForce_QMForceMsg();
      return epidx;
    }

    
    inline static int idx_recvForce(void (ComputeQMMgr::*)(QMForceMsg* impl_msg) ) {
      return idx_recvForce_QMForceMsg();
    }


    
    static int recvForce(QMForceMsg* impl_msg) { return idx_recvForce_QMForceMsg(); }
    
    static void _call_recvForce_QMForceMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvForce_QMForceMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvQMResLoop();
     */
    // Entry point registration at startup
    
    static int reg_recvQMResLoop_void();
    // Entry point index lookup
    
    inline static int idx_recvQMResLoop_void() {
      static int epidx = reg_recvQMResLoop_void();
      return epidx;
    }

    
    inline static int idx_recvQMResLoop(void (ComputeQMMgr::*)() ) {
      return idx_recvQMResLoop_void();
    }


    
    static int recvQMResLoop() { return idx_recvQMResLoop_void(); }
    
    static void _call_recvQMResLoop_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvQMResLoop_void(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_ComputeQMMgr: public CProxyElement_IrrGroup{
  public:
    typedef ComputeQMMgr local_t;
    typedef CkIndex_ComputeQMMgr index_t;
    typedef CProxy_ComputeQMMgr proxy_t;
    typedef CProxyElement_ComputeQMMgr element_t;
    typedef CProxySection_ComputeQMMgr section_t;


    /* TRAM aggregators */

    CProxyElement_ComputeQMMgr(void) {
    }
    CProxyElement_ComputeQMMgr(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_ComputeQMMgr(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_ComputeQMMgr(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    ComputeQMMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ComputeQMMgr* ckLocalBranch(CkGroupID gID) {
      return (ComputeQMMgr*)CkLocalBranch(gID);
    }
/* DECLS: ComputeQMMgr();
 */
    

/* DECLS: void recvPartQM(QMCoordMsg* impl_msg);
 */
    
    void recvPartQM(QMCoordMsg* impl_msg);

/* DECLS: void recvFullQM(QMCoordMsg* impl_msg);
 */
    
    void recvFullQM(QMCoordMsg* impl_msg);

/* DECLS: void recvPntChrg(QMPntChrgMsg* impl_msg);
 */
    
    void recvPntChrg(QMPntChrgMsg* impl_msg);

/* DECLS: void calcMOPAC(QMGrpCalcMsg* impl_msg);
 */
    
    void calcMOPAC(QMGrpCalcMsg* impl_msg);

/* DECLS: void calcORCA(QMGrpCalcMsg* impl_msg);
 */
    
    void calcORCA(QMGrpCalcMsg* impl_msg);

/* DECLS: void calcUSR(QMGrpCalcMsg* impl_msg);
 */
    
    void calcUSR(QMGrpCalcMsg* impl_msg);

/* DECLS: void recvQMRes(QMGrpResMsg* impl_msg);
 */
    
    void recvQMRes(QMGrpResMsg* impl_msg);

/* DECLS: void storeQMRes(QMGrpResMsg* impl_msg);
 */
    
    void storeQMRes(QMGrpResMsg* impl_msg);

/* DECLS: void procQMRes();
 */
    
    void procQMRes(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvForce(QMForceMsg* impl_msg);
 */
    
    void recvForce(QMForceMsg* impl_msg);

/* DECLS: void recvQMResLoop();
 */
    
    void recvQMResLoop(const CkEntryOptions *impl_e_opts=NULL);

};
/* ---------------- collective proxy -------------- */
class CProxy_ComputeQMMgr: public CProxy_IrrGroup{
  public:
    typedef ComputeQMMgr local_t;
    typedef CkIndex_ComputeQMMgr index_t;
    typedef CProxy_ComputeQMMgr proxy_t;
    typedef CProxyElement_ComputeQMMgr element_t;
    typedef CProxySection_ComputeQMMgr section_t;

    CProxy_ComputeQMMgr(void) {
    }
    CProxy_ComputeQMMgr(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_ComputeQMMgr(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_ComputeQMMgr(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_ComputeQMMgr operator[](int onPE) const
      {return CProxyElement_ComputeQMMgr(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    ComputeQMMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ComputeQMMgr* ckLocalBranch(CkGroupID gID) {
      return (ComputeQMMgr*)CkLocalBranch(gID);
    }
/* DECLS: ComputeQMMgr();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvPartQM(QMCoordMsg* impl_msg);
 */
    
    void recvPartQM(QMCoordMsg* impl_msg);
    
    void recvPartQM(QMCoordMsg* impl_msg, int npes, int *pes);
    
    void recvPartQM(QMCoordMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvFullQM(QMCoordMsg* impl_msg);
 */
    
    void recvFullQM(QMCoordMsg* impl_msg);
    
    void recvFullQM(QMCoordMsg* impl_msg, int npes, int *pes);
    
    void recvFullQM(QMCoordMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvPntChrg(QMPntChrgMsg* impl_msg);
 */
    
    void recvPntChrg(QMPntChrgMsg* impl_msg);
    
    void recvPntChrg(QMPntChrgMsg* impl_msg, int npes, int *pes);
    
    void recvPntChrg(QMPntChrgMsg* impl_msg, CmiGroup &grp);

/* DECLS: void calcMOPAC(QMGrpCalcMsg* impl_msg);
 */
    
    void calcMOPAC(QMGrpCalcMsg* impl_msg);
    
    void calcMOPAC(QMGrpCalcMsg* impl_msg, int npes, int *pes);
    
    void calcMOPAC(QMGrpCalcMsg* impl_msg, CmiGroup &grp);

/* DECLS: void calcORCA(QMGrpCalcMsg* impl_msg);
 */
    
    void calcORCA(QMGrpCalcMsg* impl_msg);
    
    void calcORCA(QMGrpCalcMsg* impl_msg, int npes, int *pes);
    
    void calcORCA(QMGrpCalcMsg* impl_msg, CmiGroup &grp);

/* DECLS: void calcUSR(QMGrpCalcMsg* impl_msg);
 */
    
    void calcUSR(QMGrpCalcMsg* impl_msg);
    
    void calcUSR(QMGrpCalcMsg* impl_msg, int npes, int *pes);
    
    void calcUSR(QMGrpCalcMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvQMRes(QMGrpResMsg* impl_msg);
 */
    
    void recvQMRes(QMGrpResMsg* impl_msg);
    
    void recvQMRes(QMGrpResMsg* impl_msg, int npes, int *pes);
    
    void recvQMRes(QMGrpResMsg* impl_msg, CmiGroup &grp);

/* DECLS: void storeQMRes(QMGrpResMsg* impl_msg);
 */
    
    void storeQMRes(QMGrpResMsg* impl_msg);
    
    void storeQMRes(QMGrpResMsg* impl_msg, int npes, int *pes);
    
    void storeQMRes(QMGrpResMsg* impl_msg, CmiGroup &grp);

/* DECLS: void procQMRes();
 */
    
    void procQMRes(const CkEntryOptions *impl_e_opts=NULL);
    
    void procQMRes(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void procQMRes(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvForce(QMForceMsg* impl_msg);
 */
    
    void recvForce(QMForceMsg* impl_msg);
    
    void recvForce(QMForceMsg* impl_msg, int npes, int *pes);
    
    void recvForce(QMForceMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvQMResLoop();
 */
    
    void recvQMResLoop(const CkEntryOptions *impl_e_opts=NULL);
    
    void recvQMResLoop(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void recvQMResLoop(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

};
/* ---------------- section proxy -------------- */
class CProxySection_ComputeQMMgr: public CProxySection_IrrGroup{
  public:
    typedef ComputeQMMgr local_t;
    typedef CkIndex_ComputeQMMgr index_t;
    typedef CProxy_ComputeQMMgr proxy_t;
    typedef CProxyElement_ComputeQMMgr element_t;
    typedef CProxySection_ComputeQMMgr section_t;

    CProxySection_ComputeQMMgr(void) {
    }
    CProxySection_ComputeQMMgr(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_ComputeQMMgr(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_ComputeQMMgr(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_ComputeQMMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_ComputeQMMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    ComputeQMMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ComputeQMMgr* ckLocalBranch(CkGroupID gID) {
      return (ComputeQMMgr*)CkLocalBranch(gID);
    }
/* DECLS: ComputeQMMgr();
 */
    

/* DECLS: void recvPartQM(QMCoordMsg* impl_msg);
 */
    
    void recvPartQM(QMCoordMsg* impl_msg);

/* DECLS: void recvFullQM(QMCoordMsg* impl_msg);
 */
    
    void recvFullQM(QMCoordMsg* impl_msg);

/* DECLS: void recvPntChrg(QMPntChrgMsg* impl_msg);
 */
    
    void recvPntChrg(QMPntChrgMsg* impl_msg);

/* DECLS: void calcMOPAC(QMGrpCalcMsg* impl_msg);
 */
    
    void calcMOPAC(QMGrpCalcMsg* impl_msg);

/* DECLS: void calcORCA(QMGrpCalcMsg* impl_msg);
 */
    
    void calcORCA(QMGrpCalcMsg* impl_msg);

/* DECLS: void calcUSR(QMGrpCalcMsg* impl_msg);
 */
    
    void calcUSR(QMGrpCalcMsg* impl_msg);

/* DECLS: void recvQMRes(QMGrpResMsg* impl_msg);
 */
    
    void recvQMRes(QMGrpResMsg* impl_msg);

/* DECLS: void storeQMRes(QMGrpResMsg* impl_msg);
 */
    
    void storeQMRes(QMGrpResMsg* impl_msg);

/* DECLS: void procQMRes();
 */
    
    void procQMRes(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvForce(QMForceMsg* impl_msg);
 */
    
    void recvForce(QMForceMsg* impl_msg);

/* DECLS: void recvQMResLoop();
 */
    
    void recvQMResLoop(const CkEntryOptions *impl_e_opts=NULL);

};
#define ComputeQMMgr_SDAG_CODE                                                 \
public:                                                                        \
  void recvQMResLoop();                                                        \
  void _sdag_fnc_recvQMResLoop();                                              \
private:                                                                       \
  void recvQMResLoop_end();                                                    \
  void _slist_0();                                                             \
  void _slist_0_end();                                                         \
  void _while_0();                                                             \
  void _while_0_end();                                                         \
  void _slist_1();                                                             \
  void _slist_1_end();                                                         \
  SDAG::Continuation* _when_0();                                               \
  void _when_0_end(QMGrpResMsg* gen0);                                         \
  void _serial_0(QMGrpResMsg* gen0);                                           \
  void _serial_1();                                                            \
public:                                                                        \
  void recvQMRes(QMGrpResMsg* fmsg_msg);                                       \
public:                                                                        \
  SDAG::dep_ptr __dep;                                                         \
  void _sdag_init();                                                           \
  void __sdag_init();                                                          \
public:                                                                        \
  void _sdag_pup(PUP::er &p);                                                  \
  void __sdag_pup(PUP::er &p) { }                                              \
  static void __sdag_register();                                               \
  static int _sdag_idx_ComputeQMMgr_serial_0();                                \
  static int _sdag_reg_ComputeQMMgr_serial_0();                                \
  static int _sdag_idx_ComputeQMMgr_serial_1();                                \
  static int _sdag_reg_ComputeQMMgr_serial_1();                                \

typedef CBaseT1<Group, CProxy_ComputeQMMgr>CBase_ComputeQMMgr;






/* ---------------- method closures -------------- */
class Closure_ComputeQMMgr {
  public:










    struct procQMRes_10_closure;



    struct recvQMResLoop_12_closure;

};

extern void _registerComputeQMMgr(void);
#endif
