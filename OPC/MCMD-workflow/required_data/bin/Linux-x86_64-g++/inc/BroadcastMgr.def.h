
/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: message BroadcastMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_BroadcastMsg::operator new(size_t s){
  return BroadcastMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_BroadcastMsg::operator new(size_t s, int* sz){
  return BroadcastMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_BroadcastMsg::operator new(size_t s, int* sz,const int pb){
  return BroadcastMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_BroadcastMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return BroadcastMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_BroadcastMsg::operator new(size_t s, const int p) {
  return BroadcastMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_BroadcastMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return BroadcastMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_BroadcastMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_BroadcastMsg::CMessage_BroadcastMsg() {
BroadcastMsg *newmsg = (BroadcastMsg *)this;
}
void CMessage_BroadcastMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_BroadcastMsg::pack(BroadcastMsg *msg) {
  return (void *) msg;
}
BroadcastMsg* CMessage_BroadcastMsg::unpack(void* buf) {
  BroadcastMsg *msg = (BroadcastMsg *) buf;
  return msg;
}
int CMessage_BroadcastMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group BroadcastMgr: IrrGroup{
BroadcastMgr();
void recvBroadcast(BroadcastMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_BroadcastMgr::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: BroadcastMgr();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvBroadcast(BroadcastMsg* impl_msg);
 */
void CProxyElement_BroadcastMgr::recvBroadcast(BroadcastMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_BroadcastMgr::idx_recvBroadcast_BroadcastMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_BroadcastMgr::idx_recvBroadcast_BroadcastMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_BroadcastMgr::idx_recvBroadcast_BroadcastMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: BroadcastMgr();
 */
CkGroupID CProxy_BroadcastMgr::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_BroadcastMgr::__idx, CkIndex_BroadcastMgr::idx_BroadcastMgr_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_BroadcastMgr::reg_BroadcastMgr_void() {
  int epidx = CkRegisterEp("BroadcastMgr()",
      reinterpret_cast<CkCallFnPtr>(_call_BroadcastMgr_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_BroadcastMgr::_call_BroadcastMgr_void(void* impl_msg, void* impl_obj_void)
{
  BroadcastMgr* impl_obj = static_cast<BroadcastMgr*>(impl_obj_void);
  new (impl_obj_void) BroadcastMgr();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvBroadcast(BroadcastMsg* impl_msg);
 */
void CProxy_BroadcastMgr::recvBroadcast(BroadcastMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_BroadcastMgr::idx_recvBroadcast_BroadcastMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_BroadcastMgr::idx_recvBroadcast_BroadcastMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_BroadcastMgr::idx_recvBroadcast_BroadcastMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_BroadcastMgr::recvBroadcast(BroadcastMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_BroadcastMgr::idx_recvBroadcast_BroadcastMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_BroadcastMgr::recvBroadcast(BroadcastMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_BroadcastMgr::idx_recvBroadcast_BroadcastMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_BroadcastMgr::reg_recvBroadcast_BroadcastMsg() {
  int epidx = CkRegisterEp("recvBroadcast(BroadcastMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvBroadcast_BroadcastMsg), CMessage_BroadcastMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)BroadcastMsg::ckDebugPup);
  return epidx;
}

void CkIndex_BroadcastMgr::_call_recvBroadcast_BroadcastMsg(void* impl_msg, void* impl_obj_void)
{
  BroadcastMgr* impl_obj = static_cast<BroadcastMgr*>(impl_obj_void);
  impl_obj->recvBroadcast((BroadcastMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: BroadcastMgr();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvBroadcast(BroadcastMsg* impl_msg);
 */
void CProxySection_BroadcastMgr::recvBroadcast(BroadcastMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_BroadcastMgr::idx_recvBroadcast_BroadcastMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_BroadcastMgr::idx_recvBroadcast_BroadcastMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_BroadcastMgr::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,BroadcastMgr::isIrreducible());
  // REG: BroadcastMgr();
  idx_BroadcastMgr_void();
  CkRegisterDefaultCtor(__idx, idx_BroadcastMgr_void());

  // REG: void recvBroadcast(BroadcastMsg* impl_msg);
  idx_recvBroadcast_BroadcastMsg();

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerBroadcastMgr(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: message BroadcastMsg;
*/
CMessage_BroadcastMsg::__register("BroadcastMsg", sizeof(BroadcastMsg),(CkPackFnPtr) BroadcastMsg::pack,(CkUnpackFnPtr) BroadcastMsg::unpack);

/* REG: group BroadcastMgr: IrrGroup{
BroadcastMgr();
void recvBroadcast(BroadcastMsg* impl_msg);
};
*/
  CkIndex_BroadcastMgr::__register("BroadcastMgr", sizeof(BroadcastMgr));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_BroadcastMgr::virtual_pup(PUP::er &p) {
    recursive_pup<BroadcastMgr>(dynamic_cast<BroadcastMgr*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
