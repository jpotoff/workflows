#ifndef _DECL_ComputeGBISserMgr_H_
#define _DECL_ComputeGBISserMgr_H_
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
/* DECLS: message GBISCoordMsg{
ComputeGBISAtom coord[];
}
;
 */
class GBISCoordMsg;
class CMessage_GBISCoordMsg:public CkMessage{
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
    CMessage_GBISCoordMsg();
    static void *pack(GBISCoordMsg *p);
    static GBISCoordMsg* unpack(void* p);
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
/* DECLS: message GBISForceMsg{
ExtForce force[];
ExtForce slowForce[];
}
;
 */
class GBISForceMsg;
class CMessage_GBISForceMsg:public CkMessage{
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
    CMessage_GBISForceMsg();
    static void *pack(GBISForceMsg *p);
    static GBISForceMsg* unpack(void* p);
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

/* DECLS: group ComputeGBISserMgr: IrrGroup{
ComputeGBISserMgr();
void recvCoord(GBISCoordMsg* impl_msg);
void recvForce(GBISForceMsg* impl_msg);
};
 */
 class ComputeGBISserMgr;
 class CkIndex_ComputeGBISserMgr;
 class CProxy_ComputeGBISserMgr;
 class CProxyElement_ComputeGBISserMgr;
 class CProxySection_ComputeGBISserMgr;
/* --------------- index object ------------------ */
class CkIndex_ComputeGBISserMgr:public CkIndex_IrrGroup{
  public:
    typedef ComputeGBISserMgr local_t;
    typedef CkIndex_ComputeGBISserMgr index_t;
    typedef CProxy_ComputeGBISserMgr proxy_t;
    typedef CProxyElement_ComputeGBISserMgr element_t;
    typedef CProxySection_ComputeGBISserMgr section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: ComputeGBISserMgr();
     */
    // Entry point registration at startup
    
    static int reg_ComputeGBISserMgr_void();
    // Entry point index lookup
    
    inline static int idx_ComputeGBISserMgr_void() {
      static int epidx = reg_ComputeGBISserMgr_void();
      return epidx;
    }

    
    static int ckNew() { return idx_ComputeGBISserMgr_void(); }
    
    static void _call_ComputeGBISserMgr_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ComputeGBISserMgr_void(void* impl_msg, void* impl_obj);
    /* DECLS: void recvCoord(GBISCoordMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvCoord_GBISCoordMsg();
    // Entry point index lookup
    
    inline static int idx_recvCoord_GBISCoordMsg() {
      static int epidx = reg_recvCoord_GBISCoordMsg();
      return epidx;
    }

    
    inline static int idx_recvCoord(void (ComputeGBISserMgr::*)(GBISCoordMsg* impl_msg) ) {
      return idx_recvCoord_GBISCoordMsg();
    }


    
    static int recvCoord(GBISCoordMsg* impl_msg) { return idx_recvCoord_GBISCoordMsg(); }
    
    static void _call_recvCoord_GBISCoordMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvCoord_GBISCoordMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvForce(GBISForceMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvForce_GBISForceMsg();
    // Entry point index lookup
    
    inline static int idx_recvForce_GBISForceMsg() {
      static int epidx = reg_recvForce_GBISForceMsg();
      return epidx;
    }

    
    inline static int idx_recvForce(void (ComputeGBISserMgr::*)(GBISForceMsg* impl_msg) ) {
      return idx_recvForce_GBISForceMsg();
    }


    
    static int recvForce(GBISForceMsg* impl_msg) { return idx_recvForce_GBISForceMsg(); }
    
    static void _call_recvForce_GBISForceMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvForce_GBISForceMsg(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_ComputeGBISserMgr: public CProxyElement_IrrGroup{
  public:
    typedef ComputeGBISserMgr local_t;
    typedef CkIndex_ComputeGBISserMgr index_t;
    typedef CProxy_ComputeGBISserMgr proxy_t;
    typedef CProxyElement_ComputeGBISserMgr element_t;
    typedef CProxySection_ComputeGBISserMgr section_t;


    /* TRAM aggregators */

    CProxyElement_ComputeGBISserMgr(void) {
    }
    CProxyElement_ComputeGBISserMgr(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_ComputeGBISserMgr(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_ComputeGBISserMgr(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    ComputeGBISserMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ComputeGBISserMgr* ckLocalBranch(CkGroupID gID) {
      return (ComputeGBISserMgr*)CkLocalBranch(gID);
    }
/* DECLS: ComputeGBISserMgr();
 */
    

/* DECLS: void recvCoord(GBISCoordMsg* impl_msg);
 */
    
    void recvCoord(GBISCoordMsg* impl_msg);

/* DECLS: void recvForce(GBISForceMsg* impl_msg);
 */
    
    void recvForce(GBISForceMsg* impl_msg);

};
/* ---------------- collective proxy -------------- */
class CProxy_ComputeGBISserMgr: public CProxy_IrrGroup{
  public:
    typedef ComputeGBISserMgr local_t;
    typedef CkIndex_ComputeGBISserMgr index_t;
    typedef CProxy_ComputeGBISserMgr proxy_t;
    typedef CProxyElement_ComputeGBISserMgr element_t;
    typedef CProxySection_ComputeGBISserMgr section_t;

    CProxy_ComputeGBISserMgr(void) {
    }
    CProxy_ComputeGBISserMgr(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_ComputeGBISserMgr(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_ComputeGBISserMgr(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_ComputeGBISserMgr operator[](int onPE) const
      {return CProxyElement_ComputeGBISserMgr(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    ComputeGBISserMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ComputeGBISserMgr* ckLocalBranch(CkGroupID gID) {
      return (ComputeGBISserMgr*)CkLocalBranch(gID);
    }
/* DECLS: ComputeGBISserMgr();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvCoord(GBISCoordMsg* impl_msg);
 */
    
    void recvCoord(GBISCoordMsg* impl_msg);
    
    void recvCoord(GBISCoordMsg* impl_msg, int npes, int *pes);
    
    void recvCoord(GBISCoordMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvForce(GBISForceMsg* impl_msg);
 */
    
    void recvForce(GBISForceMsg* impl_msg);
    
    void recvForce(GBISForceMsg* impl_msg, int npes, int *pes);
    
    void recvForce(GBISForceMsg* impl_msg, CmiGroup &grp);

};
/* ---------------- section proxy -------------- */
class CProxySection_ComputeGBISserMgr: public CProxySection_IrrGroup{
  public:
    typedef ComputeGBISserMgr local_t;
    typedef CkIndex_ComputeGBISserMgr index_t;
    typedef CProxy_ComputeGBISserMgr proxy_t;
    typedef CProxyElement_ComputeGBISserMgr element_t;
    typedef CProxySection_ComputeGBISserMgr section_t;

    CProxySection_ComputeGBISserMgr(void) {
    }
    CProxySection_ComputeGBISserMgr(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_ComputeGBISserMgr(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_ComputeGBISserMgr(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_ComputeGBISserMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_ComputeGBISserMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    ComputeGBISserMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ComputeGBISserMgr* ckLocalBranch(CkGroupID gID) {
      return (ComputeGBISserMgr*)CkLocalBranch(gID);
    }
/* DECLS: ComputeGBISserMgr();
 */
    

/* DECLS: void recvCoord(GBISCoordMsg* impl_msg);
 */
    
    void recvCoord(GBISCoordMsg* impl_msg);

/* DECLS: void recvForce(GBISForceMsg* impl_msg);
 */
    
    void recvForce(GBISForceMsg* impl_msg);

};
#define ComputeGBISserMgr_SDAG_CODE 
typedef CBaseT1<Group, CProxy_ComputeGBISserMgr>CBase_ComputeGBISserMgr;



/* ---------------- method closures -------------- */
class Closure_ComputeGBISserMgr {
  public:



};

extern void _registerComputeGBISserMgr(void);
#endif
