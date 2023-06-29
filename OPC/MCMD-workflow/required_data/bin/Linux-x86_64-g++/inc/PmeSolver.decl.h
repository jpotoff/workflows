#ifndef _DECL_PmeSolver_H_
#define _DECL_PmeSolver_H_
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
/* DECLS: message PmeStartMsg;
 */
class PmeStartMsg;
class CMessage_PmeStartMsg:public CkMessage{
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
    CMessage_PmeStartMsg();
    static void *pack(PmeStartMsg *p);
    static PmeStartMsg* unpack(void* p);
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
/* DECLS: message PmeRunMsg;
 */
class PmeRunMsg;
class CMessage_PmeRunMsg:public CkMessage{
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
    CMessage_PmeRunMsg();
    static void *pack(PmeRunMsg *p);
    static PmeRunMsg* unpack(void* p);
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
/* DECLS: message PmeDoneMsg;
 */
class PmeDoneMsg;
class CMessage_PmeDoneMsg:public CkMessage{
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
    CMessage_PmeDoneMsg();
    static void *pack(PmeDoneMsg *p);
    static PmeDoneMsg* unpack(void* p);
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

/* DECLS: group PmePencilXYZMap: CkArrayMap{
PmePencilXYZMap(int pe);
};
 */
 class PmePencilXYZMap;
 class CkIndex_PmePencilXYZMap;
 class CProxy_PmePencilXYZMap;
 class CProxyElement_PmePencilXYZMap;
 class CProxySection_PmePencilXYZMap;
/* --------------- index object ------------------ */
class CkIndex_PmePencilXYZMap:public CkIndex_CkArrayMap{
  public:
    typedef PmePencilXYZMap local_t;
    typedef CkIndex_PmePencilXYZMap index_t;
    typedef CProxy_PmePencilXYZMap proxy_t;
    typedef CProxyElement_PmePencilXYZMap element_t;
    typedef CProxySection_PmePencilXYZMap section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: PmePencilXYZMap(int pe);
     */
    // Entry point registration at startup
    
    static int reg_PmePencilXYZMap_marshall1();
    // Entry point index lookup
    
    inline static int idx_PmePencilXYZMap_marshall1() {
      static int epidx = reg_PmePencilXYZMap_marshall1();
      return epidx;
    }

    
    static int ckNew(int pe) { return idx_PmePencilXYZMap_marshall1(); }
    
    static void _call_PmePencilXYZMap_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_PmePencilXYZMap_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_PmePencilXYZMap_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_PmePencilXYZMap_marshall1(PUP::er &p,void *msg);
};
/* --------------- element proxy ------------------ */
class CProxyElement_PmePencilXYZMap: public CProxyElement_CkArrayMap{
  public:
    typedef PmePencilXYZMap local_t;
    typedef CkIndex_PmePencilXYZMap index_t;
    typedef CProxy_PmePencilXYZMap proxy_t;
    typedef CProxyElement_PmePencilXYZMap element_t;
    typedef CProxySection_PmePencilXYZMap section_t;


    /* TRAM aggregators */

    CProxyElement_PmePencilXYZMap(void) {
    }
    CProxyElement_PmePencilXYZMap(const IrrGroup *g) : CProxyElement_CkArrayMap(g){
    }
    CProxyElement_PmePencilXYZMap(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_CkArrayMap(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_PmePencilXYZMap(CkGroupID _gid,int _onPE) : CProxyElement_CkArrayMap(_gid,_onPE){
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
    PmePencilXYZMap* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static PmePencilXYZMap* ckLocalBranch(CkGroupID gID) {
      return (PmePencilXYZMap*)CkLocalBranch(gID);
    }
/* DECLS: PmePencilXYZMap(int pe);
 */
    

};
/* ---------------- collective proxy -------------- */
class CProxy_PmePencilXYZMap: public CProxy_CkArrayMap{
  public:
    typedef PmePencilXYZMap local_t;
    typedef CkIndex_PmePencilXYZMap index_t;
    typedef CProxy_PmePencilXYZMap proxy_t;
    typedef CProxyElement_PmePencilXYZMap element_t;
    typedef CProxySection_PmePencilXYZMap section_t;

    CProxy_PmePencilXYZMap(void) {
    }
    CProxy_PmePencilXYZMap(const IrrGroup *g) : CProxy_CkArrayMap(g){
    }
    CProxy_PmePencilXYZMap(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_CkArrayMap(_gid,CK_DELCTOR_ARGS){  }
    CProxy_PmePencilXYZMap(CkGroupID _gid) : CProxy_CkArrayMap(_gid){  }
    CProxyElement_PmePencilXYZMap operator[](int onPE) const
      {return CProxyElement_PmePencilXYZMap(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    PmePencilXYZMap* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static PmePencilXYZMap* ckLocalBranch(CkGroupID gID) {
      return (PmePencilXYZMap*)CkLocalBranch(gID);
    }
/* DECLS: PmePencilXYZMap(int pe);
 */
    
    static CkGroupID ckNew(int pe, const CkEntryOptions *impl_e_opts=NULL);
    CProxy_PmePencilXYZMap(int pe, const CkEntryOptions *impl_e_opts=NULL);

};
/* ---------------- section proxy -------------- */
class CProxySection_PmePencilXYZMap: public CProxySection_CkArrayMap{
  public:
    typedef PmePencilXYZMap local_t;
    typedef CkIndex_PmePencilXYZMap index_t;
    typedef CProxy_PmePencilXYZMap proxy_t;
    typedef CProxyElement_PmePencilXYZMap element_t;
    typedef CProxySection_PmePencilXYZMap section_t;

    CProxySection_PmePencilXYZMap(void) {
    }
    CProxySection_PmePencilXYZMap(const IrrGroup *g) : CProxySection_CkArrayMap(g){
    }
    CProxySection_PmePencilXYZMap(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_CkArrayMap(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_PmePencilXYZMap(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_CkArrayMap(_gid,_pelist,_npes,factor){  }
    CProxySection_PmePencilXYZMap(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_CkArrayMap(n,_gid,_pelist,_npes,factor){  }
    CProxySection_PmePencilXYZMap(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_CkArrayMap(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    PmePencilXYZMap* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static PmePencilXYZMap* ckLocalBranch(CkGroupID gID) {
      return (PmePencilXYZMap*)CkLocalBranch(gID);
    }
/* DECLS: PmePencilXYZMap(int pe);
 */
    

};
#define PmePencilXYZMap_SDAG_CODE 
typedef CBaseT1<CkArrayMap, CProxy_PmePencilXYZMap>CBase_PmePencilXYZMap;

/* DECLS: group PmePencilXMap: CkArrayMap{
PmePencilXMap(int ia, int ib, int width, const std::vector<int> &pes);
};
 */
 class PmePencilXMap;
 class CkIndex_PmePencilXMap;
 class CProxy_PmePencilXMap;
 class CProxyElement_PmePencilXMap;
 class CProxySection_PmePencilXMap;
/* --------------- index object ------------------ */
class CkIndex_PmePencilXMap:public CkIndex_CkArrayMap{
  public:
    typedef PmePencilXMap local_t;
    typedef CkIndex_PmePencilXMap index_t;
    typedef CProxy_PmePencilXMap proxy_t;
    typedef CProxyElement_PmePencilXMap element_t;
    typedef CProxySection_PmePencilXMap section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: PmePencilXMap(int ia, int ib, int width, const std::vector<int> &pes);
     */
    // Entry point registration at startup
    
    static int reg_PmePencilXMap_marshall1();
    // Entry point index lookup
    
    inline static int idx_PmePencilXMap_marshall1() {
      static int epidx = reg_PmePencilXMap_marshall1();
      return epidx;
    }

    
    static int ckNew(int ia, int ib, int width, const std::vector<int> &pes) { return idx_PmePencilXMap_marshall1(); }
    
    static void _call_PmePencilXMap_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_PmePencilXMap_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_PmePencilXMap_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_PmePencilXMap_marshall1(PUP::er &p,void *msg);
};
/* --------------- element proxy ------------------ */
class CProxyElement_PmePencilXMap: public CProxyElement_CkArrayMap{
  public:
    typedef PmePencilXMap local_t;
    typedef CkIndex_PmePencilXMap index_t;
    typedef CProxy_PmePencilXMap proxy_t;
    typedef CProxyElement_PmePencilXMap element_t;
    typedef CProxySection_PmePencilXMap section_t;


    /* TRAM aggregators */

    CProxyElement_PmePencilXMap(void) {
    }
    CProxyElement_PmePencilXMap(const IrrGroup *g) : CProxyElement_CkArrayMap(g){
    }
    CProxyElement_PmePencilXMap(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_CkArrayMap(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_PmePencilXMap(CkGroupID _gid,int _onPE) : CProxyElement_CkArrayMap(_gid,_onPE){
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
    PmePencilXMap* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static PmePencilXMap* ckLocalBranch(CkGroupID gID) {
      return (PmePencilXMap*)CkLocalBranch(gID);
    }
/* DECLS: PmePencilXMap(int ia, int ib, int width, const std::vector<int> &pes);
 */
    

};
/* ---------------- collective proxy -------------- */
class CProxy_PmePencilXMap: public CProxy_CkArrayMap{
  public:
    typedef PmePencilXMap local_t;
    typedef CkIndex_PmePencilXMap index_t;
    typedef CProxy_PmePencilXMap proxy_t;
    typedef CProxyElement_PmePencilXMap element_t;
    typedef CProxySection_PmePencilXMap section_t;

    CProxy_PmePencilXMap(void) {
    }
    CProxy_PmePencilXMap(const IrrGroup *g) : CProxy_CkArrayMap(g){
    }
    CProxy_PmePencilXMap(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_CkArrayMap(_gid,CK_DELCTOR_ARGS){  }
    CProxy_PmePencilXMap(CkGroupID _gid) : CProxy_CkArrayMap(_gid){  }
    CProxyElement_PmePencilXMap operator[](int onPE) const
      {return CProxyElement_PmePencilXMap(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    PmePencilXMap* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static PmePencilXMap* ckLocalBranch(CkGroupID gID) {
      return (PmePencilXMap*)CkLocalBranch(gID);
    }
/* DECLS: PmePencilXMap(int ia, int ib, int width, const std::vector<int> &pes);
 */
    
    static CkGroupID ckNew(int ia, int ib, int width, const std::vector<int> &pes, const CkEntryOptions *impl_e_opts=NULL);
    CProxy_PmePencilXMap(int ia, int ib, int width, const std::vector<int> &pes, const CkEntryOptions *impl_e_opts=NULL);

};
/* ---------------- section proxy -------------- */
class CProxySection_PmePencilXMap: public CProxySection_CkArrayMap{
  public:
    typedef PmePencilXMap local_t;
    typedef CkIndex_PmePencilXMap index_t;
    typedef CProxy_PmePencilXMap proxy_t;
    typedef CProxyElement_PmePencilXMap element_t;
    typedef CProxySection_PmePencilXMap section_t;

    CProxySection_PmePencilXMap(void) {
    }
    CProxySection_PmePencilXMap(const IrrGroup *g) : CProxySection_CkArrayMap(g){
    }
    CProxySection_PmePencilXMap(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_CkArrayMap(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_PmePencilXMap(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_CkArrayMap(_gid,_pelist,_npes,factor){  }
    CProxySection_PmePencilXMap(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_CkArrayMap(n,_gid,_pelist,_npes,factor){  }
    CProxySection_PmePencilXMap(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_CkArrayMap(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    PmePencilXMap* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static PmePencilXMap* ckLocalBranch(CkGroupID gID) {
      return (PmePencilXMap*)CkLocalBranch(gID);
    }
/* DECLS: PmePencilXMap(int ia, int ib, int width, const std::vector<int> &pes);
 */
    

};
#define PmePencilXMap_SDAG_CODE 
typedef CBaseT1<CkArrayMap, CProxy_PmePencilXMap>CBase_PmePencilXMap;

/* DECLS: group PmePencilXYMap: CkArrayMap{
PmePencilXYMap(const std::vector<int> &pes);
};
 */
 class PmePencilXYMap;
 class CkIndex_PmePencilXYMap;
 class CProxy_PmePencilXYMap;
 class CProxyElement_PmePencilXYMap;
 class CProxySection_PmePencilXYMap;
/* --------------- index object ------------------ */
class CkIndex_PmePencilXYMap:public CkIndex_CkArrayMap{
  public:
    typedef PmePencilXYMap local_t;
    typedef CkIndex_PmePencilXYMap index_t;
    typedef CProxy_PmePencilXYMap proxy_t;
    typedef CProxyElement_PmePencilXYMap element_t;
    typedef CProxySection_PmePencilXYMap section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: PmePencilXYMap(const std::vector<int> &pes);
     */
    // Entry point registration at startup
    
    static int reg_PmePencilXYMap_marshall1();
    // Entry point index lookup
    
    inline static int idx_PmePencilXYMap_marshall1() {
      static int epidx = reg_PmePencilXYMap_marshall1();
      return epidx;
    }

    
    static int ckNew(const std::vector<int> &pes) { return idx_PmePencilXYMap_marshall1(); }
    
    static void _call_PmePencilXYMap_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_PmePencilXYMap_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_PmePencilXYMap_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_PmePencilXYMap_marshall1(PUP::er &p,void *msg);
};
/* --------------- element proxy ------------------ */
class CProxyElement_PmePencilXYMap: public CProxyElement_CkArrayMap{
  public:
    typedef PmePencilXYMap local_t;
    typedef CkIndex_PmePencilXYMap index_t;
    typedef CProxy_PmePencilXYMap proxy_t;
    typedef CProxyElement_PmePencilXYMap element_t;
    typedef CProxySection_PmePencilXYMap section_t;


    /* TRAM aggregators */

    CProxyElement_PmePencilXYMap(void) {
    }
    CProxyElement_PmePencilXYMap(const IrrGroup *g) : CProxyElement_CkArrayMap(g){
    }
    CProxyElement_PmePencilXYMap(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_CkArrayMap(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_PmePencilXYMap(CkGroupID _gid,int _onPE) : CProxyElement_CkArrayMap(_gid,_onPE){
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
    PmePencilXYMap* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static PmePencilXYMap* ckLocalBranch(CkGroupID gID) {
      return (PmePencilXYMap*)CkLocalBranch(gID);
    }
/* DECLS: PmePencilXYMap(const std::vector<int> &pes);
 */
    

};
/* ---------------- collective proxy -------------- */
class CProxy_PmePencilXYMap: public CProxy_CkArrayMap{
  public:
    typedef PmePencilXYMap local_t;
    typedef CkIndex_PmePencilXYMap index_t;
    typedef CProxy_PmePencilXYMap proxy_t;
    typedef CProxyElement_PmePencilXYMap element_t;
    typedef CProxySection_PmePencilXYMap section_t;

    CProxy_PmePencilXYMap(void) {
    }
    CProxy_PmePencilXYMap(const IrrGroup *g) : CProxy_CkArrayMap(g){
    }
    CProxy_PmePencilXYMap(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_CkArrayMap(_gid,CK_DELCTOR_ARGS){  }
    CProxy_PmePencilXYMap(CkGroupID _gid) : CProxy_CkArrayMap(_gid){  }
    CProxyElement_PmePencilXYMap operator[](int onPE) const
      {return CProxyElement_PmePencilXYMap(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    PmePencilXYMap* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static PmePencilXYMap* ckLocalBranch(CkGroupID gID) {
      return (PmePencilXYMap*)CkLocalBranch(gID);
    }
/* DECLS: PmePencilXYMap(const std::vector<int> &pes);
 */
    
    static CkGroupID ckNew(const std::vector<int> &pes, const CkEntryOptions *impl_e_opts=NULL);
    CProxy_PmePencilXYMap(const std::vector<int> &pes, const CkEntryOptions *impl_e_opts=NULL);

};
/* ---------------- section proxy -------------- */
class CProxySection_PmePencilXYMap: public CProxySection_CkArrayMap{
  public:
    typedef PmePencilXYMap local_t;
    typedef CkIndex_PmePencilXYMap index_t;
    typedef CProxy_PmePencilXYMap proxy_t;
    typedef CProxyElement_PmePencilXYMap element_t;
    typedef CProxySection_PmePencilXYMap section_t;

    CProxySection_PmePencilXYMap(void) {
    }
    CProxySection_PmePencilXYMap(const IrrGroup *g) : CProxySection_CkArrayMap(g){
    }
    CProxySection_PmePencilXYMap(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_CkArrayMap(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_PmePencilXYMap(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_CkArrayMap(_gid,_pelist,_npes,factor){  }
    CProxySection_PmePencilXYMap(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_CkArrayMap(n,_gid,_pelist,_npes,factor){  }
    CProxySection_PmePencilXYMap(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_CkArrayMap(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    PmePencilXYMap* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static PmePencilXYMap* ckLocalBranch(CkGroupID gID) {
      return (PmePencilXYMap*)CkLocalBranch(gID);
    }
/* DECLS: PmePencilXYMap(const std::vector<int> &pes);
 */
    

};
#define PmePencilXYMap_SDAG_CODE 
typedef CBaseT1<CkArrayMap, CProxy_PmePencilXYMap>CBase_PmePencilXYMap;

/* DECLS: array PmePencilXYZ: ArrayElement{
PmePencilXYZ();
void chargeGridReady(PmeRunMsg* impl_msg);
void skip();
void start(PmeStartMsg* impl_msg);
PmePencilXYZ(CkMigrateMessage* impl_msg);
};
 */
 class PmePencilXYZ;
 class CkIndex_PmePencilXYZ;
 class CProxy_PmePencilXYZ;
 class CProxyElement_PmePencilXYZ;
 class CProxySection_PmePencilXYZ;
/* --------------- index object ------------------ */
class CkIndex_PmePencilXYZ:public CkIndex_ArrayElement{
  public:
    typedef PmePencilXYZ local_t;
    typedef CkIndex_PmePencilXYZ index_t;
    typedef CProxy_PmePencilXYZ proxy_t;
    typedef CProxyElement_PmePencilXYZ element_t;
    typedef CProxySection_PmePencilXYZ section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: PmePencilXYZ();
     */
    // Entry point registration at startup
    
    static int reg_PmePencilXYZ_void();
    // Entry point index lookup
    
    inline static int idx_PmePencilXYZ_void() {
      static int epidx = reg_PmePencilXYZ_void();
      return epidx;
    }

    
    static int ckNew() { return idx_PmePencilXYZ_void(); }
    
    static void _call_PmePencilXYZ_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_PmePencilXYZ_void(void* impl_msg, void* impl_obj);
    /* DECLS: void chargeGridReady(PmeRunMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_chargeGridReady_PmeRunMsg();
    // Entry point index lookup
    
    inline static int idx_chargeGridReady_PmeRunMsg() {
      static int epidx = reg_chargeGridReady_PmeRunMsg();
      return epidx;
    }

    
    inline static int idx_chargeGridReady(void (PmePencilXYZ::*)(PmeRunMsg* impl_msg) ) {
      return idx_chargeGridReady_PmeRunMsg();
    }


    
    static int chargeGridReady(PmeRunMsg* impl_msg) { return idx_chargeGridReady_PmeRunMsg(); }
    
    static void _call_chargeGridReady_PmeRunMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_chargeGridReady_PmeRunMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void skip();
     */
    // Entry point registration at startup
    
    static int reg_skip_void();
    // Entry point index lookup
    
    inline static int idx_skip_void() {
      static int epidx = reg_skip_void();
      return epidx;
    }

    
    inline static int idx_skip(void (PmePencilXYZ::*)() ) {
      return idx_skip_void();
    }


    
    static int skip() { return idx_skip_void(); }
    
    static void _call_skip_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_skip_void(void* impl_msg, void* impl_obj);
    /* DECLS: void start(PmeStartMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_start_PmeStartMsg();
    // Entry point index lookup
    
    inline static int idx_start_PmeStartMsg() {
      static int epidx = reg_start_PmeStartMsg();
      return epidx;
    }

    
    inline static int idx_start(void (PmePencilXYZ::*)(PmeStartMsg* impl_msg) ) {
      return idx_start_PmeStartMsg();
    }


    
    static int start(PmeStartMsg* impl_msg) { return idx_start_PmeStartMsg(); }
    
    static void _call_start_PmeStartMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_start_PmeStartMsg(void* impl_msg, void* impl_obj);
    /* DECLS: PmePencilXYZ(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_PmePencilXYZ_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_PmePencilXYZ_CkMigrateMessage() {
      static int epidx = reg_PmePencilXYZ_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_PmePencilXYZ_CkMigrateMessage(); }
    
    static void _call_PmePencilXYZ_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_PmePencilXYZ_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_PmePencilXYZ : public CProxyElement_ArrayElement{
  public:
    typedef PmePencilXYZ local_t;
    typedef CkIndex_PmePencilXYZ index_t;
    typedef CProxy_PmePencilXYZ proxy_t;
    typedef CProxyElement_PmePencilXYZ element_t;
    typedef CProxySection_PmePencilXYZ section_t;

    using array_index_t = CkArrayIndex1D;

    /* TRAM aggregators */

    CProxyElement_PmePencilXYZ(void) {
    }
    CProxyElement_PmePencilXYZ(const ArrayElement *e) : CProxyElement_ArrayElement(e){
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

    PmePencilXYZ *ckLocal(void) const
    { return (PmePencilXYZ *)CProxyElement_ArrayElement::ckLocal(); }

    CProxyElement_PmePencilXYZ(const CkArrayID &aid,const CkArrayIndex1D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_PmePencilXYZ(const CkArrayID &aid,const CkArrayIndex1D &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}

    CProxyElement_PmePencilXYZ(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_PmePencilXYZ(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}
/* DECLS: PmePencilXYZ();
 */
    
    void insert(int onPE=-1, const CkEntryOptions *impl_e_opts=NULL);
/* DECLS: void chargeGridReady(PmeRunMsg* impl_msg);
 */
    
    void chargeGridReady(PmeRunMsg* impl_msg) ;

/* DECLS: void skip();
 */
    
    void skip(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void start(PmeStartMsg* impl_msg);
 */
    
    void start(PmeStartMsg* impl_msg) ;

/* DECLS: PmePencilXYZ(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
 class CProxy_PmePencilXYZ : public CProxy_ArrayElement{
  public:
    typedef PmePencilXYZ local_t;
    typedef CkIndex_PmePencilXYZ index_t;
    typedef CProxy_PmePencilXYZ proxy_t;
    typedef CProxyElement_PmePencilXYZ element_t;
    typedef CProxySection_PmePencilXYZ section_t;

    using array_index_t = CkArrayIndex1D;
    CProxy_PmePencilXYZ(void) {
    }
    CProxy_PmePencilXYZ(const ArrayElement *e) : CProxy_ArrayElement(e){
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
    CProxyElement_PmePencilXYZ operator [] (const CkArrayIndex1D &idx) const
    { return CProxyElement_PmePencilXYZ(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_PmePencilXYZ operator() (const CkArrayIndex1D &idx) const
    { return CProxyElement_PmePencilXYZ(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_PmePencilXYZ operator [] (int idx) const 
        {return CProxyElement_PmePencilXYZ(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxyElement_PmePencilXYZ operator () (int idx) const 
        {return CProxyElement_PmePencilXYZ(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxy_PmePencilXYZ(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_PmePencilXYZ(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: PmePencilXYZ();
 */
    
    static CkArrayID ckNew(const CkArrayOptions &opts = CkArrayOptions(), const CkEntryOptions *impl_e_opts=NULL);
    static void      ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);
    static CkArrayID ckNew(const int s1, const CkEntryOptions *impl_e_opts=NULL);
    static void ckNew(const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void chargeGridReady(PmeRunMsg* impl_msg);
 */
    
    void chargeGridReady(PmeRunMsg* impl_msg) ;

/* DECLS: void skip();
 */
    
    void skip(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void start(PmeStartMsg* impl_msg);
 */
    
    void start(PmeStartMsg* impl_msg) ;

/* DECLS: PmePencilXYZ(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
 class CProxySection_PmePencilXYZ : public CProxySection_ArrayElement{
  public:
    typedef PmePencilXYZ local_t;
    typedef CkIndex_PmePencilXYZ index_t;
    typedef CProxy_PmePencilXYZ proxy_t;
    typedef CProxyElement_PmePencilXYZ element_t;
    typedef CProxySection_PmePencilXYZ section_t;

    using array_index_t = CkArrayIndex1D;
    CProxySection_PmePencilXYZ(void) {
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
    CProxyElement_PmePencilXYZ operator [] (const CkArrayIndex1D &idx) const
        {return CProxyElement_PmePencilXYZ(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_PmePencilXYZ operator() (const CkArrayIndex1D &idx) const
        {return CProxyElement_PmePencilXYZ(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_PmePencilXYZ operator [] (int idx) const 
        {return CProxyElement_PmePencilXYZ(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    CProxyElement_PmePencilXYZ operator () (int idx) const 
        {return CProxyElement_PmePencilXYZ(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex1D *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      return CkSectionID(aid, elems, nElems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, const std::vector<CkArrayIndex1D> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      return CkSectionID(aid, elems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, int l, int u, int s, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      std::vector<CkArrayIndex1D> al;
      for (int i=l; i<=u; i+=s) al.emplace_back(i);
      return CkSectionID(aid, al, factor);
    } 
    CProxySection_PmePencilXYZ(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_PmePencilXYZ(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_PmePencilXYZ(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems,nElems, factor) {}
    CProxySection_PmePencilXYZ(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems, factor) { ckAutoDelegate(); }
    CProxySection_PmePencilXYZ(const CkSectionID &sid)  
        :CProxySection_ArrayElement(sid) { ckAutoDelegate(); }
    CProxySection_PmePencilXYZ(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_PmePencilXYZ(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_PmePencilXYZ(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) { ckAutoDelegate(); }
    CProxySection_PmePencilXYZ(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems) 
        :CProxySection_ArrayElement(aid,elems) { ckAutoDelegate(); }
    CProxySection_PmePencilXYZ(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, int factor) 
        :CProxySection_ArrayElement(n,aid,elems,nElems, factor) { ckAutoDelegate(); }
    CProxySection_PmePencilXYZ(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, int factor) 
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
/* DECLS: PmePencilXYZ();
 */
    

/* DECLS: void chargeGridReady(PmeRunMsg* impl_msg);
 */
    
    void chargeGridReady(PmeRunMsg* impl_msg) ;

/* DECLS: void skip();
 */
    
    void skip(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void start(PmeStartMsg* impl_msg);
 */
    
    void start(PmeStartMsg* impl_msg) ;

/* DECLS: PmePencilXYZ(CkMigrateMessage* impl_msg);
 */

};
#define PmePencilXYZ_SDAG_CODE                                                 \
public:                                                                        \
  void start(PmeStartMsg pmeStartMsg);                                         \
  void _sdag_fnc_start(PmeStartMsg pmeStartMsg);                               \
  void _sdag_fnc_start(PmeStartMsg* gen0);                                     \
private:                                                                       \
  void start_end(PmeStartMsg* gen0);                                           \
  void _slist_0(PmeStartMsg* gen0);                                            \
  void _slist_0_end(PmeStartMsg* gen0);                                        \
  void _serial_0(PmeStartMsg* gen0);                                           \
  void _while_0(PmeStartMsg* gen0);                                            \
  void _while_0_end(PmeStartMsg* gen0);                                        \
  void _slist_1(PmeStartMsg* gen0);                                            \
  void _slist_1_end(PmeStartMsg* gen0);                                        \
  SDAG::Continuation* _when_0(PmeStartMsg* gen0);                              \
  void _when_0_end(PmeStartMsg* gen0, PmeRunMsg* gen1);                        \
  void _serial_1(PmeStartMsg* gen0, PmeRunMsg* gen1);                          \
  void _serial_2(PmeStartMsg* gen0);                                           \
  void _serial_3(PmeStartMsg* gen0);                                           \
  void _serial_4(PmeStartMsg* gen0);                                           \
public:                                                                        \
  void chargeGridReady(PmeRunMsg* msg_msg);                                    \
public:                                                                        \
  SDAG::dep_ptr __dep;                                                         \
  void _sdag_init();                                                           \
  void __sdag_init();                                                          \
public:                                                                        \
  void _sdag_pup(PUP::er &p);                                                  \
  void __sdag_pup(PUP::er &p) { }                                              \
  static void __sdag_register();                                               \
  static int _sdag_idx_PmePencilXYZ_initFFT();                                 \
  static int _sdag_reg_PmePencilXYZ_initFFT();                                 \
  static int _sdag_idx_PmePencilXYZ_forwardFFT();                              \
  static int _sdag_reg_PmePencilXYZ_forwardFFT();                              \
  static int _sdag_idx_PmePencilXYZ_forwardDone();                             \
  static int _sdag_reg_PmePencilXYZ_forwardDone();                             \
  static int _sdag_idx_PmePencilXYZ_backwardFFT();                             \
  static int _sdag_reg_PmePencilXYZ_backwardFFT();                             \
  static int _sdag_idx_PmePencilXYZ_backwardDone();                            \
  static int _sdag_reg_PmePencilXYZ_backwardDone();                            \

typedef CBaseT1<ArrayElementT<CkIndex1D>, CProxy_PmePencilXYZ>CBase_PmePencilXYZ;

#ifndef GROUPDEPNUM_DECLARED
# define GROUPDEPNUM_DECLARED
struct GroupDepNum
{
  int groupDepNum;
  explicit GroupDepNum(int g = 0) : groupDepNum{g} { }
  operator int() const { return groupDepNum; }
};
#endif
/* DECLS: message PmeBlockMsg{
float2 data[];
}
;
 */
class PmeBlockMsg;
class CMessage_PmeBlockMsg:public CkMessage{
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
    CMessage_PmeBlockMsg();
    static void *pack(PmeBlockMsg *p);
    static PmeBlockMsg* unpack(void* p);
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

/* DECLS: array PmePencilXY: ArrayElement{
PmePencilXY();
void startDoneCallback();
void chargeGridReady(PmeRunMsg* impl_msg);
void recvBlock(PmeBlockMsg* impl_msg);
void start(PmeStartMsg* impl_msg);
PmePencilXY(CkMigrateMessage* impl_msg);
};
 */
 class PmePencilXY;
 class CkIndex_PmePencilXY;
 class CProxy_PmePencilXY;
 class CProxyElement_PmePencilXY;
 class CProxySection_PmePencilXY;
/* --------------- index object ------------------ */
class CkIndex_PmePencilXY:public CkIndex_ArrayElement{
  public:
    typedef PmePencilXY local_t;
    typedef CkIndex_PmePencilXY index_t;
    typedef CProxy_PmePencilXY proxy_t;
    typedef CProxyElement_PmePencilXY element_t;
    typedef CProxySection_PmePencilXY section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: PmePencilXY();
     */
    // Entry point registration at startup
    
    static int reg_PmePencilXY_void();
    // Entry point index lookup
    
    inline static int idx_PmePencilXY_void() {
      static int epidx = reg_PmePencilXY_void();
      return epidx;
    }

    
    static int ckNew() { return idx_PmePencilXY_void(); }
    
    static void _call_PmePencilXY_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_PmePencilXY_void(void* impl_msg, void* impl_obj);
    /* DECLS: void startDoneCallback();
     */
    // Entry point registration at startup
    
    static int reg_startDoneCallback_void();
    // Entry point index lookup
    
    inline static int idx_startDoneCallback_void() {
      static int epidx = reg_startDoneCallback_void();
      return epidx;
    }

    
    inline static int idx_startDoneCallback(void (PmePencilXY::*)() ) {
      return idx_startDoneCallback_void();
    }


    
    static int startDoneCallback() { return idx_startDoneCallback_void(); }
    
    static void _call_startDoneCallback_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_startDoneCallback_void(void* impl_msg, void* impl_obj);
    /* DECLS: void chargeGridReady(PmeRunMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_chargeGridReady_PmeRunMsg();
    // Entry point index lookup
    
    inline static int idx_chargeGridReady_PmeRunMsg() {
      static int epidx = reg_chargeGridReady_PmeRunMsg();
      return epidx;
    }

    
    inline static int idx_chargeGridReady(void (PmePencilXY::*)(PmeRunMsg* impl_msg) ) {
      return idx_chargeGridReady_PmeRunMsg();
    }


    
    static int chargeGridReady(PmeRunMsg* impl_msg) { return idx_chargeGridReady_PmeRunMsg(); }
    
    static void _call_chargeGridReady_PmeRunMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_chargeGridReady_PmeRunMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvBlock(PmeBlockMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvBlock_PmeBlockMsg();
    // Entry point index lookup
    
    inline static int idx_recvBlock_PmeBlockMsg() {
      static int epidx = reg_recvBlock_PmeBlockMsg();
      return epidx;
    }

    
    inline static int idx_recvBlock(void (PmePencilXY::*)(PmeBlockMsg* impl_msg) ) {
      return idx_recvBlock_PmeBlockMsg();
    }


    
    static int recvBlock(PmeBlockMsg* impl_msg) { return idx_recvBlock_PmeBlockMsg(); }
    
    static void _call_recvBlock_PmeBlockMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvBlock_PmeBlockMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void start(PmeStartMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_start_PmeStartMsg();
    // Entry point index lookup
    
    inline static int idx_start_PmeStartMsg() {
      static int epidx = reg_start_PmeStartMsg();
      return epidx;
    }

    
    inline static int idx_start(void (PmePencilXY::*)(PmeStartMsg* impl_msg) ) {
      return idx_start_PmeStartMsg();
    }


    
    static int start(PmeStartMsg* impl_msg) { return idx_start_PmeStartMsg(); }
    
    static void _call_start_PmeStartMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_start_PmeStartMsg(void* impl_msg, void* impl_obj);
    /* DECLS: PmePencilXY(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_PmePencilXY_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_PmePencilXY_CkMigrateMessage() {
      static int epidx = reg_PmePencilXY_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_PmePencilXY_CkMigrateMessage(); }
    
    static void _call_PmePencilXY_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_PmePencilXY_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_PmePencilXY : public CProxyElement_ArrayElement{
  public:
    typedef PmePencilXY local_t;
    typedef CkIndex_PmePencilXY index_t;
    typedef CProxy_PmePencilXY proxy_t;
    typedef CProxyElement_PmePencilXY element_t;
    typedef CProxySection_PmePencilXY section_t;

    using array_index_t = CkArrayIndex3D;

    /* TRAM aggregators */

    CProxyElement_PmePencilXY(void) {
    }
    CProxyElement_PmePencilXY(const ArrayElement *e) : CProxyElement_ArrayElement(e){
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

    PmePencilXY *ckLocal(void) const
    { return (PmePencilXY *)CProxyElement_ArrayElement::ckLocal(); }

    CProxyElement_PmePencilXY(const CkArrayID &aid,const CkArrayIndex3D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_PmePencilXY(const CkArrayID &aid,const CkArrayIndex3D &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}

    CProxyElement_PmePencilXY(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_PmePencilXY(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}
/* DECLS: PmePencilXY();
 */
    
    void insert(int onPE=-1, const CkEntryOptions *impl_e_opts=NULL);
/* DECLS: void startDoneCallback();
 */
    
    void startDoneCallback(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void chargeGridReady(PmeRunMsg* impl_msg);
 */
    
    void chargeGridReady(PmeRunMsg* impl_msg) ;

/* DECLS: void recvBlock(PmeBlockMsg* impl_msg);
 */
    
    void recvBlock(PmeBlockMsg* impl_msg) ;

/* DECLS: void start(PmeStartMsg* impl_msg);
 */
    
    void start(PmeStartMsg* impl_msg) ;

/* DECLS: PmePencilXY(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
 class CProxy_PmePencilXY : public CProxy_ArrayElement{
  public:
    typedef PmePencilXY local_t;
    typedef CkIndex_PmePencilXY index_t;
    typedef CProxy_PmePencilXY proxy_t;
    typedef CProxyElement_PmePencilXY element_t;
    typedef CProxySection_PmePencilXY section_t;

    using array_index_t = CkArrayIndex3D;
    CProxy_PmePencilXY(void) {
    }
    CProxy_PmePencilXY(const ArrayElement *e) : CProxy_ArrayElement(e){
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
    CProxyElement_PmePencilXY operator [] (const CkArrayIndex3D &idx) const
    { return CProxyElement_PmePencilXY(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_PmePencilXY operator() (const CkArrayIndex3D &idx) const
    { return CProxyElement_PmePencilXY(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_PmePencilXY operator () (int i0,int i1,int i2) const 
        {return CProxyElement_PmePencilXY(ckGetArrayID(), CkArrayIndex3D(i0,i1,i2), CK_DELCTOR_CALL);}
    CProxyElement_PmePencilXY operator () (CkIndex3D idx) const 
        {return CProxyElement_PmePencilXY(ckGetArrayID(), CkArrayIndex3D(idx), CK_DELCTOR_CALL);}
    CProxy_PmePencilXY(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_PmePencilXY(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: PmePencilXY();
 */
    
    static CkArrayID ckNew(const CkArrayOptions &opts = CkArrayOptions(), const CkEntryOptions *impl_e_opts=NULL);
    static void      ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);
    static CkArrayID ckNew(const int s1, const int s2, const int s3, const CkEntryOptions *impl_e_opts=NULL);
    static void ckNew(const int s1, const int s2, const int s3, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void startDoneCallback();
 */
    
    void startDoneCallback(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void chargeGridReady(PmeRunMsg* impl_msg);
 */
    
    void chargeGridReady(PmeRunMsg* impl_msg) ;

/* DECLS: void recvBlock(PmeBlockMsg* impl_msg);
 */
    
    void recvBlock(PmeBlockMsg* impl_msg) ;

/* DECLS: void start(PmeStartMsg* impl_msg);
 */
    
    void start(PmeStartMsg* impl_msg) ;

/* DECLS: PmePencilXY(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
 class CProxySection_PmePencilXY : public CProxySection_ArrayElement{
  public:
    typedef PmePencilXY local_t;
    typedef CkIndex_PmePencilXY index_t;
    typedef CProxy_PmePencilXY proxy_t;
    typedef CProxyElement_PmePencilXY element_t;
    typedef CProxySection_PmePencilXY section_t;

    using array_index_t = CkArrayIndex3D;
    CProxySection_PmePencilXY(void) {
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
    CProxyElement_PmePencilXY operator [] (const CkArrayIndex3D &idx) const
        {return CProxyElement_PmePencilXY(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_PmePencilXY operator() (const CkArrayIndex3D &idx) const
        {return CProxyElement_PmePencilXY(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_PmePencilXY operator () (int idx) const 
        {return CProxyElement_PmePencilXY(ckGetArrayID(), *(CkArrayIndex3D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
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
    CProxySection_PmePencilXY(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_PmePencilXY(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_PmePencilXY(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems,nElems, factor) {}
    CProxySection_PmePencilXY(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems, factor) { ckAutoDelegate(); }
    CProxySection_PmePencilXY(const CkSectionID &sid)  
        :CProxySection_ArrayElement(sid) { ckAutoDelegate(); }
    CProxySection_PmePencilXY(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_PmePencilXY(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_PmePencilXY(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) { ckAutoDelegate(); }
    CProxySection_PmePencilXY(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems) 
        :CProxySection_ArrayElement(aid,elems) { ckAutoDelegate(); }
    CProxySection_PmePencilXY(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, int factor) 
        :CProxySection_ArrayElement(n,aid,elems,nElems, factor) { ckAutoDelegate(); }
    CProxySection_PmePencilXY(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, int factor) 
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
/* DECLS: PmePencilXY();
 */
    

/* DECLS: void startDoneCallback();
 */
    
    void startDoneCallback(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void chargeGridReady(PmeRunMsg* impl_msg);
 */
    
    void chargeGridReady(PmeRunMsg* impl_msg) ;

/* DECLS: void recvBlock(PmeBlockMsg* impl_msg);
 */
    
    void recvBlock(PmeBlockMsg* impl_msg) ;

/* DECLS: void start(PmeStartMsg* impl_msg);
 */
    
    void start(PmeStartMsg* impl_msg) ;

/* DECLS: PmePencilXY(CkMigrateMessage* impl_msg);
 */

};
#define PmePencilXY_SDAG_CODE                                                  \
public:                                                                        \
  void start(PmeStartMsg pmeStartMsg);                                         \
  void _sdag_fnc_start(PmeStartMsg pmeStartMsg);                               \
  void _sdag_fnc_start(PmeStartMsg* gen0);                                     \
private:                                                                       \
  void start_end(PmeStartMsg* gen0);                                           \
  void _slist_0(PmeStartMsg* gen0);                                            \
  void _slist_0_end(PmeStartMsg* gen0);                                        \
  void _serial_0(PmeStartMsg* gen0);                                           \
  SDAG::Continuation* _when_0(PmeStartMsg* gen0);                              \
  void _when_0_end(PmeStartMsg* gen0);                                         \
  void _serial_1(PmeStartMsg* gen0);                                           \
  void _while_0(PmeStartMsg* gen0);                                            \
  void _while_0_end(PmeStartMsg* gen0);                                        \
  void _slist_1(PmeStartMsg* gen0);                                            \
  void _slist_1_end(PmeStartMsg* gen0);                                        \
  SDAG::Continuation* _when_1(PmeStartMsg* gen0);                              \
  void _when_1_end(PmeStartMsg* gen0, PmeRunMsg* gen1);                        \
  void _serial_2(PmeStartMsg* gen0, PmeRunMsg* gen1);                          \
  void _for_0(PmeStartMsg* gen0);                                              \
  void _for_0_end(PmeStartMsg* gen0);                                          \
  void _slist_2(PmeStartMsg* gen0);                                            \
  void _slist_2_end(PmeStartMsg* gen0);                                        \
  SDAG::Continuation* _when_2(PmeStartMsg* gen0);                              \
  void _when_2_end(PmeStartMsg* gen0, PmeBlockMsg* gen1);                      \
  void _serial_3(PmeStartMsg* gen0, PmeBlockMsg* gen1);                        \
  void _serial_4(PmeStartMsg* gen0);                                           \
public:                                                                        \
  void startDoneCallback(Closure_PmePencilXY::startDoneCallback_2_closure* genClosure);\
  void startDoneCallback();                                                    \
  void chargeGridReady(PmeRunMsg* msg_msg);                                    \
  void recvBlock(PmeBlockMsg* msg_msg);                                        \
public:                                                                        \
  SDAG::dep_ptr __dep;                                                         \
  void _sdag_init();                                                           \
  void __sdag_init();                                                          \
public:                                                                        \
  void _sdag_pup(PUP::er &p);                                                  \
  void __sdag_pup(PUP::er &p) { }                                              \
  static void __sdag_register();                                               \
  static int _sdag_idx_PmePencilXY_initFFT();                                  \
  static int _sdag_reg_PmePencilXY_initFFT();                                  \
  static int _sdag_idx_PmePencilXY_serial_1();                                 \
  static int _sdag_reg_PmePencilXY_serial_1();                                 \
  static int _sdag_idx_PmePencilXY_forwardFFT();                               \
  static int _sdag_reg_PmePencilXY_forwardFFT();                               \
  static int _sdag_idx_PmePencilXY_recvDataFromZ();                            \
  static int _sdag_reg_PmePencilXY_recvDataFromZ();                            \
  static int _sdag_idx_PmePencilXY_backwardFFT();                              \
  static int _sdag_reg_PmePencilXY_backwardFFT();                              \

typedef CBaseT1<ArrayElementT<CkIndex3D>, CProxy_PmePencilXY>CBase_PmePencilXY;

/* DECLS: array PmePencilX: ArrayElement{
PmePencilX();
void startDoneCallback();
void chargeGridReady(PmeRunMsg* impl_msg);
void recvBlock(PmeBlockMsg* impl_msg);
void start(PmeStartMsg* impl_msg);
PmePencilX(CkMigrateMessage* impl_msg);
};
 */
 class PmePencilX;
 class CkIndex_PmePencilX;
 class CProxy_PmePencilX;
 class CProxyElement_PmePencilX;
 class CProxySection_PmePencilX;
/* --------------- index object ------------------ */
class CkIndex_PmePencilX:public CkIndex_ArrayElement{
  public:
    typedef PmePencilX local_t;
    typedef CkIndex_PmePencilX index_t;
    typedef CProxy_PmePencilX proxy_t;
    typedef CProxyElement_PmePencilX element_t;
    typedef CProxySection_PmePencilX section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: PmePencilX();
     */
    // Entry point registration at startup
    
    static int reg_PmePencilX_void();
    // Entry point index lookup
    
    inline static int idx_PmePencilX_void() {
      static int epidx = reg_PmePencilX_void();
      return epidx;
    }

    
    static int ckNew() { return idx_PmePencilX_void(); }
    
    static void _call_PmePencilX_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_PmePencilX_void(void* impl_msg, void* impl_obj);
    /* DECLS: void startDoneCallback();
     */
    // Entry point registration at startup
    
    static int reg_startDoneCallback_void();
    // Entry point index lookup
    
    inline static int idx_startDoneCallback_void() {
      static int epidx = reg_startDoneCallback_void();
      return epidx;
    }

    
    inline static int idx_startDoneCallback(void (PmePencilX::*)() ) {
      return idx_startDoneCallback_void();
    }


    
    static int startDoneCallback() { return idx_startDoneCallback_void(); }
    
    static void _call_startDoneCallback_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_startDoneCallback_void(void* impl_msg, void* impl_obj);
    /* DECLS: void chargeGridReady(PmeRunMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_chargeGridReady_PmeRunMsg();
    // Entry point index lookup
    
    inline static int idx_chargeGridReady_PmeRunMsg() {
      static int epidx = reg_chargeGridReady_PmeRunMsg();
      return epidx;
    }

    
    inline static int idx_chargeGridReady(void (PmePencilX::*)(PmeRunMsg* impl_msg) ) {
      return idx_chargeGridReady_PmeRunMsg();
    }


    
    static int chargeGridReady(PmeRunMsg* impl_msg) { return idx_chargeGridReady_PmeRunMsg(); }
    
    static void _call_chargeGridReady_PmeRunMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_chargeGridReady_PmeRunMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvBlock(PmeBlockMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvBlock_PmeBlockMsg();
    // Entry point index lookup
    
    inline static int idx_recvBlock_PmeBlockMsg() {
      static int epidx = reg_recvBlock_PmeBlockMsg();
      return epidx;
    }

    
    inline static int idx_recvBlock(void (PmePencilX::*)(PmeBlockMsg* impl_msg) ) {
      return idx_recvBlock_PmeBlockMsg();
    }


    
    static int recvBlock(PmeBlockMsg* impl_msg) { return idx_recvBlock_PmeBlockMsg(); }
    
    static void _call_recvBlock_PmeBlockMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvBlock_PmeBlockMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void start(PmeStartMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_start_PmeStartMsg();
    // Entry point index lookup
    
    inline static int idx_start_PmeStartMsg() {
      static int epidx = reg_start_PmeStartMsg();
      return epidx;
    }

    
    inline static int idx_start(void (PmePencilX::*)(PmeStartMsg* impl_msg) ) {
      return idx_start_PmeStartMsg();
    }


    
    static int start(PmeStartMsg* impl_msg) { return idx_start_PmeStartMsg(); }
    
    static void _call_start_PmeStartMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_start_PmeStartMsg(void* impl_msg, void* impl_obj);
    /* DECLS: PmePencilX(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_PmePencilX_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_PmePencilX_CkMigrateMessage() {
      static int epidx = reg_PmePencilX_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_PmePencilX_CkMigrateMessage(); }
    
    static void _call_PmePencilX_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_PmePencilX_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_PmePencilX : public CProxyElement_ArrayElement{
  public:
    typedef PmePencilX local_t;
    typedef CkIndex_PmePencilX index_t;
    typedef CProxy_PmePencilX proxy_t;
    typedef CProxyElement_PmePencilX element_t;
    typedef CProxySection_PmePencilX section_t;

    using array_index_t = CkArrayIndex3D;

    /* TRAM aggregators */

    CProxyElement_PmePencilX(void) {
    }
    CProxyElement_PmePencilX(const ArrayElement *e) : CProxyElement_ArrayElement(e){
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

    PmePencilX *ckLocal(void) const
    { return (PmePencilX *)CProxyElement_ArrayElement::ckLocal(); }

    CProxyElement_PmePencilX(const CkArrayID &aid,const CkArrayIndex3D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_PmePencilX(const CkArrayID &aid,const CkArrayIndex3D &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}

    CProxyElement_PmePencilX(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_PmePencilX(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}
/* DECLS: PmePencilX();
 */
    
    void insert(int onPE=-1, const CkEntryOptions *impl_e_opts=NULL);
/* DECLS: void startDoneCallback();
 */
    
    void startDoneCallback(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void chargeGridReady(PmeRunMsg* impl_msg);
 */
    
    void chargeGridReady(PmeRunMsg* impl_msg) ;

/* DECLS: void recvBlock(PmeBlockMsg* impl_msg);
 */
    
    void recvBlock(PmeBlockMsg* impl_msg) ;

/* DECLS: void start(PmeStartMsg* impl_msg);
 */
    
    void start(PmeStartMsg* impl_msg) ;

/* DECLS: PmePencilX(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
 class CProxy_PmePencilX : public CProxy_ArrayElement{
  public:
    typedef PmePencilX local_t;
    typedef CkIndex_PmePencilX index_t;
    typedef CProxy_PmePencilX proxy_t;
    typedef CProxyElement_PmePencilX element_t;
    typedef CProxySection_PmePencilX section_t;

    using array_index_t = CkArrayIndex3D;
    CProxy_PmePencilX(void) {
    }
    CProxy_PmePencilX(const ArrayElement *e) : CProxy_ArrayElement(e){
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
    CProxyElement_PmePencilX operator [] (const CkArrayIndex3D &idx) const
    { return CProxyElement_PmePencilX(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_PmePencilX operator() (const CkArrayIndex3D &idx) const
    { return CProxyElement_PmePencilX(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_PmePencilX operator () (int i0,int i1,int i2) const 
        {return CProxyElement_PmePencilX(ckGetArrayID(), CkArrayIndex3D(i0,i1,i2), CK_DELCTOR_CALL);}
    CProxyElement_PmePencilX operator () (CkIndex3D idx) const 
        {return CProxyElement_PmePencilX(ckGetArrayID(), CkArrayIndex3D(idx), CK_DELCTOR_CALL);}
    CProxy_PmePencilX(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_PmePencilX(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: PmePencilX();
 */
    
    static CkArrayID ckNew(const CkArrayOptions &opts = CkArrayOptions(), const CkEntryOptions *impl_e_opts=NULL);
    static void      ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);
    static CkArrayID ckNew(const int s1, const int s2, const int s3, const CkEntryOptions *impl_e_opts=NULL);
    static void ckNew(const int s1, const int s2, const int s3, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void startDoneCallback();
 */
    
    void startDoneCallback(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void chargeGridReady(PmeRunMsg* impl_msg);
 */
    
    void chargeGridReady(PmeRunMsg* impl_msg) ;

/* DECLS: void recvBlock(PmeBlockMsg* impl_msg);
 */
    
    void recvBlock(PmeBlockMsg* impl_msg) ;

/* DECLS: void start(PmeStartMsg* impl_msg);
 */
    
    void start(PmeStartMsg* impl_msg) ;

/* DECLS: PmePencilX(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
 class CProxySection_PmePencilX : public CProxySection_ArrayElement{
  public:
    typedef PmePencilX local_t;
    typedef CkIndex_PmePencilX index_t;
    typedef CProxy_PmePencilX proxy_t;
    typedef CProxyElement_PmePencilX element_t;
    typedef CProxySection_PmePencilX section_t;

    using array_index_t = CkArrayIndex3D;
    CProxySection_PmePencilX(void) {
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
    CProxyElement_PmePencilX operator [] (const CkArrayIndex3D &idx) const
        {return CProxyElement_PmePencilX(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_PmePencilX operator() (const CkArrayIndex3D &idx) const
        {return CProxyElement_PmePencilX(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_PmePencilX operator () (int idx) const 
        {return CProxyElement_PmePencilX(ckGetArrayID(), *(CkArrayIndex3D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
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
    CProxySection_PmePencilX(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_PmePencilX(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_PmePencilX(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems,nElems, factor) {}
    CProxySection_PmePencilX(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems, factor) { ckAutoDelegate(); }
    CProxySection_PmePencilX(const CkSectionID &sid)  
        :CProxySection_ArrayElement(sid) { ckAutoDelegate(); }
    CProxySection_PmePencilX(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_PmePencilX(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_PmePencilX(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) { ckAutoDelegate(); }
    CProxySection_PmePencilX(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems) 
        :CProxySection_ArrayElement(aid,elems) { ckAutoDelegate(); }
    CProxySection_PmePencilX(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, int factor) 
        :CProxySection_ArrayElement(n,aid,elems,nElems, factor) { ckAutoDelegate(); }
    CProxySection_PmePencilX(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, int factor) 
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
/* DECLS: PmePencilX();
 */
    

/* DECLS: void startDoneCallback();
 */
    
    void startDoneCallback(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void chargeGridReady(PmeRunMsg* impl_msg);
 */
    
    void chargeGridReady(PmeRunMsg* impl_msg) ;

/* DECLS: void recvBlock(PmeBlockMsg* impl_msg);
 */
    
    void recvBlock(PmeBlockMsg* impl_msg) ;

/* DECLS: void start(PmeStartMsg* impl_msg);
 */
    
    void start(PmeStartMsg* impl_msg) ;

/* DECLS: PmePencilX(CkMigrateMessage* impl_msg);
 */

};
#define PmePencilX_SDAG_CODE                                                   \
public:                                                                        \
  void start(PmeStartMsg pmeStartMsg);                                         \
  void _sdag_fnc_start(PmeStartMsg pmeStartMsg);                               \
  void _sdag_fnc_start(PmeStartMsg* gen0);                                     \
private:                                                                       \
  void start_end(PmeStartMsg* gen0);                                           \
  void _slist_0(PmeStartMsg* gen0);                                            \
  void _slist_0_end(PmeStartMsg* gen0);                                        \
  void _serial_0(PmeStartMsg* gen0);                                           \
  SDAG::Continuation* _when_0(PmeStartMsg* gen0);                              \
  void _when_0_end(PmeStartMsg* gen0);                                         \
  void _serial_1(PmeStartMsg* gen0);                                           \
  void _while_0(PmeStartMsg* gen0);                                            \
  void _while_0_end(PmeStartMsg* gen0);                                        \
  void _slist_1(PmeStartMsg* gen0);                                            \
  void _slist_1_end(PmeStartMsg* gen0);                                        \
  SDAG::Continuation* _when_1(PmeStartMsg* gen0);                              \
  void _when_1_end(PmeStartMsg* gen0, PmeRunMsg* gen1);                        \
  void _serial_2(PmeStartMsg* gen0, PmeRunMsg* gen1);                          \
  void _for_0(PmeStartMsg* gen0);                                              \
  void _for_0_end(PmeStartMsg* gen0);                                          \
  void _slist_2(PmeStartMsg* gen0);                                            \
  void _slist_2_end(PmeStartMsg* gen0);                                        \
  SDAG::Continuation* _when_2(PmeStartMsg* gen0);                              \
  void _when_2_end(PmeStartMsg* gen0, PmeBlockMsg* gen1);                      \
  void _serial_3(PmeStartMsg* gen0, PmeBlockMsg* gen1);                        \
  void _serial_4(PmeStartMsg* gen0);                                           \
public:                                                                        \
  void startDoneCallback(Closure_PmePencilX::startDoneCallback_2_closure* genClosure);\
  void startDoneCallback();                                                    \
  void chargeGridReady(PmeRunMsg* msg_msg);                                    \
  void recvBlock(PmeBlockMsg* msg_msg);                                        \
public:                                                                        \
  SDAG::dep_ptr __dep;                                                         \
  void _sdag_init();                                                           \
  void __sdag_init();                                                          \
public:                                                                        \
  void _sdag_pup(PUP::er &p);                                                  \
  void __sdag_pup(PUP::er &p) { }                                              \
  static void __sdag_register();                                               \
  static int _sdag_idx_PmePencilX_initFFT();                                   \
  static int _sdag_reg_PmePencilX_initFFT();                                   \
  static int _sdag_idx_PmePencilX_serial_1();                                  \
  static int _sdag_reg_PmePencilX_serial_1();                                  \
  static int _sdag_idx_PmePencilX_forwardFFT();                                \
  static int _sdag_reg_PmePencilX_forwardFFT();                                \
  static int _sdag_idx_PmePencilX_recvDataFromY();                             \
  static int _sdag_reg_PmePencilX_recvDataFromY();                             \
  static int _sdag_idx_PmePencilX_backwardFFT();                               \
  static int _sdag_reg_PmePencilX_backwardFFT();                               \

typedef CBaseT1<ArrayElementT<CkIndex3D>, CProxy_PmePencilX>CBase_PmePencilX;

/* DECLS: array PmePencilY: ArrayElement{
PmePencilY();
void startDoneCallback();
void recvBlock(PmeBlockMsg* impl_msg);
void start(PmeStartMsg* impl_msg);
PmePencilY(CkMigrateMessage* impl_msg);
};
 */
 class PmePencilY;
 class CkIndex_PmePencilY;
 class CProxy_PmePencilY;
 class CProxyElement_PmePencilY;
 class CProxySection_PmePencilY;
/* --------------- index object ------------------ */
class CkIndex_PmePencilY:public CkIndex_ArrayElement{
  public:
    typedef PmePencilY local_t;
    typedef CkIndex_PmePencilY index_t;
    typedef CProxy_PmePencilY proxy_t;
    typedef CProxyElement_PmePencilY element_t;
    typedef CProxySection_PmePencilY section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: PmePencilY();
     */
    // Entry point registration at startup
    
    static int reg_PmePencilY_void();
    // Entry point index lookup
    
    inline static int idx_PmePencilY_void() {
      static int epidx = reg_PmePencilY_void();
      return epidx;
    }

    
    static int ckNew() { return idx_PmePencilY_void(); }
    
    static void _call_PmePencilY_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_PmePencilY_void(void* impl_msg, void* impl_obj);
    /* DECLS: void startDoneCallback();
     */
    // Entry point registration at startup
    
    static int reg_startDoneCallback_void();
    // Entry point index lookup
    
    inline static int idx_startDoneCallback_void() {
      static int epidx = reg_startDoneCallback_void();
      return epidx;
    }

    
    inline static int idx_startDoneCallback(void (PmePencilY::*)() ) {
      return idx_startDoneCallback_void();
    }


    
    static int startDoneCallback() { return idx_startDoneCallback_void(); }
    
    static void _call_startDoneCallback_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_startDoneCallback_void(void* impl_msg, void* impl_obj);
    /* DECLS: void recvBlock(PmeBlockMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvBlock_PmeBlockMsg();
    // Entry point index lookup
    
    inline static int idx_recvBlock_PmeBlockMsg() {
      static int epidx = reg_recvBlock_PmeBlockMsg();
      return epidx;
    }

    
    inline static int idx_recvBlock(void (PmePencilY::*)(PmeBlockMsg* impl_msg) ) {
      return idx_recvBlock_PmeBlockMsg();
    }


    
    static int recvBlock(PmeBlockMsg* impl_msg) { return idx_recvBlock_PmeBlockMsg(); }
    
    static void _call_recvBlock_PmeBlockMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvBlock_PmeBlockMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void start(PmeStartMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_start_PmeStartMsg();
    // Entry point index lookup
    
    inline static int idx_start_PmeStartMsg() {
      static int epidx = reg_start_PmeStartMsg();
      return epidx;
    }

    
    inline static int idx_start(void (PmePencilY::*)(PmeStartMsg* impl_msg) ) {
      return idx_start_PmeStartMsg();
    }


    
    static int start(PmeStartMsg* impl_msg) { return idx_start_PmeStartMsg(); }
    
    static void _call_start_PmeStartMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_start_PmeStartMsg(void* impl_msg, void* impl_obj);
    /* DECLS: PmePencilY(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_PmePencilY_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_PmePencilY_CkMigrateMessage() {
      static int epidx = reg_PmePencilY_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_PmePencilY_CkMigrateMessage(); }
    
    static void _call_PmePencilY_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_PmePencilY_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_PmePencilY : public CProxyElement_ArrayElement{
  public:
    typedef PmePencilY local_t;
    typedef CkIndex_PmePencilY index_t;
    typedef CProxy_PmePencilY proxy_t;
    typedef CProxyElement_PmePencilY element_t;
    typedef CProxySection_PmePencilY section_t;

    using array_index_t = CkArrayIndex3D;

    /* TRAM aggregators */

    CProxyElement_PmePencilY(void) {
    }
    CProxyElement_PmePencilY(const ArrayElement *e) : CProxyElement_ArrayElement(e){
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

    PmePencilY *ckLocal(void) const
    { return (PmePencilY *)CProxyElement_ArrayElement::ckLocal(); }

    CProxyElement_PmePencilY(const CkArrayID &aid,const CkArrayIndex3D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_PmePencilY(const CkArrayID &aid,const CkArrayIndex3D &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}

    CProxyElement_PmePencilY(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_PmePencilY(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}
/* DECLS: PmePencilY();
 */
    
    void insert(int onPE=-1, const CkEntryOptions *impl_e_opts=NULL);
/* DECLS: void startDoneCallback();
 */
    
    void startDoneCallback(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void recvBlock(PmeBlockMsg* impl_msg);
 */
    
    void recvBlock(PmeBlockMsg* impl_msg) ;

/* DECLS: void start(PmeStartMsg* impl_msg);
 */
    
    void start(PmeStartMsg* impl_msg) ;

/* DECLS: PmePencilY(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
 class CProxy_PmePencilY : public CProxy_ArrayElement{
  public:
    typedef PmePencilY local_t;
    typedef CkIndex_PmePencilY index_t;
    typedef CProxy_PmePencilY proxy_t;
    typedef CProxyElement_PmePencilY element_t;
    typedef CProxySection_PmePencilY section_t;

    using array_index_t = CkArrayIndex3D;
    CProxy_PmePencilY(void) {
    }
    CProxy_PmePencilY(const ArrayElement *e) : CProxy_ArrayElement(e){
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
    CProxyElement_PmePencilY operator [] (const CkArrayIndex3D &idx) const
    { return CProxyElement_PmePencilY(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_PmePencilY operator() (const CkArrayIndex3D &idx) const
    { return CProxyElement_PmePencilY(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_PmePencilY operator () (int i0,int i1,int i2) const 
        {return CProxyElement_PmePencilY(ckGetArrayID(), CkArrayIndex3D(i0,i1,i2), CK_DELCTOR_CALL);}
    CProxyElement_PmePencilY operator () (CkIndex3D idx) const 
        {return CProxyElement_PmePencilY(ckGetArrayID(), CkArrayIndex3D(idx), CK_DELCTOR_CALL);}
    CProxy_PmePencilY(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_PmePencilY(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: PmePencilY();
 */
    
    static CkArrayID ckNew(const CkArrayOptions &opts = CkArrayOptions(), const CkEntryOptions *impl_e_opts=NULL);
    static void      ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);
    static CkArrayID ckNew(const int s1, const int s2, const int s3, const CkEntryOptions *impl_e_opts=NULL);
    static void ckNew(const int s1, const int s2, const int s3, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void startDoneCallback();
 */
    
    void startDoneCallback(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void recvBlock(PmeBlockMsg* impl_msg);
 */
    
    void recvBlock(PmeBlockMsg* impl_msg) ;

/* DECLS: void start(PmeStartMsg* impl_msg);
 */
    
    void start(PmeStartMsg* impl_msg) ;

/* DECLS: PmePencilY(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
 class CProxySection_PmePencilY : public CProxySection_ArrayElement{
  public:
    typedef PmePencilY local_t;
    typedef CkIndex_PmePencilY index_t;
    typedef CProxy_PmePencilY proxy_t;
    typedef CProxyElement_PmePencilY element_t;
    typedef CProxySection_PmePencilY section_t;

    using array_index_t = CkArrayIndex3D;
    CProxySection_PmePencilY(void) {
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
    CProxyElement_PmePencilY operator [] (const CkArrayIndex3D &idx) const
        {return CProxyElement_PmePencilY(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_PmePencilY operator() (const CkArrayIndex3D &idx) const
        {return CProxyElement_PmePencilY(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_PmePencilY operator () (int idx) const 
        {return CProxyElement_PmePencilY(ckGetArrayID(), *(CkArrayIndex3D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
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
    CProxySection_PmePencilY(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_PmePencilY(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_PmePencilY(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems,nElems, factor) {}
    CProxySection_PmePencilY(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems, factor) { ckAutoDelegate(); }
    CProxySection_PmePencilY(const CkSectionID &sid)  
        :CProxySection_ArrayElement(sid) { ckAutoDelegate(); }
    CProxySection_PmePencilY(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_PmePencilY(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_PmePencilY(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) { ckAutoDelegate(); }
    CProxySection_PmePencilY(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems) 
        :CProxySection_ArrayElement(aid,elems) { ckAutoDelegate(); }
    CProxySection_PmePencilY(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, int factor) 
        :CProxySection_ArrayElement(n,aid,elems,nElems, factor) { ckAutoDelegate(); }
    CProxySection_PmePencilY(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, int factor) 
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
/* DECLS: PmePencilY();
 */
    

/* DECLS: void startDoneCallback();
 */
    
    void startDoneCallback(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void recvBlock(PmeBlockMsg* impl_msg);
 */
    
    void recvBlock(PmeBlockMsg* impl_msg) ;

/* DECLS: void start(PmeStartMsg* impl_msg);
 */
    
    void start(PmeStartMsg* impl_msg) ;

/* DECLS: PmePencilY(CkMigrateMessage* impl_msg);
 */

};
#define PmePencilY_SDAG_CODE                                                   \
public:                                                                        \
  void start(PmeStartMsg pmeStartMsg);                                         \
  void _sdag_fnc_start(PmeStartMsg pmeStartMsg);                               \
  void _sdag_fnc_start(PmeStartMsg* gen0);                                     \
private:                                                                       \
  void start_end(PmeStartMsg* gen0);                                           \
  void _slist_0(PmeStartMsg* gen0);                                            \
  void _slist_0_end(PmeStartMsg* gen0);                                        \
  void _serial_0(PmeStartMsg* gen0);                                           \
  SDAG::Continuation* _when_0(PmeStartMsg* gen0);                              \
  void _when_0_end(PmeStartMsg* gen0);                                         \
  void _serial_1(PmeStartMsg* gen0);                                           \
  void _while_0(PmeStartMsg* gen0);                                            \
  void _while_0_end(PmeStartMsg* gen0);                                        \
  void _slist_1(PmeStartMsg* gen0);                                            \
  void _slist_1_end(PmeStartMsg* gen0);                                        \
  void _for_0(PmeStartMsg* gen0);                                              \
  void _for_0_end(PmeStartMsg* gen0);                                          \
  void _slist_2(PmeStartMsg* gen0);                                            \
  void _slist_2_end(PmeStartMsg* gen0);                                        \
  SDAG::Continuation* _when_1(PmeStartMsg* gen0);                              \
  void _when_1_end(PmeStartMsg* gen0, PmeBlockMsg* gen1);                      \
  void _serial_2(PmeStartMsg* gen0, PmeBlockMsg* gen1);                        \
  void _serial_3(PmeStartMsg* gen0);                                           \
  void _for_1(PmeStartMsg* gen0);                                              \
  void _for_1_end(PmeStartMsg* gen0);                                          \
  void _slist_3(PmeStartMsg* gen0);                                            \
  void _slist_3_end(PmeStartMsg* gen0);                                        \
  SDAG::Continuation* _when_2(PmeStartMsg* gen0);                              \
  void _when_2_end(PmeStartMsg* gen0, PmeBlockMsg* gen1);                      \
  void _serial_4(PmeStartMsg* gen0, PmeBlockMsg* gen1);                        \
  void _serial_5(PmeStartMsg* gen0);                                           \
public:                                                                        \
  void startDoneCallback(Closure_PmePencilY::startDoneCallback_2_closure* genClosure);\
  void startDoneCallback();                                                    \
  void recvBlock(PmeBlockMsg* msg_msg);                                        \
public:                                                                        \
  SDAG::dep_ptr __dep;                                                         \
  void _sdag_init();                                                           \
  void __sdag_init();                                                          \
public:                                                                        \
  void _sdag_pup(PUP::er &p);                                                  \
  void __sdag_pup(PUP::er &p) { }                                              \
  static void __sdag_register();                                               \
  static int _sdag_idx_PmePencilY_initFFT();                                   \
  static int _sdag_reg_PmePencilY_initFFT();                                   \
  static int _sdag_idx_PmePencilY_serial_1();                                  \
  static int _sdag_reg_PmePencilY_serial_1();                                  \
  static int _sdag_idx_PmePencilY_recvDataFromX();                             \
  static int _sdag_reg_PmePencilY_recvDataFromX();                             \
  static int _sdag_idx_PmePencilY_forwardFFT();                                \
  static int _sdag_reg_PmePencilY_forwardFFT();                                \
  static int _sdag_idx_PmePencilY_recvDataFromZ();                             \
  static int _sdag_reg_PmePencilY_recvDataFromZ();                             \
  static int _sdag_idx_PmePencilY_backwardFFT();                               \
  static int _sdag_reg_PmePencilY_backwardFFT();                               \

typedef CBaseT1<ArrayElementT<CkIndex3D>, CProxy_PmePencilY>CBase_PmePencilY;

/* DECLS: array PmePencilZ: ArrayElement{
PmePencilZ();
void startDoneCallback();
void recvBlock(PmeBlockMsg* impl_msg);
void skip();
void start(PmeStartMsg* impl_msg);
PmePencilZ(CkMigrateMessage* impl_msg);
};
 */
 class PmePencilZ;
 class CkIndex_PmePencilZ;
 class CProxy_PmePencilZ;
 class CProxyElement_PmePencilZ;
 class CProxySection_PmePencilZ;
/* --------------- index object ------------------ */
class CkIndex_PmePencilZ:public CkIndex_ArrayElement{
  public:
    typedef PmePencilZ local_t;
    typedef CkIndex_PmePencilZ index_t;
    typedef CProxy_PmePencilZ proxy_t;
    typedef CProxyElement_PmePencilZ element_t;
    typedef CProxySection_PmePencilZ section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: PmePencilZ();
     */
    // Entry point registration at startup
    
    static int reg_PmePencilZ_void();
    // Entry point index lookup
    
    inline static int idx_PmePencilZ_void() {
      static int epidx = reg_PmePencilZ_void();
      return epidx;
    }

    
    static int ckNew() { return idx_PmePencilZ_void(); }
    
    static void _call_PmePencilZ_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_PmePencilZ_void(void* impl_msg, void* impl_obj);
    /* DECLS: void startDoneCallback();
     */
    // Entry point registration at startup
    
    static int reg_startDoneCallback_void();
    // Entry point index lookup
    
    inline static int idx_startDoneCallback_void() {
      static int epidx = reg_startDoneCallback_void();
      return epidx;
    }

    
    inline static int idx_startDoneCallback(void (PmePencilZ::*)() ) {
      return idx_startDoneCallback_void();
    }


    
    static int startDoneCallback() { return idx_startDoneCallback_void(); }
    
    static void _call_startDoneCallback_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_startDoneCallback_void(void* impl_msg, void* impl_obj);
    /* DECLS: void recvBlock(PmeBlockMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvBlock_PmeBlockMsg();
    // Entry point index lookup
    
    inline static int idx_recvBlock_PmeBlockMsg() {
      static int epidx = reg_recvBlock_PmeBlockMsg();
      return epidx;
    }

    
    inline static int idx_recvBlock(void (PmePencilZ::*)(PmeBlockMsg* impl_msg) ) {
      return idx_recvBlock_PmeBlockMsg();
    }


    
    static int recvBlock(PmeBlockMsg* impl_msg) { return idx_recvBlock_PmeBlockMsg(); }
    
    static void _call_recvBlock_PmeBlockMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvBlock_PmeBlockMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void skip();
     */
    // Entry point registration at startup
    
    static int reg_skip_void();
    // Entry point index lookup
    
    inline static int idx_skip_void() {
      static int epidx = reg_skip_void();
      return epidx;
    }

    
    inline static int idx_skip(void (PmePencilZ::*)() ) {
      return idx_skip_void();
    }


    
    static int skip() { return idx_skip_void(); }
    
    static void _call_skip_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_skip_void(void* impl_msg, void* impl_obj);
    /* DECLS: void start(PmeStartMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_start_PmeStartMsg();
    // Entry point index lookup
    
    inline static int idx_start_PmeStartMsg() {
      static int epidx = reg_start_PmeStartMsg();
      return epidx;
    }

    
    inline static int idx_start(void (PmePencilZ::*)(PmeStartMsg* impl_msg) ) {
      return idx_start_PmeStartMsg();
    }


    
    static int start(PmeStartMsg* impl_msg) { return idx_start_PmeStartMsg(); }
    
    static void _call_start_PmeStartMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_start_PmeStartMsg(void* impl_msg, void* impl_obj);
    /* DECLS: PmePencilZ(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_PmePencilZ_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_PmePencilZ_CkMigrateMessage() {
      static int epidx = reg_PmePencilZ_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_PmePencilZ_CkMigrateMessage(); }
    
    static void _call_PmePencilZ_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_PmePencilZ_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_PmePencilZ : public CProxyElement_ArrayElement{
  public:
    typedef PmePencilZ local_t;
    typedef CkIndex_PmePencilZ index_t;
    typedef CProxy_PmePencilZ proxy_t;
    typedef CProxyElement_PmePencilZ element_t;
    typedef CProxySection_PmePencilZ section_t;

    using array_index_t = CkArrayIndex3D;

    /* TRAM aggregators */

    CProxyElement_PmePencilZ(void) {
    }
    CProxyElement_PmePencilZ(const ArrayElement *e) : CProxyElement_ArrayElement(e){
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

    PmePencilZ *ckLocal(void) const
    { return (PmePencilZ *)CProxyElement_ArrayElement::ckLocal(); }

    CProxyElement_PmePencilZ(const CkArrayID &aid,const CkArrayIndex3D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_PmePencilZ(const CkArrayID &aid,const CkArrayIndex3D &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}

    CProxyElement_PmePencilZ(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_PmePencilZ(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}
/* DECLS: PmePencilZ();
 */
    
    void insert(int onPE=-1, const CkEntryOptions *impl_e_opts=NULL);
/* DECLS: void startDoneCallback();
 */
    
    void startDoneCallback(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void recvBlock(PmeBlockMsg* impl_msg);
 */
    
    void recvBlock(PmeBlockMsg* impl_msg) ;

/* DECLS: void skip();
 */
    
    void skip(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void start(PmeStartMsg* impl_msg);
 */
    
    void start(PmeStartMsg* impl_msg) ;

/* DECLS: PmePencilZ(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
 class CProxy_PmePencilZ : public CProxy_ArrayElement{
  public:
    typedef PmePencilZ local_t;
    typedef CkIndex_PmePencilZ index_t;
    typedef CProxy_PmePencilZ proxy_t;
    typedef CProxyElement_PmePencilZ element_t;
    typedef CProxySection_PmePencilZ section_t;

    using array_index_t = CkArrayIndex3D;
    CProxy_PmePencilZ(void) {
    }
    CProxy_PmePencilZ(const ArrayElement *e) : CProxy_ArrayElement(e){
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
    CProxyElement_PmePencilZ operator [] (const CkArrayIndex3D &idx) const
    { return CProxyElement_PmePencilZ(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_PmePencilZ operator() (const CkArrayIndex3D &idx) const
    { return CProxyElement_PmePencilZ(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_PmePencilZ operator () (int i0,int i1,int i2) const 
        {return CProxyElement_PmePencilZ(ckGetArrayID(), CkArrayIndex3D(i0,i1,i2), CK_DELCTOR_CALL);}
    CProxyElement_PmePencilZ operator () (CkIndex3D idx) const 
        {return CProxyElement_PmePencilZ(ckGetArrayID(), CkArrayIndex3D(idx), CK_DELCTOR_CALL);}
    CProxy_PmePencilZ(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_PmePencilZ(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: PmePencilZ();
 */
    
    static CkArrayID ckNew(const CkArrayOptions &opts = CkArrayOptions(), const CkEntryOptions *impl_e_opts=NULL);
    static void      ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);
    static CkArrayID ckNew(const int s1, const int s2, const int s3, const CkEntryOptions *impl_e_opts=NULL);
    static void ckNew(const int s1, const int s2, const int s3, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void startDoneCallback();
 */
    
    void startDoneCallback(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void recvBlock(PmeBlockMsg* impl_msg);
 */
    
    void recvBlock(PmeBlockMsg* impl_msg) ;

/* DECLS: void skip();
 */
    
    void skip(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void start(PmeStartMsg* impl_msg);
 */
    
    void start(PmeStartMsg* impl_msg) ;

/* DECLS: PmePencilZ(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
 class CProxySection_PmePencilZ : public CProxySection_ArrayElement{
  public:
    typedef PmePencilZ local_t;
    typedef CkIndex_PmePencilZ index_t;
    typedef CProxy_PmePencilZ proxy_t;
    typedef CProxyElement_PmePencilZ element_t;
    typedef CProxySection_PmePencilZ section_t;

    using array_index_t = CkArrayIndex3D;
    CProxySection_PmePencilZ(void) {
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
    CProxyElement_PmePencilZ operator [] (const CkArrayIndex3D &idx) const
        {return CProxyElement_PmePencilZ(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_PmePencilZ operator() (const CkArrayIndex3D &idx) const
        {return CProxyElement_PmePencilZ(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_PmePencilZ operator () (int idx) const 
        {return CProxyElement_PmePencilZ(ckGetArrayID(), *(CkArrayIndex3D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
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
    CProxySection_PmePencilZ(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_PmePencilZ(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_PmePencilZ(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems,nElems, factor) {}
    CProxySection_PmePencilZ(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems, factor) { ckAutoDelegate(); }
    CProxySection_PmePencilZ(const CkSectionID &sid)  
        :CProxySection_ArrayElement(sid) { ckAutoDelegate(); }
    CProxySection_PmePencilZ(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_PmePencilZ(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_PmePencilZ(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) { ckAutoDelegate(); }
    CProxySection_PmePencilZ(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems) 
        :CProxySection_ArrayElement(aid,elems) { ckAutoDelegate(); }
    CProxySection_PmePencilZ(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, int factor) 
        :CProxySection_ArrayElement(n,aid,elems,nElems, factor) { ckAutoDelegate(); }
    CProxySection_PmePencilZ(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, int factor) 
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
/* DECLS: PmePencilZ();
 */
    

/* DECLS: void startDoneCallback();
 */
    
    void startDoneCallback(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void recvBlock(PmeBlockMsg* impl_msg);
 */
    
    void recvBlock(PmeBlockMsg* impl_msg) ;

/* DECLS: void skip();
 */
    
    void skip(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void start(PmeStartMsg* impl_msg);
 */
    
    void start(PmeStartMsg* impl_msg) ;

/* DECLS: PmePencilZ(CkMigrateMessage* impl_msg);
 */

};
#define PmePencilZ_SDAG_CODE                                                   \
public:                                                                        \
  void start(PmeStartMsg pmeStartMsg);                                         \
  void _sdag_fnc_start(PmeStartMsg pmeStartMsg);                               \
  void _sdag_fnc_start(PmeStartMsg* gen0);                                     \
private:                                                                       \
  void start_end(PmeStartMsg* gen0);                                           \
  void _slist_0(PmeStartMsg* gen0);                                            \
  void _slist_0_end(PmeStartMsg* gen0);                                        \
  void _serial_0(PmeStartMsg* gen0);                                           \
  SDAG::Continuation* _when_0(PmeStartMsg* gen0);                              \
  void _when_0_end(PmeStartMsg* gen0);                                         \
  void _serial_1(PmeStartMsg* gen0);                                           \
  void _while_0(PmeStartMsg* gen0);                                            \
  void _while_0_end(PmeStartMsg* gen0);                                        \
  void _slist_1(PmeStartMsg* gen0);                                            \
  void _slist_1_end(PmeStartMsg* gen0);                                        \
  void _for_0(PmeStartMsg* gen0);                                              \
  void _for_0_end(PmeStartMsg* gen0);                                          \
  void _slist_2(PmeStartMsg* gen0);                                            \
  void _slist_2_end(PmeStartMsg* gen0);                                        \
  SDAG::Continuation* _when_1(PmeStartMsg* gen0);                              \
  void _when_1_end(PmeStartMsg* gen0, PmeBlockMsg* gen1);                      \
  void _serial_2(PmeStartMsg* gen0, PmeBlockMsg* gen1);                        \
  void _serial_3(PmeStartMsg* gen0);                                           \
  void _serial_4(PmeStartMsg* gen0);                                           \
  void _serial_5(PmeStartMsg* gen0);                                           \
public:                                                                        \
  void startDoneCallback(Closure_PmePencilZ::startDoneCallback_2_closure* genClosure);\
  void startDoneCallback();                                                    \
  void recvBlock(PmeBlockMsg* msg_msg);                                        \
public:                                                                        \
  SDAG::dep_ptr __dep;                                                         \
  void _sdag_init();                                                           \
  void __sdag_init();                                                          \
public:                                                                        \
  void _sdag_pup(PUP::er &p);                                                  \
  void __sdag_pup(PUP::er &p) { }                                              \
  static void __sdag_register();                                               \
  static int _sdag_idx_PmePencilZ_initFFT();                                   \
  static int _sdag_reg_PmePencilZ_initFFT();                                   \
  static int _sdag_idx_PmePencilZ_serial_1();                                  \
  static int _sdag_reg_PmePencilZ_serial_1();                                  \
  static int _sdag_idx_PmePencilZ_recvDataFromY();                             \
  static int _sdag_reg_PmePencilZ_recvDataFromY();                             \
  static int _sdag_idx_PmePencilZ_forwardFFT();                                \
  static int _sdag_reg_PmePencilZ_forwardFFT();                                \
  static int _sdag_idx_PmePencilZ_backwardFFT();                               \
  static int _sdag_reg_PmePencilZ_backwardFFT();                               \
  static int _sdag_idx_PmePencilZ_backwardDone();                              \
  static int _sdag_reg_PmePencilZ_backwardDone();                              \

typedef CBaseT1<ArrayElementT<CkIndex3D>, CProxy_PmePencilZ>CBase_PmePencilZ;




/* ---------------- method closures -------------- */
class Closure_PmePencilXYZMap {
  public:

};

/* ---------------- method closures -------------- */
class Closure_PmePencilXMap {
  public:

};

/* ---------------- method closures -------------- */
class Closure_PmePencilXYMap {
  public:

};

/* ---------------- method closures -------------- */
class Closure_PmePencilXYZ {
  public:



    struct skip_3_closure;



};


/* ---------------- method closures -------------- */
class Closure_PmePencilXY {
  public:


    struct startDoneCallback_2_closure;





};

/* ---------------- method closures -------------- */
class Closure_PmePencilX {
  public:


    struct startDoneCallback_2_closure;





};

/* ---------------- method closures -------------- */
class Closure_PmePencilY {
  public:


    struct startDoneCallback_2_closure;




};

/* ---------------- method closures -------------- */
class Closure_PmePencilZ {
  public:


    struct startDoneCallback_2_closure;



    struct skip_4_closure;



};

extern void _registerPmeSolver(void);
#endif
