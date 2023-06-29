#ifndef _DECL_Sync_H_
#define _DECL_Sync_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
/* DECLS: group Sync: IrrGroup{
Sync();
};
 */
 class Sync;
 class CkIndex_Sync;
 class CProxy_Sync;
 class CProxyElement_Sync;
 class CProxySection_Sync;
/* --------------- index object ------------------ */
class CkIndex_Sync:public CkIndex_IrrGroup{
  public:
    typedef Sync local_t;
    typedef CkIndex_Sync index_t;
    typedef CProxy_Sync proxy_t;
    typedef CProxyElement_Sync element_t;
    typedef CProxySection_Sync section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: Sync();
     */
    // Entry point registration at startup
    
    static int reg_Sync_void();
    // Entry point index lookup
    
    inline static int idx_Sync_void() {
      static int epidx = reg_Sync_void();
      return epidx;
    }

    
    static int ckNew() { return idx_Sync_void(); }
    
    static void _call_Sync_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Sync_void(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_Sync: public CProxyElement_IrrGroup{
  public:
    typedef Sync local_t;
    typedef CkIndex_Sync index_t;
    typedef CProxy_Sync proxy_t;
    typedef CProxyElement_Sync element_t;
    typedef CProxySection_Sync section_t;


    /* TRAM aggregators */

    CProxyElement_Sync(void) {
    }
    CProxyElement_Sync(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_Sync(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_Sync(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    Sync* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static Sync* ckLocalBranch(CkGroupID gID) {
      return (Sync*)CkLocalBranch(gID);
    }
/* DECLS: Sync();
 */
    

};
/* ---------------- collective proxy -------------- */
class CProxy_Sync: public CProxy_IrrGroup{
  public:
    typedef Sync local_t;
    typedef CkIndex_Sync index_t;
    typedef CProxy_Sync proxy_t;
    typedef CProxyElement_Sync element_t;
    typedef CProxySection_Sync section_t;

    CProxy_Sync(void) {
    }
    CProxy_Sync(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_Sync(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_Sync(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_Sync operator[](int onPE) const
      {return CProxyElement_Sync(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    Sync* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static Sync* ckLocalBranch(CkGroupID gID) {
      return (Sync*)CkLocalBranch(gID);
    }
/* DECLS: Sync();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

};
/* ---------------- section proxy -------------- */
class CProxySection_Sync: public CProxySection_IrrGroup{
  public:
    typedef Sync local_t;
    typedef CkIndex_Sync index_t;
    typedef CProxy_Sync proxy_t;
    typedef CProxyElement_Sync element_t;
    typedef CProxySection_Sync section_t;

    CProxySection_Sync(void) {
    }
    CProxySection_Sync(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_Sync(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_Sync(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_Sync(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_Sync(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    Sync* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static Sync* ckLocalBranch(CkGroupID gID) {
      return (Sync*)CkLocalBranch(gID);
    }
/* DECLS: Sync();
 */
    

};
#define Sync_SDAG_CODE 
typedef CBaseT1<Group, CProxy_Sync>CBase_Sync;

/* ---------------- method closures -------------- */
class Closure_Sync {
  public:

};

extern void _registerSync(void);
#endif
