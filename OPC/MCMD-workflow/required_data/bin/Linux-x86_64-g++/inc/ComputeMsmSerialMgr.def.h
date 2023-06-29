

/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: message MsmSerialCoordMsg{
ComputeMsmSerialAtom coord[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_MsmSerialCoordMsg::operator new(size_t s){
  return MsmSerialCoordMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_MsmSerialCoordMsg::operator new(size_t s, int* sz){
  return MsmSerialCoordMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_MsmSerialCoordMsg::operator new(size_t s, int* sz,const int pb){
  return MsmSerialCoordMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_MsmSerialCoordMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return MsmSerialCoordMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_MsmSerialCoordMsg::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return MsmSerialCoordMsg::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_MsmSerialCoordMsg::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return MsmSerialCoordMsg::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_MsmSerialCoordMsg::operator new(size_t s, int sz0, const int p, const GroupDepNum groupDepNum) {
  int sizes[1];
  sizes[0] = sz0;
  return MsmSerialCoordMsg::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_MsmSerialCoordMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(ComputeMsmSerialAtom)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb, groupDepNum);
}
CMessage_MsmSerialCoordMsg::CMessage_MsmSerialCoordMsg() {
MsmSerialCoordMsg *newmsg = (MsmSerialCoordMsg *)this;
  newmsg->coord = (ComputeMsmSerialAtom *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
void CMessage_MsmSerialCoordMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_MsmSerialCoordMsg::pack(MsmSerialCoordMsg *msg) {
  msg->coord = (ComputeMsmSerialAtom *) ((char *)msg->coord - (char *)msg);
  return (void *) msg;
}
MsmSerialCoordMsg* CMessage_MsmSerialCoordMsg::unpack(void* buf) {
  MsmSerialCoordMsg *msg = (MsmSerialCoordMsg *) buf;
  msg->coord = (ComputeMsmSerialAtom *) ((size_t)msg->coord + (char *)msg);
  return msg;
}
int CMessage_MsmSerialCoordMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message MsmSerialForceMsg{
MsmSerialForce force[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_MsmSerialForceMsg::operator new(size_t s){
  return MsmSerialForceMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_MsmSerialForceMsg::operator new(size_t s, int* sz){
  return MsmSerialForceMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_MsmSerialForceMsg::operator new(size_t s, int* sz,const int pb){
  return MsmSerialForceMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_MsmSerialForceMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return MsmSerialForceMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_MsmSerialForceMsg::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return MsmSerialForceMsg::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_MsmSerialForceMsg::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return MsmSerialForceMsg::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_MsmSerialForceMsg::operator new(size_t s, int sz0, const int p, const GroupDepNum groupDepNum) {
  int sizes[1];
  sizes[0] = sz0;
  return MsmSerialForceMsg::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_MsmSerialForceMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(MsmSerialForce)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb, groupDepNum);
}
CMessage_MsmSerialForceMsg::CMessage_MsmSerialForceMsg() {
MsmSerialForceMsg *newmsg = (MsmSerialForceMsg *)this;
  newmsg->force = (MsmSerialForce *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
void CMessage_MsmSerialForceMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_MsmSerialForceMsg::pack(MsmSerialForceMsg *msg) {
  msg->force = (MsmSerialForce *) ((char *)msg->force - (char *)msg);
  return (void *) msg;
}
MsmSerialForceMsg* CMessage_MsmSerialForceMsg::unpack(void* buf) {
  MsmSerialForceMsg *msg = (MsmSerialForceMsg *) buf;
  msg->force = (MsmSerialForce *) ((size_t)msg->force + (char *)msg);
  return msg;
}
int CMessage_MsmSerialForceMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group ComputeMsmSerialMgr: IrrGroup{
ComputeMsmSerialMgr();
void recvCoord(MsmSerialCoordMsg* impl_msg);
void recvForce(MsmSerialForceMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_ComputeMsmSerialMgr::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: ComputeMsmSerialMgr();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvCoord(MsmSerialCoordMsg* impl_msg);
 */
void CProxyElement_ComputeMsmSerialMgr::recvCoord(MsmSerialCoordMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMsmSerialMgr::idx_recvCoord_MsmSerialCoordMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMsmSerialMgr::idx_recvCoord_MsmSerialCoordMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputeMsmSerialMgr::idx_recvCoord_MsmSerialCoordMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvForce(MsmSerialForceMsg* impl_msg);
 */
void CProxyElement_ComputeMsmSerialMgr::recvForce(MsmSerialForceMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMsmSerialMgr::idx_recvForce_MsmSerialForceMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMsmSerialMgr::idx_recvForce_MsmSerialForceMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputeMsmSerialMgr::idx_recvForce_MsmSerialForceMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ComputeMsmSerialMgr();
 */
CkGroupID CProxy_ComputeMsmSerialMgr::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_ComputeMsmSerialMgr::__idx, CkIndex_ComputeMsmSerialMgr::idx_ComputeMsmSerialMgr_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_ComputeMsmSerialMgr::reg_ComputeMsmSerialMgr_void() {
  int epidx = CkRegisterEp("ComputeMsmSerialMgr()",
      reinterpret_cast<CkCallFnPtr>(_call_ComputeMsmSerialMgr_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_ComputeMsmSerialMgr::_call_ComputeMsmSerialMgr_void(void* impl_msg, void* impl_obj_void)
{
  ComputeMsmSerialMgr* impl_obj = static_cast<ComputeMsmSerialMgr*>(impl_obj_void);
  new (impl_obj_void) ComputeMsmSerialMgr();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvCoord(MsmSerialCoordMsg* impl_msg);
 */
void CProxy_ComputeMsmSerialMgr::recvCoord(MsmSerialCoordMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMsmSerialMgr::idx_recvCoord_MsmSerialCoordMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMsmSerialMgr::idx_recvCoord_MsmSerialCoordMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMsmSerialMgr::idx_recvCoord_MsmSerialCoordMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMsmSerialMgr::recvCoord(MsmSerialCoordMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputeMsmSerialMgr::idx_recvCoord_MsmSerialCoordMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMsmSerialMgr::recvCoord(MsmSerialCoordMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputeMsmSerialMgr::idx_recvCoord_MsmSerialCoordMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputeMsmSerialMgr::reg_recvCoord_MsmSerialCoordMsg() {
  int epidx = CkRegisterEp("recvCoord(MsmSerialCoordMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvCoord_MsmSerialCoordMsg), CMessage_MsmSerialCoordMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)MsmSerialCoordMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ComputeMsmSerialMgr::_call_recvCoord_MsmSerialCoordMsg(void* impl_msg, void* impl_obj_void)
{
  ComputeMsmSerialMgr* impl_obj = static_cast<ComputeMsmSerialMgr*>(impl_obj_void);
  impl_obj->recvCoord((MsmSerialCoordMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvForce(MsmSerialForceMsg* impl_msg);
 */
void CProxy_ComputeMsmSerialMgr::recvForce(MsmSerialForceMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMsmSerialMgr::idx_recvForce_MsmSerialForceMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMsmSerialMgr::idx_recvForce_MsmSerialForceMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMsmSerialMgr::idx_recvForce_MsmSerialForceMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMsmSerialMgr::recvForce(MsmSerialForceMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputeMsmSerialMgr::idx_recvForce_MsmSerialForceMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMsmSerialMgr::recvForce(MsmSerialForceMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputeMsmSerialMgr::idx_recvForce_MsmSerialForceMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputeMsmSerialMgr::reg_recvForce_MsmSerialForceMsg() {
  int epidx = CkRegisterEp("recvForce(MsmSerialForceMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvForce_MsmSerialForceMsg), CMessage_MsmSerialForceMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)MsmSerialForceMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ComputeMsmSerialMgr::_call_recvForce_MsmSerialForceMsg(void* impl_msg, void* impl_obj_void)
{
  ComputeMsmSerialMgr* impl_obj = static_cast<ComputeMsmSerialMgr*>(impl_obj_void);
  impl_obj->recvForce((MsmSerialForceMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ComputeMsmSerialMgr();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvCoord(MsmSerialCoordMsg* impl_msg);
 */
void CProxySection_ComputeMsmSerialMgr::recvCoord(MsmSerialCoordMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMsmSerialMgr::idx_recvCoord_MsmSerialCoordMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMsmSerialMgr::idx_recvCoord_MsmSerialCoordMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvForce(MsmSerialForceMsg* impl_msg);
 */
void CProxySection_ComputeMsmSerialMgr::recvForce(MsmSerialForceMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMsmSerialMgr::idx_recvForce_MsmSerialForceMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMsmSerialMgr::idx_recvForce_MsmSerialForceMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_ComputeMsmSerialMgr::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,ComputeMsmSerialMgr::isIrreducible());
  // REG: ComputeMsmSerialMgr();
  idx_ComputeMsmSerialMgr_void();
  CkRegisterDefaultCtor(__idx, idx_ComputeMsmSerialMgr_void());

  // REG: void recvCoord(MsmSerialCoordMsg* impl_msg);
  idx_recvCoord_MsmSerialCoordMsg();

  // REG: void recvForce(MsmSerialForceMsg* impl_msg);
  idx_recvForce_MsmSerialForceMsg();

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerComputeMsmSerialMgr(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: message MsmSerialCoordMsg{
ComputeMsmSerialAtom coord[];
}
;
*/
CMessage_MsmSerialCoordMsg::__register("MsmSerialCoordMsg", sizeof(MsmSerialCoordMsg),(CkPackFnPtr) MsmSerialCoordMsg::pack,(CkUnpackFnPtr) MsmSerialCoordMsg::unpack);

/* REG: message MsmSerialForceMsg{
MsmSerialForce force[];
}
;
*/
CMessage_MsmSerialForceMsg::__register("MsmSerialForceMsg", sizeof(MsmSerialForceMsg),(CkPackFnPtr) MsmSerialForceMsg::pack,(CkUnpackFnPtr) MsmSerialForceMsg::unpack);

/* REG: group ComputeMsmSerialMgr: IrrGroup{
ComputeMsmSerialMgr();
void recvCoord(MsmSerialCoordMsg* impl_msg);
void recvForce(MsmSerialForceMsg* impl_msg);
};
*/
  CkIndex_ComputeMsmSerialMgr::__register("ComputeMsmSerialMgr", sizeof(ComputeMsmSerialMgr));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_ComputeMsmSerialMgr::virtual_pup(PUP::er &p) {
    recursive_pup<ComputeMsmSerialMgr>(dynamic_cast<ComputeMsmSerialMgr*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
