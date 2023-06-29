





/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_LdbCoordinator::barrier_2_closure : public SDAG::Closure {
      

      barrier_2_closure() {
        init();
      }
      barrier_2_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~barrier_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(barrier_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_LdbCoordinator::resume_4_closure : public SDAG::Closure {
      

      resume_4_closure() {
        init();
      }
      resume_4_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~resume_4_closure() {
      }
      PUPable_decl(SINGLE_ARG(resume_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_LdbCoordinator::resume2_6_closure : public SDAG::Closure {
      

      resume2_6_closure() {
        init();
      }
      resume2_6_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~resume2_6_closure() {
      }
      PUPable_decl(SINGLE_ARG(resume2_6_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_LdbCoordinator::updateComputesReady_9_closure : public SDAG::Closure {
      

      updateComputesReady_9_closure() {
        init();
      }
      updateComputesReady_9_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~updateComputesReady_9_closure() {
      }
      PUPable_decl(SINGLE_ARG(updateComputesReady_9_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */





/* DEFS: message LdbMigrateMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_LdbMigrateMsg::operator new(size_t s){
  return LdbMigrateMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_LdbMigrateMsg::operator new(size_t s, int* sz){
  return LdbMigrateMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_LdbMigrateMsg::operator new(size_t s, int* sz,const int pb){
  return LdbMigrateMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_LdbMigrateMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return LdbMigrateMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_LdbMigrateMsg::operator new(size_t s, const int p) {
  return LdbMigrateMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_LdbMigrateMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return LdbMigrateMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_LdbMigrateMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_LdbMigrateMsg::CMessage_LdbMigrateMsg() {
LdbMigrateMsg *newmsg = (LdbMigrateMsg *)this;
}
void CMessage_LdbMigrateMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_LdbMigrateMsg::pack(LdbMigrateMsg *msg) {
  return (void *) msg;
}
LdbMigrateMsg* CMessage_LdbMigrateMsg::unpack(void* buf) {
  LdbMigrateMsg *msg = (LdbMigrateMsg *) buf;
  return msg;
}
int CMessage_LdbMigrateMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message CollectLoadsMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_CollectLoadsMsg::operator new(size_t s){
  return CollectLoadsMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_CollectLoadsMsg::operator new(size_t s, int* sz){
  return CollectLoadsMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_CollectLoadsMsg::operator new(size_t s, int* sz,const int pb){
  return CollectLoadsMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_CollectLoadsMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return CollectLoadsMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_CollectLoadsMsg::operator new(size_t s, const int p) {
  return CollectLoadsMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_CollectLoadsMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return CollectLoadsMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_CollectLoadsMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_CollectLoadsMsg::CMessage_CollectLoadsMsg() {
CollectLoadsMsg *newmsg = (CollectLoadsMsg *)this;
}
void CMessage_CollectLoadsMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_CollectLoadsMsg::pack(CollectLoadsMsg *msg) {
  return (void *) msg;
}
CollectLoadsMsg* CMessage_CollectLoadsMsg::unpack(void* buf) {
  CollectLoadsMsg *msg = (CollectLoadsMsg *) buf;
  return msg;
}
int CMessage_CollectLoadsMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: group LdbCoordinator: IrrGroup{
LdbCoordinator();
void barrier();
void nodeDone(CkReductionMsg* impl_msg);
void resume();
void resumeReady(CkQdMsg* impl_msg);
void resume2();
void RecvMigrate(LdbMigrateMsg* impl_msg);
void ExpectMigrate(LdbMigrateMsg* impl_msg);
void updateComputesReady();
void collectLoads(CollectLoadsMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_LdbCoordinator::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: LdbCoordinator();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void barrier();
 */
void CProxyElement_LdbCoordinator::barrier(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LdbCoordinator::idx_barrier_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_LdbCoordinator::idx_barrier_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_LdbCoordinator::idx_barrier_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void nodeDone(CkReductionMsg* impl_msg);
 */
void CProxyElement_LdbCoordinator::nodeDone(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LdbCoordinator::idx_nodeDone_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_LdbCoordinator::idx_nodeDone_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_LdbCoordinator::idx_nodeDone_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void resume();
 */
void CProxyElement_LdbCoordinator::resume(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LdbCoordinator::idx_resume_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_LdbCoordinator::idx_resume_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_LdbCoordinator::idx_resume_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void resumeReady(CkQdMsg* impl_msg);
 */
void CProxyElement_LdbCoordinator::resumeReady(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LdbCoordinator::idx_resumeReady_CkQdMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_LdbCoordinator::idx_resumeReady_CkQdMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_LdbCoordinator::idx_resumeReady_CkQdMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void resume2();
 */
void CProxyElement_LdbCoordinator::resume2(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LdbCoordinator::idx_resume2_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_LdbCoordinator::idx_resume2_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_LdbCoordinator::idx_resume2_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void RecvMigrate(LdbMigrateMsg* impl_msg);
 */
void CProxyElement_LdbCoordinator::RecvMigrate(LdbMigrateMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LdbCoordinator::idx_RecvMigrate_LdbMigrateMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_LdbCoordinator::idx_RecvMigrate_LdbMigrateMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_LdbCoordinator::idx_RecvMigrate_LdbMigrateMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ExpectMigrate(LdbMigrateMsg* impl_msg);
 */
void CProxyElement_LdbCoordinator::ExpectMigrate(LdbMigrateMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LdbCoordinator::idx_ExpectMigrate_LdbMigrateMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_LdbCoordinator::idx_ExpectMigrate_LdbMigrateMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_LdbCoordinator::idx_ExpectMigrate_LdbMigrateMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void updateComputesReady();
 */
void CProxyElement_LdbCoordinator::updateComputesReady(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LdbCoordinator::idx_updateComputesReady_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_LdbCoordinator::idx_updateComputesReady_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_LdbCoordinator::idx_updateComputesReady_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void collectLoads(CollectLoadsMsg* impl_msg);
 */
void CProxyElement_LdbCoordinator::collectLoads(CollectLoadsMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LdbCoordinator::idx_collectLoads_CollectLoadsMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_LdbCoordinator::idx_collectLoads_CollectLoadsMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_LdbCoordinator::idx_collectLoads_CollectLoadsMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: LdbCoordinator();
 */
CkGroupID CProxy_LdbCoordinator::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_LdbCoordinator::__idx, CkIndex_LdbCoordinator::idx_LdbCoordinator_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_LdbCoordinator::reg_LdbCoordinator_void() {
  int epidx = CkRegisterEp("LdbCoordinator()",
      reinterpret_cast<CkCallFnPtr>(_call_LdbCoordinator_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_LdbCoordinator::_call_LdbCoordinator_void(void* impl_msg, void* impl_obj_void)
{
  LdbCoordinator* impl_obj = static_cast<LdbCoordinator*>(impl_obj_void);
  new (impl_obj_void) LdbCoordinator();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void barrier();
 */
void CProxy_LdbCoordinator::barrier(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LdbCoordinator::idx_barrier_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_LdbCoordinator::idx_barrier_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_LdbCoordinator::idx_barrier_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_LdbCoordinator::barrier(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_LdbCoordinator::idx_barrier_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_LdbCoordinator::barrier(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_LdbCoordinator::idx_barrier_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_LdbCoordinator::reg_barrier_void() {
  int epidx = CkRegisterEp("barrier()",
      reinterpret_cast<CkCallFnPtr>(_call_barrier_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_LdbCoordinator::_call_barrier_void(void* impl_msg, void* impl_obj_void)
{
  LdbCoordinator* impl_obj = static_cast<LdbCoordinator*>(impl_obj_void);
  impl_obj->barrier();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_LdbCoordinator::barrier_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void nodeDone(CkReductionMsg* impl_msg);
 */
void CProxy_LdbCoordinator::nodeDone(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LdbCoordinator::idx_nodeDone_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_LdbCoordinator::idx_nodeDone_CkReductionMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_LdbCoordinator::idx_nodeDone_CkReductionMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_LdbCoordinator::nodeDone(CkReductionMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_LdbCoordinator::idx_nodeDone_CkReductionMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_LdbCoordinator::nodeDone(CkReductionMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_LdbCoordinator::idx_nodeDone_CkReductionMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_LdbCoordinator::reg_nodeDone_CkReductionMsg() {
  int epidx = CkRegisterEp("nodeDone(CkReductionMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_nodeDone_CkReductionMsg), CMessage_CkReductionMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}

void CkIndex_LdbCoordinator::_call_nodeDone_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  LdbCoordinator* impl_obj = static_cast<LdbCoordinator*>(impl_obj_void);
  impl_obj->nodeDone((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void resume();
 */
void CProxy_LdbCoordinator::resume(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LdbCoordinator::idx_resume_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_LdbCoordinator::idx_resume_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_LdbCoordinator::idx_resume_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_LdbCoordinator::resume(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_LdbCoordinator::idx_resume_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_LdbCoordinator::resume(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_LdbCoordinator::idx_resume_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_LdbCoordinator::reg_resume_void() {
  int epidx = CkRegisterEp("resume()",
      reinterpret_cast<CkCallFnPtr>(_call_resume_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_LdbCoordinator::_call_resume_void(void* impl_msg, void* impl_obj_void)
{
  LdbCoordinator* impl_obj = static_cast<LdbCoordinator*>(impl_obj_void);
  impl_obj->resume();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_LdbCoordinator::resume_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void resumeReady(CkQdMsg* impl_msg);
 */
void CProxy_LdbCoordinator::resumeReady(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LdbCoordinator::idx_resumeReady_CkQdMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_LdbCoordinator::idx_resumeReady_CkQdMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_LdbCoordinator::idx_resumeReady_CkQdMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_LdbCoordinator::resumeReady(CkQdMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_LdbCoordinator::idx_resumeReady_CkQdMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_LdbCoordinator::resumeReady(CkQdMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_LdbCoordinator::idx_resumeReady_CkQdMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_LdbCoordinator::reg_resumeReady_CkQdMsg() {
  int epidx = CkRegisterEp("resumeReady(CkQdMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_resumeReady_CkQdMsg), CMessage_CkQdMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkQdMsg::ckDebugPup);
  return epidx;
}

void CkIndex_LdbCoordinator::_call_resumeReady_CkQdMsg(void* impl_msg, void* impl_obj_void)
{
  LdbCoordinator* impl_obj = static_cast<LdbCoordinator*>(impl_obj_void);
  impl_obj->resumeReady((CkQdMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void resume2();
 */
void CProxy_LdbCoordinator::resume2(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LdbCoordinator::idx_resume2_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_LdbCoordinator::idx_resume2_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_LdbCoordinator::idx_resume2_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_LdbCoordinator::resume2(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_LdbCoordinator::idx_resume2_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_LdbCoordinator::resume2(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_LdbCoordinator::idx_resume2_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_LdbCoordinator::reg_resume2_void() {
  int epidx = CkRegisterEp("resume2()",
      reinterpret_cast<CkCallFnPtr>(_call_resume2_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_LdbCoordinator::_call_resume2_void(void* impl_msg, void* impl_obj_void)
{
  LdbCoordinator* impl_obj = static_cast<LdbCoordinator*>(impl_obj_void);
  impl_obj->resume2();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_LdbCoordinator::resume2_6_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void RecvMigrate(LdbMigrateMsg* impl_msg);
 */
void CProxy_LdbCoordinator::RecvMigrate(LdbMigrateMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LdbCoordinator::idx_RecvMigrate_LdbMigrateMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_LdbCoordinator::idx_RecvMigrate_LdbMigrateMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_LdbCoordinator::idx_RecvMigrate_LdbMigrateMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_LdbCoordinator::RecvMigrate(LdbMigrateMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_LdbCoordinator::idx_RecvMigrate_LdbMigrateMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_LdbCoordinator::RecvMigrate(LdbMigrateMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_LdbCoordinator::idx_RecvMigrate_LdbMigrateMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_LdbCoordinator::reg_RecvMigrate_LdbMigrateMsg() {
  int epidx = CkRegisterEp("RecvMigrate(LdbMigrateMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_RecvMigrate_LdbMigrateMsg), CMessage_LdbMigrateMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)LdbMigrateMsg::ckDebugPup);
  return epidx;
}

void CkIndex_LdbCoordinator::_call_RecvMigrate_LdbMigrateMsg(void* impl_msg, void* impl_obj_void)
{
  LdbCoordinator* impl_obj = static_cast<LdbCoordinator*>(impl_obj_void);
  impl_obj->RecvMigrate((LdbMigrateMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ExpectMigrate(LdbMigrateMsg* impl_msg);
 */
void CProxy_LdbCoordinator::ExpectMigrate(LdbMigrateMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LdbCoordinator::idx_ExpectMigrate_LdbMigrateMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_LdbCoordinator::idx_ExpectMigrate_LdbMigrateMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_LdbCoordinator::idx_ExpectMigrate_LdbMigrateMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_LdbCoordinator::ExpectMigrate(LdbMigrateMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_LdbCoordinator::idx_ExpectMigrate_LdbMigrateMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_LdbCoordinator::ExpectMigrate(LdbMigrateMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_LdbCoordinator::idx_ExpectMigrate_LdbMigrateMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_LdbCoordinator::reg_ExpectMigrate_LdbMigrateMsg() {
  int epidx = CkRegisterEp("ExpectMigrate(LdbMigrateMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_ExpectMigrate_LdbMigrateMsg), CMessage_LdbMigrateMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)LdbMigrateMsg::ckDebugPup);
  return epidx;
}

void CkIndex_LdbCoordinator::_call_ExpectMigrate_LdbMigrateMsg(void* impl_msg, void* impl_obj_void)
{
  LdbCoordinator* impl_obj = static_cast<LdbCoordinator*>(impl_obj_void);
  impl_obj->ExpectMigrate((LdbMigrateMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void updateComputesReady();
 */
void CProxy_LdbCoordinator::updateComputesReady(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LdbCoordinator::idx_updateComputesReady_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_LdbCoordinator::idx_updateComputesReady_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_LdbCoordinator::idx_updateComputesReady_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_LdbCoordinator::updateComputesReady(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_LdbCoordinator::idx_updateComputesReady_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_LdbCoordinator::updateComputesReady(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_LdbCoordinator::idx_updateComputesReady_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_LdbCoordinator::reg_updateComputesReady_void() {
  int epidx = CkRegisterEp("updateComputesReady()",
      reinterpret_cast<CkCallFnPtr>(_call_updateComputesReady_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_LdbCoordinator::_call_updateComputesReady_void(void* impl_msg, void* impl_obj_void)
{
  LdbCoordinator* impl_obj = static_cast<LdbCoordinator*>(impl_obj_void);
  impl_obj->updateComputesReady();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_LdbCoordinator::updateComputesReady_9_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void collectLoads(CollectLoadsMsg* impl_msg);
 */
void CProxy_LdbCoordinator::collectLoads(CollectLoadsMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LdbCoordinator::idx_collectLoads_CollectLoadsMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_LdbCoordinator::idx_collectLoads_CollectLoadsMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_LdbCoordinator::idx_collectLoads_CollectLoadsMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_LdbCoordinator::collectLoads(CollectLoadsMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_LdbCoordinator::idx_collectLoads_CollectLoadsMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_LdbCoordinator::collectLoads(CollectLoadsMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_LdbCoordinator::idx_collectLoads_CollectLoadsMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_LdbCoordinator::reg_collectLoads_CollectLoadsMsg() {
  int epidx = CkRegisterEp("collectLoads(CollectLoadsMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_collectLoads_CollectLoadsMsg), CMessage_CollectLoadsMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CollectLoadsMsg::ckDebugPup);
  return epidx;
}

void CkIndex_LdbCoordinator::_call_collectLoads_CollectLoadsMsg(void* impl_msg, void* impl_obj_void)
{
  LdbCoordinator* impl_obj = static_cast<LdbCoordinator*>(impl_obj_void);
  impl_obj->collectLoads((CollectLoadsMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: LdbCoordinator();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void barrier();
 */
void CProxySection_LdbCoordinator::barrier(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_LdbCoordinator::idx_barrier_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_LdbCoordinator::idx_barrier_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void nodeDone(CkReductionMsg* impl_msg);
 */
void CProxySection_LdbCoordinator::nodeDone(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_LdbCoordinator::idx_nodeDone_CkReductionMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_LdbCoordinator::idx_nodeDone_CkReductionMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void resume();
 */
void CProxySection_LdbCoordinator::resume(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_LdbCoordinator::idx_resume_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_LdbCoordinator::idx_resume_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void resumeReady(CkQdMsg* impl_msg);
 */
void CProxySection_LdbCoordinator::resumeReady(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_LdbCoordinator::idx_resumeReady_CkQdMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_LdbCoordinator::idx_resumeReady_CkQdMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void resume2();
 */
void CProxySection_LdbCoordinator::resume2(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_LdbCoordinator::idx_resume2_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_LdbCoordinator::idx_resume2_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void RecvMigrate(LdbMigrateMsg* impl_msg);
 */
void CProxySection_LdbCoordinator::RecvMigrate(LdbMigrateMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_LdbCoordinator::idx_RecvMigrate_LdbMigrateMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_LdbCoordinator::idx_RecvMigrate_LdbMigrateMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ExpectMigrate(LdbMigrateMsg* impl_msg);
 */
void CProxySection_LdbCoordinator::ExpectMigrate(LdbMigrateMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_LdbCoordinator::idx_ExpectMigrate_LdbMigrateMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_LdbCoordinator::idx_ExpectMigrate_LdbMigrateMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void updateComputesReady();
 */
void CProxySection_LdbCoordinator::updateComputesReady(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_LdbCoordinator::idx_updateComputesReady_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_LdbCoordinator::idx_updateComputesReady_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void collectLoads(CollectLoadsMsg* impl_msg);
 */
void CProxySection_LdbCoordinator::collectLoads(CollectLoadsMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_LdbCoordinator::idx_collectLoads_CollectLoadsMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_LdbCoordinator::idx_collectLoads_CollectLoadsMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_LdbCoordinator::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,LdbCoordinator::isIrreducible());
  // REG: LdbCoordinator();
  idx_LdbCoordinator_void();
  CkRegisterDefaultCtor(__idx, idx_LdbCoordinator_void());

  // REG: void barrier();
  idx_barrier_void();

  // REG: void nodeDone(CkReductionMsg* impl_msg);
  idx_nodeDone_CkReductionMsg();

  // REG: void resume();
  idx_resume_void();

  // REG: void resumeReady(CkQdMsg* impl_msg);
  idx_resumeReady_CkQdMsg();

  // REG: void resume2();
  idx_resume2_void();

  // REG: void RecvMigrate(LdbMigrateMsg* impl_msg);
  idx_RecvMigrate_LdbMigrateMsg();

  // REG: void ExpectMigrate(LdbMigrateMsg* impl_msg);
  idx_ExpectMigrate_LdbMigrateMsg();

  // REG: void updateComputesReady();
  idx_updateComputesReady_void();

  // REG: void collectLoads(CollectLoadsMsg* impl_msg);
  idx_collectLoads_CollectLoadsMsg();

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerLdbCoordinator(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  _registerNamdCentLB();

  _registerNamdHybridLB();

  _registerNamdDummyLB();

/* REG: message LdbMigrateMsg;
*/
CMessage_LdbMigrateMsg::__register("LdbMigrateMsg", sizeof(LdbMigrateMsg),(CkPackFnPtr) LdbMigrateMsg::pack,(CkUnpackFnPtr) LdbMigrateMsg::unpack);

/* REG: message CollectLoadsMsg;
*/
CMessage_CollectLoadsMsg::__register("CollectLoadsMsg", sizeof(CollectLoadsMsg),(CkPackFnPtr) CollectLoadsMsg::pack,(CkUnpackFnPtr) CollectLoadsMsg::unpack);

  _registerInitCall(LdbCoordinator_initproc,0);

/* REG: group LdbCoordinator: IrrGroup{
LdbCoordinator();
void barrier();
void nodeDone(CkReductionMsg* impl_msg);
void resume();
void resumeReady(CkQdMsg* impl_msg);
void resume2();
void RecvMigrate(LdbMigrateMsg* impl_msg);
void ExpectMigrate(LdbMigrateMsg* impl_msg);
void updateComputesReady();
void collectLoads(CollectLoadsMsg* impl_msg);
};
*/
  CkIndex_LdbCoordinator::__register("LdbCoordinator", sizeof(LdbCoordinator));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_LdbCoordinator::virtual_pup(PUP::er &p) {
    recursive_pup<LdbCoordinator>(dynamic_cast<LdbCoordinator*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
