



/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_WorkDistrib::peOrderingReady_2_closure : public SDAG::Closure {
      

      peOrderingReady_2_closure() {
        init();
      }
      peOrderingReady_2_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~peOrderingReady_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(peOrderingReady_2_closure));
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
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_WorkDistrib::initHostDeviceLDB_40_closure : public SDAG::Closure {
      

      initHostDeviceLDB_40_closure() {
        init();
      }
      initHostDeviceLDB_40_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~initHostDeviceLDB_40_closure() {
      }
      PUPable_decl(SINGLE_ARG(initHostDeviceLDB_40_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_WorkDistrib::contributeHostDeviceLDB_41_closure : public SDAG::Closure {
            int peSetLen;
            int *peSet;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      contributeHostDeviceLDB_41_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      contributeHostDeviceLDB_41_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            int & getP0() { return peSetLen;}
            int *& getP1() { return peSet;}
      void pup(PUP::er& __p) {
        __p | peSetLen;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> peSetLen;
  implP|peSetLen;
  int impl_off_peSet, impl_cnt_peSet;
  implP|impl_off_peSet;
  implP|impl_cnt_peSet;
          impl_buf+=CK_ALIGN(implP.size(),16);
          peSet = (int *)(impl_buf+impl_off_peSet);
        }
      }
      virtual ~contributeHostDeviceLDB_41_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(contributeHostDeviceLDB_41_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_WorkDistrib::setDeviceLDBParams_42_closure : public SDAG::Closure {
            int dt;
            int hs;
            int sp1;
            int pp1;
            int pp2;


      setDeviceLDBParams_42_closure() {
        init();
      }
      setDeviceLDBParams_42_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return dt;}
            int & getP1() { return hs;}
            int & getP2() { return sp1;}
            int & getP3() { return pp1;}
            int & getP4() { return pp2;}
      void pup(PUP::er& __p) {
        __p | dt;
        __p | hs;
        __p | sp1;
        __p | pp1;
        __p | pp2;
        packClosure(__p);
      }
      virtual ~setDeviceLDBParams_42_closure() {
      }
      PUPable_decl(SINGLE_ARG(setDeviceLDBParams_42_closure));
    };
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: message LocalWorkMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_LocalWorkMsg::operator new(size_t s){
  return LocalWorkMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_LocalWorkMsg::operator new(size_t s, int* sz){
  return LocalWorkMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_LocalWorkMsg::operator new(size_t s, int* sz,const int pb){
  return LocalWorkMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_LocalWorkMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return LocalWorkMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_LocalWorkMsg::operator new(size_t s, const int p) {
  return LocalWorkMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_LocalWorkMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return LocalWorkMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_LocalWorkMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_LocalWorkMsg::CMessage_LocalWorkMsg() {
LocalWorkMsg *newmsg = (LocalWorkMsg *)this;
}
void CMessage_LocalWorkMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_LocalWorkMsg::pack(LocalWorkMsg *msg) {
  return (void *) msg;
}
LocalWorkMsg* CMessage_LocalWorkMsg::unpack(void* buf) {
  LocalWorkMsg *msg = (LocalWorkMsg *) buf;
  return msg;
}
int CMessage_LocalWorkMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message FinishWorkMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_FinishWorkMsg::operator new(size_t s){
  return FinishWorkMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_FinishWorkMsg::operator new(size_t s, int* sz){
  return FinishWorkMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_FinishWorkMsg::operator new(size_t s, int* sz,const int pb){
  return FinishWorkMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_FinishWorkMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return FinishWorkMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_FinishWorkMsg::operator new(size_t s, const int p) {
  return FinishWorkMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_FinishWorkMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return FinishWorkMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_FinishWorkMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_FinishWorkMsg::CMessage_FinishWorkMsg() {
FinishWorkMsg *newmsg = (FinishWorkMsg *)this;
}
void CMessage_FinishWorkMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_FinishWorkMsg::pack(FinishWorkMsg *msg) {
  return (void *) msg;
}
FinishWorkMsg* CMessage_FinishWorkMsg::unpack(void* buf) {
  FinishWorkMsg *msg = (FinishWorkMsg *) buf;
  return msg;
}
int CMessage_FinishWorkMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message ComputeMapChangeMsg{
int newNodes[];
char newNumPartitions[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_ComputeMapChangeMsg::operator new(size_t s){
  return ComputeMapChangeMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_ComputeMapChangeMsg::operator new(size_t s, int* sz){
  return ComputeMapChangeMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_ComputeMapChangeMsg::operator new(size_t s, int* sz,const int pb){
  return ComputeMapChangeMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_ComputeMapChangeMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return ComputeMapChangeMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_ComputeMapChangeMsg::operator new(size_t s, int sz0, int sz1) {
  int sizes[2];
  sizes[0] = sz0;
  sizes[1] = sz1;
  return ComputeMapChangeMsg::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_ComputeMapChangeMsg::operator new(size_t s, int sz0, int sz1, const int p) {
  int sizes[2];
  sizes[0] = sz0;
  sizes[1] = sz1;
  return ComputeMapChangeMsg::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_ComputeMapChangeMsg::operator new(size_t s, int sz0, int sz1, const int p, const GroupDepNum groupDepNum) {
  int sizes[2];
  sizes[0] = sz0;
  sizes[1] = sz1;
  return ComputeMapChangeMsg::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_ComputeMapChangeMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(int)*sizes[0]);
  if(sizes==0)
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[1] + ALIGN_DEFAULT(sizeof(char)*sizes[1]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[2], pb, groupDepNum);
}
CMessage_ComputeMapChangeMsg::CMessage_ComputeMapChangeMsg() {
ComputeMapChangeMsg *newmsg = (ComputeMapChangeMsg *)this;
  newmsg->newNodes = (int *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
  newmsg->newNumPartitions = (char *) ((char *)newmsg + CkpvAccess(_offsets)[1]);
}
void CMessage_ComputeMapChangeMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_ComputeMapChangeMsg::pack(ComputeMapChangeMsg *msg) {
  msg->newNodes = (int *) ((char *)msg->newNodes - (char *)msg);
  msg->newNumPartitions = (char *) ((char *)msg->newNumPartitions - (char *)msg);
  return (void *) msg;
}
ComputeMapChangeMsg* CMessage_ComputeMapChangeMsg::unpack(void* buf) {
  ComputeMapChangeMsg *msg = (ComputeMapChangeMsg *) buf;
  msg->newNodes = (int *) ((size_t)msg->newNodes + (char *)msg);
  msg->newNumPartitions = (char *) ((size_t)msg->newNumPartitions + (char *)msg);
  return msg;
}
int CMessage_ComputeMapChangeMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message PatchMapMsg{
char patchMapData[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_PatchMapMsg::operator new(size_t s){
  return PatchMapMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_PatchMapMsg::operator new(size_t s, int* sz){
  return PatchMapMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_PatchMapMsg::operator new(size_t s, int* sz,const int pb){
  return PatchMapMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_PatchMapMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return PatchMapMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_PatchMapMsg::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return PatchMapMsg::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_PatchMapMsg::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return PatchMapMsg::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_PatchMapMsg::operator new(size_t s, int sz0, const int p, const GroupDepNum groupDepNum) {
  int sizes[1];
  sizes[0] = sz0;
  return PatchMapMsg::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_PatchMapMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(char)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb, groupDepNum);
}
CMessage_PatchMapMsg::CMessage_PatchMapMsg() {
PatchMapMsg *newmsg = (PatchMapMsg *)this;
  newmsg->patchMapData = (char *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
void CMessage_PatchMapMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_PatchMapMsg::pack(PatchMapMsg *msg) {
  msg->patchMapData = (char *) ((char *)msg->patchMapData - (char *)msg);
  return (void *) msg;
}
PatchMapMsg* CMessage_PatchMapMsg::unpack(void* buf) {
  PatchMapMsg *msg = (PatchMapMsg *) buf;
  msg->patchMapData = (char *) ((size_t)msg->patchMapData + (char *)msg);
  return msg;
}
int CMessage_PatchMapMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group WorkDistrib: IrrGroup{
WorkDistrib();
void peOrderingReady();
void savePatchMap(PatchMapMsg* impl_msg);
void recvComputeMapChanges(ComputeMapChangeMsg* impl_msg);
void doneSaveComputeMap(CkReductionMsg* impl_msg);
void enqueueWork(LocalWorkMsg* impl_msg);
void enqueueExcls(LocalWorkMsg* impl_msg);
void enqueueBonds(LocalWorkMsg* impl_msg);
void enqueueAngles(LocalWorkMsg* impl_msg);
void enqueueDihedrals(LocalWorkMsg* impl_msg);
void enqueueImpropers(LocalWorkMsg* impl_msg);
void enqueueThole(LocalWorkMsg* impl_msg);
void enqueueAniso(LocalWorkMsg* impl_msg);
void enqueueCrossterms(LocalWorkMsg* impl_msg);
void enqueueGromacsPair(LocalWorkMsg* impl_msg);
void enqueueCUDA(LocalWorkMsg* impl_msg);
void enqueueCUDAP2(LocalWorkMsg* impl_msg);
void enqueueCUDAP3(LocalWorkMsg* impl_msg);
void finishCUDAPatch(FinishWorkMsg* impl_msg);
void finishCUDA(LocalWorkMsg* impl_msg);
void finishCUDAP2(LocalWorkMsg* impl_msg);
void finishCUDAP3(LocalWorkMsg* impl_msg);
void enqueueMIC(LocalWorkMsg* impl_msg);
void finishMIC(LocalWorkMsg* impl_msg);
void enqueuePme(LocalWorkMsg* impl_msg);
void enqueueSelfA1(LocalWorkMsg* impl_msg);
void enqueueSelfA2(LocalWorkMsg* impl_msg);
void enqueueSelfA3(LocalWorkMsg* impl_msg);
void enqueueSelfB1(LocalWorkMsg* impl_msg);
void enqueueSelfB2(LocalWorkMsg* impl_msg);
void enqueueSelfB3(LocalWorkMsg* impl_msg);
void enqueueWorkA1(LocalWorkMsg* impl_msg);
void enqueueWorkA2(LocalWorkMsg* impl_msg);
void enqueueWorkA3(LocalWorkMsg* impl_msg);
void enqueueWorkB1(LocalWorkMsg* impl_msg);
void enqueueWorkB2(LocalWorkMsg* impl_msg);
void enqueueWorkB3(LocalWorkMsg* impl_msg);
void enqueueWorkC(LocalWorkMsg* impl_msg);
void enqueueLCPO(LocalWorkMsg* impl_msg);
void initHostDeviceLDB();
void contributeHostDeviceLDB(int peSetLen, const int *peSet);
void setDeviceLDBParams(int dt, int hs, int sp1, int pp1, int pp2);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_WorkDistrib::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: WorkDistrib();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void peOrderingReady();
 */
void CProxyElement_WorkDistrib::peOrderingReady(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_peOrderingReady_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_peOrderingReady_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_WorkDistrib::idx_peOrderingReady_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void savePatchMap(PatchMapMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::savePatchMap(PatchMapMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_savePatchMap_PatchMapMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_savePatchMap_PatchMapMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_WorkDistrib::idx_savePatchMap_PatchMapMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvComputeMapChanges(ComputeMapChangeMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::recvComputeMapChanges(ComputeMapChangeMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_recvComputeMapChanges_ComputeMapChangeMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_recvComputeMapChanges_ComputeMapChangeMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_WorkDistrib::idx_recvComputeMapChanges_ComputeMapChangeMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void doneSaveComputeMap(CkReductionMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::doneSaveComputeMap(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_doneSaveComputeMap_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_doneSaveComputeMap_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_WorkDistrib::idx_doneSaveComputeMap_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueWork(LocalWorkMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::enqueueWork(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_enqueueWork_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueWork_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_WorkDistrib::idx_enqueueWork_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueExcls(LocalWorkMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::enqueueExcls(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_enqueueExcls_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueExcls_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_WorkDistrib::idx_enqueueExcls_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueBonds(LocalWorkMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::enqueueBonds(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_enqueueBonds_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueBonds_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_WorkDistrib::idx_enqueueBonds_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueAngles(LocalWorkMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::enqueueAngles(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_enqueueAngles_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueAngles_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_WorkDistrib::idx_enqueueAngles_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueDihedrals(LocalWorkMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::enqueueDihedrals(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_enqueueDihedrals_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueDihedrals_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_WorkDistrib::idx_enqueueDihedrals_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueImpropers(LocalWorkMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::enqueueImpropers(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_enqueueImpropers_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueImpropers_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_WorkDistrib::idx_enqueueImpropers_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueThole(LocalWorkMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::enqueueThole(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_enqueueThole_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueThole_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_WorkDistrib::idx_enqueueThole_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueAniso(LocalWorkMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::enqueueAniso(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_enqueueAniso_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueAniso_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_WorkDistrib::idx_enqueueAniso_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueCrossterms(LocalWorkMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::enqueueCrossterms(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_enqueueCrossterms_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueCrossterms_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_WorkDistrib::idx_enqueueCrossterms_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueGromacsPair(LocalWorkMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::enqueueGromacsPair(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_enqueueGromacsPair_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueGromacsPair_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_WorkDistrib::idx_enqueueGromacsPair_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueCUDA(LocalWorkMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::enqueueCUDA(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_enqueueCUDA_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueCUDA_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_WorkDistrib::idx_enqueueCUDA_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueCUDAP2(LocalWorkMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::enqueueCUDAP2(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_enqueueCUDAP2_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueCUDAP2_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_WorkDistrib::idx_enqueueCUDAP2_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueCUDAP3(LocalWorkMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::enqueueCUDAP3(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_enqueueCUDAP3_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueCUDAP3_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_WorkDistrib::idx_enqueueCUDAP3_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finishCUDAPatch(FinishWorkMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::finishCUDAPatch(FinishWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_finishCUDAPatch_FinishWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_finishCUDAPatch_FinishWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_WorkDistrib::idx_finishCUDAPatch_FinishWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finishCUDA(LocalWorkMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::finishCUDA(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_finishCUDA_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_finishCUDA_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_WorkDistrib::idx_finishCUDA_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_EXPEDITED);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finishCUDAP2(LocalWorkMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::finishCUDAP2(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_finishCUDAP2_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_finishCUDAP2_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_WorkDistrib::idx_finishCUDAP2_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_EXPEDITED);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finishCUDAP3(LocalWorkMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::finishCUDAP3(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_finishCUDAP3_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_finishCUDAP3_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_WorkDistrib::idx_finishCUDAP3_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_EXPEDITED);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueMIC(LocalWorkMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::enqueueMIC(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_enqueueMIC_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueMIC_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_WorkDistrib::idx_enqueueMIC_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finishMIC(LocalWorkMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::finishMIC(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_finishMIC_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_finishMIC_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_WorkDistrib::idx_finishMIC_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_EXPEDITED);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueuePme(LocalWorkMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::enqueuePme(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_enqueuePme_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueuePme_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_WorkDistrib::idx_enqueuePme_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueSelfA1(LocalWorkMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::enqueueSelfA1(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_enqueueSelfA1_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueSelfA1_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_WorkDistrib::idx_enqueueSelfA1_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueSelfA2(LocalWorkMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::enqueueSelfA2(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_enqueueSelfA2_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueSelfA2_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_WorkDistrib::idx_enqueueSelfA2_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueSelfA3(LocalWorkMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::enqueueSelfA3(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_enqueueSelfA3_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueSelfA3_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_WorkDistrib::idx_enqueueSelfA3_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueSelfB1(LocalWorkMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::enqueueSelfB1(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_enqueueSelfB1_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueSelfB1_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_WorkDistrib::idx_enqueueSelfB1_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueSelfB2(LocalWorkMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::enqueueSelfB2(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_enqueueSelfB2_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueSelfB2_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_WorkDistrib::idx_enqueueSelfB2_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueSelfB3(LocalWorkMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::enqueueSelfB3(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_enqueueSelfB3_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueSelfB3_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_WorkDistrib::idx_enqueueSelfB3_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueWorkA1(LocalWorkMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::enqueueWorkA1(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_enqueueWorkA1_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueWorkA1_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_WorkDistrib::idx_enqueueWorkA1_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueWorkA2(LocalWorkMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::enqueueWorkA2(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_enqueueWorkA2_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueWorkA2_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_WorkDistrib::idx_enqueueWorkA2_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueWorkA3(LocalWorkMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::enqueueWorkA3(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_enqueueWorkA3_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueWorkA3_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_WorkDistrib::idx_enqueueWorkA3_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueWorkB1(LocalWorkMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::enqueueWorkB1(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_enqueueWorkB1_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueWorkB1_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_WorkDistrib::idx_enqueueWorkB1_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueWorkB2(LocalWorkMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::enqueueWorkB2(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_enqueueWorkB2_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueWorkB2_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_WorkDistrib::idx_enqueueWorkB2_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueWorkB3(LocalWorkMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::enqueueWorkB3(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_enqueueWorkB3_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueWorkB3_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_WorkDistrib::idx_enqueueWorkB3_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueWorkC(LocalWorkMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::enqueueWorkC(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_enqueueWorkC_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueWorkC_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_WorkDistrib::idx_enqueueWorkC_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueLCPO(LocalWorkMsg* impl_msg);
 */
void CProxyElement_WorkDistrib::enqueueLCPO(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_enqueueLCPO_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueLCPO_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_WorkDistrib::idx_enqueueLCPO_LocalWorkMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initHostDeviceLDB();
 */
void CProxyElement_WorkDistrib::initHostDeviceLDB(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_initHostDeviceLDB_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_initHostDeviceLDB_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_WorkDistrib::idx_initHostDeviceLDB_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void contributeHostDeviceLDB(int peSetLen, const int *peSet);
 */
void CProxyElement_WorkDistrib::contributeHostDeviceLDB(int peSetLen, const int *peSet, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int peSetLen, const int *peSet
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_peSet, impl_cnt_peSet;
  impl_off_peSet=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_peSet=sizeof(int)*(peSetLen));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|peSetLen;
    implP|impl_off_peSet;
    implP|impl_cnt_peSet;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|peSetLen;
    implP|impl_off_peSet;
    implP|impl_cnt_peSet;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_peSet,peSet,impl_cnt_peSet);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_contributeHostDeviceLDB_marshall41(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_contributeHostDeviceLDB_marshall41(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_WorkDistrib::idx_contributeHostDeviceLDB_marshall41(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setDeviceLDBParams(int dt, int hs, int sp1, int pp1, int pp2);
 */
void CProxyElement_WorkDistrib::setDeviceLDBParams(int dt, int hs, int sp1, int pp1, int pp2, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int dt, int hs, int sp1, int pp1, int pp2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|dt;
    implP|hs;
    implP|sp1;
    implP|pp1;
    implP|pp2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|dt;
    implP|hs;
    implP|sp1;
    implP|pp1;
    implP|pp2;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_setDeviceLDBParams_marshall42(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_setDeviceLDBParams_marshall42(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_WorkDistrib::idx_setDeviceLDBParams_marshall42(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: WorkDistrib();
 */
CkGroupID CProxy_WorkDistrib::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_WorkDistrib::__idx, CkIndex_WorkDistrib::idx_WorkDistrib_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_WorkDistrib::reg_WorkDistrib_void() {
  int epidx = CkRegisterEp("WorkDistrib()",
      reinterpret_cast<CkCallFnPtr>(_call_WorkDistrib_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_WorkDistrib::_call_WorkDistrib_void(void* impl_msg, void* impl_obj_void)
{
  WorkDistrib* impl_obj = static_cast<WorkDistrib*>(impl_obj_void);
  new (impl_obj_void) WorkDistrib();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void peOrderingReady();
 */
void CProxy_WorkDistrib::peOrderingReady(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_peOrderingReady_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_peOrderingReady_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::idx_peOrderingReady_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::peOrderingReady(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_peOrderingReady_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::peOrderingReady(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::idx_peOrderingReady_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_WorkDistrib::reg_peOrderingReady_void() {
  int epidx = CkRegisterEp("peOrderingReady()",
      reinterpret_cast<CkCallFnPtr>(_call_peOrderingReady_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_WorkDistrib::_call_peOrderingReady_void(void* impl_msg, void* impl_obj_void)
{
  WorkDistrib* impl_obj = static_cast<WorkDistrib*>(impl_obj_void);
  impl_obj->peOrderingReady();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_WorkDistrib::peOrderingReady_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void savePatchMap(PatchMapMsg* impl_msg);
 */
void CProxy_WorkDistrib::savePatchMap(PatchMapMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_savePatchMap_PatchMapMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_savePatchMap_PatchMapMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::idx_savePatchMap_PatchMapMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::savePatchMap(PatchMapMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_savePatchMap_PatchMapMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::savePatchMap(PatchMapMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::idx_savePatchMap_PatchMapMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_WorkDistrib::reg_savePatchMap_PatchMapMsg() {
  int epidx = CkRegisterEp("savePatchMap(PatchMapMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_savePatchMap_PatchMapMsg), CMessage_PatchMapMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)PatchMapMsg::ckDebugPup);
  return epidx;
}

void CkIndex_WorkDistrib::_call_savePatchMap_PatchMapMsg(void* impl_msg, void* impl_obj_void)
{
  WorkDistrib* impl_obj = static_cast<WorkDistrib*>(impl_obj_void);
  impl_obj->savePatchMap((PatchMapMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvComputeMapChanges(ComputeMapChangeMsg* impl_msg);
 */
void CProxy_WorkDistrib::recvComputeMapChanges(ComputeMapChangeMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_recvComputeMapChanges_ComputeMapChangeMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_recvComputeMapChanges_ComputeMapChangeMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::idx_recvComputeMapChanges_ComputeMapChangeMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::recvComputeMapChanges(ComputeMapChangeMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_recvComputeMapChanges_ComputeMapChangeMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::recvComputeMapChanges(ComputeMapChangeMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::idx_recvComputeMapChanges_ComputeMapChangeMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_WorkDistrib::reg_recvComputeMapChanges_ComputeMapChangeMsg() {
  int epidx = CkRegisterEp("recvComputeMapChanges(ComputeMapChangeMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvComputeMapChanges_ComputeMapChangeMsg), CMessage_ComputeMapChangeMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)ComputeMapChangeMsg::ckDebugPup);
  return epidx;
}

void CkIndex_WorkDistrib::_call_recvComputeMapChanges_ComputeMapChangeMsg(void* impl_msg, void* impl_obj_void)
{
  WorkDistrib* impl_obj = static_cast<WorkDistrib*>(impl_obj_void);
  impl_obj->recvComputeMapChanges((ComputeMapChangeMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void doneSaveComputeMap(CkReductionMsg* impl_msg);
 */
void CProxy_WorkDistrib::doneSaveComputeMap(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_doneSaveComputeMap_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_doneSaveComputeMap_CkReductionMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::idx_doneSaveComputeMap_CkReductionMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::doneSaveComputeMap(CkReductionMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_doneSaveComputeMap_CkReductionMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::doneSaveComputeMap(CkReductionMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::idx_doneSaveComputeMap_CkReductionMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_WorkDistrib::reg_doneSaveComputeMap_CkReductionMsg() {
  int epidx = CkRegisterEp("doneSaveComputeMap(CkReductionMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_doneSaveComputeMap_CkReductionMsg), CMessage_CkReductionMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}

void CkIndex_WorkDistrib::_call_doneSaveComputeMap_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  WorkDistrib* impl_obj = static_cast<WorkDistrib*>(impl_obj_void);
  impl_obj->doneSaveComputeMap((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueWork(LocalWorkMsg* impl_msg);
 */
void CProxy_WorkDistrib::enqueueWork(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_enqueueWork_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueWork_LocalWorkMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::idx_enqueueWork_LocalWorkMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::enqueueWork(LocalWorkMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_enqueueWork_LocalWorkMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::enqueueWork(LocalWorkMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::idx_enqueueWork_LocalWorkMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_WorkDistrib::reg_enqueueWork_LocalWorkMsg() {
  int epidx = CkRegisterEp("enqueueWork(LocalWorkMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_enqueueWork_LocalWorkMsg), CMessage_LocalWorkMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)LocalWorkMsg::ckDebugPup);
  return epidx;
}

void CkIndex_WorkDistrib::_call_enqueueWork_LocalWorkMsg(void* impl_msg, void* impl_obj_void)
{
  WorkDistrib* impl_obj = static_cast<WorkDistrib*>(impl_obj_void);
  impl_obj->enqueueWork((LocalWorkMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueExcls(LocalWorkMsg* impl_msg);
 */
void CProxy_WorkDistrib::enqueueExcls(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_enqueueExcls_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueExcls_LocalWorkMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::idx_enqueueExcls_LocalWorkMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::enqueueExcls(LocalWorkMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_enqueueExcls_LocalWorkMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::enqueueExcls(LocalWorkMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::idx_enqueueExcls_LocalWorkMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_WorkDistrib::reg_enqueueExcls_LocalWorkMsg() {
  int epidx = CkRegisterEp("enqueueExcls(LocalWorkMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_enqueueExcls_LocalWorkMsg), CMessage_LocalWorkMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)LocalWorkMsg::ckDebugPup);
  return epidx;
}

void CkIndex_WorkDistrib::_call_enqueueExcls_LocalWorkMsg(void* impl_msg, void* impl_obj_void)
{
  WorkDistrib* impl_obj = static_cast<WorkDistrib*>(impl_obj_void);
  impl_obj->enqueueExcls((LocalWorkMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueBonds(LocalWorkMsg* impl_msg);
 */
void CProxy_WorkDistrib::enqueueBonds(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_enqueueBonds_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueBonds_LocalWorkMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::idx_enqueueBonds_LocalWorkMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::enqueueBonds(LocalWorkMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_enqueueBonds_LocalWorkMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::enqueueBonds(LocalWorkMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::idx_enqueueBonds_LocalWorkMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_WorkDistrib::reg_enqueueBonds_LocalWorkMsg() {
  int epidx = CkRegisterEp("enqueueBonds(LocalWorkMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_enqueueBonds_LocalWorkMsg), CMessage_LocalWorkMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)LocalWorkMsg::ckDebugPup);
  return epidx;
}

void CkIndex_WorkDistrib::_call_enqueueBonds_LocalWorkMsg(void* impl_msg, void* impl_obj_void)
{
  WorkDistrib* impl_obj = static_cast<WorkDistrib*>(impl_obj_void);
  impl_obj->enqueueBonds((LocalWorkMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueAngles(LocalWorkMsg* impl_msg);
 */
void CProxy_WorkDistrib::enqueueAngles(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_enqueueAngles_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueAngles_LocalWorkMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::idx_enqueueAngles_LocalWorkMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::enqueueAngles(LocalWorkMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_enqueueAngles_LocalWorkMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::enqueueAngles(LocalWorkMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::idx_enqueueAngles_LocalWorkMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_WorkDistrib::reg_enqueueAngles_LocalWorkMsg() {
  int epidx = CkRegisterEp("enqueueAngles(LocalWorkMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_enqueueAngles_LocalWorkMsg), CMessage_LocalWorkMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)LocalWorkMsg::ckDebugPup);
  return epidx;
}

void CkIndex_WorkDistrib::_call_enqueueAngles_LocalWorkMsg(void* impl_msg, void* impl_obj_void)
{
  WorkDistrib* impl_obj = static_cast<WorkDistrib*>(impl_obj_void);
  impl_obj->enqueueAngles((LocalWorkMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueDihedrals(LocalWorkMsg* impl_msg);
 */
void CProxy_WorkDistrib::enqueueDihedrals(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_enqueueDihedrals_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueDihedrals_LocalWorkMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::idx_enqueueDihedrals_LocalWorkMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::enqueueDihedrals(LocalWorkMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_enqueueDihedrals_LocalWorkMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::enqueueDihedrals(LocalWorkMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::idx_enqueueDihedrals_LocalWorkMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_WorkDistrib::reg_enqueueDihedrals_LocalWorkMsg() {
  int epidx = CkRegisterEp("enqueueDihedrals(LocalWorkMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_enqueueDihedrals_LocalWorkMsg), CMessage_LocalWorkMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)LocalWorkMsg::ckDebugPup);
  return epidx;
}

void CkIndex_WorkDistrib::_call_enqueueDihedrals_LocalWorkMsg(void* impl_msg, void* impl_obj_void)
{
  WorkDistrib* impl_obj = static_cast<WorkDistrib*>(impl_obj_void);
  impl_obj->enqueueDihedrals((LocalWorkMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueImpropers(LocalWorkMsg* impl_msg);
 */
void CProxy_WorkDistrib::enqueueImpropers(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_enqueueImpropers_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueImpropers_LocalWorkMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::idx_enqueueImpropers_LocalWorkMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::enqueueImpropers(LocalWorkMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_enqueueImpropers_LocalWorkMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::enqueueImpropers(LocalWorkMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::idx_enqueueImpropers_LocalWorkMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_WorkDistrib::reg_enqueueImpropers_LocalWorkMsg() {
  int epidx = CkRegisterEp("enqueueImpropers(LocalWorkMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_enqueueImpropers_LocalWorkMsg), CMessage_LocalWorkMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)LocalWorkMsg::ckDebugPup);
  return epidx;
}

void CkIndex_WorkDistrib::_call_enqueueImpropers_LocalWorkMsg(void* impl_msg, void* impl_obj_void)
{
  WorkDistrib* impl_obj = static_cast<WorkDistrib*>(impl_obj_void);
  impl_obj->enqueueImpropers((LocalWorkMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueThole(LocalWorkMsg* impl_msg);
 */
void CProxy_WorkDistrib::enqueueThole(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_enqueueThole_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueThole_LocalWorkMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::idx_enqueueThole_LocalWorkMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::enqueueThole(LocalWorkMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_enqueueThole_LocalWorkMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::enqueueThole(LocalWorkMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::idx_enqueueThole_LocalWorkMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_WorkDistrib::reg_enqueueThole_LocalWorkMsg() {
  int epidx = CkRegisterEp("enqueueThole(LocalWorkMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_enqueueThole_LocalWorkMsg), CMessage_LocalWorkMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)LocalWorkMsg::ckDebugPup);
  return epidx;
}

void CkIndex_WorkDistrib::_call_enqueueThole_LocalWorkMsg(void* impl_msg, void* impl_obj_void)
{
  WorkDistrib* impl_obj = static_cast<WorkDistrib*>(impl_obj_void);
  impl_obj->enqueueThole((LocalWorkMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueAniso(LocalWorkMsg* impl_msg);
 */
void CProxy_WorkDistrib::enqueueAniso(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_enqueueAniso_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueAniso_LocalWorkMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::idx_enqueueAniso_LocalWorkMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::enqueueAniso(LocalWorkMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_enqueueAniso_LocalWorkMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::enqueueAniso(LocalWorkMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::idx_enqueueAniso_LocalWorkMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_WorkDistrib::reg_enqueueAniso_LocalWorkMsg() {
  int epidx = CkRegisterEp("enqueueAniso(LocalWorkMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_enqueueAniso_LocalWorkMsg), CMessage_LocalWorkMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)LocalWorkMsg::ckDebugPup);
  return epidx;
}

void CkIndex_WorkDistrib::_call_enqueueAniso_LocalWorkMsg(void* impl_msg, void* impl_obj_void)
{
  WorkDistrib* impl_obj = static_cast<WorkDistrib*>(impl_obj_void);
  impl_obj->enqueueAniso((LocalWorkMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueCrossterms(LocalWorkMsg* impl_msg);
 */
void CProxy_WorkDistrib::enqueueCrossterms(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_enqueueCrossterms_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueCrossterms_LocalWorkMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::idx_enqueueCrossterms_LocalWorkMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::enqueueCrossterms(LocalWorkMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_enqueueCrossterms_LocalWorkMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::enqueueCrossterms(LocalWorkMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::idx_enqueueCrossterms_LocalWorkMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_WorkDistrib::reg_enqueueCrossterms_LocalWorkMsg() {
  int epidx = CkRegisterEp("enqueueCrossterms(LocalWorkMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_enqueueCrossterms_LocalWorkMsg), CMessage_LocalWorkMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)LocalWorkMsg::ckDebugPup);
  return epidx;
}

void CkIndex_WorkDistrib::_call_enqueueCrossterms_LocalWorkMsg(void* impl_msg, void* impl_obj_void)
{
  WorkDistrib* impl_obj = static_cast<WorkDistrib*>(impl_obj_void);
  impl_obj->enqueueCrossterms((LocalWorkMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueGromacsPair(LocalWorkMsg* impl_msg);
 */
void CProxy_WorkDistrib::enqueueGromacsPair(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_enqueueGromacsPair_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueGromacsPair_LocalWorkMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::idx_enqueueGromacsPair_LocalWorkMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::enqueueGromacsPair(LocalWorkMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_enqueueGromacsPair_LocalWorkMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::enqueueGromacsPair(LocalWorkMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::idx_enqueueGromacsPair_LocalWorkMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_WorkDistrib::reg_enqueueGromacsPair_LocalWorkMsg() {
  int epidx = CkRegisterEp("enqueueGromacsPair(LocalWorkMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_enqueueGromacsPair_LocalWorkMsg), CMessage_LocalWorkMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)LocalWorkMsg::ckDebugPup);
  return epidx;
}

void CkIndex_WorkDistrib::_call_enqueueGromacsPair_LocalWorkMsg(void* impl_msg, void* impl_obj_void)
{
  WorkDistrib* impl_obj = static_cast<WorkDistrib*>(impl_obj_void);
  impl_obj->enqueueGromacsPair((LocalWorkMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueCUDA(LocalWorkMsg* impl_msg);
 */
void CProxy_WorkDistrib::enqueueCUDA(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_enqueueCUDA_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueCUDA_LocalWorkMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::idx_enqueueCUDA_LocalWorkMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::enqueueCUDA(LocalWorkMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_enqueueCUDA_LocalWorkMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::enqueueCUDA(LocalWorkMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::idx_enqueueCUDA_LocalWorkMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_WorkDistrib::reg_enqueueCUDA_LocalWorkMsg() {
  int epidx = CkRegisterEp("enqueueCUDA(LocalWorkMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_enqueueCUDA_LocalWorkMsg), CMessage_LocalWorkMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)LocalWorkMsg::ckDebugPup);
  return epidx;
}

void CkIndex_WorkDistrib::_call_enqueueCUDA_LocalWorkMsg(void* impl_msg, void* impl_obj_void)
{
  WorkDistrib* impl_obj = static_cast<WorkDistrib*>(impl_obj_void);
  impl_obj->enqueueCUDA((LocalWorkMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueCUDAP2(LocalWorkMsg* impl_msg);
 */
void CProxy_WorkDistrib::enqueueCUDAP2(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_enqueueCUDAP2_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueCUDAP2_LocalWorkMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::idx_enqueueCUDAP2_LocalWorkMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::enqueueCUDAP2(LocalWorkMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_enqueueCUDAP2_LocalWorkMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::enqueueCUDAP2(LocalWorkMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::idx_enqueueCUDAP2_LocalWorkMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_WorkDistrib::reg_enqueueCUDAP2_LocalWorkMsg() {
  int epidx = CkRegisterEp("enqueueCUDAP2(LocalWorkMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_enqueueCUDAP2_LocalWorkMsg), CMessage_LocalWorkMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)LocalWorkMsg::ckDebugPup);
  return epidx;
}

void CkIndex_WorkDistrib::_call_enqueueCUDAP2_LocalWorkMsg(void* impl_msg, void* impl_obj_void)
{
  WorkDistrib* impl_obj = static_cast<WorkDistrib*>(impl_obj_void);
  impl_obj->enqueueCUDAP2((LocalWorkMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueCUDAP3(LocalWorkMsg* impl_msg);
 */
void CProxy_WorkDistrib::enqueueCUDAP3(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_enqueueCUDAP3_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueCUDAP3_LocalWorkMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::idx_enqueueCUDAP3_LocalWorkMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::enqueueCUDAP3(LocalWorkMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_enqueueCUDAP3_LocalWorkMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::enqueueCUDAP3(LocalWorkMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::idx_enqueueCUDAP3_LocalWorkMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_WorkDistrib::reg_enqueueCUDAP3_LocalWorkMsg() {
  int epidx = CkRegisterEp("enqueueCUDAP3(LocalWorkMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_enqueueCUDAP3_LocalWorkMsg), CMessage_LocalWorkMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)LocalWorkMsg::ckDebugPup);
  return epidx;
}

void CkIndex_WorkDistrib::_call_enqueueCUDAP3_LocalWorkMsg(void* impl_msg, void* impl_obj_void)
{
  WorkDistrib* impl_obj = static_cast<WorkDistrib*>(impl_obj_void);
  impl_obj->enqueueCUDAP3((LocalWorkMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finishCUDAPatch(FinishWorkMsg* impl_msg);
 */
void CProxy_WorkDistrib::finishCUDAPatch(FinishWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_finishCUDAPatch_FinishWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_finishCUDAPatch_FinishWorkMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::idx_finishCUDAPatch_FinishWorkMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::finishCUDAPatch(FinishWorkMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_finishCUDAPatch_FinishWorkMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::finishCUDAPatch(FinishWorkMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::idx_finishCUDAPatch_FinishWorkMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_WorkDistrib::reg_finishCUDAPatch_FinishWorkMsg() {
  int epidx = CkRegisterEp("finishCUDAPatch(FinishWorkMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_finishCUDAPatch_FinishWorkMsg), CMessage_FinishWorkMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)FinishWorkMsg::ckDebugPup);
  return epidx;
}

void CkIndex_WorkDistrib::_call_finishCUDAPatch_FinishWorkMsg(void* impl_msg, void* impl_obj_void)
{
  WorkDistrib* impl_obj = static_cast<WorkDistrib*>(impl_obj_void);
  impl_obj->finishCUDAPatch((FinishWorkMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finishCUDA(LocalWorkMsg* impl_msg);
 */
void CProxy_WorkDistrib::finishCUDA(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_finishCUDA_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_finishCUDA_LocalWorkMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::idx_finishCUDA_LocalWorkMsg(), impl_msg, ckGetGroupID(),0+CK_MSG_EXPEDITED);
}
void CProxy_WorkDistrib::finishCUDA(LocalWorkMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_finishCUDA_LocalWorkMsg(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_EXPEDITED);
}
void CProxy_WorkDistrib::finishCUDA(LocalWorkMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::idx_finishCUDA_LocalWorkMsg(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_WorkDistrib::reg_finishCUDA_LocalWorkMsg() {
  int epidx = CkRegisterEp("finishCUDA(LocalWorkMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_finishCUDA_LocalWorkMsg), CMessage_LocalWorkMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)LocalWorkMsg::ckDebugPup);
  return epidx;
}

void CkIndex_WorkDistrib::_call_finishCUDA_LocalWorkMsg(void* impl_msg, void* impl_obj_void)
{
  WorkDistrib* impl_obj = static_cast<WorkDistrib*>(impl_obj_void);
  impl_obj->finishCUDA((LocalWorkMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finishCUDAP2(LocalWorkMsg* impl_msg);
 */
void CProxy_WorkDistrib::finishCUDAP2(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_finishCUDAP2_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_finishCUDAP2_LocalWorkMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::idx_finishCUDAP2_LocalWorkMsg(), impl_msg, ckGetGroupID(),0+CK_MSG_EXPEDITED);
}
void CProxy_WorkDistrib::finishCUDAP2(LocalWorkMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_finishCUDAP2_LocalWorkMsg(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_EXPEDITED);
}
void CProxy_WorkDistrib::finishCUDAP2(LocalWorkMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::idx_finishCUDAP2_LocalWorkMsg(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_WorkDistrib::reg_finishCUDAP2_LocalWorkMsg() {
  int epidx = CkRegisterEp("finishCUDAP2(LocalWorkMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_finishCUDAP2_LocalWorkMsg), CMessage_LocalWorkMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)LocalWorkMsg::ckDebugPup);
  return epidx;
}

void CkIndex_WorkDistrib::_call_finishCUDAP2_LocalWorkMsg(void* impl_msg, void* impl_obj_void)
{
  WorkDistrib* impl_obj = static_cast<WorkDistrib*>(impl_obj_void);
  impl_obj->finishCUDAP2((LocalWorkMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finishCUDAP3(LocalWorkMsg* impl_msg);
 */
void CProxy_WorkDistrib::finishCUDAP3(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_finishCUDAP3_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_finishCUDAP3_LocalWorkMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::idx_finishCUDAP3_LocalWorkMsg(), impl_msg, ckGetGroupID(),0+CK_MSG_EXPEDITED);
}
void CProxy_WorkDistrib::finishCUDAP3(LocalWorkMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_finishCUDAP3_LocalWorkMsg(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_EXPEDITED);
}
void CProxy_WorkDistrib::finishCUDAP3(LocalWorkMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::idx_finishCUDAP3_LocalWorkMsg(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_WorkDistrib::reg_finishCUDAP3_LocalWorkMsg() {
  int epidx = CkRegisterEp("finishCUDAP3(LocalWorkMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_finishCUDAP3_LocalWorkMsg), CMessage_LocalWorkMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)LocalWorkMsg::ckDebugPup);
  return epidx;
}

void CkIndex_WorkDistrib::_call_finishCUDAP3_LocalWorkMsg(void* impl_msg, void* impl_obj_void)
{
  WorkDistrib* impl_obj = static_cast<WorkDistrib*>(impl_obj_void);
  impl_obj->finishCUDAP3((LocalWorkMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueMIC(LocalWorkMsg* impl_msg);
 */
void CProxy_WorkDistrib::enqueueMIC(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_enqueueMIC_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueMIC_LocalWorkMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::idx_enqueueMIC_LocalWorkMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::enqueueMIC(LocalWorkMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_enqueueMIC_LocalWorkMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::enqueueMIC(LocalWorkMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::idx_enqueueMIC_LocalWorkMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_WorkDistrib::reg_enqueueMIC_LocalWorkMsg() {
  int epidx = CkRegisterEp("enqueueMIC(LocalWorkMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_enqueueMIC_LocalWorkMsg), CMessage_LocalWorkMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)LocalWorkMsg::ckDebugPup);
  return epidx;
}

void CkIndex_WorkDistrib::_call_enqueueMIC_LocalWorkMsg(void* impl_msg, void* impl_obj_void)
{
  WorkDistrib* impl_obj = static_cast<WorkDistrib*>(impl_obj_void);
  impl_obj->enqueueMIC((LocalWorkMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finishMIC(LocalWorkMsg* impl_msg);
 */
void CProxy_WorkDistrib::finishMIC(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_finishMIC_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_finishMIC_LocalWorkMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::idx_finishMIC_LocalWorkMsg(), impl_msg, ckGetGroupID(),0+CK_MSG_EXPEDITED);
}
void CProxy_WorkDistrib::finishMIC(LocalWorkMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_finishMIC_LocalWorkMsg(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_EXPEDITED);
}
void CProxy_WorkDistrib::finishMIC(LocalWorkMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::idx_finishMIC_LocalWorkMsg(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_WorkDistrib::reg_finishMIC_LocalWorkMsg() {
  int epidx = CkRegisterEp("finishMIC(LocalWorkMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_finishMIC_LocalWorkMsg), CMessage_LocalWorkMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)LocalWorkMsg::ckDebugPup);
  return epidx;
}

void CkIndex_WorkDistrib::_call_finishMIC_LocalWorkMsg(void* impl_msg, void* impl_obj_void)
{
  WorkDistrib* impl_obj = static_cast<WorkDistrib*>(impl_obj_void);
  impl_obj->finishMIC((LocalWorkMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueuePme(LocalWorkMsg* impl_msg);
 */
void CProxy_WorkDistrib::enqueuePme(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_enqueuePme_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueuePme_LocalWorkMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::idx_enqueuePme_LocalWorkMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::enqueuePme(LocalWorkMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_enqueuePme_LocalWorkMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::enqueuePme(LocalWorkMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::idx_enqueuePme_LocalWorkMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_WorkDistrib::reg_enqueuePme_LocalWorkMsg() {
  int epidx = CkRegisterEp("enqueuePme(LocalWorkMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_enqueuePme_LocalWorkMsg), CMessage_LocalWorkMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)LocalWorkMsg::ckDebugPup);
  return epidx;
}

void CkIndex_WorkDistrib::_call_enqueuePme_LocalWorkMsg(void* impl_msg, void* impl_obj_void)
{
  WorkDistrib* impl_obj = static_cast<WorkDistrib*>(impl_obj_void);
  impl_obj->enqueuePme((LocalWorkMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueSelfA1(LocalWorkMsg* impl_msg);
 */
void CProxy_WorkDistrib::enqueueSelfA1(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_enqueueSelfA1_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueSelfA1_LocalWorkMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::idx_enqueueSelfA1_LocalWorkMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::enqueueSelfA1(LocalWorkMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_enqueueSelfA1_LocalWorkMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::enqueueSelfA1(LocalWorkMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::idx_enqueueSelfA1_LocalWorkMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_WorkDistrib::reg_enqueueSelfA1_LocalWorkMsg() {
  int epidx = CkRegisterEp("enqueueSelfA1(LocalWorkMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_enqueueSelfA1_LocalWorkMsg), CMessage_LocalWorkMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)LocalWorkMsg::ckDebugPup);
  return epidx;
}

void CkIndex_WorkDistrib::_call_enqueueSelfA1_LocalWorkMsg(void* impl_msg, void* impl_obj_void)
{
  WorkDistrib* impl_obj = static_cast<WorkDistrib*>(impl_obj_void);
  impl_obj->enqueueSelfA1((LocalWorkMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueSelfA2(LocalWorkMsg* impl_msg);
 */
void CProxy_WorkDistrib::enqueueSelfA2(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_enqueueSelfA2_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueSelfA2_LocalWorkMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::idx_enqueueSelfA2_LocalWorkMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::enqueueSelfA2(LocalWorkMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_enqueueSelfA2_LocalWorkMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::enqueueSelfA2(LocalWorkMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::idx_enqueueSelfA2_LocalWorkMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_WorkDistrib::reg_enqueueSelfA2_LocalWorkMsg() {
  int epidx = CkRegisterEp("enqueueSelfA2(LocalWorkMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_enqueueSelfA2_LocalWorkMsg), CMessage_LocalWorkMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)LocalWorkMsg::ckDebugPup);
  return epidx;
}

void CkIndex_WorkDistrib::_call_enqueueSelfA2_LocalWorkMsg(void* impl_msg, void* impl_obj_void)
{
  WorkDistrib* impl_obj = static_cast<WorkDistrib*>(impl_obj_void);
  impl_obj->enqueueSelfA2((LocalWorkMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueSelfA3(LocalWorkMsg* impl_msg);
 */
void CProxy_WorkDistrib::enqueueSelfA3(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_enqueueSelfA3_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueSelfA3_LocalWorkMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::idx_enqueueSelfA3_LocalWorkMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::enqueueSelfA3(LocalWorkMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_enqueueSelfA3_LocalWorkMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::enqueueSelfA3(LocalWorkMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::idx_enqueueSelfA3_LocalWorkMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_WorkDistrib::reg_enqueueSelfA3_LocalWorkMsg() {
  int epidx = CkRegisterEp("enqueueSelfA3(LocalWorkMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_enqueueSelfA3_LocalWorkMsg), CMessage_LocalWorkMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)LocalWorkMsg::ckDebugPup);
  return epidx;
}

void CkIndex_WorkDistrib::_call_enqueueSelfA3_LocalWorkMsg(void* impl_msg, void* impl_obj_void)
{
  WorkDistrib* impl_obj = static_cast<WorkDistrib*>(impl_obj_void);
  impl_obj->enqueueSelfA3((LocalWorkMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueSelfB1(LocalWorkMsg* impl_msg);
 */
void CProxy_WorkDistrib::enqueueSelfB1(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_enqueueSelfB1_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueSelfB1_LocalWorkMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::idx_enqueueSelfB1_LocalWorkMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::enqueueSelfB1(LocalWorkMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_enqueueSelfB1_LocalWorkMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::enqueueSelfB1(LocalWorkMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::idx_enqueueSelfB1_LocalWorkMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_WorkDistrib::reg_enqueueSelfB1_LocalWorkMsg() {
  int epidx = CkRegisterEp("enqueueSelfB1(LocalWorkMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_enqueueSelfB1_LocalWorkMsg), CMessage_LocalWorkMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)LocalWorkMsg::ckDebugPup);
  return epidx;
}

void CkIndex_WorkDistrib::_call_enqueueSelfB1_LocalWorkMsg(void* impl_msg, void* impl_obj_void)
{
  WorkDistrib* impl_obj = static_cast<WorkDistrib*>(impl_obj_void);
  impl_obj->enqueueSelfB1((LocalWorkMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueSelfB2(LocalWorkMsg* impl_msg);
 */
void CProxy_WorkDistrib::enqueueSelfB2(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_enqueueSelfB2_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueSelfB2_LocalWorkMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::idx_enqueueSelfB2_LocalWorkMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::enqueueSelfB2(LocalWorkMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_enqueueSelfB2_LocalWorkMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::enqueueSelfB2(LocalWorkMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::idx_enqueueSelfB2_LocalWorkMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_WorkDistrib::reg_enqueueSelfB2_LocalWorkMsg() {
  int epidx = CkRegisterEp("enqueueSelfB2(LocalWorkMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_enqueueSelfB2_LocalWorkMsg), CMessage_LocalWorkMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)LocalWorkMsg::ckDebugPup);
  return epidx;
}

void CkIndex_WorkDistrib::_call_enqueueSelfB2_LocalWorkMsg(void* impl_msg, void* impl_obj_void)
{
  WorkDistrib* impl_obj = static_cast<WorkDistrib*>(impl_obj_void);
  impl_obj->enqueueSelfB2((LocalWorkMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueSelfB3(LocalWorkMsg* impl_msg);
 */
void CProxy_WorkDistrib::enqueueSelfB3(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_enqueueSelfB3_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueSelfB3_LocalWorkMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::idx_enqueueSelfB3_LocalWorkMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::enqueueSelfB3(LocalWorkMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_enqueueSelfB3_LocalWorkMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::enqueueSelfB3(LocalWorkMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::idx_enqueueSelfB3_LocalWorkMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_WorkDistrib::reg_enqueueSelfB3_LocalWorkMsg() {
  int epidx = CkRegisterEp("enqueueSelfB3(LocalWorkMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_enqueueSelfB3_LocalWorkMsg), CMessage_LocalWorkMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)LocalWorkMsg::ckDebugPup);
  return epidx;
}

void CkIndex_WorkDistrib::_call_enqueueSelfB3_LocalWorkMsg(void* impl_msg, void* impl_obj_void)
{
  WorkDistrib* impl_obj = static_cast<WorkDistrib*>(impl_obj_void);
  impl_obj->enqueueSelfB3((LocalWorkMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueWorkA1(LocalWorkMsg* impl_msg);
 */
void CProxy_WorkDistrib::enqueueWorkA1(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_enqueueWorkA1_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueWorkA1_LocalWorkMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::idx_enqueueWorkA1_LocalWorkMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::enqueueWorkA1(LocalWorkMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_enqueueWorkA1_LocalWorkMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::enqueueWorkA1(LocalWorkMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::idx_enqueueWorkA1_LocalWorkMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_WorkDistrib::reg_enqueueWorkA1_LocalWorkMsg() {
  int epidx = CkRegisterEp("enqueueWorkA1(LocalWorkMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_enqueueWorkA1_LocalWorkMsg), CMessage_LocalWorkMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)LocalWorkMsg::ckDebugPup);
  return epidx;
}

void CkIndex_WorkDistrib::_call_enqueueWorkA1_LocalWorkMsg(void* impl_msg, void* impl_obj_void)
{
  WorkDistrib* impl_obj = static_cast<WorkDistrib*>(impl_obj_void);
  impl_obj->enqueueWorkA1((LocalWorkMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueWorkA2(LocalWorkMsg* impl_msg);
 */
void CProxy_WorkDistrib::enqueueWorkA2(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_enqueueWorkA2_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueWorkA2_LocalWorkMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::idx_enqueueWorkA2_LocalWorkMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::enqueueWorkA2(LocalWorkMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_enqueueWorkA2_LocalWorkMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::enqueueWorkA2(LocalWorkMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::idx_enqueueWorkA2_LocalWorkMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_WorkDistrib::reg_enqueueWorkA2_LocalWorkMsg() {
  int epidx = CkRegisterEp("enqueueWorkA2(LocalWorkMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_enqueueWorkA2_LocalWorkMsg), CMessage_LocalWorkMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)LocalWorkMsg::ckDebugPup);
  return epidx;
}

void CkIndex_WorkDistrib::_call_enqueueWorkA2_LocalWorkMsg(void* impl_msg, void* impl_obj_void)
{
  WorkDistrib* impl_obj = static_cast<WorkDistrib*>(impl_obj_void);
  impl_obj->enqueueWorkA2((LocalWorkMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueWorkA3(LocalWorkMsg* impl_msg);
 */
void CProxy_WorkDistrib::enqueueWorkA3(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_enqueueWorkA3_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueWorkA3_LocalWorkMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::idx_enqueueWorkA3_LocalWorkMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::enqueueWorkA3(LocalWorkMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_enqueueWorkA3_LocalWorkMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::enqueueWorkA3(LocalWorkMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::idx_enqueueWorkA3_LocalWorkMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_WorkDistrib::reg_enqueueWorkA3_LocalWorkMsg() {
  int epidx = CkRegisterEp("enqueueWorkA3(LocalWorkMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_enqueueWorkA3_LocalWorkMsg), CMessage_LocalWorkMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)LocalWorkMsg::ckDebugPup);
  return epidx;
}

void CkIndex_WorkDistrib::_call_enqueueWorkA3_LocalWorkMsg(void* impl_msg, void* impl_obj_void)
{
  WorkDistrib* impl_obj = static_cast<WorkDistrib*>(impl_obj_void);
  impl_obj->enqueueWorkA3((LocalWorkMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueWorkB1(LocalWorkMsg* impl_msg);
 */
void CProxy_WorkDistrib::enqueueWorkB1(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_enqueueWorkB1_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueWorkB1_LocalWorkMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::idx_enqueueWorkB1_LocalWorkMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::enqueueWorkB1(LocalWorkMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_enqueueWorkB1_LocalWorkMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::enqueueWorkB1(LocalWorkMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::idx_enqueueWorkB1_LocalWorkMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_WorkDistrib::reg_enqueueWorkB1_LocalWorkMsg() {
  int epidx = CkRegisterEp("enqueueWorkB1(LocalWorkMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_enqueueWorkB1_LocalWorkMsg), CMessage_LocalWorkMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)LocalWorkMsg::ckDebugPup);
  return epidx;
}

void CkIndex_WorkDistrib::_call_enqueueWorkB1_LocalWorkMsg(void* impl_msg, void* impl_obj_void)
{
  WorkDistrib* impl_obj = static_cast<WorkDistrib*>(impl_obj_void);
  impl_obj->enqueueWorkB1((LocalWorkMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueWorkB2(LocalWorkMsg* impl_msg);
 */
void CProxy_WorkDistrib::enqueueWorkB2(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_enqueueWorkB2_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueWorkB2_LocalWorkMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::idx_enqueueWorkB2_LocalWorkMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::enqueueWorkB2(LocalWorkMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_enqueueWorkB2_LocalWorkMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::enqueueWorkB2(LocalWorkMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::idx_enqueueWorkB2_LocalWorkMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_WorkDistrib::reg_enqueueWorkB2_LocalWorkMsg() {
  int epidx = CkRegisterEp("enqueueWorkB2(LocalWorkMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_enqueueWorkB2_LocalWorkMsg), CMessage_LocalWorkMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)LocalWorkMsg::ckDebugPup);
  return epidx;
}

void CkIndex_WorkDistrib::_call_enqueueWorkB2_LocalWorkMsg(void* impl_msg, void* impl_obj_void)
{
  WorkDistrib* impl_obj = static_cast<WorkDistrib*>(impl_obj_void);
  impl_obj->enqueueWorkB2((LocalWorkMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueWorkB3(LocalWorkMsg* impl_msg);
 */
void CProxy_WorkDistrib::enqueueWorkB3(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_enqueueWorkB3_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueWorkB3_LocalWorkMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::idx_enqueueWorkB3_LocalWorkMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::enqueueWorkB3(LocalWorkMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_enqueueWorkB3_LocalWorkMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::enqueueWorkB3(LocalWorkMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::idx_enqueueWorkB3_LocalWorkMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_WorkDistrib::reg_enqueueWorkB3_LocalWorkMsg() {
  int epidx = CkRegisterEp("enqueueWorkB3(LocalWorkMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_enqueueWorkB3_LocalWorkMsg), CMessage_LocalWorkMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)LocalWorkMsg::ckDebugPup);
  return epidx;
}

void CkIndex_WorkDistrib::_call_enqueueWorkB3_LocalWorkMsg(void* impl_msg, void* impl_obj_void)
{
  WorkDistrib* impl_obj = static_cast<WorkDistrib*>(impl_obj_void);
  impl_obj->enqueueWorkB3((LocalWorkMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueWorkC(LocalWorkMsg* impl_msg);
 */
void CProxy_WorkDistrib::enqueueWorkC(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_enqueueWorkC_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueWorkC_LocalWorkMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::idx_enqueueWorkC_LocalWorkMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::enqueueWorkC(LocalWorkMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_enqueueWorkC_LocalWorkMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::enqueueWorkC(LocalWorkMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::idx_enqueueWorkC_LocalWorkMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_WorkDistrib::reg_enqueueWorkC_LocalWorkMsg() {
  int epidx = CkRegisterEp("enqueueWorkC(LocalWorkMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_enqueueWorkC_LocalWorkMsg), CMessage_LocalWorkMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)LocalWorkMsg::ckDebugPup);
  return epidx;
}

void CkIndex_WorkDistrib::_call_enqueueWorkC_LocalWorkMsg(void* impl_msg, void* impl_obj_void)
{
  WorkDistrib* impl_obj = static_cast<WorkDistrib*>(impl_obj_void);
  impl_obj->enqueueWorkC((LocalWorkMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueLCPO(LocalWorkMsg* impl_msg);
 */
void CProxy_WorkDistrib::enqueueLCPO(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_enqueueLCPO_LocalWorkMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueLCPO_LocalWorkMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::idx_enqueueLCPO_LocalWorkMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::enqueueLCPO(LocalWorkMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_enqueueLCPO_LocalWorkMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::enqueueLCPO(LocalWorkMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::idx_enqueueLCPO_LocalWorkMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_WorkDistrib::reg_enqueueLCPO_LocalWorkMsg() {
  int epidx = CkRegisterEp("enqueueLCPO(LocalWorkMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_enqueueLCPO_LocalWorkMsg), CMessage_LocalWorkMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)LocalWorkMsg::ckDebugPup);
  return epidx;
}

void CkIndex_WorkDistrib::_call_enqueueLCPO_LocalWorkMsg(void* impl_msg, void* impl_obj_void)
{
  WorkDistrib* impl_obj = static_cast<WorkDistrib*>(impl_obj_void);
  impl_obj->enqueueLCPO((LocalWorkMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initHostDeviceLDB();
 */
void CProxy_WorkDistrib::initHostDeviceLDB(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_initHostDeviceLDB_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_initHostDeviceLDB_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::idx_initHostDeviceLDB_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::initHostDeviceLDB(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_initHostDeviceLDB_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::initHostDeviceLDB(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::idx_initHostDeviceLDB_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_WorkDistrib::reg_initHostDeviceLDB_void() {
  int epidx = CkRegisterEp("initHostDeviceLDB()",
      reinterpret_cast<CkCallFnPtr>(_call_initHostDeviceLDB_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_WorkDistrib::_call_initHostDeviceLDB_void(void* impl_msg, void* impl_obj_void)
{
  WorkDistrib* impl_obj = static_cast<WorkDistrib*>(impl_obj_void);
  impl_obj->initHostDeviceLDB();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_WorkDistrib::initHostDeviceLDB_40_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void contributeHostDeviceLDB(int peSetLen, const int *peSet);
 */
void CProxy_WorkDistrib::contributeHostDeviceLDB(int peSetLen, const int *peSet, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int peSetLen, const int *peSet
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_peSet, impl_cnt_peSet;
  impl_off_peSet=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_peSet=sizeof(int)*(peSetLen));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|peSetLen;
    implP|impl_off_peSet;
    implP|impl_cnt_peSet;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|peSetLen;
    implP|impl_off_peSet;
    implP|impl_cnt_peSet;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_peSet,peSet,impl_cnt_peSet);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_contributeHostDeviceLDB_marshall41(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_contributeHostDeviceLDB_marshall41(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::idx_contributeHostDeviceLDB_marshall41(), impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::contributeHostDeviceLDB(int peSetLen, const int *peSet, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int peSetLen, const int *peSet
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_peSet, impl_cnt_peSet;
  impl_off_peSet=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_peSet=sizeof(int)*(peSetLen));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|peSetLen;
    implP|impl_off_peSet;
    implP|impl_cnt_peSet;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|peSetLen;
    implP|impl_off_peSet;
    implP|impl_cnt_peSet;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_peSet,peSet,impl_cnt_peSet);
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_contributeHostDeviceLDB_marshall41(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::contributeHostDeviceLDB(int peSetLen, const int *peSet, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int peSetLen, const int *peSet
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_peSet, impl_cnt_peSet;
  impl_off_peSet=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_peSet=sizeof(int)*(peSetLen));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|peSetLen;
    implP|impl_off_peSet;
    implP|impl_cnt_peSet;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|peSetLen;
    implP|impl_off_peSet;
    implP|impl_cnt_peSet;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_peSet,peSet,impl_cnt_peSet);
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::idx_contributeHostDeviceLDB_marshall41(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_WorkDistrib::reg_contributeHostDeviceLDB_marshall41() {
  int epidx = CkRegisterEp("contributeHostDeviceLDB(int peSetLen, const int *peSet)",
      reinterpret_cast<CkCallFnPtr>(_call_contributeHostDeviceLDB_marshall41), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_contributeHostDeviceLDB_marshall41);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_contributeHostDeviceLDB_marshall41);

  return epidx;
}

void CkIndex_WorkDistrib::_call_contributeHostDeviceLDB_marshall41(void* impl_msg, void* impl_obj_void)
{
  WorkDistrib* impl_obj = static_cast<WorkDistrib*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int peSetLen, const int *peSet*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> peSetLen;
  implP|peSetLen;
  int impl_off_peSet, impl_cnt_peSet;
  implP|impl_off_peSet;
  implP|impl_cnt_peSet;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *peSet=(int *)(impl_buf+impl_off_peSet);
  impl_obj->contributeHostDeviceLDB(std::move(peSetLen.t), peSet);
}
int CkIndex_WorkDistrib::_callmarshall_contributeHostDeviceLDB_marshall41(char* impl_buf, void* impl_obj_void) {
  WorkDistrib* impl_obj = static_cast<WorkDistrib*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int peSetLen, const int *peSet*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> peSetLen;
  implP|peSetLen;
  int impl_off_peSet, impl_cnt_peSet;
  implP|impl_off_peSet;
  implP|impl_cnt_peSet;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *peSet=(int *)(impl_buf+impl_off_peSet);
  impl_obj->contributeHostDeviceLDB(std::move(peSetLen.t), peSet);
  return implP.size();
}
void CkIndex_WorkDistrib::_marshallmessagepup_contributeHostDeviceLDB_marshall41(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int peSetLen, const int *peSet*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> peSetLen;
  implP|peSetLen;
  int impl_off_peSet, impl_cnt_peSet;
  implP|impl_off_peSet;
  implP|impl_cnt_peSet;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *peSet=(int *)(impl_buf+impl_off_peSet);
  if (implDestP.hasComments()) implDestP.comment("peSetLen");
  implDestP|peSetLen;
  if (implDestP.hasComments()) implDestP.comment("peSet");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*peSet))<impl_cnt_peSet;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|peSet[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
}
PUPable_def(SINGLE_ARG(Closure_WorkDistrib::contributeHostDeviceLDB_41_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setDeviceLDBParams(int dt, int hs, int sp1, int pp1, int pp2);
 */
void CProxy_WorkDistrib::setDeviceLDBParams(int dt, int hs, int sp1, int pp1, int pp2, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int dt, int hs, int sp1, int pp1, int pp2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|dt;
    implP|hs;
    implP|sp1;
    implP|pp1;
    implP|pp2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|dt;
    implP|hs;
    implP|sp1;
    implP|pp1;
    implP|pp2;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_WorkDistrib::idx_setDeviceLDBParams_marshall42(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_setDeviceLDBParams_marshall42(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_WorkDistrib::idx_setDeviceLDBParams_marshall42(), impl_msg, ckGetGroupID(),0);
}
void CProxy_WorkDistrib::setDeviceLDBParams(int dt, int hs, int sp1, int pp1, int pp2, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int dt, int hs, int sp1, int pp1, int pp2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|dt;
    implP|hs;
    implP|sp1;
    implP|pp1;
    implP|pp2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|dt;
    implP|hs;
    implP|sp1;
    implP|pp1;
    implP|pp2;
  }
  CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_setDeviceLDBParams_marshall42(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_WorkDistrib::setDeviceLDBParams(int dt, int hs, int sp1, int pp1, int pp2, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int dt, int hs, int sp1, int pp1, int pp2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|dt;
    implP|hs;
    implP|sp1;
    implP|pp1;
    implP|pp2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|dt;
    implP|hs;
    implP|sp1;
    implP|pp1;
    implP|pp2;
  }
  CkSendMsgBranchGroup(CkIndex_WorkDistrib::idx_setDeviceLDBParams_marshall42(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_WorkDistrib::reg_setDeviceLDBParams_marshall42() {
  int epidx = CkRegisterEp("setDeviceLDBParams(int dt, int hs, int sp1, int pp1, int pp2)",
      reinterpret_cast<CkCallFnPtr>(_call_setDeviceLDBParams_marshall42), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_setDeviceLDBParams_marshall42);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_setDeviceLDBParams_marshall42);

  return epidx;
}

void CkIndex_WorkDistrib::_call_setDeviceLDBParams_marshall42(void* impl_msg, void* impl_obj_void)
{
  WorkDistrib* impl_obj = static_cast<WorkDistrib*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int dt, int hs, int sp1, int pp1, int pp2*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> dt;
  implP|dt;
  PUP::detail::TemporaryObjectHolder<int> hs;
  implP|hs;
  PUP::detail::TemporaryObjectHolder<int> sp1;
  implP|sp1;
  PUP::detail::TemporaryObjectHolder<int> pp1;
  implP|pp1;
  PUP::detail::TemporaryObjectHolder<int> pp2;
  implP|pp2;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->setDeviceLDBParams(std::move(dt.t), std::move(hs.t), std::move(sp1.t), std::move(pp1.t), std::move(pp2.t));
}
int CkIndex_WorkDistrib::_callmarshall_setDeviceLDBParams_marshall42(char* impl_buf, void* impl_obj_void) {
  WorkDistrib* impl_obj = static_cast<WorkDistrib*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int dt, int hs, int sp1, int pp1, int pp2*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> dt;
  implP|dt;
  PUP::detail::TemporaryObjectHolder<int> hs;
  implP|hs;
  PUP::detail::TemporaryObjectHolder<int> sp1;
  implP|sp1;
  PUP::detail::TemporaryObjectHolder<int> pp1;
  implP|pp1;
  PUP::detail::TemporaryObjectHolder<int> pp2;
  implP|pp2;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->setDeviceLDBParams(std::move(dt.t), std::move(hs.t), std::move(sp1.t), std::move(pp1.t), std::move(pp2.t));
  return implP.size();
}
void CkIndex_WorkDistrib::_marshallmessagepup_setDeviceLDBParams_marshall42(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int dt, int hs, int sp1, int pp1, int pp2*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> dt;
  implP|dt;
  PUP::detail::TemporaryObjectHolder<int> hs;
  implP|hs;
  PUP::detail::TemporaryObjectHolder<int> sp1;
  implP|sp1;
  PUP::detail::TemporaryObjectHolder<int> pp1;
  implP|pp1;
  PUP::detail::TemporaryObjectHolder<int> pp2;
  implP|pp2;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("dt");
  implDestP|dt;
  if (implDestP.hasComments()) implDestP.comment("hs");
  implDestP|hs;
  if (implDestP.hasComments()) implDestP.comment("sp1");
  implDestP|sp1;
  if (implDestP.hasComments()) implDestP.comment("pp1");
  implDestP|pp1;
  if (implDestP.hasComments()) implDestP.comment("pp2");
  implDestP|pp2;
}
PUPable_def(SINGLE_ARG(Closure_WorkDistrib::setDeviceLDBParams_42_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: WorkDistrib();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void peOrderingReady();
 */
void CProxySection_WorkDistrib::peOrderingReady(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_peOrderingReady_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_peOrderingReady_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void savePatchMap(PatchMapMsg* impl_msg);
 */
void CProxySection_WorkDistrib::savePatchMap(PatchMapMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_savePatchMap_PatchMapMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_savePatchMap_PatchMapMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvComputeMapChanges(ComputeMapChangeMsg* impl_msg);
 */
void CProxySection_WorkDistrib::recvComputeMapChanges(ComputeMapChangeMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_recvComputeMapChanges_ComputeMapChangeMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_recvComputeMapChanges_ComputeMapChangeMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void doneSaveComputeMap(CkReductionMsg* impl_msg);
 */
void CProxySection_WorkDistrib::doneSaveComputeMap(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_doneSaveComputeMap_CkReductionMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_doneSaveComputeMap_CkReductionMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueWork(LocalWorkMsg* impl_msg);
 */
void CProxySection_WorkDistrib::enqueueWork(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueWork_LocalWorkMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_enqueueWork_LocalWorkMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueExcls(LocalWorkMsg* impl_msg);
 */
void CProxySection_WorkDistrib::enqueueExcls(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueExcls_LocalWorkMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_enqueueExcls_LocalWorkMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueBonds(LocalWorkMsg* impl_msg);
 */
void CProxySection_WorkDistrib::enqueueBonds(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueBonds_LocalWorkMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_enqueueBonds_LocalWorkMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueAngles(LocalWorkMsg* impl_msg);
 */
void CProxySection_WorkDistrib::enqueueAngles(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueAngles_LocalWorkMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_enqueueAngles_LocalWorkMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueDihedrals(LocalWorkMsg* impl_msg);
 */
void CProxySection_WorkDistrib::enqueueDihedrals(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueDihedrals_LocalWorkMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_enqueueDihedrals_LocalWorkMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueImpropers(LocalWorkMsg* impl_msg);
 */
void CProxySection_WorkDistrib::enqueueImpropers(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueImpropers_LocalWorkMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_enqueueImpropers_LocalWorkMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueThole(LocalWorkMsg* impl_msg);
 */
void CProxySection_WorkDistrib::enqueueThole(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueThole_LocalWorkMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_enqueueThole_LocalWorkMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueAniso(LocalWorkMsg* impl_msg);
 */
void CProxySection_WorkDistrib::enqueueAniso(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueAniso_LocalWorkMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_enqueueAniso_LocalWorkMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueCrossterms(LocalWorkMsg* impl_msg);
 */
void CProxySection_WorkDistrib::enqueueCrossterms(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueCrossterms_LocalWorkMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_enqueueCrossterms_LocalWorkMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueGromacsPair(LocalWorkMsg* impl_msg);
 */
void CProxySection_WorkDistrib::enqueueGromacsPair(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueGromacsPair_LocalWorkMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_enqueueGromacsPair_LocalWorkMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueCUDA(LocalWorkMsg* impl_msg);
 */
void CProxySection_WorkDistrib::enqueueCUDA(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueCUDA_LocalWorkMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_enqueueCUDA_LocalWorkMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueCUDAP2(LocalWorkMsg* impl_msg);
 */
void CProxySection_WorkDistrib::enqueueCUDAP2(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueCUDAP2_LocalWorkMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_enqueueCUDAP2_LocalWorkMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueCUDAP3(LocalWorkMsg* impl_msg);
 */
void CProxySection_WorkDistrib::enqueueCUDAP3(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueCUDAP3_LocalWorkMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_enqueueCUDAP3_LocalWorkMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finishCUDAPatch(FinishWorkMsg* impl_msg);
 */
void CProxySection_WorkDistrib::finishCUDAPatch(FinishWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_finishCUDAPatch_FinishWorkMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_finishCUDAPatch_FinishWorkMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finishCUDA(LocalWorkMsg* impl_msg);
 */
void CProxySection_WorkDistrib::finishCUDA(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_finishCUDA_LocalWorkMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_finishCUDA_LocalWorkMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finishCUDAP2(LocalWorkMsg* impl_msg);
 */
void CProxySection_WorkDistrib::finishCUDAP2(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_finishCUDAP2_LocalWorkMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_finishCUDAP2_LocalWorkMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finishCUDAP3(LocalWorkMsg* impl_msg);
 */
void CProxySection_WorkDistrib::finishCUDAP3(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_finishCUDAP3_LocalWorkMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_finishCUDAP3_LocalWorkMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueMIC(LocalWorkMsg* impl_msg);
 */
void CProxySection_WorkDistrib::enqueueMIC(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueMIC_LocalWorkMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_enqueueMIC_LocalWorkMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finishMIC(LocalWorkMsg* impl_msg);
 */
void CProxySection_WorkDistrib::finishMIC(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_finishMIC_LocalWorkMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_finishMIC_LocalWorkMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueuePme(LocalWorkMsg* impl_msg);
 */
void CProxySection_WorkDistrib::enqueuePme(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueuePme_LocalWorkMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_enqueuePme_LocalWorkMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueSelfA1(LocalWorkMsg* impl_msg);
 */
void CProxySection_WorkDistrib::enqueueSelfA1(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueSelfA1_LocalWorkMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_enqueueSelfA1_LocalWorkMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueSelfA2(LocalWorkMsg* impl_msg);
 */
void CProxySection_WorkDistrib::enqueueSelfA2(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueSelfA2_LocalWorkMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_enqueueSelfA2_LocalWorkMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueSelfA3(LocalWorkMsg* impl_msg);
 */
void CProxySection_WorkDistrib::enqueueSelfA3(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueSelfA3_LocalWorkMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_enqueueSelfA3_LocalWorkMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueSelfB1(LocalWorkMsg* impl_msg);
 */
void CProxySection_WorkDistrib::enqueueSelfB1(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueSelfB1_LocalWorkMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_enqueueSelfB1_LocalWorkMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueSelfB2(LocalWorkMsg* impl_msg);
 */
void CProxySection_WorkDistrib::enqueueSelfB2(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueSelfB2_LocalWorkMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_enqueueSelfB2_LocalWorkMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueSelfB3(LocalWorkMsg* impl_msg);
 */
void CProxySection_WorkDistrib::enqueueSelfB3(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueSelfB3_LocalWorkMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_enqueueSelfB3_LocalWorkMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueWorkA1(LocalWorkMsg* impl_msg);
 */
void CProxySection_WorkDistrib::enqueueWorkA1(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueWorkA1_LocalWorkMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_enqueueWorkA1_LocalWorkMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueWorkA2(LocalWorkMsg* impl_msg);
 */
void CProxySection_WorkDistrib::enqueueWorkA2(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueWorkA2_LocalWorkMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_enqueueWorkA2_LocalWorkMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueWorkA3(LocalWorkMsg* impl_msg);
 */
void CProxySection_WorkDistrib::enqueueWorkA3(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueWorkA3_LocalWorkMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_enqueueWorkA3_LocalWorkMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueWorkB1(LocalWorkMsg* impl_msg);
 */
void CProxySection_WorkDistrib::enqueueWorkB1(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueWorkB1_LocalWorkMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_enqueueWorkB1_LocalWorkMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueWorkB2(LocalWorkMsg* impl_msg);
 */
void CProxySection_WorkDistrib::enqueueWorkB2(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueWorkB2_LocalWorkMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_enqueueWorkB2_LocalWorkMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueWorkB3(LocalWorkMsg* impl_msg);
 */
void CProxySection_WorkDistrib::enqueueWorkB3(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueWorkB3_LocalWorkMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_enqueueWorkB3_LocalWorkMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueWorkC(LocalWorkMsg* impl_msg);
 */
void CProxySection_WorkDistrib::enqueueWorkC(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueWorkC_LocalWorkMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_enqueueWorkC_LocalWorkMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void enqueueLCPO(LocalWorkMsg* impl_msg);
 */
void CProxySection_WorkDistrib::enqueueLCPO(LocalWorkMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_enqueueLCPO_LocalWorkMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_enqueueLCPO_LocalWorkMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initHostDeviceLDB();
 */
void CProxySection_WorkDistrib::initHostDeviceLDB(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_initHostDeviceLDB_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_initHostDeviceLDB_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void contributeHostDeviceLDB(int peSetLen, const int *peSet);
 */
void CProxySection_WorkDistrib::contributeHostDeviceLDB(int peSetLen, const int *peSet, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int peSetLen, const int *peSet
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_peSet, impl_cnt_peSet;
  impl_off_peSet=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_peSet=sizeof(int)*(peSetLen));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|peSetLen;
    implP|impl_off_peSet;
    implP|impl_cnt_peSet;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|peSetLen;
    implP|impl_off_peSet;
    implP|impl_cnt_peSet;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_peSet,peSet,impl_cnt_peSet);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_contributeHostDeviceLDB_marshall41(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_contributeHostDeviceLDB_marshall41(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setDeviceLDBParams(int dt, int hs, int sp1, int pp1, int pp2);
 */
void CProxySection_WorkDistrib::setDeviceLDBParams(int dt, int hs, int sp1, int pp1, int pp2, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int dt, int hs, int sp1, int pp1, int pp2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|dt;
    implP|hs;
    implP|sp1;
    implP|pp1;
    implP|pp2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|dt;
    implP|hs;
    implP|sp1;
    implP|pp1;
    implP|pp2;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_WorkDistrib::idx_setDeviceLDBParams_marshall42(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_WorkDistrib::idx_setDeviceLDBParams_marshall42(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_WorkDistrib::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,WorkDistrib::isIrreducible());
  // REG: WorkDistrib();
  idx_WorkDistrib_void();
  CkRegisterDefaultCtor(__idx, idx_WorkDistrib_void());

  // REG: void peOrderingReady();
  idx_peOrderingReady_void();

  // REG: void savePatchMap(PatchMapMsg* impl_msg);
  idx_savePatchMap_PatchMapMsg();

  // REG: void recvComputeMapChanges(ComputeMapChangeMsg* impl_msg);
  idx_recvComputeMapChanges_ComputeMapChangeMsg();

  // REG: void doneSaveComputeMap(CkReductionMsg* impl_msg);
  idx_doneSaveComputeMap_CkReductionMsg();

  // REG: void enqueueWork(LocalWorkMsg* impl_msg);
  idx_enqueueWork_LocalWorkMsg();

  // REG: void enqueueExcls(LocalWorkMsg* impl_msg);
  idx_enqueueExcls_LocalWorkMsg();

  // REG: void enqueueBonds(LocalWorkMsg* impl_msg);
  idx_enqueueBonds_LocalWorkMsg();

  // REG: void enqueueAngles(LocalWorkMsg* impl_msg);
  idx_enqueueAngles_LocalWorkMsg();

  // REG: void enqueueDihedrals(LocalWorkMsg* impl_msg);
  idx_enqueueDihedrals_LocalWorkMsg();

  // REG: void enqueueImpropers(LocalWorkMsg* impl_msg);
  idx_enqueueImpropers_LocalWorkMsg();

  // REG: void enqueueThole(LocalWorkMsg* impl_msg);
  idx_enqueueThole_LocalWorkMsg();

  // REG: void enqueueAniso(LocalWorkMsg* impl_msg);
  idx_enqueueAniso_LocalWorkMsg();

  // REG: void enqueueCrossterms(LocalWorkMsg* impl_msg);
  idx_enqueueCrossterms_LocalWorkMsg();

  // REG: void enqueueGromacsPair(LocalWorkMsg* impl_msg);
  idx_enqueueGromacsPair_LocalWorkMsg();

  // REG: void enqueueCUDA(LocalWorkMsg* impl_msg);
  idx_enqueueCUDA_LocalWorkMsg();

  // REG: void enqueueCUDAP2(LocalWorkMsg* impl_msg);
  idx_enqueueCUDAP2_LocalWorkMsg();

  // REG: void enqueueCUDAP3(LocalWorkMsg* impl_msg);
  idx_enqueueCUDAP3_LocalWorkMsg();

  // REG: void finishCUDAPatch(FinishWorkMsg* impl_msg);
  idx_finishCUDAPatch_FinishWorkMsg();

  // REG: void finishCUDA(LocalWorkMsg* impl_msg);
  idx_finishCUDA_LocalWorkMsg();

  // REG: void finishCUDAP2(LocalWorkMsg* impl_msg);
  idx_finishCUDAP2_LocalWorkMsg();

  // REG: void finishCUDAP3(LocalWorkMsg* impl_msg);
  idx_finishCUDAP3_LocalWorkMsg();

  // REG: void enqueueMIC(LocalWorkMsg* impl_msg);
  idx_enqueueMIC_LocalWorkMsg();

  // REG: void finishMIC(LocalWorkMsg* impl_msg);
  idx_finishMIC_LocalWorkMsg();

  // REG: void enqueuePme(LocalWorkMsg* impl_msg);
  idx_enqueuePme_LocalWorkMsg();

  // REG: void enqueueSelfA1(LocalWorkMsg* impl_msg);
  idx_enqueueSelfA1_LocalWorkMsg();

  // REG: void enqueueSelfA2(LocalWorkMsg* impl_msg);
  idx_enqueueSelfA2_LocalWorkMsg();

  // REG: void enqueueSelfA3(LocalWorkMsg* impl_msg);
  idx_enqueueSelfA3_LocalWorkMsg();

  // REG: void enqueueSelfB1(LocalWorkMsg* impl_msg);
  idx_enqueueSelfB1_LocalWorkMsg();

  // REG: void enqueueSelfB2(LocalWorkMsg* impl_msg);
  idx_enqueueSelfB2_LocalWorkMsg();

  // REG: void enqueueSelfB3(LocalWorkMsg* impl_msg);
  idx_enqueueSelfB3_LocalWorkMsg();

  // REG: void enqueueWorkA1(LocalWorkMsg* impl_msg);
  idx_enqueueWorkA1_LocalWorkMsg();

  // REG: void enqueueWorkA2(LocalWorkMsg* impl_msg);
  idx_enqueueWorkA2_LocalWorkMsg();

  // REG: void enqueueWorkA3(LocalWorkMsg* impl_msg);
  idx_enqueueWorkA3_LocalWorkMsg();

  // REG: void enqueueWorkB1(LocalWorkMsg* impl_msg);
  idx_enqueueWorkB1_LocalWorkMsg();

  // REG: void enqueueWorkB2(LocalWorkMsg* impl_msg);
  idx_enqueueWorkB2_LocalWorkMsg();

  // REG: void enqueueWorkB3(LocalWorkMsg* impl_msg);
  idx_enqueueWorkB3_LocalWorkMsg();

  // REG: void enqueueWorkC(LocalWorkMsg* impl_msg);
  idx_enqueueWorkC_LocalWorkMsg();

  // REG: void enqueueLCPO(LocalWorkMsg* impl_msg);
  idx_enqueueLCPO_LocalWorkMsg();

  // REG: void initHostDeviceLDB();
  idx_initHostDeviceLDB_void();

  // REG: void contributeHostDeviceLDB(int peSetLen, const int *peSet);
  idx_contributeHostDeviceLDB_marshall41();

  // REG: void setDeviceLDBParams(int dt, int hs, int sp1, int pp1, int pp2);
  idx_setDeviceLDBParams_marshall42();

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerWorkDistrib(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: message LocalWorkMsg;
*/
CMessage_LocalWorkMsg::__register("LocalWorkMsg", sizeof(LocalWorkMsg),(CkPackFnPtr) LocalWorkMsg::pack,(CkUnpackFnPtr) LocalWorkMsg::unpack);

/* REG: message FinishWorkMsg;
*/
CMessage_FinishWorkMsg::__register("FinishWorkMsg", sizeof(FinishWorkMsg),(CkPackFnPtr) FinishWorkMsg::pack,(CkUnpackFnPtr) FinishWorkMsg::unpack);

/* REG: message ComputeMapChangeMsg{
int newNodes[];
char newNumPartitions[];
}
;
*/
CMessage_ComputeMapChangeMsg::__register("ComputeMapChangeMsg", sizeof(ComputeMapChangeMsg),(CkPackFnPtr) ComputeMapChangeMsg::pack,(CkUnpackFnPtr) ComputeMapChangeMsg::unpack);

/* REG: message PatchMapMsg{
char patchMapData[];
}
;
*/
CMessage_PatchMapMsg::__register("PatchMapMsg", sizeof(PatchMapMsg),(CkPackFnPtr) PatchMapMsg::pack,(CkUnpackFnPtr) PatchMapMsg::unpack);

/* REG: group WorkDistrib: IrrGroup{
WorkDistrib();
void peOrderingReady();
void savePatchMap(PatchMapMsg* impl_msg);
void recvComputeMapChanges(ComputeMapChangeMsg* impl_msg);
void doneSaveComputeMap(CkReductionMsg* impl_msg);
void enqueueWork(LocalWorkMsg* impl_msg);
void enqueueExcls(LocalWorkMsg* impl_msg);
void enqueueBonds(LocalWorkMsg* impl_msg);
void enqueueAngles(LocalWorkMsg* impl_msg);
void enqueueDihedrals(LocalWorkMsg* impl_msg);
void enqueueImpropers(LocalWorkMsg* impl_msg);
void enqueueThole(LocalWorkMsg* impl_msg);
void enqueueAniso(LocalWorkMsg* impl_msg);
void enqueueCrossterms(LocalWorkMsg* impl_msg);
void enqueueGromacsPair(LocalWorkMsg* impl_msg);
void enqueueCUDA(LocalWorkMsg* impl_msg);
void enqueueCUDAP2(LocalWorkMsg* impl_msg);
void enqueueCUDAP3(LocalWorkMsg* impl_msg);
void finishCUDAPatch(FinishWorkMsg* impl_msg);
void finishCUDA(LocalWorkMsg* impl_msg);
void finishCUDAP2(LocalWorkMsg* impl_msg);
void finishCUDAP3(LocalWorkMsg* impl_msg);
void enqueueMIC(LocalWorkMsg* impl_msg);
void finishMIC(LocalWorkMsg* impl_msg);
void enqueuePme(LocalWorkMsg* impl_msg);
void enqueueSelfA1(LocalWorkMsg* impl_msg);
void enqueueSelfA2(LocalWorkMsg* impl_msg);
void enqueueSelfA3(LocalWorkMsg* impl_msg);
void enqueueSelfB1(LocalWorkMsg* impl_msg);
void enqueueSelfB2(LocalWorkMsg* impl_msg);
void enqueueSelfB3(LocalWorkMsg* impl_msg);
void enqueueWorkA1(LocalWorkMsg* impl_msg);
void enqueueWorkA2(LocalWorkMsg* impl_msg);
void enqueueWorkA3(LocalWorkMsg* impl_msg);
void enqueueWorkB1(LocalWorkMsg* impl_msg);
void enqueueWorkB2(LocalWorkMsg* impl_msg);
void enqueueWorkB3(LocalWorkMsg* impl_msg);
void enqueueWorkC(LocalWorkMsg* impl_msg);
void enqueueLCPO(LocalWorkMsg* impl_msg);
void initHostDeviceLDB();
void contributeHostDeviceLDB(int peSetLen, const int *peSet);
void setDeviceLDBParams(int dt, int hs, int sp1, int pp1, int pp2);
};
*/
  CkIndex_WorkDistrib::__register("WorkDistrib", sizeof(WorkDistrib));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_WorkDistrib::virtual_pup(PUP::er &p) {
    recursive_pup<WorkDistrib>(dynamic_cast<WorkDistrib*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
