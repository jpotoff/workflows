#ifndef _DECL_ComputeMoaMgr_H_
#define _DECL_ComputeMoaMgr_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
/* DECLS: group ComputeMoaMgr: IrrGroup{
ComputeMoaMgr();
void initialize(CkQdMsg* impl_msg);
void initWorkers(CkQdMsg* impl_msg);
void startWorkers(CkQdMsg* impl_msg);
void recvMoaData(const MoaData &impl_noname_0);
void recvQ(int nq, const double *q);
void recvB(int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order);
void recvSGrid(int ns, const double *sg);
};
 */
 class ComputeMoaMgr;
 class CkIndex_ComputeMoaMgr;
 class CProxy_ComputeMoaMgr;
 class CProxyElement_ComputeMoaMgr;
 class CProxySection_ComputeMoaMgr;
/* --------------- index object ------------------ */
class CkIndex_ComputeMoaMgr:public CkIndex_IrrGroup{
  public:
    typedef ComputeMoaMgr local_t;
    typedef CkIndex_ComputeMoaMgr index_t;
    typedef CProxy_ComputeMoaMgr proxy_t;
    typedef CProxyElement_ComputeMoaMgr element_t;
    typedef CProxySection_ComputeMoaMgr section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: ComputeMoaMgr();
     */
    // Entry point registration at startup
    
    static int reg_ComputeMoaMgr_void();
    // Entry point index lookup
    
    inline static int idx_ComputeMoaMgr_void() {
      static int epidx = reg_ComputeMoaMgr_void();
      return epidx;
    }

    
    static int ckNew() { return idx_ComputeMoaMgr_void(); }
    
    static void _call_ComputeMoaMgr_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ComputeMoaMgr_void(void* impl_msg, void* impl_obj);
    /* DECLS: void initialize(CkQdMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_initialize_CkQdMsg();
    // Entry point index lookup
    
    inline static int idx_initialize_CkQdMsg() {
      static int epidx = reg_initialize_CkQdMsg();
      return epidx;
    }

    
    inline static int idx_initialize(void (ComputeMoaMgr::*)(CkQdMsg* impl_msg) ) {
      return idx_initialize_CkQdMsg();
    }


    
    static int initialize(CkQdMsg* impl_msg) { return idx_initialize_CkQdMsg(); }
    
    static void _call_initialize_CkQdMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_initialize_CkQdMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void initWorkers(CkQdMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_initWorkers_CkQdMsg();
    // Entry point index lookup
    
    inline static int idx_initWorkers_CkQdMsg() {
      static int epidx = reg_initWorkers_CkQdMsg();
      return epidx;
    }

    
    inline static int idx_initWorkers(void (ComputeMoaMgr::*)(CkQdMsg* impl_msg) ) {
      return idx_initWorkers_CkQdMsg();
    }


    
    static int initWorkers(CkQdMsg* impl_msg) { return idx_initWorkers_CkQdMsg(); }
    
    static void _call_initWorkers_CkQdMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_initWorkers_CkQdMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void startWorkers(CkQdMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_startWorkers_CkQdMsg();
    // Entry point index lookup
    
    inline static int idx_startWorkers_CkQdMsg() {
      static int epidx = reg_startWorkers_CkQdMsg();
      return epidx;
    }

    
    inline static int idx_startWorkers(void (ComputeMoaMgr::*)(CkQdMsg* impl_msg) ) {
      return idx_startWorkers_CkQdMsg();
    }


    
    static int startWorkers(CkQdMsg* impl_msg) { return idx_startWorkers_CkQdMsg(); }
    
    static void _call_startWorkers_CkQdMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_startWorkers_CkQdMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvMoaData(const MoaData &impl_noname_0);
     */
    // Entry point registration at startup
    
    static int reg_recvMoaData_marshall5();
    // Entry point index lookup
    
    inline static int idx_recvMoaData_marshall5() {
      static int epidx = reg_recvMoaData_marshall5();
      return epidx;
    }

    
    inline static int idx_recvMoaData(void (ComputeMoaMgr::*)(const MoaData &impl_noname_0) ) {
      return idx_recvMoaData_marshall5();
    }


    
    static int recvMoaData(const MoaData &impl_noname_0) { return idx_recvMoaData_marshall5(); }
    
    static void _call_recvMoaData_marshall5(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvMoaData_marshall5(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_recvMoaData_marshall5(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_recvMoaData_marshall5(PUP::er &p,void *msg);
    /* DECLS: void recvQ(int nq, const double *q);
     */
    // Entry point registration at startup
    
    static int reg_recvQ_marshall6();
    // Entry point index lookup
    
    inline static int idx_recvQ_marshall6() {
      static int epidx = reg_recvQ_marshall6();
      return epidx;
    }

    
    inline static int idx_recvQ(void (ComputeMoaMgr::*)(int nq, const double *q) ) {
      return idx_recvQ_marshall6();
    }


    
    static int recvQ(int nq, const double *q) { return idx_recvQ_marshall6(); }
    
    static void _call_recvQ_marshall6(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvQ_marshall6(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_recvQ_marshall6(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_recvQ_marshall6(PUP::er &p,void *msg);
    /* DECLS: void recvB(int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order);
     */
    // Entry point registration at startup
    
    static int reg_recvB_marshall7();
    // Entry point index lookup
    
    inline static int idx_recvB_marshall7() {
      static int epidx = reg_recvB_marshall7();
      return epidx;
    }

    
    inline static int idx_recvB(void (ComputeMoaMgr::*)(int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order) ) {
      return idx_recvB_marshall7();
    }


    
    static int recvB(int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order) { return idx_recvB_marshall7(); }
    
    static void _call_recvB_marshall7(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvB_marshall7(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_recvB_marshall7(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_recvB_marshall7(PUP::er &p,void *msg);
    /* DECLS: void recvSGrid(int ns, const double *sg);
     */
    // Entry point registration at startup
    
    static int reg_recvSGrid_marshall8();
    // Entry point index lookup
    
    inline static int idx_recvSGrid_marshall8() {
      static int epidx = reg_recvSGrid_marshall8();
      return epidx;
    }

    
    inline static int idx_recvSGrid(void (ComputeMoaMgr::*)(int ns, const double *sg) ) {
      return idx_recvSGrid_marshall8();
    }


    
    static int recvSGrid(int ns, const double *sg) { return idx_recvSGrid_marshall8(); }
    
    static void _call_recvSGrid_marshall8(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvSGrid_marshall8(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_recvSGrid_marshall8(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_recvSGrid_marshall8(PUP::er &p,void *msg);
};
/* --------------- element proxy ------------------ */
class CProxyElement_ComputeMoaMgr: public CProxyElement_IrrGroup{
  public:
    typedef ComputeMoaMgr local_t;
    typedef CkIndex_ComputeMoaMgr index_t;
    typedef CProxy_ComputeMoaMgr proxy_t;
    typedef CProxyElement_ComputeMoaMgr element_t;
    typedef CProxySection_ComputeMoaMgr section_t;


    /* TRAM aggregators */

    CProxyElement_ComputeMoaMgr(void) {
    }
    CProxyElement_ComputeMoaMgr(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_ComputeMoaMgr(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_ComputeMoaMgr(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    ComputeMoaMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ComputeMoaMgr* ckLocalBranch(CkGroupID gID) {
      return (ComputeMoaMgr*)CkLocalBranch(gID);
    }
/* DECLS: ComputeMoaMgr();
 */
    

/* DECLS: void initialize(CkQdMsg* impl_msg);
 */
    
    void initialize(CkQdMsg* impl_msg);

/* DECLS: void initWorkers(CkQdMsg* impl_msg);
 */
    
    void initWorkers(CkQdMsg* impl_msg);

/* DECLS: void startWorkers(CkQdMsg* impl_msg);
 */
    
    void startWorkers(CkQdMsg* impl_msg);

/* DECLS: void recvMoaData(const MoaData &impl_noname_0);
 */
    
    void recvMoaData(const MoaData &impl_noname_0, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvQ(int nq, const double *q);
 */
    
    void recvQ(int nq, const double *q, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvB(int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order);
 */
    
    void recvB(int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvSGrid(int ns, const double *sg);
 */
    
    void recvSGrid(int ns, const double *sg, const CkEntryOptions *impl_e_opts=NULL);

};
/* ---------------- collective proxy -------------- */
class CProxy_ComputeMoaMgr: public CProxy_IrrGroup{
  public:
    typedef ComputeMoaMgr local_t;
    typedef CkIndex_ComputeMoaMgr index_t;
    typedef CProxy_ComputeMoaMgr proxy_t;
    typedef CProxyElement_ComputeMoaMgr element_t;
    typedef CProxySection_ComputeMoaMgr section_t;

    CProxy_ComputeMoaMgr(void) {
    }
    CProxy_ComputeMoaMgr(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_ComputeMoaMgr(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_ComputeMoaMgr(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_ComputeMoaMgr operator[](int onPE) const
      {return CProxyElement_ComputeMoaMgr(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    ComputeMoaMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ComputeMoaMgr* ckLocalBranch(CkGroupID gID) {
      return (ComputeMoaMgr*)CkLocalBranch(gID);
    }
/* DECLS: ComputeMoaMgr();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void initialize(CkQdMsg* impl_msg);
 */
    
    void initialize(CkQdMsg* impl_msg);
    
    void initialize(CkQdMsg* impl_msg, int npes, int *pes);
    
    void initialize(CkQdMsg* impl_msg, CmiGroup &grp);

/* DECLS: void initWorkers(CkQdMsg* impl_msg);
 */
    
    void initWorkers(CkQdMsg* impl_msg);
    
    void initWorkers(CkQdMsg* impl_msg, int npes, int *pes);
    
    void initWorkers(CkQdMsg* impl_msg, CmiGroup &grp);

/* DECLS: void startWorkers(CkQdMsg* impl_msg);
 */
    
    void startWorkers(CkQdMsg* impl_msg);
    
    void startWorkers(CkQdMsg* impl_msg, int npes, int *pes);
    
    void startWorkers(CkQdMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvMoaData(const MoaData &impl_noname_0);
 */
    
    void recvMoaData(const MoaData &impl_noname_0, const CkEntryOptions *impl_e_opts=NULL);
    
    void recvMoaData(const MoaData &impl_noname_0, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void recvMoaData(const MoaData &impl_noname_0, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvQ(int nq, const double *q);
 */
    
    void recvQ(int nq, const double *q, const CkEntryOptions *impl_e_opts=NULL);
    
    void recvQ(int nq, const double *q, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void recvQ(int nq, const double *q, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvB(int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order);
 */
    
    void recvB(int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order, const CkEntryOptions *impl_e_opts=NULL);
    
    void recvB(int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void recvB(int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvSGrid(int ns, const double *sg);
 */
    
    void recvSGrid(int ns, const double *sg, const CkEntryOptions *impl_e_opts=NULL);
    
    void recvSGrid(int ns, const double *sg, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void recvSGrid(int ns, const double *sg, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

};
/* ---------------- section proxy -------------- */
class CProxySection_ComputeMoaMgr: public CProxySection_IrrGroup{
  public:
    typedef ComputeMoaMgr local_t;
    typedef CkIndex_ComputeMoaMgr index_t;
    typedef CProxy_ComputeMoaMgr proxy_t;
    typedef CProxyElement_ComputeMoaMgr element_t;
    typedef CProxySection_ComputeMoaMgr section_t;

    CProxySection_ComputeMoaMgr(void) {
    }
    CProxySection_ComputeMoaMgr(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_ComputeMoaMgr(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_ComputeMoaMgr(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_ComputeMoaMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_ComputeMoaMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    ComputeMoaMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ComputeMoaMgr* ckLocalBranch(CkGroupID gID) {
      return (ComputeMoaMgr*)CkLocalBranch(gID);
    }
/* DECLS: ComputeMoaMgr();
 */
    

/* DECLS: void initialize(CkQdMsg* impl_msg);
 */
    
    void initialize(CkQdMsg* impl_msg);

/* DECLS: void initWorkers(CkQdMsg* impl_msg);
 */
    
    void initWorkers(CkQdMsg* impl_msg);

/* DECLS: void startWorkers(CkQdMsg* impl_msg);
 */
    
    void startWorkers(CkQdMsg* impl_msg);

/* DECLS: void recvMoaData(const MoaData &impl_noname_0);
 */
    
    void recvMoaData(const MoaData &impl_noname_0, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvQ(int nq, const double *q);
 */
    
    void recvQ(int nq, const double *q, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvB(int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order);
 */
    
    void recvB(int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvSGrid(int ns, const double *sg);
 */
    
    void recvSGrid(int ns, const double *sg, const CkEntryOptions *impl_e_opts=NULL);

};
#define ComputeMoaMgr_SDAG_CODE 
typedef CBaseT1<Group, CProxy_ComputeMoaMgr>CBase_ComputeMoaMgr;

/* DECLS: array MoaS: ArrayElement{
MoaS(const Moa3Grid &qh, const Moa3Grid &bh);
threaded void compute();
MoaS(CkMigrateMessage* impl_msg);
};
 */
 class MoaS;
 class CkIndex_MoaS;
 class CProxy_MoaS;
 class CProxyElement_MoaS;
 class CProxySection_MoaS;
/* --------------- index object ------------------ */
class CkIndex_MoaS:public CkIndex_ArrayElement{
  public:
    typedef MoaS local_t;
    typedef CkIndex_MoaS index_t;
    typedef CProxy_MoaS proxy_t;
    typedef CProxyElement_MoaS element_t;
    typedef CProxySection_MoaS section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: MoaS(const Moa3Grid &qh, const Moa3Grid &bh);
     */
    // Entry point registration at startup
    
    static int reg_MoaS_marshall1();
    // Entry point index lookup
    
    inline static int idx_MoaS_marshall1() {
      static int epidx = reg_MoaS_marshall1();
      return epidx;
    }

    
    static int ckNew(const Moa3Grid &qh, const Moa3Grid &bh) { return idx_MoaS_marshall1(); }
    
    static void _call_MoaS_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_MoaS_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_MoaS_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_MoaS_marshall1(PUP::er &p,void *msg);
    /* DECLS: threaded void compute();
     */
    // Entry point registration at startup
    
    static int reg_compute_void();
    // Entry point index lookup
    
    inline static int idx_compute_void() {
      static int epidx = reg_compute_void();
      return epidx;
    }

    
    inline static int idx_compute(void (MoaS::*)() ) {
      return idx_compute_void();
    }


    
    static int compute() { return idx_compute_void(); }
    
    static void _call_compute_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_compute_void(void* impl_msg, void* impl_obj);
    
    static void _callthr_compute_void(CkThrCallArg *);
    /* DECLS: MoaS(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_MoaS_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_MoaS_CkMigrateMessage() {
      static int epidx = reg_MoaS_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_MoaS_CkMigrateMessage(); }
    
    static void _call_MoaS_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_MoaS_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_MoaS : public CProxyElement_ArrayElement{
  public:
    typedef MoaS local_t;
    typedef CkIndex_MoaS index_t;
    typedef CProxy_MoaS proxy_t;
    typedef CProxyElement_MoaS element_t;
    typedef CProxySection_MoaS section_t;

    using array_index_t = CkArrayIndex1D;

    /* TRAM aggregators */

    CProxyElement_MoaS(void) {
    }
    CProxyElement_MoaS(const ArrayElement *e) : CProxyElement_ArrayElement(e){
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

    MoaS *ckLocal(void) const
    { return (MoaS *)CProxyElement_ArrayElement::ckLocal(); }

    CProxyElement_MoaS(const CkArrayID &aid,const CkArrayIndex1D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_MoaS(const CkArrayID &aid,const CkArrayIndex1D &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}

    CProxyElement_MoaS(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_MoaS(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}
/* DECLS: MoaS(const Moa3Grid &qh, const Moa3Grid &bh);
 */
    
    void insert(const Moa3Grid &qh, const Moa3Grid &bh, int onPE=-1, const CkEntryOptions *impl_e_opts=NULL);
/* DECLS: threaded void compute();
 */
    
    void compute(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: MoaS(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
 class CProxy_MoaS : public CProxy_ArrayElement{
  public:
    typedef MoaS local_t;
    typedef CkIndex_MoaS index_t;
    typedef CProxy_MoaS proxy_t;
    typedef CProxyElement_MoaS element_t;
    typedef CProxySection_MoaS section_t;

    using array_index_t = CkArrayIndex1D;
    CProxy_MoaS(void) {
    }
    CProxy_MoaS(const ArrayElement *e) : CProxy_ArrayElement(e){
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

    // Empty array construction
    static CkArrayID ckNew(CkArrayOptions opts = CkArrayOptions()) { return ckCreateEmptyArray(opts); }
    static void      ckNew(CkCallback cb, CkArrayOptions opts = CkArrayOptions()) { ckCreateEmptyArrayAsync(cb, opts); }

    // Generalized array indexing:
    CProxyElement_MoaS operator [] (const CkArrayIndex1D &idx) const
    { return CProxyElement_MoaS(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_MoaS operator() (const CkArrayIndex1D &idx) const
    { return CProxyElement_MoaS(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_MoaS operator [] (int idx) const 
        {return CProxyElement_MoaS(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxyElement_MoaS operator () (int idx) const 
        {return CProxyElement_MoaS(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxy_MoaS(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_MoaS(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: MoaS(const Moa3Grid &qh, const Moa3Grid &bh);
 */
    
    static CkArrayID ckNew(const Moa3Grid &qh, const Moa3Grid &bh, const CkArrayOptions &opts = CkArrayOptions(), const CkEntryOptions *impl_e_opts=NULL);
    static void      ckNew(const Moa3Grid &qh, const Moa3Grid &bh, const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);
    static CkArrayID ckNew(const Moa3Grid &qh, const Moa3Grid &bh, const int s1, const CkEntryOptions *impl_e_opts=NULL);
    static void ckNew(const Moa3Grid &qh, const Moa3Grid &bh, const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: threaded void compute();
 */
    
    void compute(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: MoaS(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
 class CProxySection_MoaS : public CProxySection_ArrayElement{
  public:
    typedef MoaS local_t;
    typedef CkIndex_MoaS index_t;
    typedef CProxy_MoaS proxy_t;
    typedef CProxyElement_MoaS element_t;
    typedef CProxySection_MoaS section_t;

    using array_index_t = CkArrayIndex1D;
    CProxySection_MoaS(void) {
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
    CProxyElement_MoaS operator [] (const CkArrayIndex1D &idx) const
        {return CProxyElement_MoaS(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_MoaS operator() (const CkArrayIndex1D &idx) const
        {return CProxyElement_MoaS(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_MoaS operator [] (int idx) const 
        {return CProxyElement_MoaS(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    CProxyElement_MoaS operator () (int idx) const 
        {return CProxyElement_MoaS(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
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
    CProxySection_MoaS(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_MoaS(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_MoaS(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems,nElems, factor) {}
    CProxySection_MoaS(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems, factor) { ckAutoDelegate(); }
    CProxySection_MoaS(const CkSectionID &sid)  
        :CProxySection_ArrayElement(sid) { ckAutoDelegate(); }
    CProxySection_MoaS(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_MoaS(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_MoaS(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) { ckAutoDelegate(); }
    CProxySection_MoaS(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems) 
        :CProxySection_ArrayElement(aid,elems) { ckAutoDelegate(); }
    CProxySection_MoaS(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, int factor) 
        :CProxySection_ArrayElement(n,aid,elems,nElems, factor) { ckAutoDelegate(); }
    CProxySection_MoaS(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, int factor) 
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
/* DECLS: MoaS(const Moa3Grid &qh, const Moa3Grid &bh);
 */
    

/* DECLS: threaded void compute();
 */
    
    void compute(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: MoaS(CkMigrateMessage* impl_msg);
 */

};
#define MoaS_SDAG_CODE 
typedef CBaseT1<ArrayElementT<CkIndex1D>, CProxy_MoaS>CBase_MoaS;

/* ---------------- method closures -------------- */
class Closure_ComputeMoaMgr {
  public:





    struct recvMoaData_5_closure;


    struct recvQ_6_closure;


    struct recvB_7_closure;


    struct recvSGrid_8_closure;

};

/* ---------------- method closures -------------- */
class Closure_MoaS {
  public:


    struct compute_2_closure;


};

extern void _registerComputeMoaMgr(void);
#endif
