#ifndef _DECL_ComputePmeMgr_H_
#define _DECL_ComputePmeMgr_H_
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
/* DECLS: message PmeGridMsg{
int zlist[];
char fgrid[];
float qgrid[];
}
;
 */
class PmeGridMsg;
class CMessage_PmeGridMsg:public CkMessage{
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
    CMessage_PmeGridMsg();
    static void *pack(PmeGridMsg *p);
    static PmeGridMsg* unpack(void* p);
    void *operator new(size_t, int, int, int);
    void *operator new(size_t, int, int, int, const int);
    void *operator new(size_t, int, int, int, const int, const GroupDepNum);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, int, int, int){dealloc(p);}
    void operator delete(void *p, int, int, int, const int){dealloc(p);}
    void operator delete(void *p, int, int, int, const int, const GroupDepNum){dealloc(p);}
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
/* DECLS: message PmeTransMsg{
float qgrid[];
}
;
 */
class PmeTransMsg;
class CMessage_PmeTransMsg:public CkMessage{
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
    CMessage_PmeTransMsg();
    static void *pack(PmeTransMsg *p);
    static PmeTransMsg* unpack(void* p);
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
/* DECLS: message PmeSharedTransMsg;
 */
class PmeSharedTransMsg;
class CMessage_PmeSharedTransMsg:public CkMessage{
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
    CMessage_PmeSharedTransMsg();
    static void *pack(PmeSharedTransMsg *p);
    static PmeSharedTransMsg* unpack(void* p);
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
/* DECLS: message PmeUntransMsg{
float qgrid[];
}
;
 */
class PmeUntransMsg;
class CMessage_PmeUntransMsg:public CkMessage{
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
    CMessage_PmeUntransMsg();
    static void *pack(PmeUntransMsg *p);
    static PmeUntransMsg* unpack(void* p);
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
/* DECLS: message PmeSharedUntransMsg;
 */
class PmeSharedUntransMsg;
class CMessage_PmeSharedUntransMsg:public CkMessage{
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
    CMessage_PmeSharedUntransMsg();
    static void *pack(PmeSharedUntransMsg *p);
    static PmeSharedUntransMsg* unpack(void* p);
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

/* DECLS: group PmePencilMap: CkArrayMap{
PmePencilMap(int i_a, int i_b, int n_b, int n, const int *d);
};
 */
 class PmePencilMap;
 class CkIndex_PmePencilMap;
 class CProxy_PmePencilMap;
 class CProxyElement_PmePencilMap;
 class CProxySection_PmePencilMap;
/* --------------- index object ------------------ */
class CkIndex_PmePencilMap:public CkIndex_CkArrayMap{
  public:
    typedef PmePencilMap local_t;
    typedef CkIndex_PmePencilMap index_t;
    typedef CProxy_PmePencilMap proxy_t;
    typedef CProxyElement_PmePencilMap element_t;
    typedef CProxySection_PmePencilMap section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: PmePencilMap(int i_a, int i_b, int n_b, int n, const int *d);
     */
    // Entry point registration at startup
    
    static int reg_PmePencilMap_marshall1();
    // Entry point index lookup
    
    inline static int idx_PmePencilMap_marshall1() {
      static int epidx = reg_PmePencilMap_marshall1();
      return epidx;
    }

    
    static int ckNew(int i_a, int i_b, int n_b, int n, const int *d) { return idx_PmePencilMap_marshall1(); }
    
    static void _call_PmePencilMap_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_PmePencilMap_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_PmePencilMap_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_PmePencilMap_marshall1(PUP::er &p,void *msg);
};
/* --------------- element proxy ------------------ */
class CProxyElement_PmePencilMap: public CProxyElement_CkArrayMap{
  public:
    typedef PmePencilMap local_t;
    typedef CkIndex_PmePencilMap index_t;
    typedef CProxy_PmePencilMap proxy_t;
    typedef CProxyElement_PmePencilMap element_t;
    typedef CProxySection_PmePencilMap section_t;


    /* TRAM aggregators */

    CProxyElement_PmePencilMap(void) {
    }
    CProxyElement_PmePencilMap(const IrrGroup *g) : CProxyElement_CkArrayMap(g){
    }
    CProxyElement_PmePencilMap(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_CkArrayMap(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_PmePencilMap(CkGroupID _gid,int _onPE) : CProxyElement_CkArrayMap(_gid,_onPE){
    }

    int ckIsDelegated(void) const
    { return CProxyElement_CkArrayMap::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_CkArrayMap::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_CkArrayMap::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_CkArrayMap::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxyElement_CkArrayMap::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxyElement_CkArrayMap::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxyElement_CkArrayMap::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_CkArrayMap::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_CkArrayMap::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_CkArrayMap::ckSetReductionClient(cb); }
int ckGetGroupPe(void) const
{return CProxyElement_CkArrayMap::ckGetGroupPe();}

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_CkArrayMap::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_CkArrayMap::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_CkArrayMap::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxyElement_CkArrayMap::ckSetGroupID(g);
    }
    PmePencilMap* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static PmePencilMap* ckLocalBranch(CkGroupID gID) {
      return (PmePencilMap*)CkLocalBranch(gID);
    }
/* DECLS: PmePencilMap(int i_a, int i_b, int n_b, int n, const int *d);
 */
    

};
/* ---------------- collective proxy -------------- */
class CProxy_PmePencilMap: public CProxy_CkArrayMap{
  public:
    typedef PmePencilMap local_t;
    typedef CkIndex_PmePencilMap index_t;
    typedef CProxy_PmePencilMap proxy_t;
    typedef CProxyElement_PmePencilMap element_t;
    typedef CProxySection_PmePencilMap section_t;

    CProxy_PmePencilMap(void) {
    }
    CProxy_PmePencilMap(const IrrGroup *g) : CProxy_CkArrayMap(g){
    }
    CProxy_PmePencilMap(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_CkArrayMap(_gid,CK_DELCTOR_ARGS){  }
    CProxy_PmePencilMap(CkGroupID _gid) : CProxy_CkArrayMap(_gid){  }
    CProxyElement_PmePencilMap operator[](int onPE) const
      {return CProxyElement_PmePencilMap(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

    int ckIsDelegated(void) const
    { return CProxy_CkArrayMap::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_CkArrayMap::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_CkArrayMap::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_CkArrayMap::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxy_CkArrayMap::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxy_CkArrayMap::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxy_CkArrayMap::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_CkArrayMap::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_CkArrayMap::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_CkArrayMap::ckSetReductionClient(cb); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_CkArrayMap::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_CkArrayMap::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_CkArrayMap::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxy_CkArrayMap::ckSetGroupID(g);
    }
    PmePencilMap* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static PmePencilMap* ckLocalBranch(CkGroupID gID) {
      return (PmePencilMap*)CkLocalBranch(gID);
    }
/* DECLS: PmePencilMap(int i_a, int i_b, int n_b, int n, const int *d);
 */
    
    static CkGroupID ckNew(int i_a, int i_b, int n_b, int n, const int *d, const CkEntryOptions *impl_e_opts=NULL);
    CProxy_PmePencilMap(int i_a, int i_b, int n_b, int n, const int *d, const CkEntryOptions *impl_e_opts=NULL);

};
/* ---------------- section proxy -------------- */
class CProxySection_PmePencilMap: public CProxySection_CkArrayMap{
  public:
    typedef PmePencilMap local_t;
    typedef CkIndex_PmePencilMap index_t;
    typedef CProxy_PmePencilMap proxy_t;
    typedef CProxyElement_PmePencilMap element_t;
    typedef CProxySection_PmePencilMap section_t;

    CProxySection_PmePencilMap(void) {
    }
    CProxySection_PmePencilMap(const IrrGroup *g) : CProxySection_CkArrayMap(g){
    }
    CProxySection_PmePencilMap(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_CkArrayMap(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_PmePencilMap(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_CkArrayMap(_gid,_pelist,_npes,factor){  }
    CProxySection_PmePencilMap(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_CkArrayMap(n,_gid,_pelist,_npes,factor){  }
    CProxySection_PmePencilMap(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_CkArrayMap(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

    int ckIsDelegated(void) const
    { return CProxySection_CkArrayMap::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_CkArrayMap::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_CkArrayMap::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_CkArrayMap::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxySection_CkArrayMap::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxySection_CkArrayMap::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxySection_CkArrayMap::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_CkArrayMap::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_CkArrayMap::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_CkArrayMap::ckSetReductionClient(cb); }
inline int ckGetNumSections() const
{ return CProxySection_CkArrayMap::ckGetNumSections(); }
inline CkSectionInfo &ckGetSectionInfo()
{ return CProxySection_CkArrayMap::ckGetSectionInfo(); }
inline CkSectionID *ckGetSectionIDs()
{ return CProxySection_CkArrayMap::ckGetSectionIDs(); }
inline CkSectionID &ckGetSectionID()
{ return CProxySection_CkArrayMap::ckGetSectionID(); }
inline CkSectionID &ckGetSectionID(int i)
{ return CProxySection_CkArrayMap::ckGetSectionID(i); }
inline CkGroupID ckGetGroupIDn(int i) const
{ return CProxySection_CkArrayMap::ckGetGroupIDn(i); }
inline const int *ckGetElements() const
{ return CProxySection_CkArrayMap::ckGetElements(); }
inline const int *ckGetElements(int i) const
{ return CProxySection_CkArrayMap::ckGetElements(i); }
inline int ckGetNumElements() const
{ return CProxySection_CkArrayMap::ckGetNumElements(); } 
inline int ckGetNumElements(int i) const
{ return CProxySection_CkArrayMap::ckGetNumElements(i); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_CkArrayMap::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_CkArrayMap::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_CkArrayMap::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxySection_CkArrayMap::ckSetGroupID(g);
    }
    PmePencilMap* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static PmePencilMap* ckLocalBranch(CkGroupID gID) {
      return (PmePencilMap*)CkLocalBranch(gID);
    }
/* DECLS: PmePencilMap(int i_a, int i_b, int n_b, int n, const int *d);
 */
    

};
#define PmePencilMap_SDAG_CODE 
typedef CBaseT1<CkArrayMap, CProxy_PmePencilMap>CBase_PmePencilMap;

#ifndef GROUPDEPNUM_DECLARED
# define GROUPDEPNUM_DECLARED
struct GroupDepNum
{
  int groupDepNum;
  explicit GroupDepNum(int g = 0) : groupDepNum{g} { }
  operator int() const { return groupDepNum; }
};
#endif
/* DECLS: message PmePencilInitMsg;
 */
class PmePencilInitMsg;
class CMessage_PmePencilInitMsg:public CkMessage{
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
    CMessage_PmePencilInitMsg();
    static void *pack(PmePencilInitMsg *p);
    static PmePencilInitMsg* unpack(void* p);
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
/* DECLS: message PmeAckMsg;
 */
class PmeAckMsg;
class CMessage_PmeAckMsg:public CkMessage{
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
    CMessage_PmeAckMsg();
    static void *pack(PmeAckMsg *p);
    static PmeAckMsg* unpack(void* p);
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
/* DECLS: message PmeEvirMsg{
PmeReduction evir[];
}
;
 */
class PmeEvirMsg;
class CMessage_PmeEvirMsg:public CkMessage{
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
    CMessage_PmeEvirMsg();
    static void *pack(PmeEvirMsg *p);
    static PmeEvirMsg* unpack(void* p);
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


/* DECLS: array PmeZPencil: ArrayElement{
PmeZPencil();
void recvGrid(PmeGridMsg* impl_msg);
void recvUntrans(PmeUntransMsg* impl_msg);
void recvAck(PmeAckMsg* impl_msg);
void recvNodeAck(PmeAckMsg* impl_msg);
void dummyRecvGrid(int pe, int done);
void init(PmePencilInitMsg* impl_msg);
PmeZPencil(CkMigrateMessage* impl_msg);
};
 */
 class PmeZPencil;
 class CkIndex_PmeZPencil;
 class CProxy_PmeZPencil;
 class CProxyElement_PmeZPencil;
 class CProxySection_PmeZPencil;
/* --------------- index object ------------------ */
class CkIndex_PmeZPencil:public CkIndex_ArrayElement{
  public:
    typedef PmeZPencil local_t;
    typedef CkIndex_PmeZPencil index_t;
    typedef CProxy_PmeZPencil proxy_t;
    typedef CProxyElement_PmeZPencil element_t;
    typedef CProxySection_PmeZPencil section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: PmeZPencil();
     */
    // Entry point registration at startup
    
    static int reg_PmeZPencil_void();
    // Entry point index lookup
    
    inline static int idx_PmeZPencil_void() {
      static int epidx = reg_PmeZPencil_void();
      return epidx;
    }

    
    static int ckNew() { return idx_PmeZPencil_void(); }
    
    static void _call_PmeZPencil_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_PmeZPencil_void(void* impl_msg, void* impl_obj);
    /* DECLS: void recvGrid(PmeGridMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvGrid_PmeGridMsg();
    // Entry point index lookup
    
    inline static int idx_recvGrid_PmeGridMsg() {
      static int epidx = reg_recvGrid_PmeGridMsg();
      return epidx;
    }

    
    inline static int idx_recvGrid(void (PmeZPencil::*)(PmeGridMsg* impl_msg) ) {
      return idx_recvGrid_PmeGridMsg();
    }


    
    static int recvGrid(PmeGridMsg* impl_msg) { return idx_recvGrid_PmeGridMsg(); }
    
    static void _call_recvGrid_PmeGridMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvGrid_PmeGridMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvUntrans(PmeUntransMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvUntrans_PmeUntransMsg();
    // Entry point index lookup
    
    inline static int idx_recvUntrans_PmeUntransMsg() {
      static int epidx = reg_recvUntrans_PmeUntransMsg();
      return epidx;
    }

    
    inline static int idx_recvUntrans(void (PmeZPencil::*)(PmeUntransMsg* impl_msg) ) {
      return idx_recvUntrans_PmeUntransMsg();
    }


    
    static int recvUntrans(PmeUntransMsg* impl_msg) { return idx_recvUntrans_PmeUntransMsg(); }
    
    static void _call_recvUntrans_PmeUntransMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvUntrans_PmeUntransMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvAck(PmeAckMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvAck_PmeAckMsg();
    // Entry point index lookup
    
    inline static int idx_recvAck_PmeAckMsg() {
      static int epidx = reg_recvAck_PmeAckMsg();
      return epidx;
    }

    
    inline static int idx_recvAck(void (PmeZPencil::*)(PmeAckMsg* impl_msg) ) {
      return idx_recvAck_PmeAckMsg();
    }


    
    static int recvAck(PmeAckMsg* impl_msg) { return idx_recvAck_PmeAckMsg(); }
    
    static void _call_recvAck_PmeAckMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvAck_PmeAckMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvNodeAck(PmeAckMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvNodeAck_PmeAckMsg();
    // Entry point index lookup
    
    inline static int idx_recvNodeAck_PmeAckMsg() {
      static int epidx = reg_recvNodeAck_PmeAckMsg();
      return epidx;
    }

    
    inline static int idx_recvNodeAck(void (PmeZPencil::*)(PmeAckMsg* impl_msg) ) {
      return idx_recvNodeAck_PmeAckMsg();
    }


    
    static int recvNodeAck(PmeAckMsg* impl_msg) { return idx_recvNodeAck_PmeAckMsg(); }
    
    static void _call_recvNodeAck_PmeAckMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvNodeAck_PmeAckMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void dummyRecvGrid(int pe, int done);
     */
    // Entry point registration at startup
    
    static int reg_dummyRecvGrid_marshall6();
    // Entry point index lookup
    
    inline static int idx_dummyRecvGrid_marshall6() {
      static int epidx = reg_dummyRecvGrid_marshall6();
      return epidx;
    }

    
    inline static int idx_dummyRecvGrid(void (PmeZPencil::*)(int pe, int done) ) {
      return idx_dummyRecvGrid_marshall6();
    }


    
    static int dummyRecvGrid(int pe, int done = 0) { return idx_dummyRecvGrid_marshall6(); }
    
    static void _call_dummyRecvGrid_marshall6(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_dummyRecvGrid_marshall6(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_dummyRecvGrid_marshall6(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_dummyRecvGrid_marshall6(PUP::er &p,void *msg);
    /* DECLS: void init(PmePencilInitMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_init_PmePencilInitMsg();
    // Entry point index lookup
    
    inline static int idx_init_PmePencilInitMsg() {
      static int epidx = reg_init_PmePencilInitMsg();
      return epidx;
    }

    
    inline static int idx_init(void (PmeZPencil::*)(PmePencilInitMsg* impl_msg) ) {
      return idx_init_PmePencilInitMsg();
    }


    
    static int init(PmePencilInitMsg* impl_msg) { return idx_init_PmePencilInitMsg(); }
    
    static void _call_init_PmePencilInitMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_init_PmePencilInitMsg(void* impl_msg, void* impl_obj);
    /* DECLS: PmeZPencil(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_PmeZPencil_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_PmeZPencil_CkMigrateMessage() {
      static int epidx = reg_PmeZPencil_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_PmeZPencil_CkMigrateMessage(); }
    
    static void _call_PmeZPencil_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_PmeZPencil_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_PmeZPencil : public CProxyElement_ArrayElement{
  public:
    typedef PmeZPencil local_t;
    typedef CkIndex_PmeZPencil index_t;
    typedef CProxy_PmeZPencil proxy_t;
    typedef CProxyElement_PmeZPencil element_t;
    typedef CProxySection_PmeZPencil section_t;

    using array_index_t = CkArrayIndex3D;

    /* TRAM aggregators */

    CProxyElement_PmeZPencil(void) {
    }
    CProxyElement_PmeZPencil(const ArrayElement *e) : CProxyElement_ArrayElement(e){
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_ArrayElement::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxyElement_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxyElement_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxyElement_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxyElement_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxyElement_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxyElement_ArrayElement::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxyElement_ArrayElement::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxyElement_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxyElement_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxyElement_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxyElement_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_ArrayElement::ckSetReductionClient(cb); }

    inline void ckInsert(CkArrayMessage *m,int ctor,int onPe)
    { CProxyElement_ArrayElement::ckInsert(m,ctor,onPe); }
    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0) const
    { CProxyElement_ArrayElement::ckSend(m,ep,opts); }
    inline void *ckSendSync(CkArrayMessage *m, int ep) const
    { return CProxyElement_ArrayElement::ckSendSync(m,ep); }
    inline const CkArrayIndex &ckGetIndex() const
    { return CProxyElement_ArrayElement::ckGetIndex(); }

    PmeZPencil *ckLocal(void) const
    { return (PmeZPencil *)CProxyElement_ArrayElement::ckLocal(); }

    CProxyElement_PmeZPencil(const CkArrayID &aid,const CkArrayIndex3D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_PmeZPencil(const CkArrayID &aid,const CkArrayIndex3D &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}

    CProxyElement_PmeZPencil(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_PmeZPencil(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}
/* DECLS: PmeZPencil();
 */
    
    void insert(int onPE=-1, const CkEntryOptions *impl_e_opts=NULL);
/* DECLS: void recvGrid(PmeGridMsg* impl_msg);
 */
    
    void recvGrid(PmeGridMsg* impl_msg) ;

/* DECLS: void recvUntrans(PmeUntransMsg* impl_msg);
 */
    
    void recvUntrans(PmeUntransMsg* impl_msg) ;

/* DECLS: void recvAck(PmeAckMsg* impl_msg);
 */
    
    void recvAck(PmeAckMsg* impl_msg) ;

/* DECLS: void recvNodeAck(PmeAckMsg* impl_msg);
 */
    
    void recvNodeAck(PmeAckMsg* impl_msg) ;

/* DECLS: void dummyRecvGrid(int pe, int done);
 */
    
    void dummyRecvGrid(int pe, int done = 0, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void init(PmePencilInitMsg* impl_msg);
 */
    
    void init(PmePencilInitMsg* impl_msg) ;

/* DECLS: PmeZPencil(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
 class CProxy_PmeZPencil : public CProxy_ArrayElement{
  public:
    typedef PmeZPencil local_t;
    typedef CkIndex_PmeZPencil index_t;
    typedef CProxy_PmeZPencil proxy_t;
    typedef CProxyElement_PmeZPencil element_t;
    typedef CProxySection_PmeZPencil section_t;

    using array_index_t = CkArrayIndex3D;
    CProxy_PmeZPencil(void) {
    }
    CProxy_PmeZPencil(const ArrayElement *e) : CProxy_ArrayElement(e){
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_ArrayElement::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxy_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxy_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxy_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxy_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxy_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxy_ArrayElement::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxy_ArrayElement::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxy_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxy_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxy_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxy_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_ArrayElement::ckSetReductionClient(cb); }

    // Generalized array indexing:
    CProxyElement_PmeZPencil operator [] (const CkArrayIndex3D &idx) const
    { return CProxyElement_PmeZPencil(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_PmeZPencil operator() (const CkArrayIndex3D &idx) const
    { return CProxyElement_PmeZPencil(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_PmeZPencil operator () (int i0,int i1,int i2) const 
        {return CProxyElement_PmeZPencil(ckGetArrayID(), CkArrayIndex3D(i0,i1,i2), CK_DELCTOR_CALL);}
    CProxyElement_PmeZPencil operator () (CkIndex3D idx) const 
        {return CProxyElement_PmeZPencil(ckGetArrayID(), CkArrayIndex3D(idx), CK_DELCTOR_CALL);}
    CProxy_PmeZPencil(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_PmeZPencil(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: PmeZPencil();
 */
    
    static CkArrayID ckNew(const CkArrayOptions &opts = CkArrayOptions(), const CkEntryOptions *impl_e_opts=NULL);
    static void      ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);
    static CkArrayID ckNew(const int s1, const int s2, const int s3, const CkEntryOptions *impl_e_opts=NULL);
    static void ckNew(const int s1, const int s2, const int s3, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvGrid(PmeGridMsg* impl_msg);
 */
    
    void recvGrid(PmeGridMsg* impl_msg) ;

/* DECLS: void recvUntrans(PmeUntransMsg* impl_msg);
 */
    
    void recvUntrans(PmeUntransMsg* impl_msg) ;

/* DECLS: void recvAck(PmeAckMsg* impl_msg);
 */
    
    void recvAck(PmeAckMsg* impl_msg) ;

/* DECLS: void recvNodeAck(PmeAckMsg* impl_msg);
 */
    
    void recvNodeAck(PmeAckMsg* impl_msg) ;

/* DECLS: void dummyRecvGrid(int pe, int done);
 */
    
    void dummyRecvGrid(int pe, int done = 0, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void init(PmePencilInitMsg* impl_msg);
 */
    
    void init(PmePencilInitMsg* impl_msg) ;

/* DECLS: PmeZPencil(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
 class CProxySection_PmeZPencil : public CProxySection_ArrayElement{
  public:
    typedef PmeZPencil local_t;
    typedef CkIndex_PmeZPencil index_t;
    typedef CProxy_PmeZPencil proxy_t;
    typedef CProxyElement_PmeZPencil element_t;
    typedef CProxySection_PmeZPencil section_t;

    using array_index_t = CkArrayIndex3D;
    CProxySection_PmeZPencil(void) {
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_ArrayElement::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxySection_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxySection_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxySection_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxySection_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxySection_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxySection_ArrayElement::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxySection_ArrayElement::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxySection_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxySection_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxySection_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxySection_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_ArrayElement::ckSetReductionClient(cb); }

    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0)
    { CProxySection_ArrayElement::ckSend(m,ep,opts); }
    inline CkSectionInfo &ckGetSectionInfo()
    { return CProxySection_ArrayElement::ckGetSectionInfo(); }
    inline CkSectionID *ckGetSectionIDs()
    { return CProxySection_ArrayElement::ckGetSectionIDs(); }
    inline CkSectionID &ckGetSectionID()
    { return CProxySection_ArrayElement::ckGetSectionID(); }
    inline CkSectionID &ckGetSectionID(int i)
    { return CProxySection_ArrayElement::ckGetSectionID(i); }
    inline CkArrayID ckGetArrayIDn(int i) const
    { return CProxySection_ArrayElement::ckGetArrayIDn(i); } 
    inline CkArrayIndex *ckGetArrayElements() const
    { return CProxySection_ArrayElement::ckGetArrayElements(); }
    inline CkArrayIndex *ckGetArrayElements(int i) const
    { return CProxySection_ArrayElement::ckGetArrayElements(i); }
    inline int ckGetNumElements() const
    { return CProxySection_ArrayElement::ckGetNumElements(); } 
    inline int ckGetNumElements(int i) const
    { return CProxySection_ArrayElement::ckGetNumElements(i); }    // Generalized array indexing:
    CProxyElement_PmeZPencil operator [] (const CkArrayIndex3D &idx) const
        {return CProxyElement_PmeZPencil(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_PmeZPencil operator() (const CkArrayIndex3D &idx) const
        {return CProxyElement_PmeZPencil(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_PmeZPencil operator () (int idx) const 
        {return CProxyElement_PmeZPencil(ckGetArrayID(), *(CkArrayIndex3D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex3D *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      return CkSectionID(aid, elems, nElems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, const std::vector<CkArrayIndex3D> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      return CkSectionID(aid, elems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, int l1, int u1, int s1, int l2, int u2, int s2, int l3, int u3, int s3, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      std::vector<CkArrayIndex3D> al;
      for (int i=l1; i<=u1; i+=s1) 
        for (int j=l2; j<=u2; j+=s2) 
          for (int k=l3; k<=u3; k+=s3) 
          al.emplace_back(i, j, k);
      return CkSectionID(aid, al, factor);
    } 
    CProxySection_PmeZPencil(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_PmeZPencil(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_PmeZPencil(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems,nElems, factor) {}
    CProxySection_PmeZPencil(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems, factor) { ckAutoDelegate(); }
    CProxySection_PmeZPencil(const CkSectionID &sid)  
        :CProxySection_ArrayElement(sid) { ckAutoDelegate(); }
    CProxySection_PmeZPencil(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_PmeZPencil(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_PmeZPencil(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) { ckAutoDelegate(); }
    CProxySection_PmeZPencil(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems) 
        :CProxySection_ArrayElement(aid,elems) { ckAutoDelegate(); }
    CProxySection_PmeZPencil(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, int factor) 
        :CProxySection_ArrayElement(n,aid,elems,nElems, factor) { ckAutoDelegate(); }
    CProxySection_PmeZPencil(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, int factor) 
        :CProxySection_ArrayElement(aid,elems, factor) { ckAutoDelegate(); }
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex *elems, int nElems) {
      return CkSectionID(aid, elems, nElems);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems) {
       return CkSectionID(aid, elems);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor) {
      return CkSectionID(aid, elems, nElems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor) {
      return CkSectionID(aid, elems, factor);
    } 
    void ckAutoDelegate(int opts=1) {
      if(ckIsDelegated()) return;
      CProxySection_ArrayElement::ckAutoDelegate(opts);
    } 
    void setReductionClient(CkCallback *cb) {
      CProxySection_ArrayElement::setReductionClient(cb);
    } 
    void resetSection() {
      CProxySection_ArrayElement::resetSection();
    } 
    static void contribute(CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    static void contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    template <typename T>
    static void contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    static void contribute(CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
    static void contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
    template <typename T>
    static void contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
/* DECLS: PmeZPencil();
 */
    

/* DECLS: void recvGrid(PmeGridMsg* impl_msg);
 */
    
    void recvGrid(PmeGridMsg* impl_msg) ;

/* DECLS: void recvUntrans(PmeUntransMsg* impl_msg);
 */
    
    void recvUntrans(PmeUntransMsg* impl_msg) ;

/* DECLS: void recvAck(PmeAckMsg* impl_msg);
 */
    
    void recvAck(PmeAckMsg* impl_msg) ;

/* DECLS: void recvNodeAck(PmeAckMsg* impl_msg);
 */
    
    void recvNodeAck(PmeAckMsg* impl_msg) ;

/* DECLS: void dummyRecvGrid(int pe, int done);
 */
    
    void dummyRecvGrid(int pe, int done = 0, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void init(PmePencilInitMsg* impl_msg);
 */
    
    void init(PmePencilInitMsg* impl_msg) ;

/* DECLS: PmeZPencil(CkMigrateMessage* impl_msg);
 */

};
#define PmeZPencil_SDAG_CODE                                                   \
public:                                                                        \
  void init(PmePencilInitMsg initmsg);                                         \
  void _sdag_fnc_init(PmePencilInitMsg initmsg);                               \
  void _sdag_fnc_init(PmePencilInitMsg* gen0);                                 \
private:                                                                       \
  void init_end(PmePencilInitMsg* gen0);                                       \
  void _slist_0(PmePencilInitMsg* gen0);                                       \
  void _slist_0_end(PmePencilInitMsg* gen0);                                   \
  void _serial_0(PmePencilInitMsg* gen0);                                      \
  void _while_0(PmePencilInitMsg* gen0);                                       \
  void _while_0_end(PmePencilInitMsg* gen0);                                   \
  void _slist_1(PmePencilInitMsg* gen0);                                       \
  void _slist_1_end(PmePencilInitMsg* gen0);                                   \
  SDAG::Continuation* _when_0(PmePencilInitMsg* gen0);                         \
  void _when_0_end(PmePencilInitMsg* gen0, Closure_PmeZPencil::dummyRecvGrid_6_closure* gen1);\
  void _serial_1(PmePencilInitMsg* gen0, Closure_PmeZPencil::dummyRecvGrid_6_closure* gen1);\
  void _while_1(PmePencilInitMsg* gen0);                                       \
  void _while_1_end(PmePencilInitMsg* gen0);                                   \
  void _slist_2(PmePencilInitMsg* gen0);                                       \
  void _slist_2_end(PmePencilInitMsg* gen0);                                   \
  void _serial_2(PmePencilInitMsg* gen0);                                      \
  void _for_0(PmePencilInitMsg* gen0);                                         \
  void _for_0_end(PmePencilInitMsg* gen0);                                     \
  void _slist_3(PmePencilInitMsg* gen0);                                       \
  void _slist_3_end(PmePencilInitMsg* gen0);                                   \
  SDAG::Continuation* _when_1(PmePencilInitMsg* gen0);                         \
  void _when_1_end(PmePencilInitMsg* gen0, PmeGridMsg* gen1);                  \
  void _serial_3(PmePencilInitMsg* gen0, PmeGridMsg* gen1);                    \
  void _if_0(PmePencilInitMsg* gen0);                                          \
  void _if_0_end(PmePencilInitMsg* gen0);                                      \
  void _slist_4(PmePencilInitMsg* gen0);                                       \
  void _slist_4_end(PmePencilInitMsg* gen0);                                   \
  void _serial_4(PmePencilInitMsg* gen0);                                      \
  void _serial_5(PmePencilInitMsg* gen0);                                      \
  void _if_1(PmePencilInitMsg* gen0);                                          \
  void _if_1_end(PmePencilInitMsg* gen0);                                      \
  void _slist_5(PmePencilInitMsg* gen0);                                       \
  void _slist_5_end(PmePencilInitMsg* gen0);                                   \
  void _for_1(PmePencilInitMsg* gen0);                                         \
  void _for_1_end(PmePencilInitMsg* gen0);                                     \
  void _slist_6(PmePencilInitMsg* gen0);                                       \
  void _slist_6_end(PmePencilInitMsg* gen0);                                   \
  SDAG::Continuation* _when_2(PmePencilInitMsg* gen0);                         \
  void _when_2_end(PmePencilInitMsg* gen0, PmeUntransMsg* gen1);               \
  void _serial_6(PmePencilInitMsg* gen0, PmeUntransMsg* gen1);                 \
  void _serial_7(PmePencilInitMsg* gen0);                                      \
  void _serial_8(PmePencilInitMsg* gen0);                                      \
  void _if_2(PmePencilInitMsg* gen0);                                          \
  void _if_2_end(PmePencilInitMsg* gen0);                                      \
  void _slist_7(PmePencilInitMsg* gen0);                                       \
  void _slist_7_end(PmePencilInitMsg* gen0);                                   \
  void _for_2(PmePencilInitMsg* gen0);                                         \
  void _for_2_end(PmePencilInitMsg* gen0);                                     \
  void _slist_8(PmePencilInitMsg* gen0);                                       \
  void _slist_8_end(PmePencilInitMsg* gen0);                                   \
  SDAG::Continuation* _when_3(PmePencilInitMsg* gen0);                         \
  void _when_3_end(PmePencilInitMsg* gen0, PmeAckMsg* gen1);                   \
  void _serial_9(PmePencilInitMsg* gen0, PmeAckMsg* gen1);                     \
public:                                                                        \
  void dummyRecvGrid(Closure_PmeZPencil::dummyRecvGrid_6_closure* genClosure); \
  void dummyRecvGrid(int pe, int done);                                        \
  void recvGrid(PmeGridMsg* msg_msg);                                          \
  void recvUntrans(PmeUntransMsg* msg_msg);                                    \
  void recvAck(PmeAckMsg* msg_msg);                                            \
public:                                                                        \
  SDAG::dep_ptr __dep;                                                         \
  void _sdag_init();                                                           \
  void __sdag_init();                                                          \
public:                                                                        \
  void _sdag_pup(PUP::er &p);                                                  \
  void __sdag_pup(PUP::er &p) { }                                              \
  static void __sdag_register();                                               \
  static int _sdag_idx_PmeZPencil_serial_0();                                  \
  static int _sdag_reg_PmeZPencil_serial_0();                                  \
  static int _sdag_idx_PmeZPencil_serial_1();                                  \
  static int _sdag_reg_PmeZPencil_serial_1();                                  \
  static int _sdag_idx_PmeZPencil_serial_2();                                  \
  static int _sdag_reg_PmeZPencil_serial_2();                                  \
  static int _sdag_idx_PmeZPencil_recv_grid();                                 \
  static int _sdag_reg_PmeZPencil_recv_grid();                                 \
  static int _sdag_idx_PmeZPencil_forward_fft();                               \
  static int _sdag_reg_PmeZPencil_forward_fft();                               \
  static int _sdag_idx_PmeZPencil_send_trans();                                \
  static int _sdag_reg_PmeZPencil_send_trans();                                \
  static int _sdag_idx_PmeZPencil_recv_untrans();                              \
  static int _sdag_reg_PmeZPencil_recv_untrans();                              \
  static int _sdag_idx_PmeZPencil_backward_fft();                              \
  static int _sdag_reg_PmeZPencil_backward_fft();                              \
  static int _sdag_idx_PmeZPencil_send_ungrid();                               \
  static int _sdag_reg_PmeZPencil_send_ungrid();                               \
  static int _sdag_idx_PmeZPencil_serial_9();                                  \
  static int _sdag_reg_PmeZPencil_serial_9();                                  \

typedef CBaseT1<ArrayElementT<CkIndex3D>, CProxy_PmeZPencil>CBase_PmeZPencil;

/* DECLS: array PmeYPencil: ArrayElement{
PmeYPencil();
void recvTrans(PmeTransMsg* impl_msg);
void recvUntrans(PmeUntransMsg* impl_msg);
void recvAck(PmeAckMsg* impl_msg);
void recvNodeAck(PmeAckMsg* impl_msg);
void init(PmePencilInitMsg* impl_msg);
PmeYPencil(CkMigrateMessage* impl_msg);
};
 */
 class PmeYPencil;
 class CkIndex_PmeYPencil;
 class CProxy_PmeYPencil;
 class CProxyElement_PmeYPencil;
 class CProxySection_PmeYPencil;
/* --------------- index object ------------------ */
class CkIndex_PmeYPencil:public CkIndex_ArrayElement{
  public:
    typedef PmeYPencil local_t;
    typedef CkIndex_PmeYPencil index_t;
    typedef CProxy_PmeYPencil proxy_t;
    typedef CProxyElement_PmeYPencil element_t;
    typedef CProxySection_PmeYPencil section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: PmeYPencil();
     */
    // Entry point registration at startup
    
    static int reg_PmeYPencil_void();
    // Entry point index lookup
    
    inline static int idx_PmeYPencil_void() {
      static int epidx = reg_PmeYPencil_void();
      return epidx;
    }

    
    static int ckNew() { return idx_PmeYPencil_void(); }
    
    static void _call_PmeYPencil_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_PmeYPencil_void(void* impl_msg, void* impl_obj);
    /* DECLS: void recvTrans(PmeTransMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvTrans_PmeTransMsg();
    // Entry point index lookup
    
    inline static int idx_recvTrans_PmeTransMsg() {
      static int epidx = reg_recvTrans_PmeTransMsg();
      return epidx;
    }

    
    inline static int idx_recvTrans(void (PmeYPencil::*)(PmeTransMsg* impl_msg) ) {
      return idx_recvTrans_PmeTransMsg();
    }


    
    static int recvTrans(PmeTransMsg* impl_msg) { return idx_recvTrans_PmeTransMsg(); }
    
    static void _call_recvTrans_PmeTransMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvTrans_PmeTransMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvUntrans(PmeUntransMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvUntrans_PmeUntransMsg();
    // Entry point index lookup
    
    inline static int idx_recvUntrans_PmeUntransMsg() {
      static int epidx = reg_recvUntrans_PmeUntransMsg();
      return epidx;
    }

    
    inline static int idx_recvUntrans(void (PmeYPencil::*)(PmeUntransMsg* impl_msg) ) {
      return idx_recvUntrans_PmeUntransMsg();
    }


    
    static int recvUntrans(PmeUntransMsg* impl_msg) { return idx_recvUntrans_PmeUntransMsg(); }
    
    static void _call_recvUntrans_PmeUntransMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvUntrans_PmeUntransMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvAck(PmeAckMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvAck_PmeAckMsg();
    // Entry point index lookup
    
    inline static int idx_recvAck_PmeAckMsg() {
      static int epidx = reg_recvAck_PmeAckMsg();
      return epidx;
    }

    
    inline static int idx_recvAck(void (PmeYPencil::*)(PmeAckMsg* impl_msg) ) {
      return idx_recvAck_PmeAckMsg();
    }


    
    static int recvAck(PmeAckMsg* impl_msg) { return idx_recvAck_PmeAckMsg(); }
    
    static void _call_recvAck_PmeAckMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvAck_PmeAckMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvNodeAck(PmeAckMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvNodeAck_PmeAckMsg();
    // Entry point index lookup
    
    inline static int idx_recvNodeAck_PmeAckMsg() {
      static int epidx = reg_recvNodeAck_PmeAckMsg();
      return epidx;
    }

    
    inline static int idx_recvNodeAck(void (PmeYPencil::*)(PmeAckMsg* impl_msg) ) {
      return idx_recvNodeAck_PmeAckMsg();
    }


    
    static int recvNodeAck(PmeAckMsg* impl_msg) { return idx_recvNodeAck_PmeAckMsg(); }
    
    static void _call_recvNodeAck_PmeAckMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvNodeAck_PmeAckMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void init(PmePencilInitMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_init_PmePencilInitMsg();
    // Entry point index lookup
    
    inline static int idx_init_PmePencilInitMsg() {
      static int epidx = reg_init_PmePencilInitMsg();
      return epidx;
    }

    
    inline static int idx_init(void (PmeYPencil::*)(PmePencilInitMsg* impl_msg) ) {
      return idx_init_PmePencilInitMsg();
    }


    
    static int init(PmePencilInitMsg* impl_msg) { return idx_init_PmePencilInitMsg(); }
    
    static void _call_init_PmePencilInitMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_init_PmePencilInitMsg(void* impl_msg, void* impl_obj);
    /* DECLS: PmeYPencil(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_PmeYPencil_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_PmeYPencil_CkMigrateMessage() {
      static int epidx = reg_PmeYPencil_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_PmeYPencil_CkMigrateMessage(); }
    
    static void _call_PmeYPencil_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_PmeYPencil_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_PmeYPencil : public CProxyElement_ArrayElement{
  public:
    typedef PmeYPencil local_t;
    typedef CkIndex_PmeYPencil index_t;
    typedef CProxy_PmeYPencil proxy_t;
    typedef CProxyElement_PmeYPencil element_t;
    typedef CProxySection_PmeYPencil section_t;

    using array_index_t = CkArrayIndex3D;

    /* TRAM aggregators */

    CProxyElement_PmeYPencil(void) {
    }
    CProxyElement_PmeYPencil(const ArrayElement *e) : CProxyElement_ArrayElement(e){
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_ArrayElement::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxyElement_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxyElement_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxyElement_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxyElement_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxyElement_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxyElement_ArrayElement::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxyElement_ArrayElement::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxyElement_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxyElement_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxyElement_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxyElement_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_ArrayElement::ckSetReductionClient(cb); }

    inline void ckInsert(CkArrayMessage *m,int ctor,int onPe)
    { CProxyElement_ArrayElement::ckInsert(m,ctor,onPe); }
    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0) const
    { CProxyElement_ArrayElement::ckSend(m,ep,opts); }
    inline void *ckSendSync(CkArrayMessage *m, int ep) const
    { return CProxyElement_ArrayElement::ckSendSync(m,ep); }
    inline const CkArrayIndex &ckGetIndex() const
    { return CProxyElement_ArrayElement::ckGetIndex(); }

    PmeYPencil *ckLocal(void) const
    { return (PmeYPencil *)CProxyElement_ArrayElement::ckLocal(); }

    CProxyElement_PmeYPencil(const CkArrayID &aid,const CkArrayIndex3D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_PmeYPencil(const CkArrayID &aid,const CkArrayIndex3D &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}

    CProxyElement_PmeYPencil(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_PmeYPencil(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}
/* DECLS: PmeYPencil();
 */
    
    void insert(int onPE=-1, const CkEntryOptions *impl_e_opts=NULL);
/* DECLS: void recvTrans(PmeTransMsg* impl_msg);
 */
    
    void recvTrans(PmeTransMsg* impl_msg) ;

/* DECLS: void recvUntrans(PmeUntransMsg* impl_msg);
 */
    
    void recvUntrans(PmeUntransMsg* impl_msg) ;

/* DECLS: void recvAck(PmeAckMsg* impl_msg);
 */
    
    void recvAck(PmeAckMsg* impl_msg) ;

/* DECLS: void recvNodeAck(PmeAckMsg* impl_msg);
 */
    
    void recvNodeAck(PmeAckMsg* impl_msg) ;

/* DECLS: void init(PmePencilInitMsg* impl_msg);
 */
    
    void init(PmePencilInitMsg* impl_msg) ;

/* DECLS: PmeYPencil(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
 class CProxy_PmeYPencil : public CProxy_ArrayElement{
  public:
    typedef PmeYPencil local_t;
    typedef CkIndex_PmeYPencil index_t;
    typedef CProxy_PmeYPencil proxy_t;
    typedef CProxyElement_PmeYPencil element_t;
    typedef CProxySection_PmeYPencil section_t;

    using array_index_t = CkArrayIndex3D;
    CProxy_PmeYPencil(void) {
    }
    CProxy_PmeYPencil(const ArrayElement *e) : CProxy_ArrayElement(e){
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_ArrayElement::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxy_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxy_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxy_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxy_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxy_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxy_ArrayElement::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxy_ArrayElement::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxy_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxy_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxy_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxy_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_ArrayElement::ckSetReductionClient(cb); }

    // Generalized array indexing:
    CProxyElement_PmeYPencil operator [] (const CkArrayIndex3D &idx) const
    { return CProxyElement_PmeYPencil(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_PmeYPencil operator() (const CkArrayIndex3D &idx) const
    { return CProxyElement_PmeYPencil(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_PmeYPencil operator () (int i0,int i1,int i2) const 
        {return CProxyElement_PmeYPencil(ckGetArrayID(), CkArrayIndex3D(i0,i1,i2), CK_DELCTOR_CALL);}
    CProxyElement_PmeYPencil operator () (CkIndex3D idx) const 
        {return CProxyElement_PmeYPencil(ckGetArrayID(), CkArrayIndex3D(idx), CK_DELCTOR_CALL);}
    CProxy_PmeYPencil(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_PmeYPencil(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: PmeYPencil();
 */
    
    static CkArrayID ckNew(const CkArrayOptions &opts = CkArrayOptions(), const CkEntryOptions *impl_e_opts=NULL);
    static void      ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);
    static CkArrayID ckNew(const int s1, const int s2, const int s3, const CkEntryOptions *impl_e_opts=NULL);
    static void ckNew(const int s1, const int s2, const int s3, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvTrans(PmeTransMsg* impl_msg);
 */
    
    void recvTrans(PmeTransMsg* impl_msg) ;

/* DECLS: void recvUntrans(PmeUntransMsg* impl_msg);
 */
    
    void recvUntrans(PmeUntransMsg* impl_msg) ;

/* DECLS: void recvAck(PmeAckMsg* impl_msg);
 */
    
    void recvAck(PmeAckMsg* impl_msg) ;

/* DECLS: void recvNodeAck(PmeAckMsg* impl_msg);
 */
    
    void recvNodeAck(PmeAckMsg* impl_msg) ;

/* DECLS: void init(PmePencilInitMsg* impl_msg);
 */
    
    void init(PmePencilInitMsg* impl_msg) ;

/* DECLS: PmeYPencil(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
 class CProxySection_PmeYPencil : public CProxySection_ArrayElement{
  public:
    typedef PmeYPencil local_t;
    typedef CkIndex_PmeYPencil index_t;
    typedef CProxy_PmeYPencil proxy_t;
    typedef CProxyElement_PmeYPencil element_t;
    typedef CProxySection_PmeYPencil section_t;

    using array_index_t = CkArrayIndex3D;
    CProxySection_PmeYPencil(void) {
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_ArrayElement::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxySection_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxySection_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxySection_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxySection_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxySection_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxySection_ArrayElement::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxySection_ArrayElement::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxySection_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxySection_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxySection_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxySection_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_ArrayElement::ckSetReductionClient(cb); }

    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0)
    { CProxySection_ArrayElement::ckSend(m,ep,opts); }
    inline CkSectionInfo &ckGetSectionInfo()
    { return CProxySection_ArrayElement::ckGetSectionInfo(); }
    inline CkSectionID *ckGetSectionIDs()
    { return CProxySection_ArrayElement::ckGetSectionIDs(); }
    inline CkSectionID &ckGetSectionID()
    { return CProxySection_ArrayElement::ckGetSectionID(); }
    inline CkSectionID &ckGetSectionID(int i)
    { return CProxySection_ArrayElement::ckGetSectionID(i); }
    inline CkArrayID ckGetArrayIDn(int i) const
    { return CProxySection_ArrayElement::ckGetArrayIDn(i); } 
    inline CkArrayIndex *ckGetArrayElements() const
    { return CProxySection_ArrayElement::ckGetArrayElements(); }
    inline CkArrayIndex *ckGetArrayElements(int i) const
    { return CProxySection_ArrayElement::ckGetArrayElements(i); }
    inline int ckGetNumElements() const
    { return CProxySection_ArrayElement::ckGetNumElements(); } 
    inline int ckGetNumElements(int i) const
    { return CProxySection_ArrayElement::ckGetNumElements(i); }    // Generalized array indexing:
    CProxyElement_PmeYPencil operator [] (const CkArrayIndex3D &idx) const
        {return CProxyElement_PmeYPencil(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_PmeYPencil operator() (const CkArrayIndex3D &idx) const
        {return CProxyElement_PmeYPencil(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_PmeYPencil operator () (int idx) const 
        {return CProxyElement_PmeYPencil(ckGetArrayID(), *(CkArrayIndex3D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex3D *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      return CkSectionID(aid, elems, nElems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, const std::vector<CkArrayIndex3D> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      return CkSectionID(aid, elems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, int l1, int u1, int s1, int l2, int u2, int s2, int l3, int u3, int s3, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      std::vector<CkArrayIndex3D> al;
      for (int i=l1; i<=u1; i+=s1) 
        for (int j=l2; j<=u2; j+=s2) 
          for (int k=l3; k<=u3; k+=s3) 
          al.emplace_back(i, j, k);
      return CkSectionID(aid, al, factor);
    } 
    CProxySection_PmeYPencil(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_PmeYPencil(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_PmeYPencil(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems,nElems, factor) {}
    CProxySection_PmeYPencil(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems, factor) { ckAutoDelegate(); }
    CProxySection_PmeYPencil(const CkSectionID &sid)  
        :CProxySection_ArrayElement(sid) { ckAutoDelegate(); }
    CProxySection_PmeYPencil(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_PmeYPencil(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_PmeYPencil(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) { ckAutoDelegate(); }
    CProxySection_PmeYPencil(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems) 
        :CProxySection_ArrayElement(aid,elems) { ckAutoDelegate(); }
    CProxySection_PmeYPencil(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, int factor) 
        :CProxySection_ArrayElement(n,aid,elems,nElems, factor) { ckAutoDelegate(); }
    CProxySection_PmeYPencil(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, int factor) 
        :CProxySection_ArrayElement(aid,elems, factor) { ckAutoDelegate(); }
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex *elems, int nElems) {
      return CkSectionID(aid, elems, nElems);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems) {
       return CkSectionID(aid, elems);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor) {
      return CkSectionID(aid, elems, nElems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor) {
      return CkSectionID(aid, elems, factor);
    } 
    void ckAutoDelegate(int opts=1) {
      if(ckIsDelegated()) return;
      CProxySection_ArrayElement::ckAutoDelegate(opts);
    } 
    void setReductionClient(CkCallback *cb) {
      CProxySection_ArrayElement::setReductionClient(cb);
    } 
    void resetSection() {
      CProxySection_ArrayElement::resetSection();
    } 
    static void contribute(CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    static void contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    template <typename T>
    static void contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    static void contribute(CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
    static void contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
    template <typename T>
    static void contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
/* DECLS: PmeYPencil();
 */
    

/* DECLS: void recvTrans(PmeTransMsg* impl_msg);
 */
    
    void recvTrans(PmeTransMsg* impl_msg) ;

/* DECLS: void recvUntrans(PmeUntransMsg* impl_msg);
 */
    
    void recvUntrans(PmeUntransMsg* impl_msg) ;

/* DECLS: void recvAck(PmeAckMsg* impl_msg);
 */
    
    void recvAck(PmeAckMsg* impl_msg) ;

/* DECLS: void recvNodeAck(PmeAckMsg* impl_msg);
 */
    
    void recvNodeAck(PmeAckMsg* impl_msg) ;

/* DECLS: void init(PmePencilInitMsg* impl_msg);
 */
    
    void init(PmePencilInitMsg* impl_msg) ;

/* DECLS: PmeYPencil(CkMigrateMessage* impl_msg);
 */

};
#define PmeYPencil_SDAG_CODE                                                   \
public:                                                                        \
  void init(PmePencilInitMsg initmsg);                                         \
  void _sdag_fnc_init(PmePencilInitMsg initmsg);                               \
  void _sdag_fnc_init(PmePencilInitMsg* gen0);                                 \
private:                                                                       \
  void init_end(PmePencilInitMsg* gen0);                                       \
  void _slist_0(PmePencilInitMsg* gen0);                                       \
  void _slist_0_end(PmePencilInitMsg* gen0);                                   \
  void _serial_0(PmePencilInitMsg* gen0);                                      \
  void _while_0(PmePencilInitMsg* gen0);                                       \
  void _while_0_end(PmePencilInitMsg* gen0);                                   \
  void _slist_1(PmePencilInitMsg* gen0);                                       \
  void _slist_1_end(PmePencilInitMsg* gen0);                                   \
  void _serial_1(PmePencilInitMsg* gen0);                                      \
  void _for_0(PmePencilInitMsg* gen0);                                         \
  void _for_0_end(PmePencilInitMsg* gen0);                                     \
  void _slist_2(PmePencilInitMsg* gen0);                                       \
  void _slist_2_end(PmePencilInitMsg* gen0);                                   \
  SDAG::Continuation* _when_0(PmePencilInitMsg* gen0);                         \
  void _when_0_end(PmePencilInitMsg* gen0, PmeTransMsg* gen1);                 \
  void _serial_2(PmePencilInitMsg* gen0, PmeTransMsg* gen1);                   \
  void _if_0(PmePencilInitMsg* gen0);                                          \
  void _if_0_end(PmePencilInitMsg* gen0);                                      \
  void _slist_3(PmePencilInitMsg* gen0);                                       \
  void _slist_3_end(PmePencilInitMsg* gen0);                                   \
  void _serial_3(PmePencilInitMsg* gen0);                                      \
  void _serial_4(PmePencilInitMsg* gen0);                                      \
  void _if_1(PmePencilInitMsg* gen0);                                          \
  void _if_1_end(PmePencilInitMsg* gen0);                                      \
  void _else_0(PmePencilInitMsg* gen0);                                        \
  void _else_0_end(PmePencilInitMsg* gen0);                                    \
  void _slist_4(PmePencilInitMsg* gen0);                                       \
  void _slist_4_end(PmePencilInitMsg* gen0);                                   \
  void _serial_5(PmePencilInitMsg* gen0);                                      \
  void _for_1(PmePencilInitMsg* gen0);                                         \
  void _for_1_end(PmePencilInitMsg* gen0);                                     \
  void _slist_5(PmePencilInitMsg* gen0);                                       \
  void _slist_5_end(PmePencilInitMsg* gen0);                                   \
  SDAG::Continuation* _when_1(PmePencilInitMsg* gen0);                         \
  void _when_1_end(PmePencilInitMsg* gen0, PmeAckMsg* gen1);                   \
  void _serial_6(PmePencilInitMsg* gen0, PmeAckMsg* gen1);                     \
  void _slist_6(PmePencilInitMsg* gen0);                                       \
  void _slist_6_end(PmePencilInitMsg* gen0);                                   \
  void _for_2(PmePencilInitMsg* gen0);                                         \
  void _for_2_end(PmePencilInitMsg* gen0);                                     \
  void _slist_7(PmePencilInitMsg* gen0);                                       \
  void _slist_7_end(PmePencilInitMsg* gen0);                                   \
  SDAG::Continuation* _when_2(PmePencilInitMsg* gen0);                         \
  void _when_2_end(PmePencilInitMsg* gen0, PmeUntransMsg* gen1);               \
  void _serial_7(PmePencilInitMsg* gen0, PmeUntransMsg* gen1);                 \
  void _serial_8(PmePencilInitMsg* gen0);                                      \
  void _serial_9(PmePencilInitMsg* gen0);                                      \
public:                                                                        \
  void recvTrans(PmeTransMsg* msg_msg);                                        \
  void recvAck(PmeAckMsg* msg_msg);                                            \
  void recvUntrans(PmeUntransMsg* msg_msg);                                    \
public:                                                                        \
  SDAG::dep_ptr __dep;                                                         \
  void _sdag_init();                                                           \
  void __sdag_init();                                                          \
public:                                                                        \
  void _sdag_pup(PUP::er &p);                                                  \
  void __sdag_pup(PUP::er &p) { }                                              \
  static void __sdag_register();                                               \
  static int _sdag_idx_PmeYPencil_serial_0();                                  \
  static int _sdag_reg_PmeYPencil_serial_0();                                  \
  static int _sdag_idx_PmeYPencil_serial_1();                                  \
  static int _sdag_reg_PmeYPencil_serial_1();                                  \
  static int _sdag_idx_PmeYPencil_recv_trans();                                \
  static int _sdag_reg_PmeYPencil_recv_trans();                                \
  static int _sdag_idx_PmeYPencil_forward_fft();                               \
  static int _sdag_reg_PmeYPencil_forward_fft();                               \
  static int _sdag_idx_PmeYPencil_send_trans();                                \
  static int _sdag_reg_PmeYPencil_send_trans();                                \
  static int _sdag_idx_PmeYPencil_recv_untrans();                              \
  static int _sdag_reg_PmeYPencil_recv_untrans();                              \
  static int _sdag_idx_PmeYPencil_backward_fft();                              \
  static int _sdag_reg_PmeYPencil_backward_fft();                              \
  static int _sdag_idx_PmeYPencil_send_untrans0();                             \
  static int _sdag_reg_PmeYPencil_send_untrans0();                             \
  static int _sdag_idx_PmeYPencil_send_untrans1();                             \
  static int _sdag_reg_PmeYPencil_send_untrans1();                             \
  static int _sdag_idx_PmeYPencil_serial_6();                                  \
  static int _sdag_reg_PmeYPencil_serial_6();                                  \

typedef CBaseT1<ArrayElementT<CkIndex3D>, CProxy_PmeYPencil>CBase_PmeYPencil;

/* DECLS: array PmeXPencil: ArrayElement{
PmeXPencil();
void recvTrans(PmeTransMsg* impl_msg);
void init(PmePencilInitMsg* impl_msg);
PmeXPencil(CkMigrateMessage* impl_msg);
};
 */
 class PmeXPencil;
 class CkIndex_PmeXPencil;
 class CProxy_PmeXPencil;
 class CProxyElement_PmeXPencil;
 class CProxySection_PmeXPencil;
/* --------------- index object ------------------ */
class CkIndex_PmeXPencil:public CkIndex_ArrayElement{
  public:
    typedef PmeXPencil local_t;
    typedef CkIndex_PmeXPencil index_t;
    typedef CProxy_PmeXPencil proxy_t;
    typedef CProxyElement_PmeXPencil element_t;
    typedef CProxySection_PmeXPencil section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: PmeXPencil();
     */
    // Entry point registration at startup
    
    static int reg_PmeXPencil_void();
    // Entry point index lookup
    
    inline static int idx_PmeXPencil_void() {
      static int epidx = reg_PmeXPencil_void();
      return epidx;
    }

    
    static int ckNew() { return idx_PmeXPencil_void(); }
    
    static void _call_PmeXPencil_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_PmeXPencil_void(void* impl_msg, void* impl_obj);
    /* DECLS: void recvTrans(PmeTransMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvTrans_PmeTransMsg();
    // Entry point index lookup
    
    inline static int idx_recvTrans_PmeTransMsg() {
      static int epidx = reg_recvTrans_PmeTransMsg();
      return epidx;
    }

    
    inline static int idx_recvTrans(void (PmeXPencil::*)(PmeTransMsg* impl_msg) ) {
      return idx_recvTrans_PmeTransMsg();
    }


    
    static int recvTrans(PmeTransMsg* impl_msg) { return idx_recvTrans_PmeTransMsg(); }
    
    static void _call_recvTrans_PmeTransMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvTrans_PmeTransMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void init(PmePencilInitMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_init_PmePencilInitMsg();
    // Entry point index lookup
    
    inline static int idx_init_PmePencilInitMsg() {
      static int epidx = reg_init_PmePencilInitMsg();
      return epidx;
    }

    
    inline static int idx_init(void (PmeXPencil::*)(PmePencilInitMsg* impl_msg) ) {
      return idx_init_PmePencilInitMsg();
    }


    
    static int init(PmePencilInitMsg* impl_msg) { return idx_init_PmePencilInitMsg(); }
    
    static void _call_init_PmePencilInitMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_init_PmePencilInitMsg(void* impl_msg, void* impl_obj);
    /* DECLS: PmeXPencil(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_PmeXPencil_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_PmeXPencil_CkMigrateMessage() {
      static int epidx = reg_PmeXPencil_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_PmeXPencil_CkMigrateMessage(); }
    
    static void _call_PmeXPencil_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_PmeXPencil_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_PmeXPencil : public CProxyElement_ArrayElement{
  public:
    typedef PmeXPencil local_t;
    typedef CkIndex_PmeXPencil index_t;
    typedef CProxy_PmeXPencil proxy_t;
    typedef CProxyElement_PmeXPencil element_t;
    typedef CProxySection_PmeXPencil section_t;

    using array_index_t = CkArrayIndex3D;

    /* TRAM aggregators */

    CProxyElement_PmeXPencil(void) {
    }
    CProxyElement_PmeXPencil(const ArrayElement *e) : CProxyElement_ArrayElement(e){
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_ArrayElement::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxyElement_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxyElement_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxyElement_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxyElement_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxyElement_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxyElement_ArrayElement::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxyElement_ArrayElement::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxyElement_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxyElement_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxyElement_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxyElement_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_ArrayElement::ckSetReductionClient(cb); }

    inline void ckInsert(CkArrayMessage *m,int ctor,int onPe)
    { CProxyElement_ArrayElement::ckInsert(m,ctor,onPe); }
    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0) const
    { CProxyElement_ArrayElement::ckSend(m,ep,opts); }
    inline void *ckSendSync(CkArrayMessage *m, int ep) const
    { return CProxyElement_ArrayElement::ckSendSync(m,ep); }
    inline const CkArrayIndex &ckGetIndex() const
    { return CProxyElement_ArrayElement::ckGetIndex(); }

    PmeXPencil *ckLocal(void) const
    { return (PmeXPencil *)CProxyElement_ArrayElement::ckLocal(); }

    CProxyElement_PmeXPencil(const CkArrayID &aid,const CkArrayIndex3D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_PmeXPencil(const CkArrayID &aid,const CkArrayIndex3D &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}

    CProxyElement_PmeXPencil(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_PmeXPencil(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}
/* DECLS: PmeXPencil();
 */
    
    void insert(int onPE=-1, const CkEntryOptions *impl_e_opts=NULL);
/* DECLS: void recvTrans(PmeTransMsg* impl_msg);
 */
    
    void recvTrans(PmeTransMsg* impl_msg) ;

/* DECLS: void init(PmePencilInitMsg* impl_msg);
 */
    
    void init(PmePencilInitMsg* impl_msg) ;

/* DECLS: PmeXPencil(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
 class CProxy_PmeXPencil : public CProxy_ArrayElement{
  public:
    typedef PmeXPencil local_t;
    typedef CkIndex_PmeXPencil index_t;
    typedef CProxy_PmeXPencil proxy_t;
    typedef CProxyElement_PmeXPencil element_t;
    typedef CProxySection_PmeXPencil section_t;

    using array_index_t = CkArrayIndex3D;
    CProxy_PmeXPencil(void) {
    }
    CProxy_PmeXPencil(const ArrayElement *e) : CProxy_ArrayElement(e){
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_ArrayElement::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxy_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxy_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxy_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxy_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxy_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxy_ArrayElement::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxy_ArrayElement::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxy_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxy_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxy_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxy_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_ArrayElement::ckSetReductionClient(cb); }

    // Generalized array indexing:
    CProxyElement_PmeXPencil operator [] (const CkArrayIndex3D &idx) const
    { return CProxyElement_PmeXPencil(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_PmeXPencil operator() (const CkArrayIndex3D &idx) const
    { return CProxyElement_PmeXPencil(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_PmeXPencil operator () (int i0,int i1,int i2) const 
        {return CProxyElement_PmeXPencil(ckGetArrayID(), CkArrayIndex3D(i0,i1,i2), CK_DELCTOR_CALL);}
    CProxyElement_PmeXPencil operator () (CkIndex3D idx) const 
        {return CProxyElement_PmeXPencil(ckGetArrayID(), CkArrayIndex3D(idx), CK_DELCTOR_CALL);}
    CProxy_PmeXPencil(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_PmeXPencil(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: PmeXPencil();
 */
    
    static CkArrayID ckNew(const CkArrayOptions &opts = CkArrayOptions(), const CkEntryOptions *impl_e_opts=NULL);
    static void      ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);
    static CkArrayID ckNew(const int s1, const int s2, const int s3, const CkEntryOptions *impl_e_opts=NULL);
    static void ckNew(const int s1, const int s2, const int s3, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvTrans(PmeTransMsg* impl_msg);
 */
    
    void recvTrans(PmeTransMsg* impl_msg) ;

/* DECLS: void init(PmePencilInitMsg* impl_msg);
 */
    
    void init(PmePencilInitMsg* impl_msg) ;

/* DECLS: PmeXPencil(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
 class CProxySection_PmeXPencil : public CProxySection_ArrayElement{
  public:
    typedef PmeXPencil local_t;
    typedef CkIndex_PmeXPencil index_t;
    typedef CProxy_PmeXPencil proxy_t;
    typedef CProxyElement_PmeXPencil element_t;
    typedef CProxySection_PmeXPencil section_t;

    using array_index_t = CkArrayIndex3D;
    CProxySection_PmeXPencil(void) {
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_ArrayElement::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxySection_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxySection_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxySection_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxySection_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxySection_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxySection_ArrayElement::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxySection_ArrayElement::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxySection_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxySection_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxySection_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxySection_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_ArrayElement::ckSetReductionClient(cb); }

    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0)
    { CProxySection_ArrayElement::ckSend(m,ep,opts); }
    inline CkSectionInfo &ckGetSectionInfo()
    { return CProxySection_ArrayElement::ckGetSectionInfo(); }
    inline CkSectionID *ckGetSectionIDs()
    { return CProxySection_ArrayElement::ckGetSectionIDs(); }
    inline CkSectionID &ckGetSectionID()
    { return CProxySection_ArrayElement::ckGetSectionID(); }
    inline CkSectionID &ckGetSectionID(int i)
    { return CProxySection_ArrayElement::ckGetSectionID(i); }
    inline CkArrayID ckGetArrayIDn(int i) const
    { return CProxySection_ArrayElement::ckGetArrayIDn(i); } 
    inline CkArrayIndex *ckGetArrayElements() const
    { return CProxySection_ArrayElement::ckGetArrayElements(); }
    inline CkArrayIndex *ckGetArrayElements(int i) const
    { return CProxySection_ArrayElement::ckGetArrayElements(i); }
    inline int ckGetNumElements() const
    { return CProxySection_ArrayElement::ckGetNumElements(); } 
    inline int ckGetNumElements(int i) const
    { return CProxySection_ArrayElement::ckGetNumElements(i); }    // Generalized array indexing:
    CProxyElement_PmeXPencil operator [] (const CkArrayIndex3D &idx) const
        {return CProxyElement_PmeXPencil(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_PmeXPencil operator() (const CkArrayIndex3D &idx) const
        {return CProxyElement_PmeXPencil(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_PmeXPencil operator () (int idx) const 
        {return CProxyElement_PmeXPencil(ckGetArrayID(), *(CkArrayIndex3D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex3D *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      return CkSectionID(aid, elems, nElems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, const std::vector<CkArrayIndex3D> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      return CkSectionID(aid, elems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, int l1, int u1, int s1, int l2, int u2, int s2, int l3, int u3, int s3, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      std::vector<CkArrayIndex3D> al;
      for (int i=l1; i<=u1; i+=s1) 
        for (int j=l2; j<=u2; j+=s2) 
          for (int k=l3; k<=u3; k+=s3) 
          al.emplace_back(i, j, k);
      return CkSectionID(aid, al, factor);
    } 
    CProxySection_PmeXPencil(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_PmeXPencil(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_PmeXPencil(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems,nElems, factor) {}
    CProxySection_PmeXPencil(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems, factor) { ckAutoDelegate(); }
    CProxySection_PmeXPencil(const CkSectionID &sid)  
        :CProxySection_ArrayElement(sid) { ckAutoDelegate(); }
    CProxySection_PmeXPencil(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_PmeXPencil(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_PmeXPencil(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) { ckAutoDelegate(); }
    CProxySection_PmeXPencil(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems) 
        :CProxySection_ArrayElement(aid,elems) { ckAutoDelegate(); }
    CProxySection_PmeXPencil(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, int factor) 
        :CProxySection_ArrayElement(n,aid,elems,nElems, factor) { ckAutoDelegate(); }
    CProxySection_PmeXPencil(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, int factor) 
        :CProxySection_ArrayElement(aid,elems, factor) { ckAutoDelegate(); }
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex *elems, int nElems) {
      return CkSectionID(aid, elems, nElems);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems) {
       return CkSectionID(aid, elems);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor) {
      return CkSectionID(aid, elems, nElems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor) {
      return CkSectionID(aid, elems, factor);
    } 
    void ckAutoDelegate(int opts=1) {
      if(ckIsDelegated()) return;
      CProxySection_ArrayElement::ckAutoDelegate(opts);
    } 
    void setReductionClient(CkCallback *cb) {
      CProxySection_ArrayElement::setReductionClient(cb);
    } 
    void resetSection() {
      CProxySection_ArrayElement::resetSection();
    } 
    static void contribute(CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    static void contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    template <typename T>
    static void contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    static void contribute(CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
    static void contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
    template <typename T>
    static void contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
/* DECLS: PmeXPencil();
 */
    

/* DECLS: void recvTrans(PmeTransMsg* impl_msg);
 */
    
    void recvTrans(PmeTransMsg* impl_msg) ;

/* DECLS: void init(PmePencilInitMsg* impl_msg);
 */
    
    void init(PmePencilInitMsg* impl_msg) ;

/* DECLS: PmeXPencil(CkMigrateMessage* impl_msg);
 */

};
#define PmeXPencil_SDAG_CODE                                                   \
public:                                                                        \
  void init(PmePencilInitMsg initmsg);                                         \
  void _sdag_fnc_init(PmePencilInitMsg initmsg);                               \
  void _sdag_fnc_init(PmePencilInitMsg* gen0);                                 \
private:                                                                       \
  void init_end(PmePencilInitMsg* gen0);                                       \
  void _slist_0(PmePencilInitMsg* gen0);                                       \
  void _slist_0_end(PmePencilInitMsg* gen0);                                   \
  void _serial_0(PmePencilInitMsg* gen0);                                      \
  void _while_0(PmePencilInitMsg* gen0);                                       \
  void _while_0_end(PmePencilInitMsg* gen0);                                   \
  void _slist_1(PmePencilInitMsg* gen0);                                       \
  void _slist_1_end(PmePencilInitMsg* gen0);                                   \
  void _serial_1(PmePencilInitMsg* gen0);                                      \
  void _for_0(PmePencilInitMsg* gen0);                                         \
  void _for_0_end(PmePencilInitMsg* gen0);                                     \
  void _slist_2(PmePencilInitMsg* gen0);                                       \
  void _slist_2_end(PmePencilInitMsg* gen0);                                   \
  SDAG::Continuation* _when_0(PmePencilInitMsg* gen0);                         \
  void _when_0_end(PmePencilInitMsg* gen0, PmeTransMsg* gen1);                 \
  void _serial_2(PmePencilInitMsg* gen0, PmeTransMsg* gen1);                   \
  void _if_0(PmePencilInitMsg* gen0);                                          \
  void _if_0_end(PmePencilInitMsg* gen0);                                      \
  void _slist_3(PmePencilInitMsg* gen0);                                       \
  void _slist_3_end(PmePencilInitMsg* gen0);                                   \
  void _serial_3(PmePencilInitMsg* gen0);                                      \
  void _serial_4(PmePencilInitMsg* gen0);                                      \
  void _serial_5(PmePencilInitMsg* gen0);                                      \
  void _serial_6(PmePencilInitMsg* gen0);                                      \
public:                                                                        \
  void recvTrans(PmeTransMsg* msg_msg);                                        \
public:                                                                        \
  SDAG::dep_ptr __dep;                                                         \
  void _sdag_init();                                                           \
  void __sdag_init();                                                          \
public:                                                                        \
  void _sdag_pup(PUP::er &p);                                                  \
  void __sdag_pup(PUP::er &p) { }                                              \
  static void __sdag_register();                                               \
  static int _sdag_idx_PmeXPencil_serial_0();                                  \
  static int _sdag_reg_PmeXPencil_serial_0();                                  \
  static int _sdag_idx_PmeXPencil_serial_1();                                  \
  static int _sdag_reg_PmeXPencil_serial_1();                                  \
  static int _sdag_idx_PmeXPencil_recv_trans();                                \
  static int _sdag_reg_PmeXPencil_recv_trans();                                \
  static int _sdag_idx_PmeXPencil_forward_fft();                               \
  static int _sdag_reg_PmeXPencil_forward_fft();                               \
  static int _sdag_idx_PmeXPencil_pme_kspace();                                \
  static int _sdag_reg_PmeXPencil_pme_kspace();                                \
  static int _sdag_idx_PmeXPencil_backward_fft();                              \
  static int _sdag_reg_PmeXPencil_backward_fft();                              \
  static int _sdag_idx_PmeXPencil_send_untrans();                              \
  static int _sdag_reg_PmeXPencil_send_untrans();                              \

typedef CBaseT1<ArrayElementT<CkIndex3D>, CProxy_PmeXPencil>CBase_PmeXPencil;

/* DECLS: nodegroup NodePmeMgr: NodeGroup{
NodePmeMgr();
void recvPencilMapProxies(const CProxy_PmePencilMap &xm, const CProxy_PmePencilMap &ym, const CProxy_PmePencilMap &zm);
void recvTrans(PmeTransMsg* impl_msg);
void recvUntrans(PmeUntransMsg* impl_msg);
void sendDataHelper(int impl_noname_0);
void sendPencilsHelper(int impl_noname_1);
void recvUngrid(PmeGridMsg* impl_msg);
void recvZGrid(PmeGridMsg* impl_msg);
void recvXTrans(PmeTransMsg* impl_msg);
void recvYTrans(PmeTransMsg* impl_msg);
void recvYUntrans(PmeUntransMsg* impl_msg);
void recvZUntrans(PmeUntransMsg* impl_msg);
};
 */
 class NodePmeMgr;
 class CkIndex_NodePmeMgr;
 class CProxy_NodePmeMgr;
 class CProxyElement_NodePmeMgr;
 class CProxySection_NodePmeMgr;
/* --------------- index object ------------------ */
class CkIndex_NodePmeMgr:public CkIndex_NodeGroup{
  public:
    typedef NodePmeMgr local_t;
    typedef CkIndex_NodePmeMgr index_t;
    typedef CProxy_NodePmeMgr proxy_t;
    typedef CProxyElement_NodePmeMgr element_t;
    typedef CProxySection_NodePmeMgr section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: NodePmeMgr();
     */
    // Entry point registration at startup
    
    static int reg_NodePmeMgr_void();
    // Entry point index lookup
    
    inline static int idx_NodePmeMgr_void() {
      static int epidx = reg_NodePmeMgr_void();
      return epidx;
    }

    
    static int ckNew() { return idx_NodePmeMgr_void(); }
    
    static void _call_NodePmeMgr_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_NodePmeMgr_void(void* impl_msg, void* impl_obj);
    /* DECLS: void recvPencilMapProxies(const CProxy_PmePencilMap &xm, const CProxy_PmePencilMap &ym, const CProxy_PmePencilMap &zm);
     */
    // Entry point registration at startup
    
    static int reg_recvPencilMapProxies_marshall2();
    // Entry point index lookup
    
    inline static int idx_recvPencilMapProxies_marshall2() {
      static int epidx = reg_recvPencilMapProxies_marshall2();
      return epidx;
    }

    
    inline static int idx_recvPencilMapProxies(void (NodePmeMgr::*)(const CProxy_PmePencilMap &xm, const CProxy_PmePencilMap &ym, const CProxy_PmePencilMap &zm) ) {
      return idx_recvPencilMapProxies_marshall2();
    }


    
    static int recvPencilMapProxies(const CProxy_PmePencilMap &xm, const CProxy_PmePencilMap &ym, const CProxy_PmePencilMap &zm) { return idx_recvPencilMapProxies_marshall2(); }
    
    static void _call_recvPencilMapProxies_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvPencilMapProxies_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_recvPencilMapProxies_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_recvPencilMapProxies_marshall2(PUP::er &p,void *msg);
    /* DECLS: void recvTrans(PmeTransMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvTrans_PmeTransMsg();
    // Entry point index lookup
    
    inline static int idx_recvTrans_PmeTransMsg() {
      static int epidx = reg_recvTrans_PmeTransMsg();
      return epidx;
    }

    
    inline static int idx_recvTrans(void (NodePmeMgr::*)(PmeTransMsg* impl_msg) ) {
      return idx_recvTrans_PmeTransMsg();
    }


    
    static int recvTrans(PmeTransMsg* impl_msg) { return idx_recvTrans_PmeTransMsg(); }
    
    static void _call_recvTrans_PmeTransMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvTrans_PmeTransMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvUntrans(PmeUntransMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvUntrans_PmeUntransMsg();
    // Entry point index lookup
    
    inline static int idx_recvUntrans_PmeUntransMsg() {
      static int epidx = reg_recvUntrans_PmeUntransMsg();
      return epidx;
    }

    
    inline static int idx_recvUntrans(void (NodePmeMgr::*)(PmeUntransMsg* impl_msg) ) {
      return idx_recvUntrans_PmeUntransMsg();
    }


    
    static int recvUntrans(PmeUntransMsg* impl_msg) { return idx_recvUntrans_PmeUntransMsg(); }
    
    static void _call_recvUntrans_PmeUntransMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvUntrans_PmeUntransMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void sendDataHelper(int impl_noname_0);
     */
    // Entry point registration at startup
    
    static int reg_sendDataHelper_marshall5();
    // Entry point index lookup
    
    inline static int idx_sendDataHelper_marshall5() {
      static int epidx = reg_sendDataHelper_marshall5();
      return epidx;
    }

    
    inline static int idx_sendDataHelper(void (NodePmeMgr::*)(int impl_noname_0) ) {
      return idx_sendDataHelper_marshall5();
    }


    
    static int sendDataHelper(int impl_noname_0) { return idx_sendDataHelper_marshall5(); }
    
    static void _call_sendDataHelper_marshall5(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_sendDataHelper_marshall5(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_sendDataHelper_marshall5(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_sendDataHelper_marshall5(PUP::er &p,void *msg);
    /* DECLS: void sendPencilsHelper(int impl_noname_1);
     */
    // Entry point registration at startup
    
    static int reg_sendPencilsHelper_marshall6();
    // Entry point index lookup
    
    inline static int idx_sendPencilsHelper_marshall6() {
      static int epidx = reg_sendPencilsHelper_marshall6();
      return epidx;
    }

    
    inline static int idx_sendPencilsHelper(void (NodePmeMgr::*)(int impl_noname_1) ) {
      return idx_sendPencilsHelper_marshall6();
    }


    
    static int sendPencilsHelper(int impl_noname_1) { return idx_sendPencilsHelper_marshall6(); }
    
    static void _call_sendPencilsHelper_marshall6(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_sendPencilsHelper_marshall6(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_sendPencilsHelper_marshall6(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_sendPencilsHelper_marshall6(PUP::er &p,void *msg);
    /* DECLS: void recvUngrid(PmeGridMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvUngrid_PmeGridMsg();
    // Entry point index lookup
    
    inline static int idx_recvUngrid_PmeGridMsg() {
      static int epidx = reg_recvUngrid_PmeGridMsg();
      return epidx;
    }

    
    inline static int idx_recvUngrid(void (NodePmeMgr::*)(PmeGridMsg* impl_msg) ) {
      return idx_recvUngrid_PmeGridMsg();
    }


    
    static int recvUngrid(PmeGridMsg* impl_msg) { return idx_recvUngrid_PmeGridMsg(); }
    
    static void _call_recvUngrid_PmeGridMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvUngrid_PmeGridMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvZGrid(PmeGridMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvZGrid_PmeGridMsg();
    // Entry point index lookup
    
    inline static int idx_recvZGrid_PmeGridMsg() {
      static int epidx = reg_recvZGrid_PmeGridMsg();
      return epidx;
    }

    
    inline static int idx_recvZGrid(void (NodePmeMgr::*)(PmeGridMsg* impl_msg) ) {
      return idx_recvZGrid_PmeGridMsg();
    }


    
    static int recvZGrid(PmeGridMsg* impl_msg) { return idx_recvZGrid_PmeGridMsg(); }
    
    static void _call_recvZGrid_PmeGridMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvZGrid_PmeGridMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvXTrans(PmeTransMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvXTrans_PmeTransMsg();
    // Entry point index lookup
    
    inline static int idx_recvXTrans_PmeTransMsg() {
      static int epidx = reg_recvXTrans_PmeTransMsg();
      return epidx;
    }

    
    inline static int idx_recvXTrans(void (NodePmeMgr::*)(PmeTransMsg* impl_msg) ) {
      return idx_recvXTrans_PmeTransMsg();
    }


    
    static int recvXTrans(PmeTransMsg* impl_msg) { return idx_recvXTrans_PmeTransMsg(); }
    
    static void _call_recvXTrans_PmeTransMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvXTrans_PmeTransMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvYTrans(PmeTransMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvYTrans_PmeTransMsg();
    // Entry point index lookup
    
    inline static int idx_recvYTrans_PmeTransMsg() {
      static int epidx = reg_recvYTrans_PmeTransMsg();
      return epidx;
    }

    
    inline static int idx_recvYTrans(void (NodePmeMgr::*)(PmeTransMsg* impl_msg) ) {
      return idx_recvYTrans_PmeTransMsg();
    }


    
    static int recvYTrans(PmeTransMsg* impl_msg) { return idx_recvYTrans_PmeTransMsg(); }
    
    static void _call_recvYTrans_PmeTransMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvYTrans_PmeTransMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvYUntrans(PmeUntransMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvYUntrans_PmeUntransMsg();
    // Entry point index lookup
    
    inline static int idx_recvYUntrans_PmeUntransMsg() {
      static int epidx = reg_recvYUntrans_PmeUntransMsg();
      return epidx;
    }

    
    inline static int idx_recvYUntrans(void (NodePmeMgr::*)(PmeUntransMsg* impl_msg) ) {
      return idx_recvYUntrans_PmeUntransMsg();
    }


    
    static int recvYUntrans(PmeUntransMsg* impl_msg) { return idx_recvYUntrans_PmeUntransMsg(); }
    
    static void _call_recvYUntrans_PmeUntransMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvYUntrans_PmeUntransMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvZUntrans(PmeUntransMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvZUntrans_PmeUntransMsg();
    // Entry point index lookup
    
    inline static int idx_recvZUntrans_PmeUntransMsg() {
      static int epidx = reg_recvZUntrans_PmeUntransMsg();
      return epidx;
    }

    
    inline static int idx_recvZUntrans(void (NodePmeMgr::*)(PmeUntransMsg* impl_msg) ) {
      return idx_recvZUntrans_PmeUntransMsg();
    }


    
    static int recvZUntrans(PmeUntransMsg* impl_msg) { return idx_recvZUntrans_PmeUntransMsg(); }
    
    static void _call_recvZUntrans_PmeUntransMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvZUntrans_PmeUntransMsg(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_NodePmeMgr: public CProxyElement_NodeGroup{
  public:
    typedef NodePmeMgr local_t;
    typedef CkIndex_NodePmeMgr index_t;
    typedef CProxy_NodePmeMgr proxy_t;
    typedef CProxyElement_NodePmeMgr element_t;
    typedef CProxySection_NodePmeMgr section_t;


    /* TRAM aggregators */

    CProxyElement_NodePmeMgr(void) {
    }
    CProxyElement_NodePmeMgr(const IrrGroup *g) : CProxyElement_NodeGroup(g){
    }
    CProxyElement_NodePmeMgr(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_NodeGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_NodePmeMgr(CkGroupID _gid,int _onPE) : CProxyElement_NodeGroup(_gid,_onPE){
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
    NodePmeMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static NodePmeMgr* ckLocalBranch(CkGroupID gID) {
      return (NodePmeMgr*)CkLocalNodeBranch(gID);
    }
/* DECLS: NodePmeMgr();
 */
    

/* DECLS: void recvPencilMapProxies(const CProxy_PmePencilMap &xm, const CProxy_PmePencilMap &ym, const CProxy_PmePencilMap &zm);
 */
    
    void recvPencilMapProxies(const CProxy_PmePencilMap &xm, const CProxy_PmePencilMap &ym, const CProxy_PmePencilMap &zm, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvTrans(PmeTransMsg* impl_msg);
 */
    
    void recvTrans(PmeTransMsg* impl_msg);

/* DECLS: void recvUntrans(PmeUntransMsg* impl_msg);
 */
    
    void recvUntrans(PmeUntransMsg* impl_msg);

/* DECLS: void sendDataHelper(int impl_noname_0);
 */
    
    void sendDataHelper(int impl_noname_0, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void sendPencilsHelper(int impl_noname_1);
 */
    
    void sendPencilsHelper(int impl_noname_1, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvUngrid(PmeGridMsg* impl_msg);
 */
    
    void recvUngrid(PmeGridMsg* impl_msg);

/* DECLS: void recvZGrid(PmeGridMsg* impl_msg);
 */
    
    void recvZGrid(PmeGridMsg* impl_msg);

/* DECLS: void recvXTrans(PmeTransMsg* impl_msg);
 */
    
    void recvXTrans(PmeTransMsg* impl_msg);

/* DECLS: void recvYTrans(PmeTransMsg* impl_msg);
 */
    
    void recvYTrans(PmeTransMsg* impl_msg);

/* DECLS: void recvYUntrans(PmeUntransMsg* impl_msg);
 */
    
    void recvYUntrans(PmeUntransMsg* impl_msg);

/* DECLS: void recvZUntrans(PmeUntransMsg* impl_msg);
 */
    
    void recvZUntrans(PmeUntransMsg* impl_msg);

};
/* ---------------- collective proxy -------------- */
class CProxy_NodePmeMgr: public CProxy_NodeGroup{
  public:
    typedef NodePmeMgr local_t;
    typedef CkIndex_NodePmeMgr index_t;
    typedef CProxy_NodePmeMgr proxy_t;
    typedef CProxyElement_NodePmeMgr element_t;
    typedef CProxySection_NodePmeMgr section_t;

    CProxy_NodePmeMgr(void) {
    }
    CProxy_NodePmeMgr(const IrrGroup *g) : CProxy_NodeGroup(g){
    }
    CProxy_NodePmeMgr(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_NodeGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_NodePmeMgr(CkGroupID _gid) : CProxy_NodeGroup(_gid){  }
    CProxyElement_NodePmeMgr operator[](int onPE) const
      {return CProxyElement_NodePmeMgr(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    NodePmeMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static NodePmeMgr* ckLocalBranch(CkGroupID gID) {
      return (NodePmeMgr*)CkLocalNodeBranch(gID);
    }
/* DECLS: NodePmeMgr();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvPencilMapProxies(const CProxy_PmePencilMap &xm, const CProxy_PmePencilMap &ym, const CProxy_PmePencilMap &zm);
 */
    
    void recvPencilMapProxies(const CProxy_PmePencilMap &xm, const CProxy_PmePencilMap &ym, const CProxy_PmePencilMap &zm, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvTrans(PmeTransMsg* impl_msg);
 */
    
    void recvTrans(PmeTransMsg* impl_msg);

/* DECLS: void recvUntrans(PmeUntransMsg* impl_msg);
 */
    
    void recvUntrans(PmeUntransMsg* impl_msg);

/* DECLS: void sendDataHelper(int impl_noname_0);
 */
    
    void sendDataHelper(int impl_noname_0, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void sendPencilsHelper(int impl_noname_1);
 */
    
    void sendPencilsHelper(int impl_noname_1, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvUngrid(PmeGridMsg* impl_msg);
 */
    
    void recvUngrid(PmeGridMsg* impl_msg);

/* DECLS: void recvZGrid(PmeGridMsg* impl_msg);
 */
    
    void recvZGrid(PmeGridMsg* impl_msg);

/* DECLS: void recvXTrans(PmeTransMsg* impl_msg);
 */
    
    void recvXTrans(PmeTransMsg* impl_msg);

/* DECLS: void recvYTrans(PmeTransMsg* impl_msg);
 */
    
    void recvYTrans(PmeTransMsg* impl_msg);

/* DECLS: void recvYUntrans(PmeUntransMsg* impl_msg);
 */
    
    void recvYUntrans(PmeUntransMsg* impl_msg);

/* DECLS: void recvZUntrans(PmeUntransMsg* impl_msg);
 */
    
    void recvZUntrans(PmeUntransMsg* impl_msg);

};
/* ---------------- section proxy -------------- */
class CProxySection_NodePmeMgr: public CProxySection_NodeGroup{
  public:
    typedef NodePmeMgr local_t;
    typedef CkIndex_NodePmeMgr index_t;
    typedef CProxy_NodePmeMgr proxy_t;
    typedef CProxyElement_NodePmeMgr element_t;
    typedef CProxySection_NodePmeMgr section_t;

    CProxySection_NodePmeMgr(void) {
    }
    CProxySection_NodePmeMgr(const IrrGroup *g) : CProxySection_NodeGroup(g){
    }
    CProxySection_NodePmeMgr(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_NodeGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_NodePmeMgr(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_NodeGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_NodePmeMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_NodeGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_NodePmeMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_NodeGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    NodePmeMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static NodePmeMgr* ckLocalBranch(CkGroupID gID) {
      return (NodePmeMgr*)CkLocalNodeBranch(gID);
    }
/* DECLS: NodePmeMgr();
 */
    

/* DECLS: void recvPencilMapProxies(const CProxy_PmePencilMap &xm, const CProxy_PmePencilMap &ym, const CProxy_PmePencilMap &zm);
 */
    
    void recvPencilMapProxies(const CProxy_PmePencilMap &xm, const CProxy_PmePencilMap &ym, const CProxy_PmePencilMap &zm, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvTrans(PmeTransMsg* impl_msg);
 */
    
    void recvTrans(PmeTransMsg* impl_msg);

/* DECLS: void recvUntrans(PmeUntransMsg* impl_msg);
 */
    
    void recvUntrans(PmeUntransMsg* impl_msg);

/* DECLS: void sendDataHelper(int impl_noname_0);
 */
    
    void sendDataHelper(int impl_noname_0, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void sendPencilsHelper(int impl_noname_1);
 */
    
    void sendPencilsHelper(int impl_noname_1, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvUngrid(PmeGridMsg* impl_msg);
 */
    
    void recvUngrid(PmeGridMsg* impl_msg);

/* DECLS: void recvZGrid(PmeGridMsg* impl_msg);
 */
    
    void recvZGrid(PmeGridMsg* impl_msg);

/* DECLS: void recvXTrans(PmeTransMsg* impl_msg);
 */
    
    void recvXTrans(PmeTransMsg* impl_msg);

/* DECLS: void recvYTrans(PmeTransMsg* impl_msg);
 */
    
    void recvYTrans(PmeTransMsg* impl_msg);

/* DECLS: void recvYUntrans(PmeUntransMsg* impl_msg);
 */
    
    void recvYUntrans(PmeUntransMsg* impl_msg);

/* DECLS: void recvZUntrans(PmeUntransMsg* impl_msg);
 */
    
    void recvZUntrans(PmeUntransMsg* impl_msg);

};
#define NodePmeMgr_SDAG_CODE 
typedef CBaseT1<NodeGroup, CProxy_NodePmeMgr>CBase_NodePmeMgr;

/* DECLS: group ComputePmeMgr: IrrGroup{
ComputePmeMgr();
void initialize(CkQdMsg* impl_msg);
void initialize_pencils(CkQdMsg* impl_msg);
void activate_pencils(CkQdMsg* impl_msg);
void pollChargeGridReady();
void recvChargeGridReady();
void sendDataHelper(int impl_noname_2);
void sendPencilsHelper(int impl_noname_3);
void recvGrid(PmeGridMsg* impl_msg);
void gridCalc1();
void sendTransBarrier();
void sendTrans();
void recvSharedTrans(PmeSharedTransMsg* impl_msg);
void recvTrans(PmeTransMsg* impl_msg);
void gridCalc2();
void gridCalc2R();
void sendUntrans();
void recvSharedUntrans(PmeSharedUntransMsg* impl_msg);
void recvUntrans(PmeUntransMsg* impl_msg);
void gridCalc3();
void sendUngrid();
void recvUngrid(PmeGridMsg* impl_msg);
void recvAck(PmeAckMsg* impl_msg);
void ungridCalc();
void pollForcesReady();
void recvRecipEvir(PmeEvirMsg* impl_msg);
void addRecipEvirClient();
void recvArrays(const CProxy_PmeXPencil &impl_noname_4, const CProxy_PmeYPencil &impl_noname_5, const CProxy_PmeZPencil &impl_noname_6);
};
 */
 class ComputePmeMgr;
 class CkIndex_ComputePmeMgr;
 class CProxy_ComputePmeMgr;
 class CProxyElement_ComputePmeMgr;
 class CProxySection_ComputePmeMgr;
/* --------------- index object ------------------ */
class CkIndex_ComputePmeMgr:public CkIndex_IrrGroup{
  public:
    typedef ComputePmeMgr local_t;
    typedef CkIndex_ComputePmeMgr index_t;
    typedef CProxy_ComputePmeMgr proxy_t;
    typedef CProxyElement_ComputePmeMgr element_t;
    typedef CProxySection_ComputePmeMgr section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: ComputePmeMgr();
     */
    // Entry point registration at startup
    
    static int reg_ComputePmeMgr_void();
    // Entry point index lookup
    
    inline static int idx_ComputePmeMgr_void() {
      static int epidx = reg_ComputePmeMgr_void();
      return epidx;
    }

    
    static int ckNew() { return idx_ComputePmeMgr_void(); }
    
    static void _call_ComputePmeMgr_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ComputePmeMgr_void(void* impl_msg, void* impl_obj);
    /* DECLS: void initialize(CkQdMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_initialize_CkQdMsg();
    // Entry point index lookup
    
    inline static int idx_initialize_CkQdMsg() {
      static int epidx = reg_initialize_CkQdMsg();
      return epidx;
    }

    
    inline static int idx_initialize(void (ComputePmeMgr::*)(CkQdMsg* impl_msg) ) {
      return idx_initialize_CkQdMsg();
    }


    
    static int initialize(CkQdMsg* impl_msg) { return idx_initialize_CkQdMsg(); }
    
    static void _call_initialize_CkQdMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_initialize_CkQdMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void initialize_pencils(CkQdMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_initialize_pencils_CkQdMsg();
    // Entry point index lookup
    
    inline static int idx_initialize_pencils_CkQdMsg() {
      static int epidx = reg_initialize_pencils_CkQdMsg();
      return epidx;
    }

    
    inline static int idx_initialize_pencils(void (ComputePmeMgr::*)(CkQdMsg* impl_msg) ) {
      return idx_initialize_pencils_CkQdMsg();
    }


    
    static int initialize_pencils(CkQdMsg* impl_msg) { return idx_initialize_pencils_CkQdMsg(); }
    
    static void _call_initialize_pencils_CkQdMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_initialize_pencils_CkQdMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void activate_pencils(CkQdMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_activate_pencils_CkQdMsg();
    // Entry point index lookup
    
    inline static int idx_activate_pencils_CkQdMsg() {
      static int epidx = reg_activate_pencils_CkQdMsg();
      return epidx;
    }

    
    inline static int idx_activate_pencils(void (ComputePmeMgr::*)(CkQdMsg* impl_msg) ) {
      return idx_activate_pencils_CkQdMsg();
    }


    
    static int activate_pencils(CkQdMsg* impl_msg) { return idx_activate_pencils_CkQdMsg(); }
    
    static void _call_activate_pencils_CkQdMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_activate_pencils_CkQdMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void pollChargeGridReady();
     */
    // Entry point registration at startup
    
    static int reg_pollChargeGridReady_void();
    // Entry point index lookup
    
    inline static int idx_pollChargeGridReady_void() {
      static int epidx = reg_pollChargeGridReady_void();
      return epidx;
    }

    
    inline static int idx_pollChargeGridReady(void (ComputePmeMgr::*)() ) {
      return idx_pollChargeGridReady_void();
    }


    
    static int pollChargeGridReady() { return idx_pollChargeGridReady_void(); }
    
    static void _call_pollChargeGridReady_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_pollChargeGridReady_void(void* impl_msg, void* impl_obj);
    /* DECLS: void recvChargeGridReady();
     */
    // Entry point registration at startup
    
    static int reg_recvChargeGridReady_void();
    // Entry point index lookup
    
    inline static int idx_recvChargeGridReady_void() {
      static int epidx = reg_recvChargeGridReady_void();
      return epidx;
    }

    
    inline static int idx_recvChargeGridReady(void (ComputePmeMgr::*)() ) {
      return idx_recvChargeGridReady_void();
    }


    
    static int recvChargeGridReady() { return idx_recvChargeGridReady_void(); }
    
    static void _call_recvChargeGridReady_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvChargeGridReady_void(void* impl_msg, void* impl_obj);
    /* DECLS: void sendDataHelper(int impl_noname_2);
     */
    // Entry point registration at startup
    
    static int reg_sendDataHelper_marshall7();
    // Entry point index lookup
    
    inline static int idx_sendDataHelper_marshall7() {
      static int epidx = reg_sendDataHelper_marshall7();
      return epidx;
    }

    
    inline static int idx_sendDataHelper(void (ComputePmeMgr::*)(int impl_noname_2) ) {
      return idx_sendDataHelper_marshall7();
    }


    
    static int sendDataHelper(int impl_noname_2) { return idx_sendDataHelper_marshall7(); }
    
    static void _call_sendDataHelper_marshall7(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_sendDataHelper_marshall7(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_sendDataHelper_marshall7(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_sendDataHelper_marshall7(PUP::er &p,void *msg);
    /* DECLS: void sendPencilsHelper(int impl_noname_3);
     */
    // Entry point registration at startup
    
    static int reg_sendPencilsHelper_marshall8();
    // Entry point index lookup
    
    inline static int idx_sendPencilsHelper_marshall8() {
      static int epidx = reg_sendPencilsHelper_marshall8();
      return epidx;
    }

    
    inline static int idx_sendPencilsHelper(void (ComputePmeMgr::*)(int impl_noname_3) ) {
      return idx_sendPencilsHelper_marshall8();
    }


    
    static int sendPencilsHelper(int impl_noname_3) { return idx_sendPencilsHelper_marshall8(); }
    
    static void _call_sendPencilsHelper_marshall8(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_sendPencilsHelper_marshall8(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_sendPencilsHelper_marshall8(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_sendPencilsHelper_marshall8(PUP::er &p,void *msg);
    /* DECLS: void recvGrid(PmeGridMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvGrid_PmeGridMsg();
    // Entry point index lookup
    
    inline static int idx_recvGrid_PmeGridMsg() {
      static int epidx = reg_recvGrid_PmeGridMsg();
      return epidx;
    }

    
    inline static int idx_recvGrid(void (ComputePmeMgr::*)(PmeGridMsg* impl_msg) ) {
      return idx_recvGrid_PmeGridMsg();
    }


    
    static int recvGrid(PmeGridMsg* impl_msg) { return idx_recvGrid_PmeGridMsg(); }
    
    static void _call_recvGrid_PmeGridMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvGrid_PmeGridMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void gridCalc1();
     */
    // Entry point registration at startup
    
    static int reg_gridCalc1_void();
    // Entry point index lookup
    
    inline static int idx_gridCalc1_void() {
      static int epidx = reg_gridCalc1_void();
      return epidx;
    }

    
    inline static int idx_gridCalc1(void (ComputePmeMgr::*)() ) {
      return idx_gridCalc1_void();
    }


    
    static int gridCalc1() { return idx_gridCalc1_void(); }
    
    static void _call_gridCalc1_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_gridCalc1_void(void* impl_msg, void* impl_obj);
    /* DECLS: void sendTransBarrier();
     */
    // Entry point registration at startup
    
    static int reg_sendTransBarrier_void();
    // Entry point index lookup
    
    inline static int idx_sendTransBarrier_void() {
      static int epidx = reg_sendTransBarrier_void();
      return epidx;
    }

    
    inline static int idx_sendTransBarrier(void (ComputePmeMgr::*)() ) {
      return idx_sendTransBarrier_void();
    }


    
    static int sendTransBarrier() { return idx_sendTransBarrier_void(); }
    
    static void _call_sendTransBarrier_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_sendTransBarrier_void(void* impl_msg, void* impl_obj);
    /* DECLS: void sendTrans();
     */
    // Entry point registration at startup
    
    static int reg_sendTrans_void();
    // Entry point index lookup
    
    inline static int idx_sendTrans_void() {
      static int epidx = reg_sendTrans_void();
      return epidx;
    }

    
    inline static int idx_sendTrans(void (ComputePmeMgr::*)() ) {
      return idx_sendTrans_void();
    }


    
    static int sendTrans() { return idx_sendTrans_void(); }
    
    static void _call_sendTrans_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_sendTrans_void(void* impl_msg, void* impl_obj);
    /* DECLS: void recvSharedTrans(PmeSharedTransMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvSharedTrans_PmeSharedTransMsg();
    // Entry point index lookup
    
    inline static int idx_recvSharedTrans_PmeSharedTransMsg() {
      static int epidx = reg_recvSharedTrans_PmeSharedTransMsg();
      return epidx;
    }

    
    inline static int idx_recvSharedTrans(void (ComputePmeMgr::*)(PmeSharedTransMsg* impl_msg) ) {
      return idx_recvSharedTrans_PmeSharedTransMsg();
    }


    
    static int recvSharedTrans(PmeSharedTransMsg* impl_msg) { return idx_recvSharedTrans_PmeSharedTransMsg(); }
    
    static void _call_recvSharedTrans_PmeSharedTransMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvSharedTrans_PmeSharedTransMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvTrans(PmeTransMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvTrans_PmeTransMsg();
    // Entry point index lookup
    
    inline static int idx_recvTrans_PmeTransMsg() {
      static int epidx = reg_recvTrans_PmeTransMsg();
      return epidx;
    }

    
    inline static int idx_recvTrans(void (ComputePmeMgr::*)(PmeTransMsg* impl_msg) ) {
      return idx_recvTrans_PmeTransMsg();
    }


    
    static int recvTrans(PmeTransMsg* impl_msg) { return idx_recvTrans_PmeTransMsg(); }
    
    static void _call_recvTrans_PmeTransMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvTrans_PmeTransMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void gridCalc2();
     */
    // Entry point registration at startup
    
    static int reg_gridCalc2_void();
    // Entry point index lookup
    
    inline static int idx_gridCalc2_void() {
      static int epidx = reg_gridCalc2_void();
      return epidx;
    }

    
    inline static int idx_gridCalc2(void (ComputePmeMgr::*)() ) {
      return idx_gridCalc2_void();
    }


    
    static int gridCalc2() { return idx_gridCalc2_void(); }
    
    static void _call_gridCalc2_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_gridCalc2_void(void* impl_msg, void* impl_obj);
    /* DECLS: void gridCalc2R();
     */
    // Entry point registration at startup
    
    static int reg_gridCalc2R_void();
    // Entry point index lookup
    
    inline static int idx_gridCalc2R_void() {
      static int epidx = reg_gridCalc2R_void();
      return epidx;
    }

    
    inline static int idx_gridCalc2R(void (ComputePmeMgr::*)() ) {
      return idx_gridCalc2R_void();
    }


    
    static int gridCalc2R() { return idx_gridCalc2R_void(); }
    
    static void _call_gridCalc2R_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_gridCalc2R_void(void* impl_msg, void* impl_obj);
    /* DECLS: void sendUntrans();
     */
    // Entry point registration at startup
    
    static int reg_sendUntrans_void();
    // Entry point index lookup
    
    inline static int idx_sendUntrans_void() {
      static int epidx = reg_sendUntrans_void();
      return epidx;
    }

    
    inline static int idx_sendUntrans(void (ComputePmeMgr::*)() ) {
      return idx_sendUntrans_void();
    }


    
    static int sendUntrans() { return idx_sendUntrans_void(); }
    
    static void _call_sendUntrans_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_sendUntrans_void(void* impl_msg, void* impl_obj);
    /* DECLS: void recvSharedUntrans(PmeSharedUntransMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvSharedUntrans_PmeSharedUntransMsg();
    // Entry point index lookup
    
    inline static int idx_recvSharedUntrans_PmeSharedUntransMsg() {
      static int epidx = reg_recvSharedUntrans_PmeSharedUntransMsg();
      return epidx;
    }

    
    inline static int idx_recvSharedUntrans(void (ComputePmeMgr::*)(PmeSharedUntransMsg* impl_msg) ) {
      return idx_recvSharedUntrans_PmeSharedUntransMsg();
    }


    
    static int recvSharedUntrans(PmeSharedUntransMsg* impl_msg) { return idx_recvSharedUntrans_PmeSharedUntransMsg(); }
    
    static void _call_recvSharedUntrans_PmeSharedUntransMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvSharedUntrans_PmeSharedUntransMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvUntrans(PmeUntransMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvUntrans_PmeUntransMsg();
    // Entry point index lookup
    
    inline static int idx_recvUntrans_PmeUntransMsg() {
      static int epidx = reg_recvUntrans_PmeUntransMsg();
      return epidx;
    }

    
    inline static int idx_recvUntrans(void (ComputePmeMgr::*)(PmeUntransMsg* impl_msg) ) {
      return idx_recvUntrans_PmeUntransMsg();
    }


    
    static int recvUntrans(PmeUntransMsg* impl_msg) { return idx_recvUntrans_PmeUntransMsg(); }
    
    static void _call_recvUntrans_PmeUntransMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvUntrans_PmeUntransMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void gridCalc3();
     */
    // Entry point registration at startup
    
    static int reg_gridCalc3_void();
    // Entry point index lookup
    
    inline static int idx_gridCalc3_void() {
      static int epidx = reg_gridCalc3_void();
      return epidx;
    }

    
    inline static int idx_gridCalc3(void (ComputePmeMgr::*)() ) {
      return idx_gridCalc3_void();
    }


    
    static int gridCalc3() { return idx_gridCalc3_void(); }
    
    static void _call_gridCalc3_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_gridCalc3_void(void* impl_msg, void* impl_obj);
    /* DECLS: void sendUngrid();
     */
    // Entry point registration at startup
    
    static int reg_sendUngrid_void();
    // Entry point index lookup
    
    inline static int idx_sendUngrid_void() {
      static int epidx = reg_sendUngrid_void();
      return epidx;
    }

    
    inline static int idx_sendUngrid(void (ComputePmeMgr::*)() ) {
      return idx_sendUngrid_void();
    }


    
    static int sendUngrid() { return idx_sendUngrid_void(); }
    
    static void _call_sendUngrid_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_sendUngrid_void(void* impl_msg, void* impl_obj);
    /* DECLS: void recvUngrid(PmeGridMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvUngrid_PmeGridMsg();
    // Entry point index lookup
    
    inline static int idx_recvUngrid_PmeGridMsg() {
      static int epidx = reg_recvUngrid_PmeGridMsg();
      return epidx;
    }

    
    inline static int idx_recvUngrid(void (ComputePmeMgr::*)(PmeGridMsg* impl_msg) ) {
      return idx_recvUngrid_PmeGridMsg();
    }


    
    static int recvUngrid(PmeGridMsg* impl_msg) { return idx_recvUngrid_PmeGridMsg(); }
    
    static void _call_recvUngrid_PmeGridMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvUngrid_PmeGridMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvAck(PmeAckMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvAck_PmeAckMsg();
    // Entry point index lookup
    
    inline static int idx_recvAck_PmeAckMsg() {
      static int epidx = reg_recvAck_PmeAckMsg();
      return epidx;
    }

    
    inline static int idx_recvAck(void (ComputePmeMgr::*)(PmeAckMsg* impl_msg) ) {
      return idx_recvAck_PmeAckMsg();
    }


    
    static int recvAck(PmeAckMsg* impl_msg) { return idx_recvAck_PmeAckMsg(); }
    
    static void _call_recvAck_PmeAckMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvAck_PmeAckMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void ungridCalc();
     */
    // Entry point registration at startup
    
    static int reg_ungridCalc_void();
    // Entry point index lookup
    
    inline static int idx_ungridCalc_void() {
      static int epidx = reg_ungridCalc_void();
      return epidx;
    }

    
    inline static int idx_ungridCalc(void (ComputePmeMgr::*)() ) {
      return idx_ungridCalc_void();
    }


    
    static int ungridCalc() { return idx_ungridCalc_void(); }
    
    static void _call_ungridCalc_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ungridCalc_void(void* impl_msg, void* impl_obj);
    /* DECLS: void pollForcesReady();
     */
    // Entry point registration at startup
    
    static int reg_pollForcesReady_void();
    // Entry point index lookup
    
    inline static int idx_pollForcesReady_void() {
      static int epidx = reg_pollForcesReady_void();
      return epidx;
    }

    
    inline static int idx_pollForcesReady(void (ComputePmeMgr::*)() ) {
      return idx_pollForcesReady_void();
    }


    
    static int pollForcesReady() { return idx_pollForcesReady_void(); }
    
    static void _call_pollForcesReady_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_pollForcesReady_void(void* impl_msg, void* impl_obj);
    /* DECLS: void recvRecipEvir(PmeEvirMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvRecipEvir_PmeEvirMsg();
    // Entry point index lookup
    
    inline static int idx_recvRecipEvir_PmeEvirMsg() {
      static int epidx = reg_recvRecipEvir_PmeEvirMsg();
      return epidx;
    }

    
    inline static int idx_recvRecipEvir(void (ComputePmeMgr::*)(PmeEvirMsg* impl_msg) ) {
      return idx_recvRecipEvir_PmeEvirMsg();
    }


    
    static int recvRecipEvir(PmeEvirMsg* impl_msg) { return idx_recvRecipEvir_PmeEvirMsg(); }
    
    static void _call_recvRecipEvir_PmeEvirMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvRecipEvir_PmeEvirMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void addRecipEvirClient();
     */
    // Entry point registration at startup
    
    static int reg_addRecipEvirClient_void();
    // Entry point index lookup
    
    inline static int idx_addRecipEvirClient_void() {
      static int epidx = reg_addRecipEvirClient_void();
      return epidx;
    }

    
    inline static int idx_addRecipEvirClient(void (ComputePmeMgr::*)() ) {
      return idx_addRecipEvirClient_void();
    }


    
    static int addRecipEvirClient() { return idx_addRecipEvirClient_void(); }
    
    static void _call_addRecipEvirClient_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_addRecipEvirClient_void(void* impl_msg, void* impl_obj);
    /* DECLS: void recvArrays(const CProxy_PmeXPencil &impl_noname_4, const CProxy_PmeYPencil &impl_noname_5, const CProxy_PmeZPencil &impl_noname_6);
     */
    // Entry point registration at startup
    
    static int reg_recvArrays_marshall28();
    // Entry point index lookup
    
    inline static int idx_recvArrays_marshall28() {
      static int epidx = reg_recvArrays_marshall28();
      return epidx;
    }

    
    inline static int idx_recvArrays(void (ComputePmeMgr::*)(const CProxy_PmeXPencil &impl_noname_4, const CProxy_PmeYPencil &impl_noname_5, const CProxy_PmeZPencil &impl_noname_6) ) {
      return idx_recvArrays_marshall28();
    }


    
    static int recvArrays(const CProxy_PmeXPencil &impl_noname_4, const CProxy_PmeYPencil &impl_noname_5, const CProxy_PmeZPencil &impl_noname_6) { return idx_recvArrays_marshall28(); }
    
    static void _call_recvArrays_marshall28(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvArrays_marshall28(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_recvArrays_marshall28(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_recvArrays_marshall28(PUP::er &p,void *msg);
};
/* --------------- element proxy ------------------ */
class CProxyElement_ComputePmeMgr: public CProxyElement_IrrGroup{
  public:
    typedef ComputePmeMgr local_t;
    typedef CkIndex_ComputePmeMgr index_t;
    typedef CProxy_ComputePmeMgr proxy_t;
    typedef CProxyElement_ComputePmeMgr element_t;
    typedef CProxySection_ComputePmeMgr section_t;


    /* TRAM aggregators */

    CProxyElement_ComputePmeMgr(void) {
    }
    CProxyElement_ComputePmeMgr(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_ComputePmeMgr(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_ComputePmeMgr(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    ComputePmeMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ComputePmeMgr* ckLocalBranch(CkGroupID gID) {
      return (ComputePmeMgr*)CkLocalBranch(gID);
    }
/* DECLS: ComputePmeMgr();
 */
    

/* DECLS: void initialize(CkQdMsg* impl_msg);
 */
    
    void initialize(CkQdMsg* impl_msg);

/* DECLS: void initialize_pencils(CkQdMsg* impl_msg);
 */
    
    void initialize_pencils(CkQdMsg* impl_msg);

/* DECLS: void activate_pencils(CkQdMsg* impl_msg);
 */
    
    void activate_pencils(CkQdMsg* impl_msg);

/* DECLS: void pollChargeGridReady();
 */
    
    void pollChargeGridReady(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvChargeGridReady();
 */
    
    void recvChargeGridReady(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void sendDataHelper(int impl_noname_2);
 */
    
    void sendDataHelper(int impl_noname_2, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void sendPencilsHelper(int impl_noname_3);
 */
    
    void sendPencilsHelper(int impl_noname_3, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvGrid(PmeGridMsg* impl_msg);
 */
    
    void recvGrid(PmeGridMsg* impl_msg);

/* DECLS: void gridCalc1();
 */
    
    void gridCalc1(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void sendTransBarrier();
 */
    
    void sendTransBarrier(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void sendTrans();
 */
    
    void sendTrans(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvSharedTrans(PmeSharedTransMsg* impl_msg);
 */
    
    void recvSharedTrans(PmeSharedTransMsg* impl_msg);

/* DECLS: void recvTrans(PmeTransMsg* impl_msg);
 */
    
    void recvTrans(PmeTransMsg* impl_msg);

/* DECLS: void gridCalc2();
 */
    
    void gridCalc2(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void gridCalc2R();
 */
    
    void gridCalc2R(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void sendUntrans();
 */
    
    void sendUntrans(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvSharedUntrans(PmeSharedUntransMsg* impl_msg);
 */
    
    void recvSharedUntrans(PmeSharedUntransMsg* impl_msg);

/* DECLS: void recvUntrans(PmeUntransMsg* impl_msg);
 */
    
    void recvUntrans(PmeUntransMsg* impl_msg);

/* DECLS: void gridCalc3();
 */
    
    void gridCalc3(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void sendUngrid();
 */
    
    void sendUngrid(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvUngrid(PmeGridMsg* impl_msg);
 */
    
    void recvUngrid(PmeGridMsg* impl_msg);

/* DECLS: void recvAck(PmeAckMsg* impl_msg);
 */
    
    void recvAck(PmeAckMsg* impl_msg);

/* DECLS: void ungridCalc();
 */
    
    void ungridCalc(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void pollForcesReady();
 */
    
    void pollForcesReady(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvRecipEvir(PmeEvirMsg* impl_msg);
 */
    
    void recvRecipEvir(PmeEvirMsg* impl_msg);

/* DECLS: void addRecipEvirClient();
 */
    
    void addRecipEvirClient(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvArrays(const CProxy_PmeXPencil &impl_noname_4, const CProxy_PmeYPencil &impl_noname_5, const CProxy_PmeZPencil &impl_noname_6);
 */
    
    void recvArrays(const CProxy_PmeXPencil &impl_noname_4, const CProxy_PmeYPencil &impl_noname_5, const CProxy_PmeZPencil &impl_noname_6, const CkEntryOptions *impl_e_opts=NULL);

};
/* ---------------- collective proxy -------------- */
class CProxy_ComputePmeMgr: public CProxy_IrrGroup{
  public:
    typedef ComputePmeMgr local_t;
    typedef CkIndex_ComputePmeMgr index_t;
    typedef CProxy_ComputePmeMgr proxy_t;
    typedef CProxyElement_ComputePmeMgr element_t;
    typedef CProxySection_ComputePmeMgr section_t;

    CProxy_ComputePmeMgr(void) {
    }
    CProxy_ComputePmeMgr(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_ComputePmeMgr(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_ComputePmeMgr(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_ComputePmeMgr operator[](int onPE) const
      {return CProxyElement_ComputePmeMgr(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    ComputePmeMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ComputePmeMgr* ckLocalBranch(CkGroupID gID) {
      return (ComputePmeMgr*)CkLocalBranch(gID);
    }
/* DECLS: ComputePmeMgr();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void initialize(CkQdMsg* impl_msg);
 */
    
    void initialize(CkQdMsg* impl_msg);
    
    void initialize(CkQdMsg* impl_msg, int npes, int *pes);
    
    void initialize(CkQdMsg* impl_msg, CmiGroup &grp);

/* DECLS: void initialize_pencils(CkQdMsg* impl_msg);
 */
    
    void initialize_pencils(CkQdMsg* impl_msg);
    
    void initialize_pencils(CkQdMsg* impl_msg, int npes, int *pes);
    
    void initialize_pencils(CkQdMsg* impl_msg, CmiGroup &grp);

/* DECLS: void activate_pencils(CkQdMsg* impl_msg);
 */
    
    void activate_pencils(CkQdMsg* impl_msg);
    
    void activate_pencils(CkQdMsg* impl_msg, int npes, int *pes);
    
    void activate_pencils(CkQdMsg* impl_msg, CmiGroup &grp);

/* DECLS: void pollChargeGridReady();
 */
    
    void pollChargeGridReady(const CkEntryOptions *impl_e_opts=NULL);
    
    void pollChargeGridReady(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void pollChargeGridReady(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvChargeGridReady();
 */
    
    void recvChargeGridReady(const CkEntryOptions *impl_e_opts=NULL);
    
    void recvChargeGridReady(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void recvChargeGridReady(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void sendDataHelper(int impl_noname_2);
 */
    
    void sendDataHelper(int impl_noname_2, const CkEntryOptions *impl_e_opts=NULL);
    
    void sendDataHelper(int impl_noname_2, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void sendDataHelper(int impl_noname_2, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void sendPencilsHelper(int impl_noname_3);
 */
    
    void sendPencilsHelper(int impl_noname_3, const CkEntryOptions *impl_e_opts=NULL);
    
    void sendPencilsHelper(int impl_noname_3, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void sendPencilsHelper(int impl_noname_3, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvGrid(PmeGridMsg* impl_msg);
 */
    
    void recvGrid(PmeGridMsg* impl_msg);
    
    void recvGrid(PmeGridMsg* impl_msg, int npes, int *pes);
    
    void recvGrid(PmeGridMsg* impl_msg, CmiGroup &grp);

/* DECLS: void gridCalc1();
 */
    
    void gridCalc1(const CkEntryOptions *impl_e_opts=NULL);
    
    void gridCalc1(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void gridCalc1(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void sendTransBarrier();
 */
    
    void sendTransBarrier(const CkEntryOptions *impl_e_opts=NULL);
    
    void sendTransBarrier(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void sendTransBarrier(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void sendTrans();
 */
    
    void sendTrans(const CkEntryOptions *impl_e_opts=NULL);
    
    void sendTrans(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void sendTrans(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvSharedTrans(PmeSharedTransMsg* impl_msg);
 */
    
    void recvSharedTrans(PmeSharedTransMsg* impl_msg);
    
    void recvSharedTrans(PmeSharedTransMsg* impl_msg, int npes, int *pes);
    
    void recvSharedTrans(PmeSharedTransMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvTrans(PmeTransMsg* impl_msg);
 */
    
    void recvTrans(PmeTransMsg* impl_msg);
    
    void recvTrans(PmeTransMsg* impl_msg, int npes, int *pes);
    
    void recvTrans(PmeTransMsg* impl_msg, CmiGroup &grp);

/* DECLS: void gridCalc2();
 */
    
    void gridCalc2(const CkEntryOptions *impl_e_opts=NULL);
    
    void gridCalc2(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void gridCalc2(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void gridCalc2R();
 */
    
    void gridCalc2R(const CkEntryOptions *impl_e_opts=NULL);
    
    void gridCalc2R(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void gridCalc2R(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void sendUntrans();
 */
    
    void sendUntrans(const CkEntryOptions *impl_e_opts=NULL);
    
    void sendUntrans(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void sendUntrans(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvSharedUntrans(PmeSharedUntransMsg* impl_msg);
 */
    
    void recvSharedUntrans(PmeSharedUntransMsg* impl_msg);
    
    void recvSharedUntrans(PmeSharedUntransMsg* impl_msg, int npes, int *pes);
    
    void recvSharedUntrans(PmeSharedUntransMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvUntrans(PmeUntransMsg* impl_msg);
 */
    
    void recvUntrans(PmeUntransMsg* impl_msg);
    
    void recvUntrans(PmeUntransMsg* impl_msg, int npes, int *pes);
    
    void recvUntrans(PmeUntransMsg* impl_msg, CmiGroup &grp);

/* DECLS: void gridCalc3();
 */
    
    void gridCalc3(const CkEntryOptions *impl_e_opts=NULL);
    
    void gridCalc3(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void gridCalc3(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void sendUngrid();
 */
    
    void sendUngrid(const CkEntryOptions *impl_e_opts=NULL);
    
    void sendUngrid(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void sendUngrid(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvUngrid(PmeGridMsg* impl_msg);
 */
    
    void recvUngrid(PmeGridMsg* impl_msg);
    
    void recvUngrid(PmeGridMsg* impl_msg, int npes, int *pes);
    
    void recvUngrid(PmeGridMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvAck(PmeAckMsg* impl_msg);
 */
    
    void recvAck(PmeAckMsg* impl_msg);
    
    void recvAck(PmeAckMsg* impl_msg, int npes, int *pes);
    
    void recvAck(PmeAckMsg* impl_msg, CmiGroup &grp);

/* DECLS: void ungridCalc();
 */
    
    void ungridCalc(const CkEntryOptions *impl_e_opts=NULL);
    
    void ungridCalc(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void ungridCalc(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void pollForcesReady();
 */
    
    void pollForcesReady(const CkEntryOptions *impl_e_opts=NULL);
    
    void pollForcesReady(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void pollForcesReady(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvRecipEvir(PmeEvirMsg* impl_msg);
 */
    
    void recvRecipEvir(PmeEvirMsg* impl_msg);
    
    void recvRecipEvir(PmeEvirMsg* impl_msg, int npes, int *pes);
    
    void recvRecipEvir(PmeEvirMsg* impl_msg, CmiGroup &grp);

/* DECLS: void addRecipEvirClient();
 */
    
    void addRecipEvirClient(const CkEntryOptions *impl_e_opts=NULL);
    
    void addRecipEvirClient(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void addRecipEvirClient(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvArrays(const CProxy_PmeXPencil &impl_noname_4, const CProxy_PmeYPencil &impl_noname_5, const CProxy_PmeZPencil &impl_noname_6);
 */
    
    void recvArrays(const CProxy_PmeXPencil &impl_noname_4, const CProxy_PmeYPencil &impl_noname_5, const CProxy_PmeZPencil &impl_noname_6, const CkEntryOptions *impl_e_opts=NULL);
    
    void recvArrays(const CProxy_PmeXPencil &impl_noname_4, const CProxy_PmeYPencil &impl_noname_5, const CProxy_PmeZPencil &impl_noname_6, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void recvArrays(const CProxy_PmeXPencil &impl_noname_4, const CProxy_PmeYPencil &impl_noname_5, const CProxy_PmeZPencil &impl_noname_6, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

};
/* ---------------- section proxy -------------- */
class CProxySection_ComputePmeMgr: public CProxySection_IrrGroup{
  public:
    typedef ComputePmeMgr local_t;
    typedef CkIndex_ComputePmeMgr index_t;
    typedef CProxy_ComputePmeMgr proxy_t;
    typedef CProxyElement_ComputePmeMgr element_t;
    typedef CProxySection_ComputePmeMgr section_t;

    CProxySection_ComputePmeMgr(void) {
    }
    CProxySection_ComputePmeMgr(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_ComputePmeMgr(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_ComputePmeMgr(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_ComputePmeMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_ComputePmeMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    ComputePmeMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ComputePmeMgr* ckLocalBranch(CkGroupID gID) {
      return (ComputePmeMgr*)CkLocalBranch(gID);
    }
/* DECLS: ComputePmeMgr();
 */
    

/* DECLS: void initialize(CkQdMsg* impl_msg);
 */
    
    void initialize(CkQdMsg* impl_msg);

/* DECLS: void initialize_pencils(CkQdMsg* impl_msg);
 */
    
    void initialize_pencils(CkQdMsg* impl_msg);

/* DECLS: void activate_pencils(CkQdMsg* impl_msg);
 */
    
    void activate_pencils(CkQdMsg* impl_msg);

/* DECLS: void pollChargeGridReady();
 */
    
    void pollChargeGridReady(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvChargeGridReady();
 */
    
    void recvChargeGridReady(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void sendDataHelper(int impl_noname_2);
 */
    
    void sendDataHelper(int impl_noname_2, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void sendPencilsHelper(int impl_noname_3);
 */
    
    void sendPencilsHelper(int impl_noname_3, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvGrid(PmeGridMsg* impl_msg);
 */
    
    void recvGrid(PmeGridMsg* impl_msg);

/* DECLS: void gridCalc1();
 */
    
    void gridCalc1(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void sendTransBarrier();
 */
    
    void sendTransBarrier(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void sendTrans();
 */
    
    void sendTrans(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvSharedTrans(PmeSharedTransMsg* impl_msg);
 */
    
    void recvSharedTrans(PmeSharedTransMsg* impl_msg);

/* DECLS: void recvTrans(PmeTransMsg* impl_msg);
 */
    
    void recvTrans(PmeTransMsg* impl_msg);

/* DECLS: void gridCalc2();
 */
    
    void gridCalc2(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void gridCalc2R();
 */
    
    void gridCalc2R(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void sendUntrans();
 */
    
    void sendUntrans(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvSharedUntrans(PmeSharedUntransMsg* impl_msg);
 */
    
    void recvSharedUntrans(PmeSharedUntransMsg* impl_msg);

/* DECLS: void recvUntrans(PmeUntransMsg* impl_msg);
 */
    
    void recvUntrans(PmeUntransMsg* impl_msg);

/* DECLS: void gridCalc3();
 */
    
    void gridCalc3(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void sendUngrid();
 */
    
    void sendUngrid(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvUngrid(PmeGridMsg* impl_msg);
 */
    
    void recvUngrid(PmeGridMsg* impl_msg);

/* DECLS: void recvAck(PmeAckMsg* impl_msg);
 */
    
    void recvAck(PmeAckMsg* impl_msg);

/* DECLS: void ungridCalc();
 */
    
    void ungridCalc(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void pollForcesReady();
 */
    
    void pollForcesReady(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvRecipEvir(PmeEvirMsg* impl_msg);
 */
    
    void recvRecipEvir(PmeEvirMsg* impl_msg);

/* DECLS: void addRecipEvirClient();
 */
    
    void addRecipEvirClient(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvArrays(const CProxy_PmeXPencil &impl_noname_4, const CProxy_PmeYPencil &impl_noname_5, const CProxy_PmeZPencil &impl_noname_6);
 */
    
    void recvArrays(const CProxy_PmeXPencil &impl_noname_4, const CProxy_PmeYPencil &impl_noname_5, const CProxy_PmeZPencil &impl_noname_6, const CkEntryOptions *impl_e_opts=NULL);

};
#define ComputePmeMgr_SDAG_CODE 
typedef CBaseT1<Group, CProxy_ComputePmeMgr>CBase_ComputePmeMgr;






/* ---------------- method closures -------------- */
class Closure_PmePencilMap {
  public:

};





/* ---------------- method closures -------------- */
class Closure_PmeZPencil {
  public:






    struct dummyRecvGrid_6_closure;



};

/* ---------------- method closures -------------- */
class Closure_PmeYPencil {
  public:







};

/* ---------------- method closures -------------- */
class Closure_PmeXPencil {
  public:




};

/* ---------------- method closures -------------- */
class Closure_NodePmeMgr {
  public:


    struct recvPencilMapProxies_2_closure;




    struct sendDataHelper_5_closure;


    struct sendPencilsHelper_6_closure;







};

/* ---------------- method closures -------------- */
class Closure_ComputePmeMgr {
  public:





    struct pollChargeGridReady_5_closure;


    struct recvChargeGridReady_6_closure;


    struct sendDataHelper_7_closure;


    struct sendPencilsHelper_8_closure;



    struct gridCalc1_10_closure;


    struct sendTransBarrier_11_closure;


    struct sendTrans_12_closure;




    struct gridCalc2_15_closure;


    struct gridCalc2R_16_closure;


    struct sendUntrans_17_closure;




    struct gridCalc3_20_closure;


    struct sendUngrid_21_closure;




    struct ungridCalc_24_closure;


    struct pollForcesReady_25_closure;



    struct addRecipEvirClient_27_closure;


    struct recvArrays_28_closure;

};

extern void _registerComputePmeMgr(void);
#endif
