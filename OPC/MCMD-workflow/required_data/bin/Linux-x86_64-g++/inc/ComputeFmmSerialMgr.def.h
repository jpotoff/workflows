

/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: message FmmSerialCoordMsg{
ComputeFmmSerialAtom coord[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_FmmSerialCoordMsg::operator new(size_t s){
  return FmmSerialCoordMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_FmmSerialCoordMsg::operator new(size_t s, int* sz){
  return FmmSerialCoordMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_FmmSerialCoordMsg::operator new(size_t s, int* sz,const int pb){
  return FmmSerialCoordMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_FmmSerialCoordMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return FmmSerialCoordMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_FmmSerialCoordMsg::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return FmmSerialCoordMsg::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_FmmSerialCoordMsg::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return FmmSerialCoordMsg::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_FmmSerialCoordMsg::operator new(size_t s, int sz0, const int p, const GroupDepNum groupDepNum) {
  int sizes[1];
  sizes[0] = sz0;
  return FmmSerialCoordMsg::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_FmmSerialCoordMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(ComputeFmmSerialAtom)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb, groupDepNum);
}
CMessage_FmmSerialCoordMsg::CMessage_FmmSerialCoordMsg() {
FmmSerialCoordMsg *newmsg = (FmmSerialCoordMsg *)this;
  newmsg->coord = (ComputeFmmSerialAtom *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
void CMessage_FmmSerialCoordMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_FmmSerialCoordMsg::pack(FmmSerialCoordMsg *msg) {
  msg->coord = (ComputeFmmSerialAtom *) ((char *)msg->coord - (char *)msg);
  return (void *) msg;
}
FmmSerialCoordMsg* CMessage_FmmSerialCoordMsg::unpack(void* buf) {
  FmmSerialCoordMsg *msg = (FmmSerialCoordMsg *) buf;
  msg->coord = (ComputeFmmSerialAtom *) ((size_t)msg->coord + (char *)msg);
  return msg;
}
int CMessage_FmmSerialCoordMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message FmmSerialForceMsg{
FmmSerialForce force[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_FmmSerialForceMsg::operator new(size_t s){
  return FmmSerialForceMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_FmmSerialForceMsg::operator new(size_t s, int* sz){
  return FmmSerialForceMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_FmmSerialForceMsg::operator new(size_t s, int* sz,const int pb){
  return FmmSerialForceMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_FmmSerialForceMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return FmmSerialForceMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_FmmSerialForceMsg::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return FmmSerialForceMsg::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_FmmSerialForceMsg::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return FmmSerialForceMsg::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_FmmSerialForceMsg::operator new(size_t s, int sz0, const int p, const GroupDepNum groupDepNum) {
  int sizes[1];
  sizes[0] = sz0;
  return FmmSerialForceMsg::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_FmmSerialForceMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(FmmSerialForce)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb, groupDepNum);
}
CMessage_FmmSerialForceMsg::CMessage_FmmSerialForceMsg() {
FmmSerialForceMsg *newmsg = (FmmSerialForceMsg *)this;
  newmsg->force = (FmmSerialForce *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
void CMessage_FmmSerialForceMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_FmmSerialForceMsg::pack(FmmSerialForceMsg *msg) {
  msg->force = (FmmSerialForce *) ((char *)msg->force - (char *)msg);
  return (void *) msg;
}
FmmSerialForceMsg* CMessage_FmmSerialForceMsg::unpack(void* buf) {
  FmmSerialForceMsg *msg = (FmmSerialForceMsg *) buf;
  msg->force = (FmmSerialForce *) ((size_t)msg->force + (char *)msg);
  return msg;
}
int CMessage_FmmSerialForceMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group ComputeFmmSerialMgr: IrrGroup{
ComputeFmmSerialMgr();
void recvCoord(FmmSerialCoordMsg* impl_msg);
void recvForce(FmmSerialForceMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_ComputeFmmSerialMgr::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: ComputeFmmSerialMgr();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvCoord(FmmSerialCoordMsg* impl_msg);
 */
void CProxyElement_ComputeFmmSerialMgr::recvCoord(FmmSerialCoordMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeFmmSerialMgr::idx_recvCoord_FmmSerialCoordMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeFmmSerialMgr::idx_recvCoord_FmmSerialCoordMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputeFmmSerialMgr::idx_recvCoord_FmmSerialCoordMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvForce(FmmSerialForceMsg* impl_msg);
 */
void CProxyElement_ComputeFmmSerialMgr::recvForce(FmmSerialForceMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeFmmSerialMgr::idx_recvForce_FmmSerialForceMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeFmmSerialMgr::idx_recvForce_FmmSerialForceMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputeFmmSerialMgr::idx_recvForce_FmmSerialForceMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ComputeFmmSerialMgr();
 */
CkGroupID CProxy_ComputeFmmSerialMgr::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_ComputeFmmSerialMgr::__idx, CkIndex_ComputeFmmSerialMgr::idx_ComputeFmmSerialMgr_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_ComputeFmmSerialMgr::reg_ComputeFmmSerialMgr_void() {
  int epidx = CkRegisterEp("ComputeFmmSerialMgr()",
      reinterpret_cast<CkCallFnPtr>(_call_ComputeFmmSerialMgr_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_ComputeFmmSerialMgr::_call_ComputeFmmSerialMgr_void(void* impl_msg, void* impl_obj_void)
{
  ComputeFmmSerialMgr* impl_obj = static_cast<ComputeFmmSerialMgr*>(impl_obj_void);
  new (impl_obj_void) ComputeFmmSerialMgr();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvCoord(FmmSerialCoordMsg* impl_msg);
 */
void CProxy_ComputeFmmSerialMgr::recvCoord(FmmSerialCoordMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeFmmSerialMgr::idx_recvCoord_FmmSerialCoordMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeFmmSerialMgr::idx_recvCoord_FmmSerialCoordMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeFmmSerialMgr::idx_recvCoord_FmmSerialCoordMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeFmmSerialMgr::recvCoord(FmmSerialCoordMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputeFmmSerialMgr::idx_recvCoord_FmmSerialCoordMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeFmmSerialMgr::recvCoord(FmmSerialCoordMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputeFmmSerialMgr::idx_recvCoord_FmmSerialCoordMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputeFmmSerialMgr::reg_recvCoord_FmmSerialCoordMsg() {
  int epidx = CkRegisterEp("recvCoord(FmmSerialCoordMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvCoord_FmmSerialCoordMsg), CMessage_FmmSerialCoordMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)FmmSerialCoordMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ComputeFmmSerialMgr::_call_recvCoord_FmmSerialCoordMsg(void* impl_msg, void* impl_obj_void)
{
  ComputeFmmSerialMgr* impl_obj = static_cast<ComputeFmmSerialMgr*>(impl_obj_void);
  impl_obj->recvCoord((FmmSerialCoordMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvForce(FmmSerialForceMsg* impl_msg);
 */
void CProxy_ComputeFmmSerialMgr::recvForce(FmmSerialForceMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeFmmSerialMgr::idx_recvForce_FmmSerialForceMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeFmmSerialMgr::idx_recvForce_FmmSerialForceMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeFmmSerialMgr::idx_recvForce_FmmSerialForceMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeFmmSerialMgr::recvForce(FmmSerialForceMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputeFmmSerialMgr::idx_recvForce_FmmSerialForceMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeFmmSerialMgr::recvForce(FmmSerialForceMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputeFmmSerialMgr::idx_recvForce_FmmSerialForceMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputeFmmSerialMgr::reg_recvForce_FmmSerialForceMsg() {
  int epidx = CkRegisterEp("recvForce(FmmSerialForceMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvForce_FmmSerialForceMsg), CMessage_FmmSerialForceMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)FmmSerialForceMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ComputeFmmSerialMgr::_call_recvForce_FmmSerialForceMsg(void* impl_msg, void* impl_obj_void)
{
  ComputeFmmSerialMgr* impl_obj = static_cast<ComputeFmmSerialMgr*>(impl_obj_void);
  impl_obj->recvForce((FmmSerialForceMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ComputeFmmSerialMgr();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvCoord(FmmSerialCoordMsg* impl_msg);
 */
void CProxySection_ComputeFmmSerialMgr::recvCoord(FmmSerialCoordMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeFmmSerialMgr::idx_recvCoord_FmmSerialCoordMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeFmmSerialMgr::idx_recvCoord_FmmSerialCoordMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvForce(FmmSerialForceMsg* impl_msg);
 */
void CProxySection_ComputeFmmSerialMgr::recvForce(FmmSerialForceMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeFmmSerialMgr::idx_recvForce_FmmSerialForceMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeFmmSerialMgr::idx_recvForce_FmmSerialForceMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_ComputeFmmSerialMgr::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,ComputeFmmSerialMgr::isIrreducible());
  // REG: ComputeFmmSerialMgr();
  idx_ComputeFmmSerialMgr_void();
  CkRegisterDefaultCtor(__idx, idx_ComputeFmmSerialMgr_void());

  // REG: void recvCoord(FmmSerialCoordMsg* impl_msg);
  idx_recvCoord_FmmSerialCoordMsg();

  // REG: void recvForce(FmmSerialForceMsg* impl_msg);
  idx_recvForce_FmmSerialForceMsg();

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerComputeFmmSerialMgr(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: message FmmSerialCoordMsg{
ComputeFmmSerialAtom coord[];
}
;
*/
CMessage_FmmSerialCoordMsg::__register("FmmSerialCoordMsg", sizeof(FmmSerialCoordMsg),(CkPackFnPtr) FmmSerialCoordMsg::pack,(CkUnpackFnPtr) FmmSerialCoordMsg::unpack);

/* REG: message FmmSerialForceMsg{
FmmSerialForce force[];
}
;
*/
CMessage_FmmSerialForceMsg::__register("FmmSerialForceMsg", sizeof(FmmSerialForceMsg),(CkPackFnPtr) FmmSerialForceMsg::pack,(CkUnpackFnPtr) FmmSerialForceMsg::unpack);

/* REG: group ComputeFmmSerialMgr: IrrGroup{
ComputeFmmSerialMgr();
void recvCoord(FmmSerialCoordMsg* impl_msg);
void recvForce(FmmSerialForceMsg* impl_msg);
};
*/
  CkIndex_ComputeFmmSerialMgr::__register("ComputeFmmSerialMgr", sizeof(ComputeFmmSerialMgr));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_ComputeFmmSerialMgr::virtual_pup(PUP::er &p) {
    recursive_pup<ComputeFmmSerialMgr>(dynamic_cast<ComputeFmmSerialMgr*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
