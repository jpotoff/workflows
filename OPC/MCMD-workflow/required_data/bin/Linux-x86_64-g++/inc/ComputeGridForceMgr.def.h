





/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ComputeGridForceMgr::finishWork_2_closure : public SDAG::Closure {
      

      finishWork_2_closure() {
        init();
      }
      finishWork_2_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~finishWork_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(finishWork_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ComputeGridForceNodeMgr::requestInitialGridData_3_closure : public SDAG::Closure {
      

      requestInitialGridData_3_closure() {
        init();
      }
      requestInitialGridData_3_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~requestInitialGridData_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(requestInitialGridData_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ComputeGridForceNodeMgr::broadcastInitialGridData_9_closure : public SDAG::Closure {
      

      broadcastInitialGridData_9_closure() {
        init();
      }
      broadcastInitialGridData_9_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~broadcastInitialGridData_9_closure() {
      }
      PUPable_decl(SINGLE_ARG(broadcastInitialGridData_9_closure));
    };
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: message GridAckMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_GridAckMsg::operator new(size_t s){
  return GridAckMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_GridAckMsg::operator new(size_t s, int* sz){
  return GridAckMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_GridAckMsg::operator new(size_t s, int* sz,const int pb){
  return GridAckMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_GridAckMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return GridAckMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_GridAckMsg::operator new(size_t s, const int p) {
  return GridAckMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_GridAckMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return GridAckMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_GridAckMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_GridAckMsg::CMessage_GridAckMsg() {
GridAckMsg *newmsg = (GridAckMsg *)this;
}
void CMessage_GridAckMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_GridAckMsg::pack(GridAckMsg *msg) {
  return (void *) msg;
}
GridAckMsg* CMessage_GridAckMsg::unpack(void* buf) {
  GridAckMsg *msg = (GridAckMsg *) buf;
  return msg;
}
int CMessage_GridAckMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message GridDepositMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_GridDepositMsg::operator new(size_t s){
  return GridDepositMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_GridDepositMsg::operator new(size_t s, int* sz){
  return GridDepositMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_GridDepositMsg::operator new(size_t s, int* sz,const int pb){
  return GridDepositMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_GridDepositMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return GridDepositMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_GridDepositMsg::operator new(size_t s, const int p) {
  return GridDepositMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_GridDepositMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return GridDepositMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_GridDepositMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_GridDepositMsg::CMessage_GridDepositMsg() {
GridDepositMsg *newmsg = (GridDepositMsg *)this;
}
void CMessage_GridDepositMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_GridDepositMsg::pack(GridDepositMsg *msg) {
  return (void *) msg;
}
GridDepositMsg* CMessage_GridDepositMsg::unpack(void* buf) {
  GridDepositMsg *msg = (GridDepositMsg *) buf;
  return msg;
}
int CMessage_GridDepositMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message GridSegmentMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_GridSegmentMsg::operator new(size_t s){
  return GridSegmentMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_GridSegmentMsg::operator new(size_t s, int* sz){
  return GridSegmentMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_GridSegmentMsg::operator new(size_t s, int* sz,const int pb){
  return GridSegmentMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_GridSegmentMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return GridSegmentMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_GridSegmentMsg::operator new(size_t s, const int p) {
  return GridSegmentMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_GridSegmentMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return GridSegmentMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_GridSegmentMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_GridSegmentMsg::CMessage_GridSegmentMsg() {
GridSegmentMsg *newmsg = (GridSegmentMsg *)this;
}
void CMessage_GridSegmentMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_GridSegmentMsg::pack(GridSegmentMsg *msg) {
  return (void *) msg;
}
GridSegmentMsg* CMessage_GridSegmentMsg::unpack(void* buf) {
  GridSegmentMsg *msg = (GridSegmentMsg *) buf;
  return msg;
}
int CMessage_GridSegmentMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message SubReqMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_SubReqMsg::operator new(size_t s){
  return SubReqMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_SubReqMsg::operator new(size_t s, int* sz){
  return SubReqMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_SubReqMsg::operator new(size_t s, int* sz,const int pb){
  return SubReqMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_SubReqMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return SubReqMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_SubReqMsg::operator new(size_t s, const int p) {
  return SubReqMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_SubReqMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return SubReqMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_SubReqMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_SubReqMsg::CMessage_SubReqMsg() {
SubReqMsg *newmsg = (SubReqMsg *)this;
}
void CMessage_SubReqMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_SubReqMsg::pack(SubReqMsg *msg) {
  return (void *) msg;
}
SubReqMsg* CMessage_SubReqMsg::unpack(void* buf) {
  SubReqMsg *msg = (SubReqMsg *) buf;
  return msg;
}
int CMessage_SubReqMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message GridRequestMsg{
int gridStartIndex[];
int gridIndexList[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_GridRequestMsg::operator new(size_t s){
  return GridRequestMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_GridRequestMsg::operator new(size_t s, int* sz){
  return GridRequestMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_GridRequestMsg::operator new(size_t s, int* sz,const int pb){
  return GridRequestMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_GridRequestMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return GridRequestMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_GridRequestMsg::operator new(size_t s, int sz0, int sz1) {
  int sizes[2];
  sizes[0] = sz0;
  sizes[1] = sz1;
  return GridRequestMsg::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_GridRequestMsg::operator new(size_t s, int sz0, int sz1, const int p) {
  int sizes[2];
  sizes[0] = sz0;
  sizes[1] = sz1;
  return GridRequestMsg::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_GridRequestMsg::operator new(size_t s, int sz0, int sz1, const int p, const GroupDepNum groupDepNum) {
  int sizes[2];
  sizes[0] = sz0;
  sizes[1] = sz1;
  return GridRequestMsg::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_GridRequestMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(int)*sizes[0]);
  if(sizes==0)
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[1] + ALIGN_DEFAULT(sizeof(int)*sizes[1]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[2], pb, groupDepNum);
}
CMessage_GridRequestMsg::CMessage_GridRequestMsg() {
GridRequestMsg *newmsg = (GridRequestMsg *)this;
  newmsg->gridStartIndex = (int *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
  newmsg->gridIndexList = (int *) ((char *)newmsg + CkpvAccess(_offsets)[1]);
}
void CMessage_GridRequestMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_GridRequestMsg::pack(GridRequestMsg *msg) {
  msg->gridStartIndex = (int *) ((char *)msg->gridStartIndex - (char *)msg);
  msg->gridIndexList = (int *) ((char *)msg->gridIndexList - (char *)msg);
  return (void *) msg;
}
GridRequestMsg* CMessage_GridRequestMsg::unpack(void* buf) {
  GridRequestMsg *msg = (GridRequestMsg *) buf;
  msg->gridStartIndex = (int *) ((size_t)msg->gridStartIndex + (char *)msg);
  msg->gridIndexList = (int *) ((size_t)msg->gridIndexList + (char *)msg);
  return msg;
}
int CMessage_GridRequestMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message GridValuesMsg{
int gridStartIndex[];
GridVal gridVals[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_GridValuesMsg::operator new(size_t s){
  return GridValuesMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_GridValuesMsg::operator new(size_t s, int* sz){
  return GridValuesMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_GridValuesMsg::operator new(size_t s, int* sz,const int pb){
  return GridValuesMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_GridValuesMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return GridValuesMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_GridValuesMsg::operator new(size_t s, int sz0, int sz1) {
  int sizes[2];
  sizes[0] = sz0;
  sizes[1] = sz1;
  return GridValuesMsg::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_GridValuesMsg::operator new(size_t s, int sz0, int sz1, const int p) {
  int sizes[2];
  sizes[0] = sz0;
  sizes[1] = sz1;
  return GridValuesMsg::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_GridValuesMsg::operator new(size_t s, int sz0, int sz1, const int p, const GroupDepNum groupDepNum) {
  int sizes[2];
  sizes[0] = sz0;
  sizes[1] = sz1;
  return GridValuesMsg::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_GridValuesMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(int)*sizes[0]);
  if(sizes==0)
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[1] + ALIGN_DEFAULT(sizeof(GridVal)*sizes[1]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[2], pb, groupDepNum);
}
CMessage_GridValuesMsg::CMessage_GridValuesMsg() {
GridValuesMsg *newmsg = (GridValuesMsg *)this;
  newmsg->gridStartIndex = (int *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
  newmsg->gridVals = (GridVal *) ((char *)newmsg + CkpvAccess(_offsets)[1]);
}
void CMessage_GridValuesMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_GridValuesMsg::pack(GridValuesMsg *msg) {
  msg->gridStartIndex = (int *) ((char *)msg->gridStartIndex - (char *)msg);
  msg->gridVals = (GridVal *) ((char *)msg->gridVals - (char *)msg);
  return (void *) msg;
}
GridValuesMsg* CMessage_GridValuesMsg::unpack(void* buf) {
  GridValuesMsg *msg = (GridValuesMsg *) buf;
  msg->gridStartIndex = (int *) ((size_t)msg->gridStartIndex + (char *)msg);
  msg->gridVals = (GridVal *) ((size_t)msg->gridVals + (char *)msg);
  return msg;
}
int CMessage_GridValuesMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group ComputeGridForceMgr: IrrGroup{
ComputeGridForceMgr();
void finishWork();
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_ComputeGridForceMgr::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: ComputeGridForceMgr();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finishWork();
 */
void CProxyElement_ComputeGridForceMgr::finishWork(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeGridForceMgr::idx_finishWork_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeGridForceMgr::idx_finishWork_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputeGridForceMgr::idx_finishWork_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ComputeGridForceMgr();
 */
CkGroupID CProxy_ComputeGridForceMgr::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_ComputeGridForceMgr::__idx, CkIndex_ComputeGridForceMgr::idx_ComputeGridForceMgr_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_ComputeGridForceMgr::reg_ComputeGridForceMgr_void() {
  int epidx = CkRegisterEp("ComputeGridForceMgr()",
      reinterpret_cast<CkCallFnPtr>(_call_ComputeGridForceMgr_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_ComputeGridForceMgr::_call_ComputeGridForceMgr_void(void* impl_msg, void* impl_obj_void)
{
  ComputeGridForceMgr* impl_obj = static_cast<ComputeGridForceMgr*>(impl_obj_void);
  new (impl_obj_void) ComputeGridForceMgr();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finishWork();
 */
void CProxy_ComputeGridForceMgr::finishWork(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeGridForceMgr::idx_finishWork_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeGridForceMgr::idx_finishWork_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeGridForceMgr::idx_finishWork_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeGridForceMgr::finishWork(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_ComputeGridForceMgr::idx_finishWork_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeGridForceMgr::finishWork(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_ComputeGridForceMgr::idx_finishWork_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputeGridForceMgr::reg_finishWork_void() {
  int epidx = CkRegisterEp("finishWork()",
      reinterpret_cast<CkCallFnPtr>(_call_finishWork_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_ComputeGridForceMgr::_call_finishWork_void(void* impl_msg, void* impl_obj_void)
{
  ComputeGridForceMgr* impl_obj = static_cast<ComputeGridForceMgr*>(impl_obj_void);
  impl_obj->finishWork();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_ComputeGridForceMgr::finishWork_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ComputeGridForceMgr();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finishWork();
 */
void CProxySection_ComputeGridForceMgr::finishWork(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeGridForceMgr::idx_finishWork_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeGridForceMgr::idx_finishWork_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_ComputeGridForceMgr::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,ComputeGridForceMgr::isIrreducible());
  // REG: ComputeGridForceMgr();
  idx_ComputeGridForceMgr_void();
  CkRegisterDefaultCtor(__idx, idx_ComputeGridForceMgr_void());

  // REG: void finishWork();
  idx_finishWork_void();

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: nodegroup ComputeGridForceNodeMgr: NodeGroup{
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
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_ComputeGridForceNodeMgr::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: ComputeGridForceNodeMgr();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void depositInitialGrid(GridDepositMsg* impl_msg);
 */
void CProxyElement_ComputeGridForceNodeMgr::depositInitialGrid(GridDepositMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_ComputeGridForceNodeMgr::idx_depositInitialGrid_GridDepositMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_ComputeGridForceNodeMgr::idx_depositInitialGrid_GridDepositMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgNodeBranch(CkIndex_ComputeGridForceNodeMgr::idx_depositInitialGrid_GridDepositMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void requestInitialGridData();
 */
void CProxyElement_ComputeGridForceNodeMgr::requestInitialGridData(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_ComputeGridForceNodeMgr::idx_requestInitialGridData_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_ComputeGridForceNodeMgr::idx_requestInitialGridData_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgNodeBranch(CkIndex_ComputeGridForceNodeMgr::idx_requestInitialGridData_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void submitRequest(SubReqMsg* impl_msg);
 */
void CProxyElement_ComputeGridForceNodeMgr::submitRequest(SubReqMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_ComputeGridForceNodeMgr::idx_submitRequest_SubReqMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_ComputeGridForceNodeMgr::idx_submitRequest_SubReqMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgNodeBranch(CkIndex_ComputeGridForceNodeMgr::idx_submitRequest_SubReqMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void fetchGridValues(GridRequestMsg* impl_msg);
 */
void CProxyElement_ComputeGridForceNodeMgr::fetchGridValues(GridRequestMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_ComputeGridForceNodeMgr::idx_fetchGridValues_GridRequestMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_ComputeGridForceNodeMgr::idx_fetchGridValues_GridRequestMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgNodeBranch(CkIndex_ComputeGridForceNodeMgr::idx_fetchGridValues_GridRequestMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvGridValues(GridValuesMsg* impl_msg);
 */
void CProxyElement_ComputeGridForceNodeMgr::recvGridValues(GridValuesMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_ComputeGridForceNodeMgr::idx_recvGridValues_GridValuesMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_ComputeGridForceNodeMgr::idx_recvGridValues_GridValuesMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgNodeBranch(CkIndex_ComputeGridForceNodeMgr::idx_recvGridValues_GridValuesMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ack(GridAckMsg* impl_msg);
 */
void CProxyElement_ComputeGridForceNodeMgr::ack(GridAckMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_ComputeGridForceNodeMgr::idx_ack_GridAckMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_ComputeGridForceNodeMgr::idx_ack_GridAckMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgNodeBranch(CkIndex_ComputeGridForceNodeMgr::idx_ack_GridAckMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recv(GridSegmentMsg* impl_msg);
 */
void CProxyElement_ComputeGridForceNodeMgr::recv(GridSegmentMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_ComputeGridForceNodeMgr::idx_recv_GridSegmentMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_ComputeGridForceNodeMgr::idx_recv_GridSegmentMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgNodeBranch(CkIndex_ComputeGridForceNodeMgr::idx_recv_GridSegmentMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void broadcastInitialGridData();
 */
void CProxyElement_ComputeGridForceNodeMgr::broadcastInitialGridData(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_ComputeGridForceNodeMgr::idx_broadcastInitialGridData_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_ComputeGridForceNodeMgr::idx_broadcastInitialGridData_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgNodeBranch(CkIndex_ComputeGridForceNodeMgr::idx_broadcastInitialGridData_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ComputeGridForceNodeMgr();
 */
CkGroupID CProxy_ComputeGridForceNodeMgr::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(NodeBocInitMsg);
  CkGroupID gId = CkCreateNodeGroup(CkIndex_ComputeGridForceNodeMgr::__idx, CkIndex_ComputeGridForceNodeMgr::idx_ComputeGridForceNodeMgr_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_ComputeGridForceNodeMgr::reg_ComputeGridForceNodeMgr_void() {
  int epidx = CkRegisterEp("ComputeGridForceNodeMgr()",
      reinterpret_cast<CkCallFnPtr>(_call_ComputeGridForceNodeMgr_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_ComputeGridForceNodeMgr::_call_ComputeGridForceNodeMgr_void(void* impl_msg, void* impl_obj_void)
{
  ComputeGridForceNodeMgr* impl_obj = static_cast<ComputeGridForceNodeMgr*>(impl_obj_void);
  new (impl_obj_void) ComputeGridForceNodeMgr();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void depositInitialGrid(GridDepositMsg* impl_msg);
 */
void CProxy_ComputeGridForceNodeMgr::depositInitialGrid(GridDepositMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_ComputeGridForceNodeMgr::idx_depositInitialGrid_GridDepositMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeGridForceNodeMgr::idx_depositInitialGrid_GridDepositMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_ComputeGridForceNodeMgr::idx_depositInitialGrid_GridDepositMsg(), impl_msg, ckGetGroupID(),0);
}

// Entry point registration function
int CkIndex_ComputeGridForceNodeMgr::reg_depositInitialGrid_GridDepositMsg() {
  int epidx = CkRegisterEp("depositInitialGrid(GridDepositMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_depositInitialGrid_GridDepositMsg), CMessage_GridDepositMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)GridDepositMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ComputeGridForceNodeMgr::_call_depositInitialGrid_GridDepositMsg(void* impl_msg, void* impl_obj_void)
{
  ComputeGridForceNodeMgr* impl_obj = static_cast<ComputeGridForceNodeMgr*>(impl_obj_void);
  if(CmiTryLock(impl_obj->__nodelock)) {
    CkSendMsgNodeBranch(CkIndex_ComputeGridForceNodeMgr::idx_depositInitialGrid_GridDepositMsg(),impl_msg,CkMyNode(),impl_obj->CkGetNodeGroupID());
    return;
  }
  impl_obj->depositInitialGrid((GridDepositMsg*)impl_msg);
  CmiUnlock(impl_obj->__nodelock);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void requestInitialGridData();
 */
void CProxy_ComputeGridForceNodeMgr::requestInitialGridData(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_ComputeGridForceNodeMgr::idx_requestInitialGridData_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeGridForceNodeMgr::idx_requestInitialGridData_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_ComputeGridForceNodeMgr::idx_requestInitialGridData_void(), impl_msg, ckGetGroupID(),0);
}

// Entry point registration function
int CkIndex_ComputeGridForceNodeMgr::reg_requestInitialGridData_void() {
  int epidx = CkRegisterEp("requestInitialGridData()",
      reinterpret_cast<CkCallFnPtr>(_call_requestInitialGridData_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_ComputeGridForceNodeMgr::_call_requestInitialGridData_void(void* impl_msg, void* impl_obj_void)
{
  ComputeGridForceNodeMgr* impl_obj = static_cast<ComputeGridForceNodeMgr*>(impl_obj_void);
  if(CmiTryLock(impl_obj->__nodelock)) {
    CkSendMsgNodeBranch(CkIndex_ComputeGridForceNodeMgr::idx_requestInitialGridData_void(),impl_msg,CkMyNode(),impl_obj->CkGetNodeGroupID());
    return;
  }
  impl_obj->requestInitialGridData();
  CmiUnlock(impl_obj->__nodelock);
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_ComputeGridForceNodeMgr::requestInitialGridData_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void submitRequest(SubReqMsg* impl_msg);
 */
void CProxy_ComputeGridForceNodeMgr::submitRequest(SubReqMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_ComputeGridForceNodeMgr::idx_submitRequest_SubReqMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeGridForceNodeMgr::idx_submitRequest_SubReqMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_ComputeGridForceNodeMgr::idx_submitRequest_SubReqMsg(), impl_msg, ckGetGroupID(),0);
}

// Entry point registration function
int CkIndex_ComputeGridForceNodeMgr::reg_submitRequest_SubReqMsg() {
  int epidx = CkRegisterEp("submitRequest(SubReqMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_submitRequest_SubReqMsg), CMessage_SubReqMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)SubReqMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ComputeGridForceNodeMgr::_call_submitRequest_SubReqMsg(void* impl_msg, void* impl_obj_void)
{
  ComputeGridForceNodeMgr* impl_obj = static_cast<ComputeGridForceNodeMgr*>(impl_obj_void);
  if(CmiTryLock(impl_obj->__nodelock)) {
    CkSendMsgNodeBranch(CkIndex_ComputeGridForceNodeMgr::idx_submitRequest_SubReqMsg(),impl_msg,CkMyNode(),impl_obj->CkGetNodeGroupID());
    return;
  }
  impl_obj->submitRequest((SubReqMsg*)impl_msg);
  CmiUnlock(impl_obj->__nodelock);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void fetchGridValues(GridRequestMsg* impl_msg);
 */
void CProxy_ComputeGridForceNodeMgr::fetchGridValues(GridRequestMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_ComputeGridForceNodeMgr::idx_fetchGridValues_GridRequestMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeGridForceNodeMgr::idx_fetchGridValues_GridRequestMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_ComputeGridForceNodeMgr::idx_fetchGridValues_GridRequestMsg(), impl_msg, ckGetGroupID(),0);
}

// Entry point registration function
int CkIndex_ComputeGridForceNodeMgr::reg_fetchGridValues_GridRequestMsg() {
  int epidx = CkRegisterEp("fetchGridValues(GridRequestMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_fetchGridValues_GridRequestMsg), CMessage_GridRequestMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)GridRequestMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ComputeGridForceNodeMgr::_call_fetchGridValues_GridRequestMsg(void* impl_msg, void* impl_obj_void)
{
  ComputeGridForceNodeMgr* impl_obj = static_cast<ComputeGridForceNodeMgr*>(impl_obj_void);
  if(CmiTryLock(impl_obj->__nodelock)) {
    CkSendMsgNodeBranch(CkIndex_ComputeGridForceNodeMgr::idx_fetchGridValues_GridRequestMsg(),impl_msg,CkMyNode(),impl_obj->CkGetNodeGroupID());
    return;
  }
  impl_obj->fetchGridValues((GridRequestMsg*)impl_msg);
  CmiUnlock(impl_obj->__nodelock);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvGridValues(GridValuesMsg* impl_msg);
 */
void CProxy_ComputeGridForceNodeMgr::recvGridValues(GridValuesMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_ComputeGridForceNodeMgr::idx_recvGridValues_GridValuesMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeGridForceNodeMgr::idx_recvGridValues_GridValuesMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_ComputeGridForceNodeMgr::idx_recvGridValues_GridValuesMsg(), impl_msg, ckGetGroupID(),0);
}

// Entry point registration function
int CkIndex_ComputeGridForceNodeMgr::reg_recvGridValues_GridValuesMsg() {
  int epidx = CkRegisterEp("recvGridValues(GridValuesMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvGridValues_GridValuesMsg), CMessage_GridValuesMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)GridValuesMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ComputeGridForceNodeMgr::_call_recvGridValues_GridValuesMsg(void* impl_msg, void* impl_obj_void)
{
  ComputeGridForceNodeMgr* impl_obj = static_cast<ComputeGridForceNodeMgr*>(impl_obj_void);
  if(CmiTryLock(impl_obj->__nodelock)) {
    CkSendMsgNodeBranch(CkIndex_ComputeGridForceNodeMgr::idx_recvGridValues_GridValuesMsg(),impl_msg,CkMyNode(),impl_obj->CkGetNodeGroupID());
    return;
  }
  impl_obj->recvGridValues((GridValuesMsg*)impl_msg);
  CmiUnlock(impl_obj->__nodelock);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ack(GridAckMsg* impl_msg);
 */
void CProxy_ComputeGridForceNodeMgr::ack(GridAckMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_ComputeGridForceNodeMgr::idx_ack_GridAckMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeGridForceNodeMgr::idx_ack_GridAckMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_ComputeGridForceNodeMgr::idx_ack_GridAckMsg(), impl_msg, ckGetGroupID(),0);
}

// Entry point registration function
int CkIndex_ComputeGridForceNodeMgr::reg_ack_GridAckMsg() {
  int epidx = CkRegisterEp("ack(GridAckMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_ack_GridAckMsg), CMessage_GridAckMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)GridAckMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ComputeGridForceNodeMgr::_call_ack_GridAckMsg(void* impl_msg, void* impl_obj_void)
{
  ComputeGridForceNodeMgr* impl_obj = static_cast<ComputeGridForceNodeMgr*>(impl_obj_void);
  if(CmiTryLock(impl_obj->__nodelock)) {
    CkSendMsgNodeBranch(CkIndex_ComputeGridForceNodeMgr::idx_ack_GridAckMsg(),impl_msg,CkMyNode(),impl_obj->CkGetNodeGroupID());
    return;
  }
  impl_obj->ack((GridAckMsg*)impl_msg);
  CmiUnlock(impl_obj->__nodelock);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recv(GridSegmentMsg* impl_msg);
 */
void CProxy_ComputeGridForceNodeMgr::recv(GridSegmentMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_ComputeGridForceNodeMgr::idx_recv_GridSegmentMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeGridForceNodeMgr::idx_recv_GridSegmentMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_ComputeGridForceNodeMgr::idx_recv_GridSegmentMsg(), impl_msg, ckGetGroupID(),0);
}

// Entry point registration function
int CkIndex_ComputeGridForceNodeMgr::reg_recv_GridSegmentMsg() {
  int epidx = CkRegisterEp("recv(GridSegmentMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recv_GridSegmentMsg), CMessage_GridSegmentMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)GridSegmentMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ComputeGridForceNodeMgr::_call_recv_GridSegmentMsg(void* impl_msg, void* impl_obj_void)
{
  ComputeGridForceNodeMgr* impl_obj = static_cast<ComputeGridForceNodeMgr*>(impl_obj_void);
  if(CmiTryLock(impl_obj->__nodelock)) {
    CkSendMsgNodeBranch(CkIndex_ComputeGridForceNodeMgr::idx_recv_GridSegmentMsg(),impl_msg,CkMyNode(),impl_obj->CkGetNodeGroupID());
    return;
  }
  impl_obj->recv((GridSegmentMsg*)impl_msg);
  CmiUnlock(impl_obj->__nodelock);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void broadcastInitialGridData();
 */
void CProxy_ComputeGridForceNodeMgr::broadcastInitialGridData(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_ComputeGridForceNodeMgr::idx_broadcastInitialGridData_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeGridForceNodeMgr::idx_broadcastInitialGridData_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_ComputeGridForceNodeMgr::idx_broadcastInitialGridData_void(), impl_msg, ckGetGroupID(),0);
}

// Entry point registration function
int CkIndex_ComputeGridForceNodeMgr::reg_broadcastInitialGridData_void() {
  int epidx = CkRegisterEp("broadcastInitialGridData()",
      reinterpret_cast<CkCallFnPtr>(_call_broadcastInitialGridData_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_ComputeGridForceNodeMgr::_call_broadcastInitialGridData_void(void* impl_msg, void* impl_obj_void)
{
  ComputeGridForceNodeMgr* impl_obj = static_cast<ComputeGridForceNodeMgr*>(impl_obj_void);
  if(CmiTryLock(impl_obj->__nodelock)) {
    CkSendMsgNodeBranch(CkIndex_ComputeGridForceNodeMgr::idx_broadcastInitialGridData_void(),impl_msg,CkMyNode(),impl_obj->CkGetNodeGroupID());
    return;
  }
  impl_obj->_sdag_fnc_broadcastInitialGridData();
  CmiUnlock(impl_obj->__nodelock);
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_ComputeGridForceNodeMgr::broadcastInitialGridData_9_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ComputeGridForceNodeMgr();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void depositInitialGrid(GridDepositMsg* impl_msg);
 */
void CProxySection_ComputeGridForceNodeMgr::depositInitialGrid(GridDepositMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeGridForceNodeMgr::idx_depositInitialGrid_GridDepositMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_ComputeGridForceNodeMgr::idx_depositInitialGrid_GridDepositMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void requestInitialGridData();
 */
void CProxySection_ComputeGridForceNodeMgr::requestInitialGridData(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeGridForceNodeMgr::idx_requestInitialGridData_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_ComputeGridForceNodeMgr::idx_requestInitialGridData_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void submitRequest(SubReqMsg* impl_msg);
 */
void CProxySection_ComputeGridForceNodeMgr::submitRequest(SubReqMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeGridForceNodeMgr::idx_submitRequest_SubReqMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_ComputeGridForceNodeMgr::idx_submitRequest_SubReqMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void fetchGridValues(GridRequestMsg* impl_msg);
 */
void CProxySection_ComputeGridForceNodeMgr::fetchGridValues(GridRequestMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeGridForceNodeMgr::idx_fetchGridValues_GridRequestMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_ComputeGridForceNodeMgr::idx_fetchGridValues_GridRequestMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvGridValues(GridValuesMsg* impl_msg);
 */
void CProxySection_ComputeGridForceNodeMgr::recvGridValues(GridValuesMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeGridForceNodeMgr::idx_recvGridValues_GridValuesMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_ComputeGridForceNodeMgr::idx_recvGridValues_GridValuesMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ack(GridAckMsg* impl_msg);
 */
void CProxySection_ComputeGridForceNodeMgr::ack(GridAckMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeGridForceNodeMgr::idx_ack_GridAckMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_ComputeGridForceNodeMgr::idx_ack_GridAckMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recv(GridSegmentMsg* impl_msg);
 */
void CProxySection_ComputeGridForceNodeMgr::recv(GridSegmentMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeGridForceNodeMgr::idx_recv_GridSegmentMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_ComputeGridForceNodeMgr::idx_recv_GridSegmentMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void broadcastInitialGridData();
 */
void CProxySection_ComputeGridForceNodeMgr::broadcastInitialGridData(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeGridForceNodeMgr::idx_broadcastInitialGridData_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_ComputeGridForceNodeMgr::idx_broadcastInitialGridData_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_ComputeGridForceNodeMgr::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_NodeGroup::__idx);
   CkRegisterGroupIrr(__idx,ComputeGridForceNodeMgr::isIrreducible());
  // REG: ComputeGridForceNodeMgr();
  idx_ComputeGridForceNodeMgr_void();
  CkRegisterDefaultCtor(__idx, idx_ComputeGridForceNodeMgr_void());

  // REG: void depositInitialGrid(GridDepositMsg* impl_msg);
  idx_depositInitialGrid_GridDepositMsg();

  // REG: void requestInitialGridData();
  idx_requestInitialGridData_void();

  // REG: void submitRequest(SubReqMsg* impl_msg);
  idx_submitRequest_SubReqMsg();

  // REG: void fetchGridValues(GridRequestMsg* impl_msg);
  idx_fetchGridValues_GridRequestMsg();

  // REG: void recvGridValues(GridValuesMsg* impl_msg);
  idx_recvGridValues_GridValuesMsg();

  // REG: void ack(GridAckMsg* impl_msg);
  idx_ack_GridAckMsg();

  // REG: void recv(GridSegmentMsg* impl_msg);
  idx_recv_GridSegmentMsg();

  // REG: void broadcastInitialGridData();
  idx_broadcastInitialGridData_void();

  ComputeGridForceNodeMgr::__sdag_register(); // Potentially missing ComputeGridForceNodeMgr_SDAG_CODE in your class definition?
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::broadcastInitialGridData(){
  CkPrintf("Error> Direct call to SDAG entry method \'%s::%s\'!\n", "ComputeGridForceNodeMgr", "broadcastInitialGridData()"); 
  CkAbort("Direct SDAG call is not allowed for SDAG entry methods having when constructs. Call such SDAG methods using a proxy"); 
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_sdag_fnc_broadcastInitialGridData() {
  _TRACE_END_EXECUTE(); 
  if (!__dep.get()) _sdag_init();
  _slist_0();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, NULL, this); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::broadcastInitialGridData_end() {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_slist_0() {
  _if_0();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_slist_0_end() {
  broadcastInitialGridData_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_if_0() {
  if ( ! myNode ) {
    _slist_12();
  } else {
    _else_0();
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_if_0_end() {
  _slist_0_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_else_0() {
  _slist_1();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_else_0_end() {
  _slist_0_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_slist_1() {
  _serial_0();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_slist_1_end() {
  _else_0_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_serial_0() {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_ComputeGridForceNodeMgr_serial_0()), CkMyPe(), 0, NULL, this); 
  { // begin serial block
#line 76 "inc/ComputeGridForceMgr.ci"

          CProxy_ComputeGridForceNodeMgr myproxy(thisgroup);
          if ( 2*myNode+1 < numNodes ) {
            myproxy[2*myNode+1].broadcastInitialGridData();
          }
          if ( 2*myNode+2 < numNodes ) {
            myproxy[2*myNode+2].broadcastInitialGridData();
          }
        
#line 1259 "ComputeGridForceMgr.def.h"
  } // end serial block
  _TRACE_END_EXECUTE(); 
  _if_1();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_if_1() {
  if ( 2*myNode+1 < numNodes ) {
    _slist_2();
  } else {
    _if_1_end();
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_if_1_end() {
  _if_2();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_slist_2() {
  _when_0();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_slist_2_end() {
  _if_1_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* ComputeGridForceNodeMgr::_when_0() {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(0, false, 0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _slist_3(static_cast<GridAckMsg*>(static_cast<SDAG::MsgClosure*>(buf0->cl)->msg));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(0);
    c->anyEntries.push_back(0);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_when_0_end(GridAckMsg* gen0) {
  {
    GridAckMsg*& am = gen0;
    CmiFree(UsrToEnv(am));
  }
  _slist_2_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_slist_3(GridAckMsg* gen0) {
  _serial_1(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_slist_3_end(GridAckMsg* gen0) {
  _when_0_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_serial_1(GridAckMsg* gen0) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_ComputeGridForceNodeMgr_serial_1()), CkMyPe(), 0, NULL, this); 
  {
    GridAckMsg*& am = gen0;
    { // begin serial block
#line 86 "inc/ComputeGridForceMgr.ci"
 delete am; 
#line 1350 "ComputeGridForceMgr.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _slist_3_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_if_2() {
  if ( 2*myNode+2 < numNodes ) {
    _slist_4();
  } else {
    _if_2_end();
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_if_2_end() {
  _serial_3();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_slist_4() {
  _when_1();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_slist_4_end() {
  _if_2_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* ComputeGridForceNodeMgr::_when_1() {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(0, false, 0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _slist_5(static_cast<GridAckMsg*>(static_cast<SDAG::MsgClosure*>(buf0->cl)->msg));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(1);
    c->anyEntries.push_back(0);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_when_1_end(GridAckMsg* gen0) {
  {
    GridAckMsg*& am = gen0;
    CmiFree(UsrToEnv(am));
  }
  _slist_4_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_slist_5(GridAckMsg* gen0) {
  _serial_2(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_slist_5_end(GridAckMsg* gen0) {
  _when_1_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_serial_2(GridAckMsg* gen0) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_ComputeGridForceNodeMgr_serial_2()), CkMyPe(), 0, NULL, this); 
  {
    GridAckMsg*& am = gen0;
    { // begin serial block
#line 89 "inc/ComputeGridForceMgr.ci"
 delete am; 
#line 1442 "ComputeGridForceMgr.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _slist_5_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_serial_3() {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_ComputeGridForceNodeMgr_serial_3()), CkMyPe(), 0, NULL, this); 
  { // begin serial block
#line 91 "inc/ComputeGridForceMgr.ci"

          CProxy_ComputeGridForceNodeMgr myproxy(thisgroup);
          myproxy[(myNode-1)/2].ack(new GridAckMsg);
        
#line 1460 "ComputeGridForceMgr.def.h"
  } // end serial block
  _TRACE_END_EXECUTE(); 
  _while_0();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_while_0() {
  if ( 1 ) {
    _slist_6();
  } else {
    _slist_1_end();
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_while_0_end() {
  if ( 1 ) {
    _slist_6();
  } else {
    _slist_1_end();
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_slist_6() {
  _when_2();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_slist_6_end() {
  _while_0_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* ComputeGridForceNodeMgr::_when_2() {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(1, false, 0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _slist_7(static_cast<GridSegmentMsg*>(static_cast<SDAG::MsgClosure*>(buf0->cl)->msg));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(2);
    c->anyEntries.push_back(1);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_when_2_end(GridSegmentMsg* gen0) {
  {
    GridSegmentMsg*& msg = gen0;
    CmiFree(UsrToEnv(msg));
  }
  _if_3();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_slist_7(GridSegmentMsg* gen0) {
  _serial_4(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_slist_7_end(GridSegmentMsg* gen0) {
  _when_2_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_serial_4(GridSegmentMsg* gen0) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_ComputeGridForceNodeMgr_serial_4()), CkMyPe(), 0, NULL, this); 
  {
    GridSegmentMsg*& msg = gen0;
    { // begin serial block
#line 96 "inc/ComputeGridForceMgr.ci"

            CProxy_ComputeGridForceNodeMgr myproxy(thisgroup);
            myproxy[(myNode-1)/2].ack(new GridAckMsg);
            if ( 2*myNode+2 < numNodes ) {
              GridSegmentMsg *msg2 =
                     (GridSegmentMsg *)CkCopyMsg((void **)&msg);
              myproxy[2*myNode+2].recv(msg2);
            }
            receiveInitialGridData(msg);
            if ( 2*myNode+1 < numNodes ) {
              myproxy[2*myNode+1].recv(msg);
            } else {
              delete msg;
            }
          
#line 1569 "ComputeGridForceMgr.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _slist_7_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_if_3() {
  if ( 2*myNode+1 < numNodes ) {
    _slist_8();
  } else {
    _if_3_end();
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_if_3_end() {
  _if_4();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_slist_8() {
  _when_3();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_slist_8_end() {
  _if_3_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* ComputeGridForceNodeMgr::_when_3() {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(0, false, 0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _slist_9(static_cast<GridAckMsg*>(static_cast<SDAG::MsgClosure*>(buf0->cl)->msg));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(3);
    c->anyEntries.push_back(0);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_when_3_end(GridAckMsg* gen0) {
  {
    GridAckMsg*& am = gen0;
    CmiFree(UsrToEnv(am));
  }
  _slist_8_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_slist_9(GridAckMsg* gen0) {
  _serial_5(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_slist_9_end(GridAckMsg* gen0) {
  _when_3_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_serial_5(GridAckMsg* gen0) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_ComputeGridForceNodeMgr_serial_5()), CkMyPe(), 0, NULL, this); 
  {
    GridAckMsg*& am = gen0;
    { // begin serial block
#line 112 "inc/ComputeGridForceMgr.ci"
 delete am; 
#line 1661 "ComputeGridForceMgr.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _slist_9_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_if_4() {
  if ( 2*myNode+2 < numNodes ) {
    _slist_10();
  } else {
    _if_4_end();
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_if_4_end() {
  _slist_6_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_slist_10() {
  _when_4();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_slist_10_end() {
  _if_4_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* ComputeGridForceNodeMgr::_when_4() {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(0, false, 0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _slist_11(static_cast<GridAckMsg*>(static_cast<SDAG::MsgClosure*>(buf0->cl)->msg));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(4);
    c->anyEntries.push_back(0);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_when_4_end(GridAckMsg* gen0) {
  {
    GridAckMsg*& am = gen0;
    CmiFree(UsrToEnv(am));
  }
  _slist_10_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_slist_11(GridAckMsg* gen0) {
  _serial_6(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_slist_11_end(GridAckMsg* gen0) {
  _when_4_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_serial_6(GridAckMsg* gen0) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_ComputeGridForceNodeMgr_serial_6()), CkMyPe(), 0, NULL, this); 
  {
    GridAckMsg*& am = gen0;
    { // begin serial block
#line 115 "inc/ComputeGridForceMgr.ci"
 delete am; 
#line 1753 "ComputeGridForceMgr.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _slist_11_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_slist_12() {
  _serial_7();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_slist_12_end() {
  _if_0_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_serial_7() {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_ComputeGridForceNodeMgr_serial_7()), CkMyPe(), 0, NULL, this); 
  { // begin serial block
#line 29 "inc/ComputeGridForceMgr.ci"

          CkPrintf("Info: Distributing grid forces grids...");
          CProxy_ComputeGridForceNodeMgr myproxy(thisgroup);
          if ( 2*myNode+1 < numNodes ) {
            myproxy[2*myNode+1].broadcastInitialGridData();
          }
          if ( 2*myNode+2 < numNodes ) {
            myproxy[2*myNode+2].broadcastInitialGridData();
          }
          cur_grid = 0;
        
#line 1792 "ComputeGridForceMgr.def.h"
  } // end serial block
  _TRACE_END_EXECUTE(); 
  _while_1();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_while_1() {
  if ( cur_grid < num_grids ) {
    _slist_13();
  } else {
    _serial_11();
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_while_1_end() {
  if ( cur_grid < num_grids ) {
    _slist_13();
  } else {
    _serial_11();
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_slist_13() {
  _if_5();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_slist_13_end() {
  _while_1_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_if_5() {
  if ( 2*myNode+1 < numNodes ) {
    _slist_14();
  } else {
    _if_5_end();
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_if_5_end() {
  _if_6();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_slist_14() {
  _when_5();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_slist_14_end() {
  _if_5_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* ComputeGridForceNodeMgr::_when_5() {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(0, false, 0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _slist_15(static_cast<GridAckMsg*>(static_cast<SDAG::MsgClosure*>(buf0->cl)->msg));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(5);
    c->anyEntries.push_back(0);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_when_5_end(GridAckMsg* gen0) {
  {
    GridAckMsg*& am = gen0;
    CmiFree(UsrToEnv(am));
  }
  _slist_14_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_slist_15(GridAckMsg* gen0) {
  _serial_8(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_slist_15_end(GridAckMsg* gen0) {
  _when_5_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_serial_8(GridAckMsg* gen0) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_ComputeGridForceNodeMgr_serial_8()), CkMyPe(), 0, NULL, this); 
  {
    GridAckMsg*& am = gen0;
    { // begin serial block
#line 42 "inc/ComputeGridForceMgr.ci"
 delete am; 
#line 1919 "ComputeGridForceMgr.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _slist_15_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_if_6() {
  if ( 2*myNode+2 < numNodes ) {
    _slist_16();
  } else {
    _if_6_end();
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_if_6_end() {
  _serial_10();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_slist_16() {
  _when_6();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_slist_16_end() {
  _if_6_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* ComputeGridForceNodeMgr::_when_6() {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(0, false, 0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _slist_17(static_cast<GridAckMsg*>(static_cast<SDAG::MsgClosure*>(buf0->cl)->msg));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(6);
    c->anyEntries.push_back(0);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_when_6_end(GridAckMsg* gen0) {
  {
    GridAckMsg*& am = gen0;
    CmiFree(UsrToEnv(am));
  }
  _slist_16_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_slist_17(GridAckMsg* gen0) {
  _serial_9(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_slist_17_end(GridAckMsg* gen0) {
  _when_6_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_serial_9(GridAckMsg* gen0) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_ComputeGridForceNodeMgr_serial_9()), CkMyPe(), 0, NULL, this); 
  {
    GridAckMsg*& am = gen0;
    { // begin serial block
#line 45 "inc/ComputeGridForceMgr.ci"
 delete am; 
#line 2011 "ComputeGridForceMgr.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _slist_17_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_serial_10() {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_ComputeGridForceNodeMgr_serial_10()), CkMyPe(), 0, NULL, this); 
  { // begin serial block
#line 47 "inc/ComputeGridForceMgr.ci"

            CkPrintf(".");
            GridSegmentMsg *msg = new GridSegmentMsg;
            while ( cur_grid < num_grids ) {
              msg->gridnum = cur_grid;
              grids[cur_grid]->
                    init3(msg->grid,&(msg->start_index),&(msg->count));
              if (msg->count > 0) {
                CProxy_ComputeGridForceNodeMgr myproxy(thisgroup);
                if ( 2*myNode+2 < numNodes ) {
                  GridSegmentMsg *msg2 =
                         (GridSegmentMsg *)CkCopyMsg((void **)&msg);
                  myproxy[2*myNode+2].recv(msg2);
                }
                receiveInitialGridData(msg);
                if ( 2*myNode+1 < numNodes ) {
                  myproxy[2*myNode+1].recv(msg);
                } else {
                  delete msg;
                }
                break;
              }
              ++cur_grid;
            }
            if (cur_grid == num_grids) delete msg;
          
#line 2051 "ComputeGridForceMgr.def.h"
  } // end serial block
  _TRACE_END_EXECUTE(); 
  _slist_13_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_serial_11() {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_ComputeGridForceNodeMgr_serial_11()), CkMyPe(), 0, NULL, this); 
  { // begin serial block
#line 74 "inc/ComputeGridForceMgr.ci"
 CkPrintf("done.\n"); 
#line 2065 "ComputeGridForceMgr.def.h"
  } // end serial block
  _TRACE_END_EXECUTE(); 
  _slist_12_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::ack(GridAckMsg* am_msg){
  if (!__dep.get()) _sdag_init();
  CkReferenceMsg(am_msg);
  __dep->pushBuffer(0, new SDAG::MsgClosure(am_msg));
  SDAG::Continuation* c = __dep->tryFindContinuation(0);
  if (c) {
    _TRACE_END_EXECUTE(); 
    switch(c->whenID) {
    case 0:
      _when_0(
      );
    break;
    case 1:
      _when_1(
      );
    break;
    case 3:
      _when_3(
      );
    break;
    case 4:
      _when_4(
      );
    break;
    case 5:
      _when_5(
      );
    break;
    case 6:
      _when_6(
      );
    break;
    }
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, NULL, this); 
    delete c;
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::recv(GridSegmentMsg* msg_msg){
  if (!__dep.get()) _sdag_init();
  CkReferenceMsg(msg_msg);
  __dep->pushBuffer(1, new SDAG::MsgClosure(msg_msg));
  SDAG::Continuation* c = __dep->tryFindContinuation(1);
  if (c) {
    _TRACE_END_EXECUTE(); 
    _when_2(
    );
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, NULL, this); 
    delete c;
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_sdag_init() { // Potentially missing ComputeGridForceNodeMgr_SDAG_CODE in your class definition?
  __dep.reset(new SDAG::Dependency(2,7));
  __dep->addDepends(0,0);
  __dep->addDepends(1,0);
  __dep->addDepends(3,0);
  __dep->addDepends(4,0);
  __dep->addDepends(5,0);
  __dep->addDepends(6,0);
  __dep->addDepends(2,1);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::__sdag_init() { // Potentially missing ComputeGridForceNodeMgr_SDAG_CODE in your class definition?
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::_sdag_pup(PUP::er &p) {  // Potentially missing ComputeGridForceNodeMgr_SDAG_CODE in your class definition?
  p|__dep;
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void ComputeGridForceNodeMgr::__sdag_register() { // Potentially missing ComputeGridForceNodeMgr_SDAG_CODE in your class definition?
  (void)_sdag_idx_ComputeGridForceNodeMgr_serial_7();
  (void)_sdag_idx_ComputeGridForceNodeMgr_serial_8();
  (void)_sdag_idx_ComputeGridForceNodeMgr_serial_9();
  (void)_sdag_idx_ComputeGridForceNodeMgr_serial_10();
  (void)_sdag_idx_ComputeGridForceNodeMgr_serial_11();
  (void)_sdag_idx_ComputeGridForceNodeMgr_serial_0();
  (void)_sdag_idx_ComputeGridForceNodeMgr_serial_1();
  (void)_sdag_idx_ComputeGridForceNodeMgr_serial_2();
  (void)_sdag_idx_ComputeGridForceNodeMgr_serial_3();
  (void)_sdag_idx_ComputeGridForceNodeMgr_serial_4();
  (void)_sdag_idx_ComputeGridForceNodeMgr_serial_5();
  (void)_sdag_idx_ComputeGridForceNodeMgr_serial_6();
  PUPable_reg(SINGLE_ARG(Closure_ComputeGridForceNodeMgr::requestInitialGridData_3_closure));
  PUPable_reg(SINGLE_ARG(Closure_ComputeGridForceNodeMgr::broadcastInitialGridData_9_closure));
  PUPable_reg(SINGLE_ARG(Closure_ComputeGridForceNodeMgr::requestInitialGridData_3_closure));
  PUPable_reg(SINGLE_ARG(Closure_ComputeGridForceNodeMgr::broadcastInitialGridData_9_closure));
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int ComputeGridForceNodeMgr::_sdag_idx_ComputeGridForceNodeMgr_serial_7() { // Potentially missing ComputeGridForceNodeMgr_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_ComputeGridForceNodeMgr_serial_7();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int ComputeGridForceNodeMgr::_sdag_reg_ComputeGridForceNodeMgr_serial_7() { // Potentially missing ComputeGridForceNodeMgr_SDAG_CODE in your class definition?
  return CkRegisterEp("ComputeGridForceNodeMgr_serial_7", NULL, 0, CkIndex_ComputeGridForceNodeMgr::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int ComputeGridForceNodeMgr::_sdag_idx_ComputeGridForceNodeMgr_serial_8() { // Potentially missing ComputeGridForceNodeMgr_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_ComputeGridForceNodeMgr_serial_8();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int ComputeGridForceNodeMgr::_sdag_reg_ComputeGridForceNodeMgr_serial_8() { // Potentially missing ComputeGridForceNodeMgr_SDAG_CODE in your class definition?
  return CkRegisterEp("ComputeGridForceNodeMgr_serial_8", NULL, 0, CkIndex_ComputeGridForceNodeMgr::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int ComputeGridForceNodeMgr::_sdag_idx_ComputeGridForceNodeMgr_serial_9() { // Potentially missing ComputeGridForceNodeMgr_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_ComputeGridForceNodeMgr_serial_9();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int ComputeGridForceNodeMgr::_sdag_reg_ComputeGridForceNodeMgr_serial_9() { // Potentially missing ComputeGridForceNodeMgr_SDAG_CODE in your class definition?
  return CkRegisterEp("ComputeGridForceNodeMgr_serial_9", NULL, 0, CkIndex_ComputeGridForceNodeMgr::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int ComputeGridForceNodeMgr::_sdag_idx_ComputeGridForceNodeMgr_serial_10() { // Potentially missing ComputeGridForceNodeMgr_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_ComputeGridForceNodeMgr_serial_10();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int ComputeGridForceNodeMgr::_sdag_reg_ComputeGridForceNodeMgr_serial_10() { // Potentially missing ComputeGridForceNodeMgr_SDAG_CODE in your class definition?
  return CkRegisterEp("ComputeGridForceNodeMgr_serial_10", NULL, 0, CkIndex_ComputeGridForceNodeMgr::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int ComputeGridForceNodeMgr::_sdag_idx_ComputeGridForceNodeMgr_serial_11() { // Potentially missing ComputeGridForceNodeMgr_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_ComputeGridForceNodeMgr_serial_11();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int ComputeGridForceNodeMgr::_sdag_reg_ComputeGridForceNodeMgr_serial_11() { // Potentially missing ComputeGridForceNodeMgr_SDAG_CODE in your class definition?
  return CkRegisterEp("ComputeGridForceNodeMgr_serial_11", NULL, 0, CkIndex_ComputeGridForceNodeMgr::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int ComputeGridForceNodeMgr::_sdag_idx_ComputeGridForceNodeMgr_serial_0() { // Potentially missing ComputeGridForceNodeMgr_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_ComputeGridForceNodeMgr_serial_0();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int ComputeGridForceNodeMgr::_sdag_reg_ComputeGridForceNodeMgr_serial_0() { // Potentially missing ComputeGridForceNodeMgr_SDAG_CODE in your class definition?
  return CkRegisterEp("ComputeGridForceNodeMgr_serial_0", NULL, 0, CkIndex_ComputeGridForceNodeMgr::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int ComputeGridForceNodeMgr::_sdag_idx_ComputeGridForceNodeMgr_serial_1() { // Potentially missing ComputeGridForceNodeMgr_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_ComputeGridForceNodeMgr_serial_1();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int ComputeGridForceNodeMgr::_sdag_reg_ComputeGridForceNodeMgr_serial_1() { // Potentially missing ComputeGridForceNodeMgr_SDAG_CODE in your class definition?
  return CkRegisterEp("ComputeGridForceNodeMgr_serial_1", NULL, 0, CkIndex_ComputeGridForceNodeMgr::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int ComputeGridForceNodeMgr::_sdag_idx_ComputeGridForceNodeMgr_serial_2() { // Potentially missing ComputeGridForceNodeMgr_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_ComputeGridForceNodeMgr_serial_2();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int ComputeGridForceNodeMgr::_sdag_reg_ComputeGridForceNodeMgr_serial_2() { // Potentially missing ComputeGridForceNodeMgr_SDAG_CODE in your class definition?
  return CkRegisterEp("ComputeGridForceNodeMgr_serial_2", NULL, 0, CkIndex_ComputeGridForceNodeMgr::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int ComputeGridForceNodeMgr::_sdag_idx_ComputeGridForceNodeMgr_serial_3() { // Potentially missing ComputeGridForceNodeMgr_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_ComputeGridForceNodeMgr_serial_3();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int ComputeGridForceNodeMgr::_sdag_reg_ComputeGridForceNodeMgr_serial_3() { // Potentially missing ComputeGridForceNodeMgr_SDAG_CODE in your class definition?
  return CkRegisterEp("ComputeGridForceNodeMgr_serial_3", NULL, 0, CkIndex_ComputeGridForceNodeMgr::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int ComputeGridForceNodeMgr::_sdag_idx_ComputeGridForceNodeMgr_serial_4() { // Potentially missing ComputeGridForceNodeMgr_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_ComputeGridForceNodeMgr_serial_4();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int ComputeGridForceNodeMgr::_sdag_reg_ComputeGridForceNodeMgr_serial_4() { // Potentially missing ComputeGridForceNodeMgr_SDAG_CODE in your class definition?
  return CkRegisterEp("ComputeGridForceNodeMgr_serial_4", NULL, 0, CkIndex_ComputeGridForceNodeMgr::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int ComputeGridForceNodeMgr::_sdag_idx_ComputeGridForceNodeMgr_serial_5() { // Potentially missing ComputeGridForceNodeMgr_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_ComputeGridForceNodeMgr_serial_5();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int ComputeGridForceNodeMgr::_sdag_reg_ComputeGridForceNodeMgr_serial_5() { // Potentially missing ComputeGridForceNodeMgr_SDAG_CODE in your class definition?
  return CkRegisterEp("ComputeGridForceNodeMgr_serial_5", NULL, 0, CkIndex_ComputeGridForceNodeMgr::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int ComputeGridForceNodeMgr::_sdag_idx_ComputeGridForceNodeMgr_serial_6() { // Potentially missing ComputeGridForceNodeMgr_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_ComputeGridForceNodeMgr_serial_6();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int ComputeGridForceNodeMgr::_sdag_reg_ComputeGridForceNodeMgr_serial_6() { // Potentially missing ComputeGridForceNodeMgr_SDAG_CODE in your class definition?
  return CkRegisterEp("ComputeGridForceNodeMgr_serial_6", NULL, 0, CkIndex_ComputeGridForceNodeMgr::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */



#ifndef CK_TEMPLATES_ONLY
void _registerComputeGridForceMgr(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: message GridAckMsg;
*/
CMessage_GridAckMsg::__register("GridAckMsg", sizeof(GridAckMsg),(CkPackFnPtr) GridAckMsg::pack,(CkUnpackFnPtr) GridAckMsg::unpack);

/* REG: message GridDepositMsg;
*/
CMessage_GridDepositMsg::__register("GridDepositMsg", sizeof(GridDepositMsg),(CkPackFnPtr) GridDepositMsg::pack,(CkUnpackFnPtr) GridDepositMsg::unpack);

/* REG: message GridSegmentMsg;
*/
CMessage_GridSegmentMsg::__register("GridSegmentMsg", sizeof(GridSegmentMsg),(CkPackFnPtr) GridSegmentMsg::pack,(CkUnpackFnPtr) GridSegmentMsg::unpack);

/* REG: message SubReqMsg;
*/
CMessage_SubReqMsg::__register("SubReqMsg", sizeof(SubReqMsg),(CkPackFnPtr) SubReqMsg::pack,(CkUnpackFnPtr) SubReqMsg::unpack);

/* REG: message GridRequestMsg{
int gridStartIndex[];
int gridIndexList[];
}
;
*/
CMessage_GridRequestMsg::__register("GridRequestMsg", sizeof(GridRequestMsg),(CkPackFnPtr) GridRequestMsg::pack,(CkUnpackFnPtr) GridRequestMsg::unpack);

/* REG: message GridValuesMsg{
int gridStartIndex[];
GridVal gridVals[];
}
;
*/
CMessage_GridValuesMsg::__register("GridValuesMsg", sizeof(GridValuesMsg),(CkPackFnPtr) GridValuesMsg::pack,(CkUnpackFnPtr) GridValuesMsg::unpack);

/* REG: group ComputeGridForceMgr: IrrGroup{
ComputeGridForceMgr();
void finishWork();
};
*/
  CkIndex_ComputeGridForceMgr::__register("ComputeGridForceMgr", sizeof(ComputeGridForceMgr));

/* REG: nodegroup ComputeGridForceNodeMgr: NodeGroup{
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
  CkIndex_ComputeGridForceNodeMgr::__register("ComputeGridForceNodeMgr", sizeof(ComputeGridForceNodeMgr));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_ComputeGridForceMgr::virtual_pup(PUP::er &p) {
    recursive_pup<ComputeGridForceMgr>(dynamic_cast<ComputeGridForceMgr*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_ComputeGridForceNodeMgr::virtual_pup(PUP::er &p) {
    recursive_pup<ComputeGridForceNodeMgr>(dynamic_cast<ComputeGridForceNodeMgr*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
