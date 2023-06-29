#ifndef _DECL_NamdDummyLB_H_
#define _DECL_NamdDummyLB_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
#include "CentralLB.decl.h"

/* DECLS: group NamdDummyLB: CentralLB{
void NamdDummyLB(const CkLBOptions &impl_noname_0);
};
 */
 class NamdDummyLB;
 class CkIndex_NamdDummyLB;
 class CProxy_NamdDummyLB;
 class CProxyElement_NamdDummyLB;
 class CProxySection_NamdDummyLB;
/* --------------- index object ------------------ */
class CkIndex_NamdDummyLB:public CkIndex_CentralLB{
  public:
    typedef NamdDummyLB local_t;
    typedef CkIndex_NamdDummyLB index_t;
    typedef CProxy_NamdDummyLB proxy_t;
    typedef CProxyElement_NamdDummyLB element_t;
    typedef CProxySection_NamdDummyLB section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: void NamdDummyLB(const CkLBOptions &impl_noname_0);
     */
    // Entry point registration at startup
    
    static int reg_NamdDummyLB_marshall1();
    // Entry point index lookup
    
    inline static int idx_NamdDummyLB_marshall1() {
      static int epidx = reg_NamdDummyLB_marshall1();
      return epidx;
    }

    
    static int ckNew(const CkLBOptions &impl_noname_0) { return idx_NamdDummyLB_marshall1(); }
    
    static void _call_NamdDummyLB_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_NamdDummyLB_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_NamdDummyLB_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_NamdDummyLB_marshall1(PUP::er &p,void *msg);
};
/* --------------- element proxy ------------------ */
class CProxyElement_NamdDummyLB: public CProxyElement_CentralLB{
  public:
    typedef NamdDummyLB local_t;
    typedef CkIndex_NamdDummyLB index_t;
    typedef CProxy_NamdDummyLB proxy_t;
    typedef CProxyElement_NamdDummyLB element_t;
    typedef CProxySection_NamdDummyLB section_t;


    /* TRAM aggregators */

    CProxyElement_NamdDummyLB(void) {
    }
    CProxyElement_NamdDummyLB(const IrrGroup *g) : CProxyElement_CentralLB(g){
    }
    CProxyElement_NamdDummyLB(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_CentralLB(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_NamdDummyLB(CkGroupID _gid,int _onPE) : CProxyElement_CentralLB(_gid,_onPE){
    }

    int ckIsDelegated(void) const
    { return CProxyElement_CentralLB::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_CentralLB::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_CentralLB::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_CentralLB::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxyElement_CentralLB::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxyElement_CentralLB::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxyElement_CentralLB::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_CentralLB::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_CentralLB::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_CentralLB::ckSetReductionClient(cb); }
int ckGetGroupPe(void) const
{return CProxyElement_CentralLB::ckGetGroupPe();}

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_CentralLB::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_CentralLB::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_CentralLB::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxyElement_CentralLB::ckSetGroupID(g);
    }
    NamdDummyLB* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static NamdDummyLB* ckLocalBranch(CkGroupID gID) {
      return (NamdDummyLB*)CkLocalBranch(gID);
    }
/* DECLS: void NamdDummyLB(const CkLBOptions &impl_noname_0);
 */
    

};
/* ---------------- collective proxy -------------- */
class CProxy_NamdDummyLB: public CProxy_CentralLB{
  public:
    typedef NamdDummyLB local_t;
    typedef CkIndex_NamdDummyLB index_t;
    typedef CProxy_NamdDummyLB proxy_t;
    typedef CProxyElement_NamdDummyLB element_t;
    typedef CProxySection_NamdDummyLB section_t;

    CProxy_NamdDummyLB(void) {
    }
    CProxy_NamdDummyLB(const IrrGroup *g) : CProxy_CentralLB(g){
    }
    CProxy_NamdDummyLB(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_CentralLB(_gid,CK_DELCTOR_ARGS){  }
    CProxy_NamdDummyLB(CkGroupID _gid) : CProxy_CentralLB(_gid){  }
    CProxyElement_NamdDummyLB operator[](int onPE) const
      {return CProxyElement_NamdDummyLB(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

    int ckIsDelegated(void) const
    { return CProxy_CentralLB::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_CentralLB::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_CentralLB::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_CentralLB::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxy_CentralLB::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxy_CentralLB::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxy_CentralLB::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_CentralLB::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_CentralLB::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_CentralLB::ckSetReductionClient(cb); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_CentralLB::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_CentralLB::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_CentralLB::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxy_CentralLB::ckSetGroupID(g);
    }
    NamdDummyLB* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static NamdDummyLB* ckLocalBranch(CkGroupID gID) {
      return (NamdDummyLB*)CkLocalBranch(gID);
    }
/* DECLS: void NamdDummyLB(const CkLBOptions &impl_noname_0);
 */
    
    static CkGroupID ckNew(const CkLBOptions &impl_noname_0, const CkEntryOptions *impl_e_opts=NULL);
    CProxy_NamdDummyLB(const CkLBOptions &impl_noname_0, const CkEntryOptions *impl_e_opts=NULL);

};
/* ---------------- section proxy -------------- */
class CProxySection_NamdDummyLB: public CProxySection_CentralLB{
  public:
    typedef NamdDummyLB local_t;
    typedef CkIndex_NamdDummyLB index_t;
    typedef CProxy_NamdDummyLB proxy_t;
    typedef CProxyElement_NamdDummyLB element_t;
    typedef CProxySection_NamdDummyLB section_t;

    CProxySection_NamdDummyLB(void) {
    }
    CProxySection_NamdDummyLB(const IrrGroup *g) : CProxySection_CentralLB(g){
    }
    CProxySection_NamdDummyLB(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_CentralLB(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_NamdDummyLB(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_CentralLB(_gid,_pelist,_npes,factor){  }
    CProxySection_NamdDummyLB(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_CentralLB(n,_gid,_pelist,_npes,factor){  }
    CProxySection_NamdDummyLB(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_CentralLB(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

    int ckIsDelegated(void) const
    { return CProxySection_CentralLB::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_CentralLB::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_CentralLB::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_CentralLB::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxySection_CentralLB::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxySection_CentralLB::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxySection_CentralLB::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_CentralLB::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_CentralLB::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_CentralLB::ckSetReductionClient(cb); }
inline int ckGetNumSections() const
{ return CProxySection_CentralLB::ckGetNumSections(); }
inline CkSectionInfo &ckGetSectionInfo()
{ return CProxySection_CentralLB::ckGetSectionInfo(); }
inline CkSectionID *ckGetSectionIDs()
{ return CProxySection_CentralLB::ckGetSectionIDs(); }
inline CkSectionID &ckGetSectionID()
{ return CProxySection_CentralLB::ckGetSectionID(); }
inline CkSectionID &ckGetSectionID(int i)
{ return CProxySection_CentralLB::ckGetSectionID(i); }
inline CkGroupID ckGetGroupIDn(int i) const
{ return CProxySection_CentralLB::ckGetGroupIDn(i); }
inline const int *ckGetElements() const
{ return CProxySection_CentralLB::ckGetElements(); }
inline const int *ckGetElements(int i) const
{ return CProxySection_CentralLB::ckGetElements(i); }
inline int ckGetNumElements() const
{ return CProxySection_CentralLB::ckGetNumElements(); } 
inline int ckGetNumElements(int i) const
{ return CProxySection_CentralLB::ckGetNumElements(i); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_CentralLB::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_CentralLB::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_CentralLB::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxySection_CentralLB::ckSetGroupID(g);
    }
    NamdDummyLB* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static NamdDummyLB* ckLocalBranch(CkGroupID gID) {
      return (NamdDummyLB*)CkLocalBranch(gID);
    }
/* DECLS: void NamdDummyLB(const CkLBOptions &impl_noname_0);
 */
    

};
#define NamdDummyLB_SDAG_CODE 
typedef CBaseT1<CentralLB, CProxy_NamdDummyLB>CBase_NamdDummyLB;


/* ---------------- method closures -------------- */
class Closure_NamdDummyLB {
  public:

};

extern void _registerNamdDummyLB(void);
#endif
