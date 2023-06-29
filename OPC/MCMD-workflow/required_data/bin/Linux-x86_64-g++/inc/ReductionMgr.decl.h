#ifndef _DECL_ReductionMgr_H_
#define _DECL_ReductionMgr_H_
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
/* DECLS: message ReductionRegisterMsg;
 */
class ReductionRegisterMsg;
class CMessage_ReductionRegisterMsg:public CkMessage{
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
    CMessage_ReductionRegisterMsg();
    static void *pack(ReductionRegisterMsg *p);
    static ReductionRegisterMsg* unpack(void* p);
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
/* DECLS: message ReductionSubmitMsg{
BigReal data[];
}
;
 */
class ReductionSubmitMsg;
class CMessage_ReductionSubmitMsg:public CkMessage{
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
    CMessage_ReductionSubmitMsg();
    static void *pack(ReductionSubmitMsg *p);
    static ReductionSubmitMsg* unpack(void* p);
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

/* DECLS: group ReductionMgr: IrrGroup{
ReductionMgr();
void remoteRegister(ReductionRegisterMsg* impl_msg);
void remoteUnregister(ReductionRegisterMsg* impl_msg);
void remoteSubmit(ReductionSubmitMsg* impl_msg);
};
 */
 class ReductionMgr;
 class CkIndex_ReductionMgr;
 class CProxy_ReductionMgr;
 class CProxyElement_ReductionMgr;
 class CProxySection_ReductionMgr;
/* --------------- index object ------------------ */
class CkIndex_ReductionMgr:public CkIndex_IrrGroup{
  public:
    typedef ReductionMgr local_t;
    typedef CkIndex_ReductionMgr index_t;
    typedef CProxy_ReductionMgr proxy_t;
    typedef CProxyElement_ReductionMgr element_t;
    typedef CProxySection_ReductionMgr section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: ReductionMgr();
     */
    // Entry point registration at startup
    
    static int reg_ReductionMgr_void();
    // Entry point index lookup
    
    inline static int idx_ReductionMgr_void() {
      static int epidx = reg_ReductionMgr_void();
      return epidx;
    }

    
    static int ckNew() { return idx_ReductionMgr_void(); }
    
    static void _call_ReductionMgr_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ReductionMgr_void(void* impl_msg, void* impl_obj);
    /* DECLS: void remoteRegister(ReductionRegisterMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_remoteRegister_ReductionRegisterMsg();
    // Entry point index lookup
    
    inline static int idx_remoteRegister_ReductionRegisterMsg() {
      static int epidx = reg_remoteRegister_ReductionRegisterMsg();
      return epidx;
    }

    
    inline static int idx_remoteRegister(void (ReductionMgr::*)(ReductionRegisterMsg* impl_msg) ) {
      return idx_remoteRegister_ReductionRegisterMsg();
    }


    
    static int remoteRegister(ReductionRegisterMsg* impl_msg) { return idx_remoteRegister_ReductionRegisterMsg(); }
    
    static void _call_remoteRegister_ReductionRegisterMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_remoteRegister_ReductionRegisterMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void remoteUnregister(ReductionRegisterMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_remoteUnregister_ReductionRegisterMsg();
    // Entry point index lookup
    
    inline static int idx_remoteUnregister_ReductionRegisterMsg() {
      static int epidx = reg_remoteUnregister_ReductionRegisterMsg();
      return epidx;
    }

    
    inline static int idx_remoteUnregister(void (ReductionMgr::*)(ReductionRegisterMsg* impl_msg) ) {
      return idx_remoteUnregister_ReductionRegisterMsg();
    }


    
    static int remoteUnregister(ReductionRegisterMsg* impl_msg) { return idx_remoteUnregister_ReductionRegisterMsg(); }
    
    static void _call_remoteUnregister_ReductionRegisterMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_remoteUnregister_ReductionRegisterMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void remoteSubmit(ReductionSubmitMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_remoteSubmit_ReductionSubmitMsg();
    // Entry point index lookup
    
    inline static int idx_remoteSubmit_ReductionSubmitMsg() {
      static int epidx = reg_remoteSubmit_ReductionSubmitMsg();
      return epidx;
    }

    
    inline static int idx_remoteSubmit(void (ReductionMgr::*)(ReductionSubmitMsg* impl_msg) ) {
      return idx_remoteSubmit_ReductionSubmitMsg();
    }


    
    static int remoteSubmit(ReductionSubmitMsg* impl_msg) { return idx_remoteSubmit_ReductionSubmitMsg(); }
    
    static void _call_remoteSubmit_ReductionSubmitMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_remoteSubmit_ReductionSubmitMsg(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_ReductionMgr: public CProxyElement_IrrGroup{
  public:
    typedef ReductionMgr local_t;
    typedef CkIndex_ReductionMgr index_t;
    typedef CProxy_ReductionMgr proxy_t;
    typedef CProxyElement_ReductionMgr element_t;
    typedef CProxySection_ReductionMgr section_t;


    /* TRAM aggregators */

    CProxyElement_ReductionMgr(void) {
    }
    CProxyElement_ReductionMgr(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_ReductionMgr(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_ReductionMgr(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    ReductionMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ReductionMgr* ckLocalBranch(CkGroupID gID) {
      return (ReductionMgr*)CkLocalBranch(gID);
    }
/* DECLS: ReductionMgr();
 */
    

/* DECLS: void remoteRegister(ReductionRegisterMsg* impl_msg);
 */
    
    void remoteRegister(ReductionRegisterMsg* impl_msg);

/* DECLS: void remoteUnregister(ReductionRegisterMsg* impl_msg);
 */
    
    void remoteUnregister(ReductionRegisterMsg* impl_msg);

/* DECLS: void remoteSubmit(ReductionSubmitMsg* impl_msg);
 */
    
    void remoteSubmit(ReductionSubmitMsg* impl_msg);

};
/* ---------------- collective proxy -------------- */
class CProxy_ReductionMgr: public CProxy_IrrGroup{
  public:
    typedef ReductionMgr local_t;
    typedef CkIndex_ReductionMgr index_t;
    typedef CProxy_ReductionMgr proxy_t;
    typedef CProxyElement_ReductionMgr element_t;
    typedef CProxySection_ReductionMgr section_t;

    CProxy_ReductionMgr(void) {
    }
    CProxy_ReductionMgr(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_ReductionMgr(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_ReductionMgr(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_ReductionMgr operator[](int onPE) const
      {return CProxyElement_ReductionMgr(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    ReductionMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ReductionMgr* ckLocalBranch(CkGroupID gID) {
      return (ReductionMgr*)CkLocalBranch(gID);
    }
/* DECLS: ReductionMgr();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void remoteRegister(ReductionRegisterMsg* impl_msg);
 */
    
    void remoteRegister(ReductionRegisterMsg* impl_msg);
    
    void remoteRegister(ReductionRegisterMsg* impl_msg, int npes, int *pes);
    
    void remoteRegister(ReductionRegisterMsg* impl_msg, CmiGroup &grp);

/* DECLS: void remoteUnregister(ReductionRegisterMsg* impl_msg);
 */
    
    void remoteUnregister(ReductionRegisterMsg* impl_msg);
    
    void remoteUnregister(ReductionRegisterMsg* impl_msg, int npes, int *pes);
    
    void remoteUnregister(ReductionRegisterMsg* impl_msg, CmiGroup &grp);

/* DECLS: void remoteSubmit(ReductionSubmitMsg* impl_msg);
 */
    
    void remoteSubmit(ReductionSubmitMsg* impl_msg);
    
    void remoteSubmit(ReductionSubmitMsg* impl_msg, int npes, int *pes);
    
    void remoteSubmit(ReductionSubmitMsg* impl_msg, CmiGroup &grp);

};
/* ---------------- section proxy -------------- */
class CProxySection_ReductionMgr: public CProxySection_IrrGroup{
  public:
    typedef ReductionMgr local_t;
    typedef CkIndex_ReductionMgr index_t;
    typedef CProxy_ReductionMgr proxy_t;
    typedef CProxyElement_ReductionMgr element_t;
    typedef CProxySection_ReductionMgr section_t;

    CProxySection_ReductionMgr(void) {
    }
    CProxySection_ReductionMgr(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_ReductionMgr(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_ReductionMgr(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_ReductionMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_ReductionMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    ReductionMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ReductionMgr* ckLocalBranch(CkGroupID gID) {
      return (ReductionMgr*)CkLocalBranch(gID);
    }
/* DECLS: ReductionMgr();
 */
    

/* DECLS: void remoteRegister(ReductionRegisterMsg* impl_msg);
 */
    
    void remoteRegister(ReductionRegisterMsg* impl_msg);

/* DECLS: void remoteUnregister(ReductionRegisterMsg* impl_msg);
 */
    
    void remoteUnregister(ReductionRegisterMsg* impl_msg);

/* DECLS: void remoteSubmit(ReductionSubmitMsg* impl_msg);
 */
    
    void remoteSubmit(ReductionSubmitMsg* impl_msg);

};
#define ReductionMgr_SDAG_CODE 
typedef CBaseT1<Group, CProxy_ReductionMgr>CBase_ReductionMgr;



/* ---------------- method closures -------------- */
class Closure_ReductionMgr {
  public:




};

extern void _registerReductionMgr(void);
#endif
