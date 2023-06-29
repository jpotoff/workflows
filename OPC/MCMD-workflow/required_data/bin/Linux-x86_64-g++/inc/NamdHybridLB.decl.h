#ifndef _DECL_NamdHybridLB_H_
#define _DECL_NamdHybridLB_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
#include "HybridBaseLB.decl.h"

#include "BaseLB.decl.h"

#include "CentralLB.h"

#include "CentralLBMsg.h"

#include "HybridLBMsg.h"

#ifndef GROUPDEPNUM_DECLARED
# define GROUPDEPNUM_DECLARED
struct GroupDepNum
{
  int groupDepNum;
  explicit GroupDepNum(int g = 0) : groupDepNum{g} { }
  operator int() const { return groupDepNum; }
};
#endif
/* DECLS: message LocalLBInfoMsg{
MigrateInfo moves[];
double cpuloads[];
}
;
 */
class LocalLBInfoMsg;
class CMessage_LocalLBInfoMsg:public CkMessage{
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
    CMessage_LocalLBInfoMsg();
    static void *pack(LocalLBInfoMsg *p);
    static LocalLBInfoMsg* unpack(void* p);
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
/* DECLS: message SplitComputesMsg{
int cid[];
float load[];
}
;
 */
class SplitComputesMsg;
class CMessage_SplitComputesMsg:public CkMessage{
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
    CMessage_SplitComputesMsg();
    static void *pack(SplitComputesMsg *p);
    static SplitComputesMsg* unpack(void* p);
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

/* DECLS: group NamdHybridLB: HybridBaseLB{
void NamdHybridLB(const CkLBOptions &impl_noname_0);
void UpdateLocalLBInfo(LocalLBInfoMsg* impl_msg);
void splitComputes(SplitComputesMsg* impl_msg);
NamdHybridLB(CkMigrateMessage* impl_msg);
};
 */
 class NamdHybridLB;
 class CkIndex_NamdHybridLB;
 class CProxy_NamdHybridLB;
 class CProxyElement_NamdHybridLB;
 class CProxySection_NamdHybridLB;
/* --------------- index object ------------------ */
class CkIndex_NamdHybridLB:public CkIndex_HybridBaseLB{
  public:
    typedef NamdHybridLB local_t;
    typedef CkIndex_NamdHybridLB index_t;
    typedef CProxy_NamdHybridLB proxy_t;
    typedef CProxyElement_NamdHybridLB element_t;
    typedef CProxySection_NamdHybridLB section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: void NamdHybridLB(const CkLBOptions &impl_noname_0);
     */
    // Entry point registration at startup
    
    static int reg_NamdHybridLB_marshall1();
    // Entry point index lookup
    
    inline static int idx_NamdHybridLB_marshall1() {
      static int epidx = reg_NamdHybridLB_marshall1();
      return epidx;
    }

    
    static int ckNew(const CkLBOptions &impl_noname_0) { return idx_NamdHybridLB_marshall1(); }
    
    static void _call_NamdHybridLB_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_NamdHybridLB_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_NamdHybridLB_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_NamdHybridLB_marshall1(PUP::er &p,void *msg);
    /* DECLS: void UpdateLocalLBInfo(LocalLBInfoMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_UpdateLocalLBInfo_LocalLBInfoMsg();
    // Entry point index lookup
    
    inline static int idx_UpdateLocalLBInfo_LocalLBInfoMsg() {
      static int epidx = reg_UpdateLocalLBInfo_LocalLBInfoMsg();
      return epidx;
    }

    
    inline static int idx_UpdateLocalLBInfo(void (NamdHybridLB::*)(LocalLBInfoMsg* impl_msg) ) {
      return idx_UpdateLocalLBInfo_LocalLBInfoMsg();
    }


    
    static int UpdateLocalLBInfo(LocalLBInfoMsg* impl_msg) { return idx_UpdateLocalLBInfo_LocalLBInfoMsg(); }
    
    static void _call_UpdateLocalLBInfo_LocalLBInfoMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_UpdateLocalLBInfo_LocalLBInfoMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void splitComputes(SplitComputesMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_splitComputes_SplitComputesMsg();
    // Entry point index lookup
    
    inline static int idx_splitComputes_SplitComputesMsg() {
      static int epidx = reg_splitComputes_SplitComputesMsg();
      return epidx;
    }

    
    inline static int idx_splitComputes(void (NamdHybridLB::*)(SplitComputesMsg* impl_msg) ) {
      return idx_splitComputes_SplitComputesMsg();
    }


    
    static int splitComputes(SplitComputesMsg* impl_msg) { return idx_splitComputes_SplitComputesMsg(); }
    
    static void _call_splitComputes_SplitComputesMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_splitComputes_SplitComputesMsg(void* impl_msg, void* impl_obj);
    /* DECLS: NamdHybridLB(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_NamdHybridLB_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_NamdHybridLB_CkMigrateMessage() {
      static int epidx = reg_NamdHybridLB_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_NamdHybridLB_CkMigrateMessage(); }
    
    static void _call_NamdHybridLB_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_NamdHybridLB_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_NamdHybridLB: public CProxyElement_HybridBaseLB{
  public:
    typedef NamdHybridLB local_t;
    typedef CkIndex_NamdHybridLB index_t;
    typedef CProxy_NamdHybridLB proxy_t;
    typedef CProxyElement_NamdHybridLB element_t;
    typedef CProxySection_NamdHybridLB section_t;


    /* TRAM aggregators */

    CProxyElement_NamdHybridLB(void) {
    }
    CProxyElement_NamdHybridLB(const IrrGroup *g) : CProxyElement_HybridBaseLB(g){
    }
    CProxyElement_NamdHybridLB(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_HybridBaseLB(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_NamdHybridLB(CkGroupID _gid,int _onPE) : CProxyElement_HybridBaseLB(_gid,_onPE){
    }

    int ckIsDelegated(void) const
    { return CProxyElement_HybridBaseLB::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_HybridBaseLB::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_HybridBaseLB::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_HybridBaseLB::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxyElement_HybridBaseLB::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxyElement_HybridBaseLB::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxyElement_HybridBaseLB::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_HybridBaseLB::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_HybridBaseLB::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_HybridBaseLB::ckSetReductionClient(cb); }
int ckGetGroupPe(void) const
{return CProxyElement_HybridBaseLB::ckGetGroupPe();}

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_HybridBaseLB::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_HybridBaseLB::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_HybridBaseLB::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxyElement_HybridBaseLB::ckSetGroupID(g);
    }
    NamdHybridLB* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static NamdHybridLB* ckLocalBranch(CkGroupID gID) {
      return (NamdHybridLB*)CkLocalBranch(gID);
    }
/* DECLS: void NamdHybridLB(const CkLBOptions &impl_noname_0);
 */
    

/* DECLS: void UpdateLocalLBInfo(LocalLBInfoMsg* impl_msg);
 */
    
    void UpdateLocalLBInfo(LocalLBInfoMsg* impl_msg);

/* DECLS: void splitComputes(SplitComputesMsg* impl_msg);
 */
    
    void splitComputes(SplitComputesMsg* impl_msg);

/* DECLS: NamdHybridLB(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
class CProxy_NamdHybridLB: public CProxy_HybridBaseLB{
  public:
    typedef NamdHybridLB local_t;
    typedef CkIndex_NamdHybridLB index_t;
    typedef CProxy_NamdHybridLB proxy_t;
    typedef CProxyElement_NamdHybridLB element_t;
    typedef CProxySection_NamdHybridLB section_t;

    CProxy_NamdHybridLB(void) {
    }
    CProxy_NamdHybridLB(const IrrGroup *g) : CProxy_HybridBaseLB(g){
    }
    CProxy_NamdHybridLB(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_HybridBaseLB(_gid,CK_DELCTOR_ARGS){  }
    CProxy_NamdHybridLB(CkGroupID _gid) : CProxy_HybridBaseLB(_gid){  }
    CProxyElement_NamdHybridLB operator[](int onPE) const
      {return CProxyElement_NamdHybridLB(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

    int ckIsDelegated(void) const
    { return CProxy_HybridBaseLB::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_HybridBaseLB::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_HybridBaseLB::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_HybridBaseLB::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxy_HybridBaseLB::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxy_HybridBaseLB::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxy_HybridBaseLB::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_HybridBaseLB::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_HybridBaseLB::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_HybridBaseLB::ckSetReductionClient(cb); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_HybridBaseLB::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_HybridBaseLB::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_HybridBaseLB::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxy_HybridBaseLB::ckSetGroupID(g);
    }
    NamdHybridLB* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static NamdHybridLB* ckLocalBranch(CkGroupID gID) {
      return (NamdHybridLB*)CkLocalBranch(gID);
    }
/* DECLS: void NamdHybridLB(const CkLBOptions &impl_noname_0);
 */
    
    static CkGroupID ckNew(const CkLBOptions &impl_noname_0, const CkEntryOptions *impl_e_opts=NULL);
    CProxy_NamdHybridLB(const CkLBOptions &impl_noname_0, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void UpdateLocalLBInfo(LocalLBInfoMsg* impl_msg);
 */
    
    void UpdateLocalLBInfo(LocalLBInfoMsg* impl_msg);
    
    void UpdateLocalLBInfo(LocalLBInfoMsg* impl_msg, int npes, int *pes);
    
    void UpdateLocalLBInfo(LocalLBInfoMsg* impl_msg, CmiGroup &grp);

/* DECLS: void splitComputes(SplitComputesMsg* impl_msg);
 */
    
    void splitComputes(SplitComputesMsg* impl_msg);
    
    void splitComputes(SplitComputesMsg* impl_msg, int npes, int *pes);
    
    void splitComputes(SplitComputesMsg* impl_msg, CmiGroup &grp);

/* DECLS: NamdHybridLB(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
class CProxySection_NamdHybridLB: public CProxySection_HybridBaseLB{
  public:
    typedef NamdHybridLB local_t;
    typedef CkIndex_NamdHybridLB index_t;
    typedef CProxy_NamdHybridLB proxy_t;
    typedef CProxyElement_NamdHybridLB element_t;
    typedef CProxySection_NamdHybridLB section_t;

    CProxySection_NamdHybridLB(void) {
    }
    CProxySection_NamdHybridLB(const IrrGroup *g) : CProxySection_HybridBaseLB(g){
    }
    CProxySection_NamdHybridLB(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_HybridBaseLB(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_NamdHybridLB(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_HybridBaseLB(_gid,_pelist,_npes,factor){  }
    CProxySection_NamdHybridLB(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_HybridBaseLB(n,_gid,_pelist,_npes,factor){  }
    CProxySection_NamdHybridLB(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_HybridBaseLB(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

    int ckIsDelegated(void) const
    { return CProxySection_HybridBaseLB::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_HybridBaseLB::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_HybridBaseLB::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_HybridBaseLB::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxySection_HybridBaseLB::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxySection_HybridBaseLB::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxySection_HybridBaseLB::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_HybridBaseLB::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_HybridBaseLB::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_HybridBaseLB::ckSetReductionClient(cb); }
inline int ckGetNumSections() const
{ return CProxySection_HybridBaseLB::ckGetNumSections(); }
inline CkSectionInfo &ckGetSectionInfo()
{ return CProxySection_HybridBaseLB::ckGetSectionInfo(); }
inline CkSectionID *ckGetSectionIDs()
{ return CProxySection_HybridBaseLB::ckGetSectionIDs(); }
inline CkSectionID &ckGetSectionID()
{ return CProxySection_HybridBaseLB::ckGetSectionID(); }
inline CkSectionID &ckGetSectionID(int i)
{ return CProxySection_HybridBaseLB::ckGetSectionID(i); }
inline CkGroupID ckGetGroupIDn(int i) const
{ return CProxySection_HybridBaseLB::ckGetGroupIDn(i); }
inline const int *ckGetElements() const
{ return CProxySection_HybridBaseLB::ckGetElements(); }
inline const int *ckGetElements(int i) const
{ return CProxySection_HybridBaseLB::ckGetElements(i); }
inline int ckGetNumElements() const
{ return CProxySection_HybridBaseLB::ckGetNumElements(); } 
inline int ckGetNumElements(int i) const
{ return CProxySection_HybridBaseLB::ckGetNumElements(i); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_HybridBaseLB::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_HybridBaseLB::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_HybridBaseLB::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxySection_HybridBaseLB::ckSetGroupID(g);
    }
    NamdHybridLB* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static NamdHybridLB* ckLocalBranch(CkGroupID gID) {
      return (NamdHybridLB*)CkLocalBranch(gID);
    }
/* DECLS: void NamdHybridLB(const CkLBOptions &impl_noname_0);
 */
    

/* DECLS: void UpdateLocalLBInfo(LocalLBInfoMsg* impl_msg);
 */
    
    void UpdateLocalLBInfo(LocalLBInfoMsg* impl_msg);

/* DECLS: void splitComputes(SplitComputesMsg* impl_msg);
 */
    
    void splitComputes(SplitComputesMsg* impl_msg);

/* DECLS: NamdHybridLB(CkMigrateMessage* impl_msg);
 */

};
#define NamdHybridLB_SDAG_CODE 
typedef CBaseT1<HybridBaseLB, CProxy_NamdHybridLB>CBase_NamdHybridLB;








/* ---------------- method closures -------------- */
class Closure_NamdHybridLB {
  public:




};

extern void _registerNamdHybridLB(void);
#endif
