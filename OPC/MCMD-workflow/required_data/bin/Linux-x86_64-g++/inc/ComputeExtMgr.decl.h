#ifndef _DECL_ComputeExtMgr_H_
#define _DECL_ComputeExtMgr_H_
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
/* DECLS: message ExtCoordMsg{
ComputeExtAtom coord[];
}
;
 */
class ExtCoordMsg;
class CMessage_ExtCoordMsg:public CkMessage{
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
    CMessage_ExtCoordMsg();
    static void *pack(ExtCoordMsg *p);
    static ExtCoordMsg* unpack(void* p);
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
/* DECLS: message ExtForceMsg{
ExtForce force[];
}
;
 */
class ExtForceMsg;
class CMessage_ExtForceMsg:public CkMessage{
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
    CMessage_ExtForceMsg();
    static void *pack(ExtForceMsg *p);
    static ExtForceMsg* unpack(void* p);
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

/* DECLS: group ComputeExtMgr: IrrGroup{
ComputeExtMgr();
void recvCoord(ExtCoordMsg* impl_msg);
void recvForce(ExtForceMsg* impl_msg);
};
 */
 class ComputeExtMgr;
 class CkIndex_ComputeExtMgr;
 class CProxy_ComputeExtMgr;
 class CProxyElement_ComputeExtMgr;
 class CProxySection_ComputeExtMgr;
/* --------------- index object ------------------ */
class CkIndex_ComputeExtMgr:public CkIndex_IrrGroup{
  public:
    typedef ComputeExtMgr local_t;
    typedef CkIndex_ComputeExtMgr index_t;
    typedef CProxy_ComputeExtMgr proxy_t;
    typedef CProxyElement_ComputeExtMgr element_t;
    typedef CProxySection_ComputeExtMgr section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: ComputeExtMgr();
     */
    // Entry point registration at startup
    
    static int reg_ComputeExtMgr_void();
    // Entry point index lookup
    
    inline static int idx_ComputeExtMgr_void() {
      static int epidx = reg_ComputeExtMgr_void();
      return epidx;
    }

    
    static int ckNew() { return idx_ComputeExtMgr_void(); }
    
    static void _call_ComputeExtMgr_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ComputeExtMgr_void(void* impl_msg, void* impl_obj);
    /* DECLS: void recvCoord(ExtCoordMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvCoord_ExtCoordMsg();
    // Entry point index lookup
    
    inline static int idx_recvCoord_ExtCoordMsg() {
      static int epidx = reg_recvCoord_ExtCoordMsg();
      return epidx;
    }

    
    inline static int idx_recvCoord(void (ComputeExtMgr::*)(ExtCoordMsg* impl_msg) ) {
      return idx_recvCoord_ExtCoordMsg();
    }


    
    static int recvCoord(ExtCoordMsg* impl_msg) { return idx_recvCoord_ExtCoordMsg(); }
    
    static void _call_recvCoord_ExtCoordMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvCoord_ExtCoordMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvForce(ExtForceMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvForce_ExtForceMsg();
    // Entry point index lookup
    
    inline static int idx_recvForce_ExtForceMsg() {
      static int epidx = reg_recvForce_ExtForceMsg();
      return epidx;
    }

    
    inline static int idx_recvForce(void (ComputeExtMgr::*)(ExtForceMsg* impl_msg) ) {
      return idx_recvForce_ExtForceMsg();
    }


    
    static int recvForce(ExtForceMsg* impl_msg) { return idx_recvForce_ExtForceMsg(); }
    
    static void _call_recvForce_ExtForceMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvForce_ExtForceMsg(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_ComputeExtMgr: public CProxyElement_IrrGroup{
  public:
    typedef ComputeExtMgr local_t;
    typedef CkIndex_ComputeExtMgr index_t;
    typedef CProxy_ComputeExtMgr proxy_t;
    typedef CProxyElement_ComputeExtMgr element_t;
    typedef CProxySection_ComputeExtMgr section_t;


    /* TRAM aggregators */

    CProxyElement_ComputeExtMgr(void) {
    }
    CProxyElement_ComputeExtMgr(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_ComputeExtMgr(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_ComputeExtMgr(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    ComputeExtMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ComputeExtMgr* ckLocalBranch(CkGroupID gID) {
      return (ComputeExtMgr*)CkLocalBranch(gID);
    }
/* DECLS: ComputeExtMgr();
 */
    

/* DECLS: void recvCoord(ExtCoordMsg* impl_msg);
 */
    
    void recvCoord(ExtCoordMsg* impl_msg);

/* DECLS: void recvForce(ExtForceMsg* impl_msg);
 */
    
    void recvForce(ExtForceMsg* impl_msg);

};
/* ---------------- collective proxy -------------- */
class CProxy_ComputeExtMgr: public CProxy_IrrGroup{
  public:
    typedef ComputeExtMgr local_t;
    typedef CkIndex_ComputeExtMgr index_t;
    typedef CProxy_ComputeExtMgr proxy_t;
    typedef CProxyElement_ComputeExtMgr element_t;
    typedef CProxySection_ComputeExtMgr section_t;

    CProxy_ComputeExtMgr(void) {
    }
    CProxy_ComputeExtMgr(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_ComputeExtMgr(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_ComputeExtMgr(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_ComputeExtMgr operator[](int onPE) const
      {return CProxyElement_ComputeExtMgr(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    ComputeExtMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ComputeExtMgr* ckLocalBranch(CkGroupID gID) {
      return (ComputeExtMgr*)CkLocalBranch(gID);
    }
/* DECLS: ComputeExtMgr();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvCoord(ExtCoordMsg* impl_msg);
 */
    
    void recvCoord(ExtCoordMsg* impl_msg);
    
    void recvCoord(ExtCoordMsg* impl_msg, int npes, int *pes);
    
    void recvCoord(ExtCoordMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvForce(ExtForceMsg* impl_msg);
 */
    
    void recvForce(ExtForceMsg* impl_msg);
    
    void recvForce(ExtForceMsg* impl_msg, int npes, int *pes);
    
    void recvForce(ExtForceMsg* impl_msg, CmiGroup &grp);

};
/* ---------------- section proxy -------------- */
class CProxySection_ComputeExtMgr: public CProxySection_IrrGroup{
  public:
    typedef ComputeExtMgr local_t;
    typedef CkIndex_ComputeExtMgr index_t;
    typedef CProxy_ComputeExtMgr proxy_t;
    typedef CProxyElement_ComputeExtMgr element_t;
    typedef CProxySection_ComputeExtMgr section_t;

    CProxySection_ComputeExtMgr(void) {
    }
    CProxySection_ComputeExtMgr(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_ComputeExtMgr(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_ComputeExtMgr(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_ComputeExtMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_ComputeExtMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    ComputeExtMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ComputeExtMgr* ckLocalBranch(CkGroupID gID) {
      return (ComputeExtMgr*)CkLocalBranch(gID);
    }
/* DECLS: ComputeExtMgr();
 */
    

/* DECLS: void recvCoord(ExtCoordMsg* impl_msg);
 */
    
    void recvCoord(ExtCoordMsg* impl_msg);

/* DECLS: void recvForce(ExtForceMsg* impl_msg);
 */
    
    void recvForce(ExtForceMsg* impl_msg);

};
#define ComputeExtMgr_SDAG_CODE 
typedef CBaseT1<Group, CProxy_ComputeExtMgr>CBase_ComputeExtMgr;



/* ---------------- method closures -------------- */
class Closure_ComputeExtMgr {
  public:



};

extern void _registerComputeExtMgr(void);
#endif
