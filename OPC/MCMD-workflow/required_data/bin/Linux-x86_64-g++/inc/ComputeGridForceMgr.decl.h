#ifndef _DECL_ComputeGridForceMgr_H_
#define _DECL_ComputeGridForceMgr_H_
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
/* DECLS: message GridAckMsg;
 */
class GridAckMsg;
class CMessage_GridAckMsg:public CkMessage{
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
    CMessage_GridAckMsg();
    static void *pack(GridAckMsg *p);
    static GridAckMsg* unpack(void* p);
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
/* DECLS: message GridDepositMsg;
 */
class GridDepositMsg;
class CMessage_GridDepositMsg:public CkMessage{
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
    CMessage_GridDepositMsg();
    static void *pack(GridDepositMsg *p);
    static GridDepositMsg* unpack(void* p);
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
/* DECLS: message GridSegmentMsg;
 */
class GridSegmentMsg;
class CMessage_GridSegmentMsg:public CkMessage{
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
    CMessage_GridSegmentMsg();
    static void *pack(GridSegmentMsg *p);
    static GridSegmentMsg* unpack(void* p);
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
/* DECLS: message SubReqMsg;
 */
class SubReqMsg;
class CMessage_SubReqMsg:public CkMessage{
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
    CMessage_SubReqMsg();
    static void *pack(SubReqMsg *p);
    static SubReqMsg* unpack(void* p);
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
/* DECLS: message GridRequestMsg{
int gridStartIndex[];
int gridIndexList[];
}
;
 */
class GridRequestMsg;
class CMessage_GridRequestMsg:public CkMessage{
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
    CMessage_GridRequestMsg();
    static void *pack(GridRequestMsg *p);
    static GridRequestMsg* unpack(void* p);
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
/* DECLS: message GridValuesMsg{
int gridStartIndex[];
GridVal gridVals[];
}
;
 */
class GridValuesMsg;
class CMessage_GridValuesMsg:public CkMessage{
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
    CMessage_GridValuesMsg();
    static void *pack(GridValuesMsg *p);
    static GridValuesMsg* unpack(void* p);
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

/* DECLS: group ComputeGridForceMgr: IrrGroup{
ComputeGridForceMgr();
void finishWork();
};
 */
 class ComputeGridForceMgr;
 class CkIndex_ComputeGridForceMgr;
 class CProxy_ComputeGridForceMgr;
 class CProxyElement_ComputeGridForceMgr;
 class CProxySection_ComputeGridForceMgr;
/* --------------- index object ------------------ */
class CkIndex_ComputeGridForceMgr:public CkIndex_IrrGroup{
  public:
    typedef ComputeGridForceMgr local_t;
    typedef CkIndex_ComputeGridForceMgr index_t;
    typedef CProxy_ComputeGridForceMgr proxy_t;
    typedef CProxyElement_ComputeGridForceMgr element_t;
    typedef CProxySection_ComputeGridForceMgr section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: ComputeGridForceMgr();
     */
    // Entry point registration at startup
    
    static int reg_ComputeGridForceMgr_void();
    // Entry point index lookup
    
    inline static int idx_ComputeGridForceMgr_void() {
      static int epidx = reg_ComputeGridForceMgr_void();
      return epidx;
    }

    
    static int ckNew() { return idx_ComputeGridForceMgr_void(); }
    
    static void _call_ComputeGridForceMgr_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ComputeGridForceMgr_void(void* impl_msg, void* impl_obj);
    /* DECLS: void finishWork();
     */
    // Entry point registration at startup
    
    static int reg_finishWork_void();
    // Entry point index lookup
    
    inline static int idx_finishWork_void() {
      static int epidx = reg_finishWork_void();
      return epidx;
    }

    
    inline static int idx_finishWork(void (ComputeGridForceMgr::*)() ) {
      return idx_finishWork_void();
    }


    
    static int finishWork() { return idx_finishWork_void(); }
    
    static void _call_finishWork_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_finishWork_void(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_ComputeGridForceMgr: public CProxyElement_IrrGroup{
  public:
    typedef ComputeGridForceMgr local_t;
    typedef CkIndex_ComputeGridForceMgr index_t;
    typedef CProxy_ComputeGridForceMgr proxy_t;
    typedef CProxyElement_ComputeGridForceMgr element_t;
    typedef CProxySection_ComputeGridForceMgr section_t;


    /* TRAM aggregators */

    CProxyElement_ComputeGridForceMgr(void) {
    }
    CProxyElement_ComputeGridForceMgr(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_ComputeGridForceMgr(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_ComputeGridForceMgr(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    ComputeGridForceMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ComputeGridForceMgr* ckLocalBranch(CkGroupID gID) {
      return (ComputeGridForceMgr*)CkLocalBranch(gID);
    }
/* DECLS: ComputeGridForceMgr();
 */
    

/* DECLS: void finishWork();
 */
    
    void finishWork(const CkEntryOptions *impl_e_opts=NULL);

};
/* ---------------- collective proxy -------------- */
class CProxy_ComputeGridForceMgr: public CProxy_IrrGroup{
  public:
    typedef ComputeGridForceMgr local_t;
    typedef CkIndex_ComputeGridForceMgr index_t;
    typedef CProxy_ComputeGridForceMgr proxy_t;
    typedef CProxyElement_ComputeGridForceMgr element_t;
    typedef CProxySection_ComputeGridForceMgr section_t;

    CProxy_ComputeGridForceMgr(void) {
    }
    CProxy_ComputeGridForceMgr(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_ComputeGridForceMgr(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_ComputeGridForceMgr(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_ComputeGridForceMgr operator[](int onPE) const
      {return CProxyElement_ComputeGridForceMgr(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    ComputeGridForceMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ComputeGridForceMgr* ckLocalBranch(CkGroupID gID) {
      return (ComputeGridForceMgr*)CkLocalBranch(gID);
    }
/* DECLS: ComputeGridForceMgr();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void finishWork();
 */
    
    void finishWork(const CkEntryOptions *impl_e_opts=NULL);
    
    void finishWork(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void finishWork(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

};
/* ---------------- section proxy -------------- */
class CProxySection_ComputeGridForceMgr: public CProxySection_IrrGroup{
  public:
    typedef ComputeGridForceMgr local_t;
    typedef CkIndex_ComputeGridForceMgr index_t;
    typedef CProxy_ComputeGridForceMgr proxy_t;
    typedef CProxyElement_ComputeGridForceMgr element_t;
    typedef CProxySection_ComputeGridForceMgr section_t;

    CProxySection_ComputeGridForceMgr(void) {
    }
    CProxySection_ComputeGridForceMgr(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_ComputeGridForceMgr(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_ComputeGridForceMgr(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_ComputeGridForceMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_ComputeGridForceMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    ComputeGridForceMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ComputeGridForceMgr* ckLocalBranch(CkGroupID gID) {
      return (ComputeGridForceMgr*)CkLocalBranch(gID);
    }
/* DECLS: ComputeGridForceMgr();
 */
    

/* DECLS: void finishWork();
 */
    
    void finishWork(const CkEntryOptions *impl_e_opts=NULL);

};
#define ComputeGridForceMgr_SDAG_CODE 
typedef CBaseT1<Group, CProxy_ComputeGridForceMgr>CBase_ComputeGridForceMgr;

/* DECLS: nodegroup ComputeGridForceNodeMgr: NodeGroup{
ComputeGridForceNodeMgr();
void depositInitialGrid(GridDepositMsg* impl_msg);
void requestInitialGridData();
void submitRequest(SubReqMsg* impl_msg);
void fetchGridValues(GridRequestMsg* impl_msg);
void recvGridValues(GridValuesMsg* impl_msg);
void ack(GridAckMsg* impl_msg);
void recv(GridSegmentMsg* impl_msg);
void broadcastInitialGridData();
};
 */
 class ComputeGridForceNodeMgr;
 class CkIndex_ComputeGridForceNodeMgr;
 class CProxy_ComputeGridForceNodeMgr;
 class CProxyElement_ComputeGridForceNodeMgr;
 class CProxySection_ComputeGridForceNodeMgr;
/* --------------- index object ------------------ */
class CkIndex_ComputeGridForceNodeMgr:public CkIndex_NodeGroup{
  public:
    typedef ComputeGridForceNodeMgr local_t;
    typedef CkIndex_ComputeGridForceNodeMgr index_t;
    typedef CProxy_ComputeGridForceNodeMgr proxy_t;
    typedef CProxyElement_ComputeGridForceNodeMgr element_t;
    typedef CProxySection_ComputeGridForceNodeMgr section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: ComputeGridForceNodeMgr();
     */
    // Entry point registration at startup
    
    static int reg_ComputeGridForceNodeMgr_void();
    // Entry point index lookup
    
    inline static int idx_ComputeGridForceNodeMgr_void() {
      static int epidx = reg_ComputeGridForceNodeMgr_void();
      return epidx;
    }

    
    static int ckNew() { return idx_ComputeGridForceNodeMgr_void(); }
    
    static void _call_ComputeGridForceNodeMgr_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ComputeGridForceNodeMgr_void(void* impl_msg, void* impl_obj);
    /* DECLS: void depositInitialGrid(GridDepositMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_depositInitialGrid_GridDepositMsg();
    // Entry point index lookup
    
    inline static int idx_depositInitialGrid_GridDepositMsg() {
      static int epidx = reg_depositInitialGrid_GridDepositMsg();
      return epidx;
    }

    
    inline static int idx_depositInitialGrid(void (ComputeGridForceNodeMgr::*)(GridDepositMsg* impl_msg) ) {
      return idx_depositInitialGrid_GridDepositMsg();
    }


    
    static int depositInitialGrid(GridDepositMsg* impl_msg) { return idx_depositInitialGrid_GridDepositMsg(); }
    
    static void _call_depositInitialGrid_GridDepositMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_depositInitialGrid_GridDepositMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void requestInitialGridData();
     */
    // Entry point registration at startup
    
    static int reg_requestInitialGridData_void();
    // Entry point index lookup
    
    inline static int idx_requestInitialGridData_void() {
      static int epidx = reg_requestInitialGridData_void();
      return epidx;
    }

    
    inline static int idx_requestInitialGridData(void (ComputeGridForceNodeMgr::*)() ) {
      return idx_requestInitialGridData_void();
    }


    
    static int requestInitialGridData() { return idx_requestInitialGridData_void(); }
    
    static void _call_requestInitialGridData_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_requestInitialGridData_void(void* impl_msg, void* impl_obj);
    /* DECLS: void submitRequest(SubReqMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_submitRequest_SubReqMsg();
    // Entry point index lookup
    
    inline static int idx_submitRequest_SubReqMsg() {
      static int epidx = reg_submitRequest_SubReqMsg();
      return epidx;
    }

    
    inline static int idx_submitRequest(void (ComputeGridForceNodeMgr::*)(SubReqMsg* impl_msg) ) {
      return idx_submitRequest_SubReqMsg();
    }


    
    static int submitRequest(SubReqMsg* impl_msg) { return idx_submitRequest_SubReqMsg(); }
    
    static void _call_submitRequest_SubReqMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_submitRequest_SubReqMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void fetchGridValues(GridRequestMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_fetchGridValues_GridRequestMsg();
    // Entry point index lookup
    
    inline static int idx_fetchGridValues_GridRequestMsg() {
      static int epidx = reg_fetchGridValues_GridRequestMsg();
      return epidx;
    }

    
    inline static int idx_fetchGridValues(void (ComputeGridForceNodeMgr::*)(GridRequestMsg* impl_msg) ) {
      return idx_fetchGridValues_GridRequestMsg();
    }


    
    static int fetchGridValues(GridRequestMsg* impl_msg) { return idx_fetchGridValues_GridRequestMsg(); }
    
    static void _call_fetchGridValues_GridRequestMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_fetchGridValues_GridRequestMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvGridValues(GridValuesMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvGridValues_GridValuesMsg();
    // Entry point index lookup
    
    inline static int idx_recvGridValues_GridValuesMsg() {
      static int epidx = reg_recvGridValues_GridValuesMsg();
      return epidx;
    }

    
    inline static int idx_recvGridValues(void (ComputeGridForceNodeMgr::*)(GridValuesMsg* impl_msg) ) {
      return idx_recvGridValues_GridValuesMsg();
    }


    
    static int recvGridValues(GridValuesMsg* impl_msg) { return idx_recvGridValues_GridValuesMsg(); }
    
    static void _call_recvGridValues_GridValuesMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvGridValues_GridValuesMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void ack(GridAckMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_ack_GridAckMsg();
    // Entry point index lookup
    
    inline static int idx_ack_GridAckMsg() {
      static int epidx = reg_ack_GridAckMsg();
      return epidx;
    }

    
    inline static int idx_ack(void (ComputeGridForceNodeMgr::*)(GridAckMsg* impl_msg) ) {
      return idx_ack_GridAckMsg();
    }


    
    static int ack(GridAckMsg* impl_msg) { return idx_ack_GridAckMsg(); }
    
    static void _call_ack_GridAckMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ack_GridAckMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recv(GridSegmentMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recv_GridSegmentMsg();
    // Entry point index lookup
    
    inline static int idx_recv_GridSegmentMsg() {
      static int epidx = reg_recv_GridSegmentMsg();
      return epidx;
    }

    
    inline static int idx_recv(void (ComputeGridForceNodeMgr::*)(GridSegmentMsg* impl_msg) ) {
      return idx_recv_GridSegmentMsg();
    }


    
    static int recv(GridSegmentMsg* impl_msg) { return idx_recv_GridSegmentMsg(); }
    
    static void _call_recv_GridSegmentMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recv_GridSegmentMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void broadcastInitialGridData();
     */
    // Entry point registration at startup
    
    static int reg_broadcastInitialGridData_void();
    // Entry point index lookup
    
    inline static int idx_broadcastInitialGridData_void() {
      static int epidx = reg_broadcastInitialGridData_void();
      return epidx;
    }

    
    inline static int idx_broadcastInitialGridData(void (ComputeGridForceNodeMgr::*)() ) {
      return idx_broadcastInitialGridData_void();
    }


    
    static int broadcastInitialGridData() { return idx_broadcastInitialGridData_void(); }
    
    static void _call_broadcastInitialGridData_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_broadcastInitialGridData_void(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_ComputeGridForceNodeMgr: public CProxyElement_NodeGroup{
  public:
    typedef ComputeGridForceNodeMgr local_t;
    typedef CkIndex_ComputeGridForceNodeMgr index_t;
    typedef CProxy_ComputeGridForceNodeMgr proxy_t;
    typedef CProxyElement_ComputeGridForceNodeMgr element_t;
    typedef CProxySection_ComputeGridForceNodeMgr section_t;


    /* TRAM aggregators */

    CProxyElement_ComputeGridForceNodeMgr(void) {
    }
    CProxyElement_ComputeGridForceNodeMgr(const IrrGroup *g) : CProxyElement_NodeGroup(g){
    }
    CProxyElement_ComputeGridForceNodeMgr(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_NodeGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_ComputeGridForceNodeMgr(CkGroupID _gid,int _onPE) : CProxyElement_NodeGroup(_gid,_onPE){
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
    ComputeGridForceNodeMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ComputeGridForceNodeMgr* ckLocalBranch(CkGroupID gID) {
      return (ComputeGridForceNodeMgr*)CkLocalNodeBranch(gID);
    }
/* DECLS: ComputeGridForceNodeMgr();
 */
    

/* DECLS: void depositInitialGrid(GridDepositMsg* impl_msg);
 */
    
    void depositInitialGrid(GridDepositMsg* impl_msg);

/* DECLS: void requestInitialGridData();
 */
    
    void requestInitialGridData(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void submitRequest(SubReqMsg* impl_msg);
 */
    
    void submitRequest(SubReqMsg* impl_msg);

/* DECLS: void fetchGridValues(GridRequestMsg* impl_msg);
 */
    
    void fetchGridValues(GridRequestMsg* impl_msg);

/* DECLS: void recvGridValues(GridValuesMsg* impl_msg);
 */
    
    void recvGridValues(GridValuesMsg* impl_msg);

/* DECLS: void ack(GridAckMsg* impl_msg);
 */
    
    void ack(GridAckMsg* impl_msg);

/* DECLS: void recv(GridSegmentMsg* impl_msg);
 */
    
    void recv(GridSegmentMsg* impl_msg);

/* DECLS: void broadcastInitialGridData();
 */
    
    void broadcastInitialGridData(const CkEntryOptions *impl_e_opts=NULL);

};
/* ---------------- collective proxy -------------- */
class CProxy_ComputeGridForceNodeMgr: public CProxy_NodeGroup{
  public:
    typedef ComputeGridForceNodeMgr local_t;
    typedef CkIndex_ComputeGridForceNodeMgr index_t;
    typedef CProxy_ComputeGridForceNodeMgr proxy_t;
    typedef CProxyElement_ComputeGridForceNodeMgr element_t;
    typedef CProxySection_ComputeGridForceNodeMgr section_t;

    CProxy_ComputeGridForceNodeMgr(void) {
    }
    CProxy_ComputeGridForceNodeMgr(const IrrGroup *g) : CProxy_NodeGroup(g){
    }
    CProxy_ComputeGridForceNodeMgr(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_NodeGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_ComputeGridForceNodeMgr(CkGroupID _gid) : CProxy_NodeGroup(_gid){  }
    CProxyElement_ComputeGridForceNodeMgr operator[](int onPE) const
      {return CProxyElement_ComputeGridForceNodeMgr(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    ComputeGridForceNodeMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ComputeGridForceNodeMgr* ckLocalBranch(CkGroupID gID) {
      return (ComputeGridForceNodeMgr*)CkLocalNodeBranch(gID);
    }
/* DECLS: ComputeGridForceNodeMgr();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void depositInitialGrid(GridDepositMsg* impl_msg);
 */
    
    void depositInitialGrid(GridDepositMsg* impl_msg);

/* DECLS: void requestInitialGridData();
 */
    
    void requestInitialGridData(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void submitRequest(SubReqMsg* impl_msg);
 */
    
    void submitRequest(SubReqMsg* impl_msg);

/* DECLS: void fetchGridValues(GridRequestMsg* impl_msg);
 */
    
    void fetchGridValues(GridRequestMsg* impl_msg);

/* DECLS: void recvGridValues(GridValuesMsg* impl_msg);
 */
    
    void recvGridValues(GridValuesMsg* impl_msg);

/* DECLS: void ack(GridAckMsg* impl_msg);
 */
    
    void ack(GridAckMsg* impl_msg);

/* DECLS: void recv(GridSegmentMsg* impl_msg);
 */
    
    void recv(GridSegmentMsg* impl_msg);

/* DECLS: void broadcastInitialGridData();
 */
    
    void broadcastInitialGridData(const CkEntryOptions *impl_e_opts=NULL);

};
/* ---------------- section proxy -------------- */
class CProxySection_ComputeGridForceNodeMgr: public CProxySection_NodeGroup{
  public:
    typedef ComputeGridForceNodeMgr local_t;
    typedef CkIndex_ComputeGridForceNodeMgr index_t;
    typedef CProxy_ComputeGridForceNodeMgr proxy_t;
    typedef CProxyElement_ComputeGridForceNodeMgr element_t;
    typedef CProxySection_ComputeGridForceNodeMgr section_t;

    CProxySection_ComputeGridForceNodeMgr(void) {
    }
    CProxySection_ComputeGridForceNodeMgr(const IrrGroup *g) : CProxySection_NodeGroup(g){
    }
    CProxySection_ComputeGridForceNodeMgr(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_NodeGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_ComputeGridForceNodeMgr(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_NodeGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_ComputeGridForceNodeMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_NodeGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_ComputeGridForceNodeMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_NodeGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    ComputeGridForceNodeMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ComputeGridForceNodeMgr* ckLocalBranch(CkGroupID gID) {
      return (ComputeGridForceNodeMgr*)CkLocalNodeBranch(gID);
    }
/* DECLS: ComputeGridForceNodeMgr();
 */
    

/* DECLS: void depositInitialGrid(GridDepositMsg* impl_msg);
 */
    
    void depositInitialGrid(GridDepositMsg* impl_msg);

/* DECLS: void requestInitialGridData();
 */
    
    void requestInitialGridData(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void submitRequest(SubReqMsg* impl_msg);
 */
    
    void submitRequest(SubReqMsg* impl_msg);

/* DECLS: void fetchGridValues(GridRequestMsg* impl_msg);
 */
    
    void fetchGridValues(GridRequestMsg* impl_msg);

/* DECLS: void recvGridValues(GridValuesMsg* impl_msg);
 */
    
    void recvGridValues(GridValuesMsg* impl_msg);

/* DECLS: void ack(GridAckMsg* impl_msg);
 */
    
    void ack(GridAckMsg* impl_msg);

/* DECLS: void recv(GridSegmentMsg* impl_msg);
 */
    
    void recv(GridSegmentMsg* impl_msg);

/* DECLS: void broadcastInitialGridData();
 */
    
    void broadcastInitialGridData(const CkEntryOptions *impl_e_opts=NULL);

};
#define ComputeGridForceNodeMgr_SDAG_CODE                                      \
public:                                                                        \
  void broadcastInitialGridData();                                             \
  void _sdag_fnc_broadcastInitialGridData();                                   \
private:                                                                       \
  void broadcastInitialGridData_end();                                         \
  void _slist_0();                                                             \
  void _slist_0_end();                                                         \
  void _if_0();                                                                \
  void _if_0_end();                                                            \
  void _else_0();                                                              \
  void _else_0_end();                                                          \
  void _slist_1();                                                             \
  void _slist_1_end();                                                         \
  void _serial_0();                                                            \
  void _if_1();                                                                \
  void _if_1_end();                                                            \
  void _slist_2();                                                             \
  void _slist_2_end();                                                         \
  SDAG::Continuation* _when_0();                                               \
  void _when_0_end(GridAckMsg* gen0);                                          \
  void _slist_3(GridAckMsg* gen0);                                             \
  void _slist_3_end(GridAckMsg* gen0);                                         \
  void _serial_1(GridAckMsg* gen0);                                            \
  void _if_2();                                                                \
  void _if_2_end();                                                            \
  void _slist_4();                                                             \
  void _slist_4_end();                                                         \
  SDAG::Continuation* _when_1();                                               \
  void _when_1_end(GridAckMsg* gen0);                                          \
  void _slist_5(GridAckMsg* gen0);                                             \
  void _slist_5_end(GridAckMsg* gen0);                                         \
  void _serial_2(GridAckMsg* gen0);                                            \
  void _serial_3();                                                            \
  void _while_0();                                                             \
  void _while_0_end();                                                         \
  void _slist_6();                                                             \
  void _slist_6_end();                                                         \
  SDAG::Continuation* _when_2();                                               \
  void _when_2_end(GridSegmentMsg* gen0);                                      \
  void _slist_7(GridSegmentMsg* gen0);                                         \
  void _slist_7_end(GridSegmentMsg* gen0);                                     \
  void _serial_4(GridSegmentMsg* gen0);                                        \
  void _if_3();                                                                \
  void _if_3_end();                                                            \
  void _slist_8();                                                             \
  void _slist_8_end();                                                         \
  SDAG::Continuation* _when_3();                                               \
  void _when_3_end(GridAckMsg* gen0);                                          \
  void _slist_9(GridAckMsg* gen0);                                             \
  void _slist_9_end(GridAckMsg* gen0);                                         \
  void _serial_5(GridAckMsg* gen0);                                            \
  void _if_4();                                                                \
  void _if_4_end();                                                            \
  void _slist_10();                                                            \
  void _slist_10_end();                                                        \
  SDAG::Continuation* _when_4();                                               \
  void _when_4_end(GridAckMsg* gen0);                                          \
  void _slist_11(GridAckMsg* gen0);                                            \
  void _slist_11_end(GridAckMsg* gen0);                                        \
  void _serial_6(GridAckMsg* gen0);                                            \
  void _slist_12();                                                            \
  void _slist_12_end();                                                        \
  void _serial_7();                                                            \
  void _while_1();                                                             \
  void _while_1_end();                                                         \
  void _slist_13();                                                            \
  void _slist_13_end();                                                        \
  void _if_5();                                                                \
  void _if_5_end();                                                            \
  void _slist_14();                                                            \
  void _slist_14_end();                                                        \
  SDAG::Continuation* _when_5();                                               \
  void _when_5_end(GridAckMsg* gen0);                                          \
  void _slist_15(GridAckMsg* gen0);                                            \
  void _slist_15_end(GridAckMsg* gen0);                                        \
  void _serial_8(GridAckMsg* gen0);                                            \
  void _if_6();                                                                \
  void _if_6_end();                                                            \
  void _slist_16();                                                            \
  void _slist_16_end();                                                        \
  SDAG::Continuation* _when_6();                                               \
  void _when_6_end(GridAckMsg* gen0);                                          \
  void _slist_17(GridAckMsg* gen0);                                            \
  void _slist_17_end(GridAckMsg* gen0);                                        \
  void _serial_9(GridAckMsg* gen0);                                            \
  void _serial_10();                                                           \
  void _serial_11();                                                           \
public:                                                                        \
  void ack(GridAckMsg* am_msg);                                                \
  void recv(GridSegmentMsg* msg_msg);                                          \
public:                                                                        \
  SDAG::dep_ptr __dep;                                                         \
  void _sdag_init();                                                           \
  void __sdag_init();                                                          \
public:                                                                        \
  void _sdag_pup(PUP::er &p);                                                  \
  void __sdag_pup(PUP::er &p) { }                                              \
  static void __sdag_register();                                               \
  static int _sdag_idx_ComputeGridForceNodeMgr_serial_7();                     \
  static int _sdag_reg_ComputeGridForceNodeMgr_serial_7();                     \
  static int _sdag_idx_ComputeGridForceNodeMgr_serial_8();                     \
  static int _sdag_reg_ComputeGridForceNodeMgr_serial_8();                     \
  static int _sdag_idx_ComputeGridForceNodeMgr_serial_9();                     \
  static int _sdag_reg_ComputeGridForceNodeMgr_serial_9();                     \
  static int _sdag_idx_ComputeGridForceNodeMgr_serial_10();                    \
  static int _sdag_reg_ComputeGridForceNodeMgr_serial_10();                    \
  static int _sdag_idx_ComputeGridForceNodeMgr_serial_11();                    \
  static int _sdag_reg_ComputeGridForceNodeMgr_serial_11();                    \
  static int _sdag_idx_ComputeGridForceNodeMgr_serial_0();                     \
  static int _sdag_reg_ComputeGridForceNodeMgr_serial_0();                     \
  static int _sdag_idx_ComputeGridForceNodeMgr_serial_1();                     \
  static int _sdag_reg_ComputeGridForceNodeMgr_serial_1();                     \
  static int _sdag_idx_ComputeGridForceNodeMgr_serial_2();                     \
  static int _sdag_reg_ComputeGridForceNodeMgr_serial_2();                     \
  static int _sdag_idx_ComputeGridForceNodeMgr_serial_3();                     \
  static int _sdag_reg_ComputeGridForceNodeMgr_serial_3();                     \
  static int _sdag_idx_ComputeGridForceNodeMgr_serial_4();                     \
  static int _sdag_reg_ComputeGridForceNodeMgr_serial_4();                     \
  static int _sdag_idx_ComputeGridForceNodeMgr_serial_5();                     \
  static int _sdag_reg_ComputeGridForceNodeMgr_serial_5();                     \
  static int _sdag_idx_ComputeGridForceNodeMgr_serial_6();                     \
  static int _sdag_reg_ComputeGridForceNodeMgr_serial_6();                     \

typedef CBaseT1<NodeGroup, CProxy_ComputeGridForceNodeMgr>CBase_ComputeGridForceNodeMgr;







/* ---------------- method closures -------------- */
class Closure_ComputeGridForceMgr {
  public:


    struct finishWork_2_closure;

};

/* ---------------- method closures -------------- */
class Closure_ComputeGridForceNodeMgr {
  public:



    struct requestInitialGridData_3_closure;







    struct broadcastInitialGridData_9_closure;

};

extern void _registerComputeGridForceMgr(void);
#endif
