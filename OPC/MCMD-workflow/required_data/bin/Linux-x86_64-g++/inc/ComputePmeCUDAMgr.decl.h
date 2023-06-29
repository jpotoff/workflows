#ifndef _DECL_ComputePmeCUDAMgr_H_
#define _DECL_ComputePmeCUDAMgr_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
#include "CudaPmeSolver.decl.h"

/* DECLS: nodegroup ComputePmeCUDAMgr: NodeGroup;
 */
 class ComputePmeCUDAMgr;
 class CkIndex_ComputePmeCUDAMgr;
 class CProxy_ComputePmeCUDAMgr;
 class CProxyElement_ComputePmeCUDAMgr;
 class CProxySection_ComputePmeCUDAMgr;
/* --------------- index object ------------------ */
class CkIndex_ComputePmeCUDAMgr:public CkIndex_NodeGroup{
  public:
    typedef ComputePmeCUDAMgr local_t;
    typedef CkIndex_ComputePmeCUDAMgr index_t;
    typedef CProxy_ComputePmeCUDAMgr proxy_t;
    typedef CProxyElement_ComputePmeCUDAMgr element_t;
    typedef CProxySection_ComputePmeCUDAMgr section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
};
/* --------------- element proxy ------------------ */
class CProxyElement_ComputePmeCUDAMgr: public CProxyElement_NodeGroup{
  public:
    typedef ComputePmeCUDAMgr local_t;
    typedef CkIndex_ComputePmeCUDAMgr index_t;
    typedef CProxy_ComputePmeCUDAMgr proxy_t;
    typedef CProxyElement_ComputePmeCUDAMgr element_t;
    typedef CProxySection_ComputePmeCUDAMgr section_t;


    /* TRAM aggregators */

    CProxyElement_ComputePmeCUDAMgr(void) {
    }
    CProxyElement_ComputePmeCUDAMgr(const IrrGroup *g) : CProxyElement_NodeGroup(g){
    }
    CProxyElement_ComputePmeCUDAMgr(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_NodeGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_ComputePmeCUDAMgr(CkGroupID _gid,int _onPE) : CProxyElement_NodeGroup(_gid,_onPE){
    }

    int ckIsDelegated(void) const
    { return CProxyElement_NodeGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_NodeGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_NodeGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_NodeGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxyElement_NodeGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxyElement_NodeGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxyElement_NodeGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_NodeGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_NodeGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_NodeGroup::ckSetReductionClient(cb); }
int ckGetGroupPe(void) const
{return CProxyElement_NodeGroup::ckGetGroupPe();}

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_NodeGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_NodeGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_NodeGroup::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxyElement_NodeGroup::ckSetGroupID(g);
    }
    ComputePmeCUDAMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ComputePmeCUDAMgr* ckLocalBranch(CkGroupID gID) {
      return (ComputePmeCUDAMgr*)CkLocalNodeBranch(gID);
    }
};
/* ---------------- collective proxy -------------- */
class CProxy_ComputePmeCUDAMgr: public CProxy_NodeGroup{
  public:
    typedef ComputePmeCUDAMgr local_t;
    typedef CkIndex_ComputePmeCUDAMgr index_t;
    typedef CProxy_ComputePmeCUDAMgr proxy_t;
    typedef CProxyElement_ComputePmeCUDAMgr element_t;
    typedef CProxySection_ComputePmeCUDAMgr section_t;

    CProxy_ComputePmeCUDAMgr(void) {
    }
    CProxy_ComputePmeCUDAMgr(const IrrGroup *g) : CProxy_NodeGroup(g){
    }
    CProxy_ComputePmeCUDAMgr(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_NodeGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_ComputePmeCUDAMgr(CkGroupID _gid) : CProxy_NodeGroup(_gid){  }
    CProxyElement_ComputePmeCUDAMgr operator[](int onPE) const
      {return CProxyElement_ComputePmeCUDAMgr(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

    int ckIsDelegated(void) const
    { return CProxy_NodeGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_NodeGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_NodeGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_NodeGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxy_NodeGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxy_NodeGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxy_NodeGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_NodeGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_NodeGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_NodeGroup::ckSetReductionClient(cb); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_NodeGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_NodeGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_NodeGroup::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxy_NodeGroup::ckSetGroupID(g);
    }
    ComputePmeCUDAMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ComputePmeCUDAMgr* ckLocalBranch(CkGroupID gID) {
      return (ComputePmeCUDAMgr*)CkLocalNodeBranch(gID);
    }
};
/* ---------------- section proxy -------------- */
class CProxySection_ComputePmeCUDAMgr: public CProxySection_NodeGroup{
  public:
    typedef ComputePmeCUDAMgr local_t;
    typedef CkIndex_ComputePmeCUDAMgr index_t;
    typedef CProxy_ComputePmeCUDAMgr proxy_t;
    typedef CProxyElement_ComputePmeCUDAMgr element_t;
    typedef CProxySection_ComputePmeCUDAMgr section_t;

    CProxySection_ComputePmeCUDAMgr(void) {
    }
    CProxySection_ComputePmeCUDAMgr(const IrrGroup *g) : CProxySection_NodeGroup(g){
    }
    CProxySection_ComputePmeCUDAMgr(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_NodeGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_ComputePmeCUDAMgr(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_NodeGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_ComputePmeCUDAMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_NodeGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_ComputePmeCUDAMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_NodeGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

    int ckIsDelegated(void) const
    { return CProxySection_NodeGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_NodeGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_NodeGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_NodeGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxySection_NodeGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxySection_NodeGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxySection_NodeGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_NodeGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_NodeGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_NodeGroup::ckSetReductionClient(cb); }
inline int ckGetNumSections() const
{ return CProxySection_NodeGroup::ckGetNumSections(); }
inline CkSectionInfo &ckGetSectionInfo()
{ return CProxySection_NodeGroup::ckGetSectionInfo(); }
inline CkSectionID *ckGetSectionIDs()
{ return CProxySection_NodeGroup::ckGetSectionIDs(); }
inline CkSectionID &ckGetSectionID()
{ return CProxySection_NodeGroup::ckGetSectionID(); }
inline CkSectionID &ckGetSectionID(int i)
{ return CProxySection_NodeGroup::ckGetSectionID(i); }
inline CkGroupID ckGetGroupIDn(int i) const
{ return CProxySection_NodeGroup::ckGetGroupIDn(i); }
inline const int *ckGetElements() const
{ return CProxySection_NodeGroup::ckGetElements(); }
inline const int *ckGetElements(int i) const
{ return CProxySection_NodeGroup::ckGetElements(i); }
inline int ckGetNumElements() const
{ return CProxySection_NodeGroup::ckGetNumElements(); } 
inline int ckGetNumElements(int i) const
{ return CProxySection_NodeGroup::ckGetNumElements(i); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_NodeGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_NodeGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_NodeGroup::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxySection_NodeGroup::ckSetGroupID(g);
    }
    ComputePmeCUDAMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ComputePmeCUDAMgr* ckLocalBranch(CkGroupID gID) {
      return (ComputePmeCUDAMgr*)CkLocalNodeBranch(gID);
    }
};
typedef CBaseT1<NodeGroup, CProxy_ComputePmeCUDAMgr>CBase_ComputePmeCUDAMgr;


/* ---------------- method closures -------------- */
class Closure_ComputePmeCUDAMgr {
  public:
};

extern void _registerComputePmeCUDAMgr(void);
#endif
