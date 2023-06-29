

/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: message ReductionRegisterMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_ReductionRegisterMsg::operator new(size_t s){
  return ReductionRegisterMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_ReductionRegisterMsg::operator new(size_t s, int* sz){
  return ReductionRegisterMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_ReductionRegisterMsg::operator new(size_t s, int* sz,const int pb){
  return ReductionRegisterMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_ReductionRegisterMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return ReductionRegisterMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_ReductionRegisterMsg::operator new(size_t s, const int p) {
  return ReductionRegisterMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_ReductionRegisterMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return ReductionRegisterMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_ReductionRegisterMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_ReductionRegisterMsg::CMessage_ReductionRegisterMsg() {
ReductionRegisterMsg *newmsg = (ReductionRegisterMsg *)this;
}
void CMessage_ReductionRegisterMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_ReductionRegisterMsg::pack(ReductionRegisterMsg *msg) {
  return (void *) msg;
}
ReductionRegisterMsg* CMessage_ReductionRegisterMsg::unpack(void* buf) {
  ReductionRegisterMsg *msg = (ReductionRegisterMsg *) buf;
  return msg;
}
int CMessage_ReductionRegisterMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message ReductionSubmitMsg{
BigReal data[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_ReductionSubmitMsg::operator new(size_t s){
  return ReductionSubmitMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_ReductionSubmitMsg::operator new(size_t s, int* sz){
  return ReductionSubmitMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_ReductionSubmitMsg::operator new(size_t s, int* sz,const int pb){
  return ReductionSubmitMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_ReductionSubmitMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return ReductionSubmitMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_ReductionSubmitMsg::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return ReductionSubmitMsg::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_ReductionSubmitMsg::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return ReductionSubmitMsg::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_ReductionSubmitMsg::operator new(size_t s, int sz0, const int p, const GroupDepNum groupDepNum) {
  int sizes[1];
  sizes[0] = sz0;
  return ReductionSubmitMsg::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_ReductionSubmitMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(BigReal)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb, groupDepNum);
}
CMessage_ReductionSubmitMsg::CMessage_ReductionSubmitMsg() {
ReductionSubmitMsg *newmsg = (ReductionSubmitMsg *)this;
  newmsg->data = (BigReal *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
void CMessage_ReductionSubmitMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_ReductionSubmitMsg::pack(ReductionSubmitMsg *msg) {
  msg->data = (BigReal *) ((char *)msg->data - (char *)msg);
  return (void *) msg;
}
ReductionSubmitMsg* CMessage_ReductionSubmitMsg::unpack(void* buf) {
  ReductionSubmitMsg *msg = (ReductionSubmitMsg *) buf;
  msg->data = (BigReal *) ((size_t)msg->data + (char *)msg);
  return msg;
}
int CMessage_ReductionSubmitMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group ReductionMgr: IrrGroup{
ReductionMgr();
void remoteRegister(ReductionRegisterMsg* impl_msg);
void remoteUnregister(ReductionRegisterMsg* impl_msg);
void remoteSubmit(ReductionSubmitMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_ReductionMgr::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: ReductionMgr();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void remoteRegister(ReductionRegisterMsg* impl_msg);
 */
void CProxyElement_ReductionMgr::remoteRegister(ReductionRegisterMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ReductionMgr::idx_remoteRegister_ReductionRegisterMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ReductionMgr::idx_remoteRegister_ReductionRegisterMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ReductionMgr::idx_remoteRegister_ReductionRegisterMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void remoteUnregister(ReductionRegisterMsg* impl_msg);
 */
void CProxyElement_ReductionMgr::remoteUnregister(ReductionRegisterMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ReductionMgr::idx_remoteUnregister_ReductionRegisterMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ReductionMgr::idx_remoteUnregister_ReductionRegisterMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ReductionMgr::idx_remoteUnregister_ReductionRegisterMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void remoteSubmit(ReductionSubmitMsg* impl_msg);
 */
void CProxyElement_ReductionMgr::remoteSubmit(ReductionSubmitMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ReductionMgr::idx_remoteSubmit_ReductionSubmitMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ReductionMgr::idx_remoteSubmit_ReductionSubmitMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ReductionMgr::idx_remoteSubmit_ReductionSubmitMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ReductionMgr();
 */
CkGroupID CProxy_ReductionMgr::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_ReductionMgr::__idx, CkIndex_ReductionMgr::idx_ReductionMgr_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_ReductionMgr::reg_ReductionMgr_void() {
  int epidx = CkRegisterEp("ReductionMgr()",
      reinterpret_cast<CkCallFnPtr>(_call_ReductionMgr_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_ReductionMgr::_call_ReductionMgr_void(void* impl_msg, void* impl_obj_void)
{
  ReductionMgr* impl_obj = static_cast<ReductionMgr*>(impl_obj_void);
  new (impl_obj_void) ReductionMgr();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void remoteRegister(ReductionRegisterMsg* impl_msg);
 */
void CProxy_ReductionMgr::remoteRegister(ReductionRegisterMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ReductionMgr::idx_remoteRegister_ReductionRegisterMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ReductionMgr::idx_remoteRegister_ReductionRegisterMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ReductionMgr::idx_remoteRegister_ReductionRegisterMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ReductionMgr::remoteRegister(ReductionRegisterMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ReductionMgr::idx_remoteRegister_ReductionRegisterMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ReductionMgr::remoteRegister(ReductionRegisterMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ReductionMgr::idx_remoteRegister_ReductionRegisterMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ReductionMgr::reg_remoteRegister_ReductionRegisterMsg() {
  int epidx = CkRegisterEp("remoteRegister(ReductionRegisterMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_remoteRegister_ReductionRegisterMsg), CMessage_ReductionRegisterMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)ReductionRegisterMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ReductionMgr::_call_remoteRegister_ReductionRegisterMsg(void* impl_msg, void* impl_obj_void)
{
  ReductionMgr* impl_obj = static_cast<ReductionMgr*>(impl_obj_void);
  impl_obj->remoteRegister((ReductionRegisterMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void remoteUnregister(ReductionRegisterMsg* impl_msg);
 */
void CProxy_ReductionMgr::remoteUnregister(ReductionRegisterMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ReductionMgr::idx_remoteUnregister_ReductionRegisterMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ReductionMgr::idx_remoteUnregister_ReductionRegisterMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ReductionMgr::idx_remoteUnregister_ReductionRegisterMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ReductionMgr::remoteUnregister(ReductionRegisterMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ReductionMgr::idx_remoteUnregister_ReductionRegisterMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ReductionMgr::remoteUnregister(ReductionRegisterMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ReductionMgr::idx_remoteUnregister_ReductionRegisterMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ReductionMgr::reg_remoteUnregister_ReductionRegisterMsg() {
  int epidx = CkRegisterEp("remoteUnregister(ReductionRegisterMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_remoteUnregister_ReductionRegisterMsg), CMessage_ReductionRegisterMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)ReductionRegisterMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ReductionMgr::_call_remoteUnregister_ReductionRegisterMsg(void* impl_msg, void* impl_obj_void)
{
  ReductionMgr* impl_obj = static_cast<ReductionMgr*>(impl_obj_void);
  impl_obj->remoteUnregister((ReductionRegisterMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void remoteSubmit(ReductionSubmitMsg* impl_msg);
 */
void CProxy_ReductionMgr::remoteSubmit(ReductionSubmitMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ReductionMgr::idx_remoteSubmit_ReductionSubmitMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ReductionMgr::idx_remoteSubmit_ReductionSubmitMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ReductionMgr::idx_remoteSubmit_ReductionSubmitMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ReductionMgr::remoteSubmit(ReductionSubmitMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ReductionMgr::idx_remoteSubmit_ReductionSubmitMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ReductionMgr::remoteSubmit(ReductionSubmitMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ReductionMgr::idx_remoteSubmit_ReductionSubmitMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ReductionMgr::reg_remoteSubmit_ReductionSubmitMsg() {
  int epidx = CkRegisterEp("remoteSubmit(ReductionSubmitMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_remoteSubmit_ReductionSubmitMsg), CMessage_ReductionSubmitMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)ReductionSubmitMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ReductionMgr::_call_remoteSubmit_ReductionSubmitMsg(void* impl_msg, void* impl_obj_void)
{
  ReductionMgr* impl_obj = static_cast<ReductionMgr*>(impl_obj_void);
  impl_obj->remoteSubmit((ReductionSubmitMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ReductionMgr();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void remoteRegister(ReductionRegisterMsg* impl_msg);
 */
void CProxySection_ReductionMgr::remoteRegister(ReductionRegisterMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ReductionMgr::idx_remoteRegister_ReductionRegisterMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ReductionMgr::idx_remoteRegister_ReductionRegisterMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void remoteUnregister(ReductionRegisterMsg* impl_msg);
 */
void CProxySection_ReductionMgr::remoteUnregister(ReductionRegisterMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ReductionMgr::idx_remoteUnregister_ReductionRegisterMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ReductionMgr::idx_remoteUnregister_ReductionRegisterMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void remoteSubmit(ReductionSubmitMsg* impl_msg);
 */
void CProxySection_ReductionMgr::remoteSubmit(ReductionSubmitMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ReductionMgr::idx_remoteSubmit_ReductionSubmitMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ReductionMgr::idx_remoteSubmit_ReductionSubmitMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_ReductionMgr::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,ReductionMgr::isIrreducible());
  // REG: ReductionMgr();
  idx_ReductionMgr_void();
  CkRegisterDefaultCtor(__idx, idx_ReductionMgr_void());

  // REG: void remoteRegister(ReductionRegisterMsg* impl_msg);
  idx_remoteRegister_ReductionRegisterMsg();

  // REG: void remoteUnregister(ReductionRegisterMsg* impl_msg);
  idx_remoteUnregister_ReductionRegisterMsg();

  // REG: void remoteSubmit(ReductionSubmitMsg* impl_msg);
  idx_remoteSubmit_ReductionSubmitMsg();

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerReductionMgr(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: message ReductionRegisterMsg;
*/
CMessage_ReductionRegisterMsg::__register("ReductionRegisterMsg", sizeof(ReductionRegisterMsg),(CkPackFnPtr) ReductionRegisterMsg::pack,(CkUnpackFnPtr) ReductionRegisterMsg::unpack);

/* REG: message ReductionSubmitMsg{
BigReal data[];
}
;
*/
CMessage_ReductionSubmitMsg::__register("ReductionSubmitMsg", sizeof(ReductionSubmitMsg),(CkPackFnPtr) ReductionSubmitMsg::pack,(CkUnpackFnPtr) ReductionSubmitMsg::unpack);

/* REG: group ReductionMgr: IrrGroup{
ReductionMgr();
void remoteRegister(ReductionRegisterMsg* impl_msg);
void remoteUnregister(ReductionRegisterMsg* impl_msg);
void remoteSubmit(ReductionSubmitMsg* impl_msg);
};
*/
  CkIndex_ReductionMgr::__register("ReductionMgr", sizeof(ReductionMgr));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_ReductionMgr::virtual_pup(PUP::er &p) {
    recursive_pup<ReductionMgr>(dynamic_cast<ReductionMgr*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
