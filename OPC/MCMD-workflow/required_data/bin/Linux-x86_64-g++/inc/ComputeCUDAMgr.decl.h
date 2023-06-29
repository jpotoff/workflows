#ifndef _DECL_ComputeCUDAMgr_H_
#define _DECL_ComputeCUDAMgr_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
/* DECLS: nodegroup ComputeCUDAMgr: NodeGroup;
 */
 class ComputeCUDAMgr;
 class CkIndex_ComputeCUDAMgr;
 class CProxy_ComputeCUDAMgr;
 class CProxyElement_ComputeCUDAMgr;
 class CProxySection_ComputeCUDAMgr;
/* --------------- index object ------------------ */
class CkIndex_ComputeCUDAMgr:public CkIndex_NodeGroup{
  public:
    typedef ComputeCUDAMgr local_t;
    typedef CkIndex_ComputeCUDAMgr index_t;
    typedef CProxy_ComputeCUDAMgr proxy_t;
    typedef CProxyElement_ComputeCUDAMgr element_t;
    typedef CProxySection_ComputeCUDAMgr section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
};
/* --------------- element proxy ------------------ */
class CProxyElement_ComputeCUDAMgr: public CProxyElement_NodeGroup{
  public:
    typedef ComputeCUDAMgr local_t;
    typedef CkIndex_ComputeCUDAMgr index_t;
    typedef CProxy_ComputeCUDAMgr proxy_t;
    typedef CProxyElement_ComputeCUDAMgr element_t;
    typedef CProxySection_ComputeCUDAMgr section_t;


    /* TRAM aggregators */

    CProxyElement_ComputeCUDAMgr(void) {
    }
    CProxyElement_ComputeCUDAMgr(const IrrGroup *g) : CProxyElement_NodeGroup(g){
    }
    CProxyElement_ComputeCUDAMgr(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_NodeGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_ComputeCUDAMgr(CkGroupID _gid,int _onPE) : CProxyElement_NodeGroup(_gid,_onPE){
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
    ComputeCUDAMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ComputeCUDAMgr* ckLocalBranch(CkGroupID gID) {
      return (ComputeCUDAMgr*)CkLocalNodeBranch(gID);
    }
};
/* ---------------- collective proxy -------------- */
class CProxy_ComputeCUDAMgr: public CProxy_NodeGroup{
  public:
    typedef ComputeCUDAMgr local_t;
    typedef CkIndex_ComputeCUDAMgr index_t;
    typedef CProxy_ComputeCUDAMgr proxy_t;
    typedef CProxyElement_ComputeCUDAMgr element_t;
    typedef CProxySection_ComputeCUDAMgr section_t;

    CProxy_ComputeCUDAMgr(void) {
    }
    CProxy_ComputeCUDAMgr(const IrrGroup *g) : CProxy_NodeGroup(g){
    }
    CProxy_ComputeCUDAMgr(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_NodeGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_ComputeCUDAMgr(CkGroupID _gid) : CProxy_NodeGroup(_gid){  }
    CProxyElement_ComputeCUDAMgr operator[](int onPE) const
      {return CProxyElement_ComputeCUDAMgr(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    ComputeCUDAMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ComputeCUDAMgr* ckLocalBranch(CkGroupID gID) {
      return (ComputeCUDAMgr*)CkLocalNodeBranch(gID);
    }
};
/* ---------------- section proxy -------------- */
class CProxySection_ComputeCUDAMgr: public CProxySection_NodeGroup{
  public:
    typedef ComputeCUDAMgr local_t;
    typedef CkIndex_ComputeCUDAMgr index_t;
    typedef CProxy_ComputeCUDAMgr proxy_t;
    typedef CProxyElement_ComputeCUDAMgr element_t;
    typedef CProxySection_ComputeCUDAMgr section_t;

    CProxySection_ComputeCUDAMgr(void) {
    }
    CProxySection_ComputeCUDAMgr(const IrrGroup *g) : CProxySection_NodeGroup(g){
    }
    CProxySection_ComputeCUDAMgr(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_NodeGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_ComputeCUDAMgr(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_NodeGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_ComputeCUDAMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_NodeGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_ComputeCUDAMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_NodeGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    ComputeCUDAMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ComputeCUDAMgr* ckLocalBranch(CkGroupID gID) {
      return (ComputeCUDAMgr*)CkLocalNodeBranch(gID);
    }
};
typedef CBaseT1<NodeGroup, CProxy_ComputeCUDAMgr>CBase_ComputeCUDAMgr;

/* ---------------- method closures -------------- */
class Closure_ComputeCUDAMgr {
  public:
};

extern void _registerComputeCUDAMgr(void);
#endif
