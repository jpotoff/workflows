#ifndef _DECL_DataExchanger_H_
#define _DECL_DataExchanger_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
#include "Pointer.h"

/* DECLS: group DataExchanger: IrrGroup{
DataExchanger();
void recv_data(const Pointer &p);
void recv_eval_result(const Pointer &p);
void recv_ack();
void recv_red();
void recv_bcast();
void send(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst);
void recv(const Pointer &recvPointer, int srcPart, int src);
void sendRecv(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const Pointer &recvPointer, int srcPart, int src);
void eval(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const Pointer &recvPointer);
void recv_eval_command(const Pointer &p);
void barrier();
};
 */
 class DataExchanger;
 class CkIndex_DataExchanger;
 class CProxy_DataExchanger;
 class CProxyElement_DataExchanger;
 class CProxySection_DataExchanger;
/* --------------- index object ------------------ */
class CkIndex_DataExchanger:public CkIndex_IrrGroup{
  public:
    typedef DataExchanger local_t;
    typedef CkIndex_DataExchanger index_t;
    typedef CProxy_DataExchanger proxy_t;
    typedef CProxyElement_DataExchanger element_t;
    typedef CProxySection_DataExchanger section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: DataExchanger();
     */
    // Entry point registration at startup
    
    static int reg_DataExchanger_void();
    // Entry point index lookup
    
    inline static int idx_DataExchanger_void() {
      static int epidx = reg_DataExchanger_void();
      return epidx;
    }

    
    static int ckNew() { return idx_DataExchanger_void(); }
    
    static void _call_DataExchanger_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_DataExchanger_void(void* impl_msg, void* impl_obj);
    /* DECLS: void recv_data(const Pointer &p);
     */
    // Entry point registration at startup
    
    static int reg_recv_data_marshall2();
    // Entry point index lookup
    
    inline static int idx_recv_data_marshall2() {
      static int epidx = reg_recv_data_marshall2();
      return epidx;
    }

    
    inline static int idx_recv_data(void (DataExchanger::*)(const Pointer &p) ) {
      return idx_recv_data_marshall2();
    }


    
    static int recv_data(const Pointer &p) { return idx_recv_data_marshall2(); }
    
    static void _call_recv_data_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recv_data_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_recv_data_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_recv_data_marshall2(PUP::er &p,void *msg);
    /* DECLS: void recv_eval_result(const Pointer &p);
     */
    // Entry point registration at startup
    
    static int reg_recv_eval_result_marshall3();
    // Entry point index lookup
    
    inline static int idx_recv_eval_result_marshall3() {
      static int epidx = reg_recv_eval_result_marshall3();
      return epidx;
    }

    
    inline static int idx_recv_eval_result(void (DataExchanger::*)(const Pointer &p) ) {
      return idx_recv_eval_result_marshall3();
    }


    
    static int recv_eval_result(const Pointer &p) { return idx_recv_eval_result_marshall3(); }
    
    static void _call_recv_eval_result_marshall3(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recv_eval_result_marshall3(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_recv_eval_result_marshall3(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_recv_eval_result_marshall3(PUP::er &p,void *msg);
    /* DECLS: void recv_ack();
     */
    // Entry point registration at startup
    
    static int reg_recv_ack_void();
    // Entry point index lookup
    
    inline static int idx_recv_ack_void() {
      static int epidx = reg_recv_ack_void();
      return epidx;
    }

    
    inline static int idx_recv_ack(void (DataExchanger::*)() ) {
      return idx_recv_ack_void();
    }


    
    static int recv_ack() { return idx_recv_ack_void(); }
    
    static void _call_recv_ack_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recv_ack_void(void* impl_msg, void* impl_obj);
    /* DECLS: void recv_red();
     */
    // Entry point registration at startup
    
    static int reg_recv_red_void();
    // Entry point index lookup
    
    inline static int idx_recv_red_void() {
      static int epidx = reg_recv_red_void();
      return epidx;
    }

    
    inline static int idx_recv_red(void (DataExchanger::*)() ) {
      return idx_recv_red_void();
    }


    
    static int recv_red() { return idx_recv_red_void(); }
    
    static void _call_recv_red_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recv_red_void(void* impl_msg, void* impl_obj);
    /* DECLS: void recv_bcast();
     */
    // Entry point registration at startup
    
    static int reg_recv_bcast_void();
    // Entry point index lookup
    
    inline static int idx_recv_bcast_void() {
      static int epidx = reg_recv_bcast_void();
      return epidx;
    }

    
    inline static int idx_recv_bcast(void (DataExchanger::*)() ) {
      return idx_recv_bcast_void();
    }


    
    static int recv_bcast() { return idx_recv_bcast_void(); }
    
    static void _call_recv_bcast_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recv_bcast_void(void* impl_msg, void* impl_obj);
    /* DECLS: void send(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst);
     */
    // Entry point registration at startup
    
    static int reg_send_marshall7();
    // Entry point index lookup
    
    inline static int idx_send_marshall7() {
      static int epidx = reg_send_marshall7();
      return epidx;
    }

    
    inline static int idx_send(void (DataExchanger::*)(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst) ) {
      return idx_send_marshall7();
    }


    
    static int send(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst) { return idx_send_marshall7(); }
    
    static void _call_send_marshall7(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_send_marshall7(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_send_marshall7(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_send_marshall7(PUP::er &p,void *msg);
    /* DECLS: void recv(const Pointer &recvPointer, int srcPart, int src);
     */
    // Entry point registration at startup
    
    static int reg_recv_marshall8();
    // Entry point index lookup
    
    inline static int idx_recv_marshall8() {
      static int epidx = reg_recv_marshall8();
      return epidx;
    }

    
    inline static int idx_recv(void (DataExchanger::*)(const Pointer &recvPointer, int srcPart, int src) ) {
      return idx_recv_marshall8();
    }


    
    static int recv(const Pointer &recvPointer, int srcPart, int src) { return idx_recv_marshall8(); }
    
    static void _call_recv_marshall8(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recv_marshall8(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_recv_marshall8(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_recv_marshall8(PUP::er &p,void *msg);
    /* DECLS: void sendRecv(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const Pointer &recvPointer, int srcPart, int src);
     */
    // Entry point registration at startup
    
    static int reg_sendRecv_marshall9();
    // Entry point index lookup
    
    inline static int idx_sendRecv_marshall9() {
      static int epidx = reg_sendRecv_marshall9();
      return epidx;
    }

    
    inline static int idx_sendRecv(void (DataExchanger::*)(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const Pointer &recvPointer, int srcPart, int src) ) {
      return idx_sendRecv_marshall9();
    }


    
    static int sendRecv(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const Pointer &recvPointer, int srcPart, int src) { return idx_sendRecv_marshall9(); }
    
    static void _call_sendRecv_marshall9(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_sendRecv_marshall9(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_sendRecv_marshall9(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_sendRecv_marshall9(PUP::er &p,void *msg);
    /* DECLS: void eval(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const Pointer &recvPointer);
     */
    // Entry point registration at startup
    
    static int reg_eval_marshall10();
    // Entry point index lookup
    
    inline static int idx_eval_marshall10() {
      static int epidx = reg_eval_marshall10();
      return epidx;
    }

    
    inline static int idx_eval(void (DataExchanger::*)(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const Pointer &recvPointer) ) {
      return idx_eval_marshall10();
    }


    
    static int eval(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const Pointer &recvPointer) { return idx_eval_marshall10(); }
    
    static void _call_eval_marshall10(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_eval_marshall10(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_eval_marshall10(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_eval_marshall10(PUP::er &p,void *msg);
    /* DECLS: void recv_eval_command(const Pointer &p);
     */
    // Entry point registration at startup
    
    static int reg_recv_eval_command_marshall11();
    // Entry point index lookup
    
    inline static int idx_recv_eval_command_marshall11() {
      static int epidx = reg_recv_eval_command_marshall11();
      return epidx;
    }

    
    inline static int idx_recv_eval_command(void (DataExchanger::*)(const Pointer &p) ) {
      return idx_recv_eval_command_marshall11();
    }


    
    static int recv_eval_command(const Pointer &p) { return idx_recv_eval_command_marshall11(); }
    
    static void _call_recv_eval_command_marshall11(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recv_eval_command_marshall11(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_recv_eval_command_marshall11(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_recv_eval_command_marshall11(PUP::er &p,void *msg);
    /* DECLS: void barrier();
     */
    // Entry point registration at startup
    
    static int reg_barrier_void();
    // Entry point index lookup
    
    inline static int idx_barrier_void() {
      static int epidx = reg_barrier_void();
      return epidx;
    }

    
    inline static int idx_barrier(void (DataExchanger::*)() ) {
      return idx_barrier_void();
    }


    
    static int barrier() { return idx_barrier_void(); }
    
    static void _call_barrier_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_barrier_void(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_DataExchanger: public CProxyElement_IrrGroup{
  public:
    typedef DataExchanger local_t;
    typedef CkIndex_DataExchanger index_t;
    typedef CProxy_DataExchanger proxy_t;
    typedef CProxyElement_DataExchanger element_t;
    typedef CProxySection_DataExchanger section_t;


    /* TRAM aggregators */

    CProxyElement_DataExchanger(void) {
    }
    CProxyElement_DataExchanger(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_DataExchanger(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_DataExchanger(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    DataExchanger* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static DataExchanger* ckLocalBranch(CkGroupID gID) {
      return (DataExchanger*)CkLocalBranch(gID);
    }
/* DECLS: DataExchanger();
 */
    

/* DECLS: void recv_data(const Pointer &p);
 */
    
    void recv_data(const Pointer &p, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recv_eval_result(const Pointer &p);
 */
    
    void recv_eval_result(const Pointer &p, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recv_ack();
 */
    
    void recv_ack(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recv_red();
 */
    
    void recv_red(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recv_bcast();
 */
    
    void recv_bcast(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void send(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst);
 */
    
    void send(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recv(const Pointer &recvPointer, int srcPart, int src);
 */
    
    void recv(const Pointer &recvPointer, int srcPart, int src, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void sendRecv(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const Pointer &recvPointer, int srcPart, int src);
 */
    
    void sendRecv(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const Pointer &recvPointer, int srcPart, int src, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void eval(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const Pointer &recvPointer);
 */
    
    void eval(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const Pointer &recvPointer, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recv_eval_command(const Pointer &p);
 */
    
    void recv_eval_command(const Pointer &p, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void barrier();
 */
    
    void barrier(const CkEntryOptions *impl_e_opts=NULL);

};
/* ---------------- collective proxy -------------- */
class CProxy_DataExchanger: public CProxy_IrrGroup{
  public:
    typedef DataExchanger local_t;
    typedef CkIndex_DataExchanger index_t;
    typedef CProxy_DataExchanger proxy_t;
    typedef CProxyElement_DataExchanger element_t;
    typedef CProxySection_DataExchanger section_t;

    CProxy_DataExchanger(void) {
    }
    CProxy_DataExchanger(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_DataExchanger(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_DataExchanger(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_DataExchanger operator[](int onPE) const
      {return CProxyElement_DataExchanger(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    DataExchanger* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static DataExchanger* ckLocalBranch(CkGroupID gID) {
      return (DataExchanger*)CkLocalBranch(gID);
    }
/* DECLS: DataExchanger();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recv_data(const Pointer &p);
 */
    
    void recv_data(const Pointer &p, const CkEntryOptions *impl_e_opts=NULL);
    
    void recv_data(const Pointer &p, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void recv_data(const Pointer &p, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recv_eval_result(const Pointer &p);
 */
    
    void recv_eval_result(const Pointer &p, const CkEntryOptions *impl_e_opts=NULL);
    
    void recv_eval_result(const Pointer &p, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void recv_eval_result(const Pointer &p, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recv_ack();
 */
    
    void recv_ack(const CkEntryOptions *impl_e_opts=NULL);
    
    void recv_ack(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void recv_ack(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recv_red();
 */
    
    void recv_red(const CkEntryOptions *impl_e_opts=NULL);
    
    void recv_red(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void recv_red(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recv_bcast();
 */
    
    void recv_bcast(const CkEntryOptions *impl_e_opts=NULL);
    
    void recv_bcast(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void recv_bcast(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void send(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst);
 */
    
    void send(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const CkEntryOptions *impl_e_opts=NULL);
    
    void send(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void send(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recv(const Pointer &recvPointer, int srcPart, int src);
 */
    
    void recv(const Pointer &recvPointer, int srcPart, int src, const CkEntryOptions *impl_e_opts=NULL);
    
    void recv(const Pointer &recvPointer, int srcPart, int src, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void recv(const Pointer &recvPointer, int srcPart, int src, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void sendRecv(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const Pointer &recvPointer, int srcPart, int src);
 */
    
    void sendRecv(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const Pointer &recvPointer, int srcPart, int src, const CkEntryOptions *impl_e_opts=NULL);
    
    void sendRecv(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const Pointer &recvPointer, int srcPart, int src, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void sendRecv(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const Pointer &recvPointer, int srcPart, int src, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void eval(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const Pointer &recvPointer);
 */
    
    void eval(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const Pointer &recvPointer, const CkEntryOptions *impl_e_opts=NULL);
    
    void eval(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const Pointer &recvPointer, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void eval(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const Pointer &recvPointer, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recv_eval_command(const Pointer &p);
 */
    
    void recv_eval_command(const Pointer &p, const CkEntryOptions *impl_e_opts=NULL);
    
    void recv_eval_command(const Pointer &p, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void recv_eval_command(const Pointer &p, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void barrier();
 */
    
    void barrier(const CkEntryOptions *impl_e_opts=NULL);
    
    void barrier(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void barrier(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

};
/* ---------------- section proxy -------------- */
class CProxySection_DataExchanger: public CProxySection_IrrGroup{
  public:
    typedef DataExchanger local_t;
    typedef CkIndex_DataExchanger index_t;
    typedef CProxy_DataExchanger proxy_t;
    typedef CProxyElement_DataExchanger element_t;
    typedef CProxySection_DataExchanger section_t;

    CProxySection_DataExchanger(void) {
    }
    CProxySection_DataExchanger(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_DataExchanger(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_DataExchanger(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_DataExchanger(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_DataExchanger(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    DataExchanger* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static DataExchanger* ckLocalBranch(CkGroupID gID) {
      return (DataExchanger*)CkLocalBranch(gID);
    }
/* DECLS: DataExchanger();
 */
    

/* DECLS: void recv_data(const Pointer &p);
 */
    
    void recv_data(const Pointer &p, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recv_eval_result(const Pointer &p);
 */
    
    void recv_eval_result(const Pointer &p, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recv_ack();
 */
    
    void recv_ack(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recv_red();
 */
    
    void recv_red(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recv_bcast();
 */
    
    void recv_bcast(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void send(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst);
 */
    
    void send(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recv(const Pointer &recvPointer, int srcPart, int src);
 */
    
    void recv(const Pointer &recvPointer, int srcPart, int src, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void sendRecv(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const Pointer &recvPointer, int srcPart, int src);
 */
    
    void sendRecv(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const Pointer &recvPointer, int srcPart, int src, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void eval(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const Pointer &recvPointer);
 */
    
    void eval(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const Pointer &recvPointer, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recv_eval_command(const Pointer &p);
 */
    
    void recv_eval_command(const Pointer &p, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void barrier();
 */
    
    void barrier(const CkEntryOptions *impl_e_opts=NULL);

};
#define DataExchanger_SDAG_CODE                                                \
public:                                                                        \
  void send(ConstPointer srcPointer, int srcSize, int dstPart, int dst);       \
  void _sdag_fnc_send(ConstPointer srcPointer, int srcSize, int dstPart, int dst);\
  void _sdag_fnc_send(Closure_DataExchanger::send_7_closure* gen0);            \
private:                                                                       \
  void send_end(Closure_DataExchanger::send_7_closure* gen0);                  \
  void _slist_0(Closure_DataExchanger::send_7_closure* gen0);                  \
  void _slist_0_end(Closure_DataExchanger::send_7_closure* gen0);              \
  void _serial_0(Closure_DataExchanger::send_7_closure* gen0);                 \
  SDAG::Continuation* _when_0(Closure_DataExchanger::send_7_closure* gen0);    \
  void _when_0_end(Closure_DataExchanger::send_7_closure* gen0);               \
  void _serial_1(Closure_DataExchanger::send_7_closure* gen0);                 \
public:                                                                        \
  void recv(Pointer recvPointer, int srcPart, int src);                        \
  void _sdag_fnc_recv(Pointer recvPointer, int srcPart, int src);              \
  void _sdag_fnc_recv(Closure_DataExchanger::recv_8_closure* gen0);            \
private:                                                                       \
  void recv_end(Closure_DataExchanger::recv_8_closure* gen0);                  \
  void _slist_1(Closure_DataExchanger::recv_8_closure* gen0);                  \
  void _slist_1_end(Closure_DataExchanger::recv_8_closure* gen0);              \
  void _serial_2(Closure_DataExchanger::recv_8_closure* gen0);                 \
  void _while_0(Closure_DataExchanger::recv_8_closure* gen0);                  \
  void _while_0_end(Closure_DataExchanger::recv_8_closure* gen0);              \
  void _slist_2(Closure_DataExchanger::recv_8_closure* gen0);                  \
  void _slist_2_end(Closure_DataExchanger::recv_8_closure* gen0);              \
  SDAG::Continuation* _when_1(Closure_DataExchanger::recv_8_closure* gen0);    \
  void _when_1_end(Closure_DataExchanger::recv_8_closure* gen0, Closure_DataExchanger::recv_data_2_closure* gen1);\
  void _serial_3(Closure_DataExchanger::recv_8_closure* gen0, Closure_DataExchanger::recv_data_2_closure* gen1);\
public:                                                                        \
  void sendRecv(ConstPointer srcPointer, int srcSize, int dstPart, int dst, Pointer recvPointer, int srcPart, int src);\
  void _sdag_fnc_sendRecv(ConstPointer srcPointer, int srcSize, int dstPart, int dst, Pointer recvPointer, int srcPart, int src);\
  void _sdag_fnc_sendRecv(Closure_DataExchanger::sendRecv_9_closure* gen0);    \
private:                                                                       \
  void sendRecv_end(Closure_DataExchanger::sendRecv_9_closure* gen0);          \
  void _slist_3(Closure_DataExchanger::sendRecv_9_closure* gen0);              \
  void _slist_3_end(Closure_DataExchanger::sendRecv_9_closure* gen0);          \
  void _serial_4(Closure_DataExchanger::sendRecv_9_closure* gen0);             \
  void _while_1(Closure_DataExchanger::sendRecv_9_closure* gen0);              \
  void _while_1_end(Closure_DataExchanger::sendRecv_9_closure* gen0);          \
  void _slist_4(Closure_DataExchanger::sendRecv_9_closure* gen0);              \
  void _slist_4_end(Closure_DataExchanger::sendRecv_9_closure* gen0);          \
  SDAG::Continuation* _when_2(Closure_DataExchanger::sendRecv_9_closure* gen0);\
  void _when_2_end(Closure_DataExchanger::sendRecv_9_closure* gen0, Closure_DataExchanger::recv_data_2_closure* gen1);\
  void _serial_5(Closure_DataExchanger::sendRecv_9_closure* gen0, Closure_DataExchanger::recv_data_2_closure* gen1);\
  SDAG::Continuation* _when_3(Closure_DataExchanger::sendRecv_9_closure* gen0);\
  void _when_3_end(Closure_DataExchanger::sendRecv_9_closure* gen0);           \
  void _serial_6(Closure_DataExchanger::sendRecv_9_closure* gen0);             \
public:                                                                        \
  void eval(ConstPointer srcPointer, int srcSize, int dstPart, int dst, Pointer recvPointer);\
  void _sdag_fnc_eval(ConstPointer srcPointer, int srcSize, int dstPart, int dst, Pointer recvPointer);\
  void _sdag_fnc_eval(Closure_DataExchanger::eval_10_closure* gen0);           \
private:                                                                       \
  void eval_end(Closure_DataExchanger::eval_10_closure* gen0);                 \
  void _slist_5(Closure_DataExchanger::eval_10_closure* gen0);                 \
  void _slist_5_end(Closure_DataExchanger::eval_10_closure* gen0);             \
  void _serial_7(Closure_DataExchanger::eval_10_closure* gen0);                \
  SDAG::Continuation* _when_4(Closure_DataExchanger::eval_10_closure* gen0);   \
  void _when_4_end(Closure_DataExchanger::eval_10_closure* gen0, Closure_DataExchanger::recv_eval_result_3_closure* gen1);\
  void _serial_8(Closure_DataExchanger::eval_10_closure* gen0, Closure_DataExchanger::recv_eval_result_3_closure* gen1);\
public:                                                                        \
  void recv_eval_command(Pointer p);                                           \
  void recv_eval_command(Closure_DataExchanger::recv_eval_command_11_closure* gen0);\
private:                                                                       \
  void recv_eval_command_end(Closure_DataExchanger::recv_eval_command_11_closure* gen0);\
  void _slist_6(Closure_DataExchanger::recv_eval_command_11_closure* gen0);    \
  void _slist_6_end(Closure_DataExchanger::recv_eval_command_11_closure* gen0);\
  void _serial_9(Closure_DataExchanger::recv_eval_command_11_closure* gen0);   \
public:                                                                        \
  void barrier();                                                              \
  void _sdag_fnc_barrier();                                                    \
private:                                                                       \
  void barrier_end();                                                          \
  void _slist_7();                                                             \
  void _slist_7_end();                                                         \
  void _for_0();                                                               \
  void _for_0_end();                                                           \
  void _slist_8();                                                             \
  void _slist_8_end();                                                         \
  SDAG::Continuation* _when_5();                                               \
  void _when_5_end();                                                          \
  void _if_0();                                                                \
  void _if_0_end();                                                            \
  void _else_0();                                                              \
  void _else_0_end();                                                          \
  void _slist_9();                                                             \
  void _slist_9_end();                                                         \
  void _serial_10();                                                           \
  void _slist_10();                                                            \
  void _slist_10_end();                                                        \
  void _serial_11();                                                           \
  void _if_1();                                                                \
  void _if_1_end();                                                            \
  void _slist_11();                                                            \
  void _slist_11_end();                                                        \
  SDAG::Continuation* _when_6();                                               \
  void _when_6_end();                                                          \
  void _slist_12();                                                            \
  void _slist_12_end();                                                        \
  void _serial_12();                                                           \
  void _serial_13();                                                           \
public:                                                                        \
  void recv_ack(Closure_DataExchanger::recv_ack_4_closure* genClosure);        \
  void recv_ack();                                                             \
  void recv_data(Closure_DataExchanger::recv_data_2_closure* genClosure);      \
  void recv_data(Pointer p);                                                   \
  void recv_eval_result(Closure_DataExchanger::recv_eval_result_3_closure* genClosure);\
  void recv_eval_result(Pointer p);                                            \
  void recv_red(Closure_DataExchanger::recv_red_5_closure* genClosure);        \
  void recv_red();                                                             \
  void recv_bcast(Closure_DataExchanger::recv_bcast_6_closure* genClosure);    \
  void recv_bcast();                                                           \
public:                                                                        \
  SDAG::dep_ptr __dep;                                                         \
  void _sdag_init();                                                           \
  void __sdag_init();                                                          \
public:                                                                        \
  void _sdag_pup(PUP::er &p);                                                  \
  void __sdag_pup(PUP::er &p) { }                                              \
  static void __sdag_register();                                               \
  static int _sdag_idx_DataExchanger_serial_0();                               \
  static int _sdag_reg_DataExchanger_serial_0();                               \
  static int _sdag_idx_DataExchanger_serial_1();                               \
  static int _sdag_reg_DataExchanger_serial_1();                               \
  static int _sdag_idx_DataExchanger_serial_2();                               \
  static int _sdag_reg_DataExchanger_serial_2();                               \
  static int _sdag_idx_DataExchanger_serial_3();                               \
  static int _sdag_reg_DataExchanger_serial_3();                               \
  static int _sdag_idx_DataExchanger_serial_4();                               \
  static int _sdag_reg_DataExchanger_serial_4();                               \
  static int _sdag_idx_DataExchanger_serial_5();                               \
  static int _sdag_reg_DataExchanger_serial_5();                               \
  static int _sdag_idx_DataExchanger_serial_6();                               \
  static int _sdag_reg_DataExchanger_serial_6();                               \
  static int _sdag_idx_DataExchanger_serial_7();                               \
  static int _sdag_reg_DataExchanger_serial_7();                               \
  static int _sdag_idx_DataExchanger_serial_8();                               \
  static int _sdag_reg_DataExchanger_serial_8();                               \
  static int _sdag_idx_DataExchanger_serial_9();                               \
  static int _sdag_reg_DataExchanger_serial_9();                               \
  static int _sdag_idx_DataExchanger_serial_11();                              \
  static int _sdag_reg_DataExchanger_serial_11();                              \
  static int _sdag_idx_DataExchanger_serial_10();                              \
  static int _sdag_reg_DataExchanger_serial_10();                              \
  static int _sdag_idx_DataExchanger_serial_12();                              \
  static int _sdag_reg_DataExchanger_serial_12();                              \
  static int _sdag_idx_DataExchanger_serial_13();                              \
  static int _sdag_reg_DataExchanger_serial_13();                              \

typedef CBaseT1<Group, CProxy_DataExchanger>CBase_DataExchanger;


/* ---------------- method closures -------------- */
class Closure_DataExchanger {
  public:


    struct recv_data_2_closure;


    struct recv_eval_result_3_closure;


    struct recv_ack_4_closure;


    struct recv_red_5_closure;


    struct recv_bcast_6_closure;


    struct send_7_closure;


    struct recv_8_closure;


    struct sendRecv_9_closure;


    struct eval_10_closure;


    struct recv_eval_command_11_closure;


    struct barrier_12_closure;

};

extern void _registerDataExchanger(void);
#endif
