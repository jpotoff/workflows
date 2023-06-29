#ifndef _DECL_LdbCoordinator_H_
#define _DECL_LdbCoordinator_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
#include "NamdCentLB.decl.h"

#include "NamdHybridLB.decl.h"

#include "NamdDummyLB.decl.h"

#ifndef GROUPDEPNUM_DECLARED
# define GROUPDEPNUM_DECLARED
struct GroupDepNum
{
  int groupDepNum;
  explicit GroupDepNum(int g = 0) : groupDepNum{g} { }
  operator int() const { return groupDepNum; }
};
#endif
/* DECLS: message LdbMigrateMsg;
 */
class LdbMigrateMsg;
class CMessage_LdbMigrateMsg:public CkMessage{
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
    CMessage_LdbMigrateMsg();
    static void *pack(LdbMigrateMsg *p);
    static LdbMigrateMsg* unpack(void* p);
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
/* DECLS: message CollectLoadsMsg;
 */
class CollectLoadsMsg;
class CMessage_CollectLoadsMsg:public CkMessage{
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
    CMessage_CollectLoadsMsg();
    static void *pack(CollectLoadsMsg *p);
    static CollectLoadsMsg* unpack(void* p);
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


/* DECLS: group LdbCoordinator: IrrGroup{
LdbCoordinator();
void barrier();
void nodeDone(CkReductionMsg* impl_msg);
void resume();
void resumeReady(CkQdMsg* impl_msg);
void resume2();
void RecvMigrate(LdbMigrateMsg* impl_msg);
void ExpectMigrate(LdbMigrateMsg* impl_msg);
void updateComputesReady();
void collectLoads(CollectLoadsMsg* impl_msg);
};
 */
 class LdbCoordinator;
 class CkIndex_LdbCoordinator;
 class CProxy_LdbCoordinator;
 class CProxyElement_LdbCoordinator;
 class CProxySection_LdbCoordinator;
/* --------------- index object ------------------ */
class CkIndex_LdbCoordinator:public CkIndex_IrrGroup{
  public:
    typedef LdbCoordinator local_t;
    typedef CkIndex_LdbCoordinator index_t;
    typedef CProxy_LdbCoordinator proxy_t;
    typedef CProxyElement_LdbCoordinator element_t;
    typedef CProxySection_LdbCoordinator section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: LdbCoordinator();
     */
    // Entry point registration at startup
    
    static int reg_LdbCoordinator_void();
    // Entry point index lookup
    
    inline static int idx_LdbCoordinator_void() {
      static int epidx = reg_LdbCoordinator_void();
      return epidx;
    }

    
    static int ckNew() { return idx_LdbCoordinator_void(); }
    
    static void _call_LdbCoordinator_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_LdbCoordinator_void(void* impl_msg, void* impl_obj);
    /* DECLS: void barrier();
     */
    // Entry point registration at startup
    
    static int reg_barrier_void();
    // Entry point index lookup
    
    inline static int idx_barrier_void() {
      static int epidx = reg_barrier_void();
      return epidx;
    }

    
    inline static int idx_barrier(void (LdbCoordinator::*)() ) {
      return idx_barrier_void();
    }


    
    static int barrier() { return idx_barrier_void(); }
    
    static void _call_barrier_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_barrier_void(void* impl_msg, void* impl_obj);
    /* DECLS: void nodeDone(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_nodeDone_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_nodeDone_CkReductionMsg() {
      static int epidx = reg_nodeDone_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_nodeDone(void (LdbCoordinator::*)(CkReductionMsg* impl_msg) ) {
      return idx_nodeDone_CkReductionMsg();
    }


    
    static int nodeDone(CkReductionMsg* impl_msg) { return idx_nodeDone_CkReductionMsg(); }
    
    static void _call_nodeDone_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_nodeDone_CkReductionMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void resume();
     */
    // Entry point registration at startup
    
    static int reg_resume_void();
    // Entry point index lookup
    
    inline static int idx_resume_void() {
      static int epidx = reg_resume_void();
      return epidx;
    }

    
    inline static int idx_resume(void (LdbCoordinator::*)() ) {
      return idx_resume_void();
    }


    
    static int resume() { return idx_resume_void(); }
    
    static void _call_resume_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_resume_void(void* impl_msg, void* impl_obj);
    /* DECLS: void resumeReady(CkQdMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_resumeReady_CkQdMsg();
    // Entry point index lookup
    
    inline static int idx_resumeReady_CkQdMsg() {
      static int epidx = reg_resumeReady_CkQdMsg();
      return epidx;
    }

    
    inline static int idx_resumeReady(void (LdbCoordinator::*)(CkQdMsg* impl_msg) ) {
      return idx_resumeReady_CkQdMsg();
    }


    
    static int resumeReady(CkQdMsg* impl_msg) { return idx_resumeReady_CkQdMsg(); }
    
    static void _call_resumeReady_CkQdMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_resumeReady_CkQdMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void resume2();
     */
    // Entry point registration at startup
    
    static int reg_resume2_void();
    // Entry point index lookup
    
    inline static int idx_resume2_void() {
      static int epidx = reg_resume2_void();
      return epidx;
    }

    
    inline static int idx_resume2(void (LdbCoordinator::*)() ) {
      return idx_resume2_void();
    }


    
    static int resume2() { return idx_resume2_void(); }
    
    static void _call_resume2_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_resume2_void(void* impl_msg, void* impl_obj);
    /* DECLS: void RecvMigrate(LdbMigrateMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_RecvMigrate_LdbMigrateMsg();
    // Entry point index lookup
    
    inline static int idx_RecvMigrate_LdbMigrateMsg() {
      static int epidx = reg_RecvMigrate_LdbMigrateMsg();
      return epidx;
    }

    
    inline static int idx_RecvMigrate(void (LdbCoordinator::*)(LdbMigrateMsg* impl_msg) ) {
      return idx_RecvMigrate_LdbMigrateMsg();
    }


    
    static int RecvMigrate(LdbMigrateMsg* impl_msg) { return idx_RecvMigrate_LdbMigrateMsg(); }
    
    static void _call_RecvMigrate_LdbMigrateMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_RecvMigrate_LdbMigrateMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void ExpectMigrate(LdbMigrateMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_ExpectMigrate_LdbMigrateMsg();
    // Entry point index lookup
    
    inline static int idx_ExpectMigrate_LdbMigrateMsg() {
      static int epidx = reg_ExpectMigrate_LdbMigrateMsg();
      return epidx;
    }

    
    inline static int idx_ExpectMigrate(void (LdbCoordinator::*)(LdbMigrateMsg* impl_msg) ) {
      return idx_ExpectMigrate_LdbMigrateMsg();
    }


    
    static int ExpectMigrate(LdbMigrateMsg* impl_msg) { return idx_ExpectMigrate_LdbMigrateMsg(); }
    
    static void _call_ExpectMigrate_LdbMigrateMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ExpectMigrate_LdbMigrateMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void updateComputesReady();
     */
    // Entry point registration at startup
    
    static int reg_updateComputesReady_void();
    // Entry point index lookup
    
    inline static int idx_updateComputesReady_void() {
      static int epidx = reg_updateComputesReady_void();
      return epidx;
    }

    
    inline static int idx_updateComputesReady(void (LdbCoordinator::*)() ) {
      return idx_updateComputesReady_void();
    }


    
    static int updateComputesReady() { return idx_updateComputesReady_void(); }
    
    static void _call_updateComputesReady_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_updateComputesReady_void(void* impl_msg, void* impl_obj);
    /* DECLS: void collectLoads(CollectLoadsMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_collectLoads_CollectLoadsMsg();
    // Entry point index lookup
    
    inline static int idx_collectLoads_CollectLoadsMsg() {
      static int epidx = reg_collectLoads_CollectLoadsMsg();
      return epidx;
    }

    
    inline static int idx_collectLoads(void (LdbCoordinator::*)(CollectLoadsMsg* impl_msg) ) {
      return idx_collectLoads_CollectLoadsMsg();
    }


    
    static int collectLoads(CollectLoadsMsg* impl_msg) { return idx_collectLoads_CollectLoadsMsg(); }
    
    static void _call_collectLoads_CollectLoadsMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_collectLoads_CollectLoadsMsg(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_LdbCoordinator: public CProxyElement_IrrGroup{
  public:
    typedef LdbCoordinator local_t;
    typedef CkIndex_LdbCoordinator index_t;
    typedef CProxy_LdbCoordinator proxy_t;
    typedef CProxyElement_LdbCoordinator element_t;
    typedef CProxySection_LdbCoordinator section_t;


    /* TRAM aggregators */

    CProxyElement_LdbCoordinator(void) {
    }
    CProxyElement_LdbCoordinator(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_LdbCoordinator(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_LdbCoordinator(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    LdbCoordinator* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static LdbCoordinator* ckLocalBranch(CkGroupID gID) {
      return (LdbCoordinator*)CkLocalBranch(gID);
    }
/* DECLS: LdbCoordinator();
 */
    

/* DECLS: void barrier();
 */
    
    void barrier(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void nodeDone(CkReductionMsg* impl_msg);
 */
    
    void nodeDone(CkReductionMsg* impl_msg);

/* DECLS: void resume();
 */
    
    void resume(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void resumeReady(CkQdMsg* impl_msg);
 */
    
    void resumeReady(CkQdMsg* impl_msg);

/* DECLS: void resume2();
 */
    
    void resume2(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void RecvMigrate(LdbMigrateMsg* impl_msg);
 */
    
    void RecvMigrate(LdbMigrateMsg* impl_msg);

/* DECLS: void ExpectMigrate(LdbMigrateMsg* impl_msg);
 */
    
    void ExpectMigrate(LdbMigrateMsg* impl_msg);

/* DECLS: void updateComputesReady();
 */
    
    void updateComputesReady(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void collectLoads(CollectLoadsMsg* impl_msg);
 */
    
    void collectLoads(CollectLoadsMsg* impl_msg);

};
/* ---------------- collective proxy -------------- */
class CProxy_LdbCoordinator: public CProxy_IrrGroup{
  public:
    typedef LdbCoordinator local_t;
    typedef CkIndex_LdbCoordinator index_t;
    typedef CProxy_LdbCoordinator proxy_t;
    typedef CProxyElement_LdbCoordinator element_t;
    typedef CProxySection_LdbCoordinator section_t;

    CProxy_LdbCoordinator(void) {
    }
    CProxy_LdbCoordinator(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_LdbCoordinator(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_LdbCoordinator(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_LdbCoordinator operator[](int onPE) const
      {return CProxyElement_LdbCoordinator(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    LdbCoordinator* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static LdbCoordinator* ckLocalBranch(CkGroupID gID) {
      return (LdbCoordinator*)CkLocalBranch(gID);
    }
/* DECLS: LdbCoordinator();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void barrier();
 */
    
    void barrier(const CkEntryOptions *impl_e_opts=NULL);
    
    void barrier(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void barrier(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void nodeDone(CkReductionMsg* impl_msg);
 */
    
    void nodeDone(CkReductionMsg* impl_msg);
    
    void nodeDone(CkReductionMsg* impl_msg, int npes, int *pes);
    
    void nodeDone(CkReductionMsg* impl_msg, CmiGroup &grp);

/* DECLS: void resume();
 */
    
    void resume(const CkEntryOptions *impl_e_opts=NULL);
    
    void resume(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void resume(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void resumeReady(CkQdMsg* impl_msg);
 */
    
    void resumeReady(CkQdMsg* impl_msg);
    
    void resumeReady(CkQdMsg* impl_msg, int npes, int *pes);
    
    void resumeReady(CkQdMsg* impl_msg, CmiGroup &grp);

/* DECLS: void resume2();
 */
    
    void resume2(const CkEntryOptions *impl_e_opts=NULL);
    
    void resume2(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void resume2(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void RecvMigrate(LdbMigrateMsg* impl_msg);
 */
    
    void RecvMigrate(LdbMigrateMsg* impl_msg);
    
    void RecvMigrate(LdbMigrateMsg* impl_msg, int npes, int *pes);
    
    void RecvMigrate(LdbMigrateMsg* impl_msg, CmiGroup &grp);

/* DECLS: void ExpectMigrate(LdbMigrateMsg* impl_msg);
 */
    
    void ExpectMigrate(LdbMigrateMsg* impl_msg);
    
    void ExpectMigrate(LdbMigrateMsg* impl_msg, int npes, int *pes);
    
    void ExpectMigrate(LdbMigrateMsg* impl_msg, CmiGroup &grp);

/* DECLS: void updateComputesReady();
 */
    
    void updateComputesReady(const CkEntryOptions *impl_e_opts=NULL);
    
    void updateComputesReady(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void updateComputesReady(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void collectLoads(CollectLoadsMsg* impl_msg);
 */
    
    void collectLoads(CollectLoadsMsg* impl_msg);
    
    void collectLoads(CollectLoadsMsg* impl_msg, int npes, int *pes);
    
    void collectLoads(CollectLoadsMsg* impl_msg, CmiGroup &grp);

};
/* ---------------- section proxy -------------- */
class CProxySection_LdbCoordinator: public CProxySection_IrrGroup{
  public:
    typedef LdbCoordinator local_t;
    typedef CkIndex_LdbCoordinator index_t;
    typedef CProxy_LdbCoordinator proxy_t;
    typedef CProxyElement_LdbCoordinator element_t;
    typedef CProxySection_LdbCoordinator section_t;

    CProxySection_LdbCoordinator(void) {
    }
    CProxySection_LdbCoordinator(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_LdbCoordinator(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_LdbCoordinator(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_LdbCoordinator(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_LdbCoordinator(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    LdbCoordinator* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static LdbCoordinator* ckLocalBranch(CkGroupID gID) {
      return (LdbCoordinator*)CkLocalBranch(gID);
    }
/* DECLS: LdbCoordinator();
 */
    

/* DECLS: void barrier();
 */
    
    void barrier(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void nodeDone(CkReductionMsg* impl_msg);
 */
    
    void nodeDone(CkReductionMsg* impl_msg);

/* DECLS: void resume();
 */
    
    void resume(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void resumeReady(CkQdMsg* impl_msg);
 */
    
    void resumeReady(CkQdMsg* impl_msg);

/* DECLS: void resume2();
 */
    
    void resume2(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void RecvMigrate(LdbMigrateMsg* impl_msg);
 */
    
    void RecvMigrate(LdbMigrateMsg* impl_msg);

/* DECLS: void ExpectMigrate(LdbMigrateMsg* impl_msg);
 */
    
    void ExpectMigrate(LdbMigrateMsg* impl_msg);

/* DECLS: void updateComputesReady();
 */
    
    void updateComputesReady(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void collectLoads(CollectLoadsMsg* impl_msg);
 */
    
    void collectLoads(CollectLoadsMsg* impl_msg);

};
#define LdbCoordinator_SDAG_CODE 
typedef CBaseT1<Group, CProxy_LdbCoordinator>CBase_LdbCoordinator;







/* ---------------- method closures -------------- */
class Closure_LdbCoordinator {
  public:


    struct barrier_2_closure;



    struct resume_4_closure;



    struct resume2_6_closure;




    struct updateComputesReady_9_closure;


};

extern void _registerLdbCoordinator(void);
#endif
