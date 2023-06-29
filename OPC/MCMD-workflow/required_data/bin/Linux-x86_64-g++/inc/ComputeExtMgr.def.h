

/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: message ExtCoordMsg{
ComputeExtAtom coord[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_ExtCoordMsg::operator new(size_t s){
  return ExtCoordMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_ExtCoordMsg::operator new(size_t s, int* sz){
  return ExtCoordMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_ExtCoordMsg::operator new(size_t s, int* sz,const int pb){
  return ExtCoordMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_ExtCoordMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return ExtCoordMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_ExtCoordMsg::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return ExtCoordMsg::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_ExtCoordMsg::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return ExtCoordMsg::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_ExtCoordMsg::operator new(size_t s, int sz0, const int p, const GroupDepNum groupDepNum) {
  int sizes[1];
  sizes[0] = sz0;
  return ExtCoordMsg::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_ExtCoordMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(ComputeExtAtom)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb, groupDepNum);
}
CMessage_ExtCoordMsg::CMessage_ExtCoordMsg() {
ExtCoordMsg *newmsg = (ExtCoordMsg *)this;
  newmsg->coord = (ComputeExtAtom *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
void CMessage_ExtCoordMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_ExtCoordMsg::pack(ExtCoordMsg *msg) {
  msg->coord = (ComputeExtAtom *) ((char *)msg->coord - (char *)msg);
  return (void *) msg;
}
ExtCoordMsg* CMessage_ExtCoordMsg::unpack(void* buf) {
  ExtCoordMsg *msg = (ExtCoordMsg *) buf;
  msg->coord = (ComputeExtAtom *) ((size_t)msg->coord + (char *)msg);
  return msg;
}
int CMessage_ExtCoordMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message ExtForceMsg{
ExtForce force[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_ExtForceMsg::operator new(size_t s){
  return ExtForceMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_ExtForceMsg::operator new(size_t s, int* sz){
  return ExtForceMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_ExtForceMsg::operator new(size_t s, int* sz,const int pb){
  return ExtForceMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_ExtForceMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return ExtForceMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_ExtForceMsg::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return ExtForceMsg::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_ExtForceMsg::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return ExtForceMsg::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_ExtForceMsg::operator new(size_t s, int sz0, const int p, const GroupDepNum groupDepNum) {
  int sizes[1];
  sizes[0] = sz0;
  return ExtForceMsg::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_ExtForceMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(ExtForce)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb, groupDepNum);
}
CMessage_ExtForceMsg::CMessage_ExtForceMsg() {
ExtForceMsg *newmsg = (ExtForceMsg *)this;
  newmsg->force = (ExtForce *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
void CMessage_ExtForceMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_ExtForceMsg::pack(ExtForceMsg *msg) {
  msg->force = (ExtForce *) ((char *)msg->force - (char *)msg);
  return (void *) msg;
}
ExtForceMsg* CMessage_ExtForceMsg::unpack(void* buf) {
  ExtForceMsg *msg = (ExtForceMsg *) buf;
  msg->force = (ExtForce *) ((size_t)msg->force + (char *)msg);
  return msg;
}
int CMessage_ExtForceMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group ComputeExtMgr: IrrGroup{
ComputeExtMgr();
void recvCoord(ExtCoordMsg* impl_msg);
void recvForce(ExtForceMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_ComputeExtMgr::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: ComputeExtMgr();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvCoord(ExtCoordMsg* impl_msg);
 */
void CProxyElement_ComputeExtMgr::recvCoord(ExtCoordMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeExtMgr::idx_recvCoord_ExtCoordMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeExtMgr::idx_recvCoord_ExtCoordMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputeExtMgr::idx_recvCoord_ExtCoordMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvForce(ExtForceMsg* impl_msg);
 */
void CProxyElement_ComputeExtMgr::recvForce(ExtForceMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeExtMgr::idx_recvForce_ExtForceMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeExtMgr::idx_recvForce_ExtForceMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputeExtMgr::idx_recvForce_ExtForceMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ComputeExtMgr();
 */
CkGroupID CProxy_ComputeExtMgr::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_ComputeExtMgr::__idx, CkIndex_ComputeExtMgr::idx_ComputeExtMgr_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_ComputeExtMgr::reg_ComputeExtMgr_void() {
  int epidx = CkRegisterEp("ComputeExtMgr()",
      reinterpret_cast<CkCallFnPtr>(_call_ComputeExtMgr_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_ComputeExtMgr::_call_ComputeExtMgr_void(void* impl_msg, void* impl_obj_void)
{
  ComputeExtMgr* impl_obj = static_cast<ComputeExtMgr*>(impl_obj_void);
  new (impl_obj_void) ComputeExtMgr();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvCoord(ExtCoordMsg* impl_msg);
 */
void CProxy_ComputeExtMgr::recvCoord(ExtCoordMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeExtMgr::idx_recvCoord_ExtCoordMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeExtMgr::idx_recvCoord_ExtCoordMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeExtMgr::idx_recvCoord_ExtCoordMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeExtMgr::recvCoord(ExtCoordMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputeExtMgr::idx_recvCoord_ExtCoordMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeExtMgr::recvCoord(ExtCoordMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputeExtMgr::idx_recvCoord_ExtCoordMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputeExtMgr::reg_recvCoord_ExtCoordMsg() {
  int epidx = CkRegisterEp("recvCoord(ExtCoordMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvCoord_ExtCoordMsg), CMessage_ExtCoordMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)ExtCoordMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ComputeExtMgr::_call_recvCoord_ExtCoordMsg(void* impl_msg, void* impl_obj_void)
{
  ComputeExtMgr* impl_obj = static_cast<ComputeExtMgr*>(impl_obj_void);
  impl_obj->recvCoord((ExtCoordMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvForce(ExtForceMsg* impl_msg);
 */
void CProxy_ComputeExtMgr::recvForce(ExtForceMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeExtMgr::idx_recvForce_ExtForceMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeExtMgr::idx_recvForce_ExtForceMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeExtMgr::idx_recvForce_ExtForceMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeExtMgr::recvForce(ExtForceMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputeExtMgr::idx_recvForce_ExtForceMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeExtMgr::recvForce(ExtForceMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputeExtMgr::idx_recvForce_ExtForceMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputeExtMgr::reg_recvForce_ExtForceMsg() {
  int epidx = CkRegisterEp("recvForce(ExtForceMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvForce_ExtForceMsg), CMessage_ExtForceMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)ExtForceMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ComputeExtMgr::_call_recvForce_ExtForceMsg(void* impl_msg, void* impl_obj_void)
{
  ComputeExtMgr* impl_obj = static_cast<ComputeExtMgr*>(impl_obj_void);
  impl_obj->recvForce((ExtForceMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ComputeExtMgr();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvCoord(ExtCoordMsg* impl_msg);
 */
void CProxySection_ComputeExtMgr::recvCoord(ExtCoordMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeExtMgr::idx_recvCoord_ExtCoordMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeExtMgr::idx_recvCoord_ExtCoordMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvForce(ExtForceMsg* impl_msg);
 */
void CProxySection_ComputeExtMgr::recvForce(ExtForceMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeExtMgr::idx_recvForce_ExtForceMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeExtMgr::idx_recvForce_ExtForceMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_ComputeExtMgr::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,ComputeExtMgr::isIrreducible());
  // REG: ComputeExtMgr();
  idx_ComputeExtMgr_void();
  CkRegisterDefaultCtor(__idx, idx_ComputeExtMgr_void());

  // REG: void recvCoord(ExtCoordMsg* impl_msg);
  idx_recvCoord_ExtCoordMsg();

  // REG: void recvForce(ExtForceMsg* impl_msg);
  idx_recvForce_ExtForceMsg();

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerComputeExtMgr(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: message ExtCoordMsg{
ComputeExtAtom coord[];
}
;
*/
CMessage_ExtCoordMsg::__register("ExtCoordMsg", sizeof(ExtCoordMsg),(CkPackFnPtr) ExtCoordMsg::pack,(CkUnpackFnPtr) ExtCoordMsg::unpack);

/* REG: message ExtForceMsg{
ExtForce force[];
}
;
*/
CMessage_ExtForceMsg::__register("ExtForceMsg", sizeof(ExtForceMsg),(CkPackFnPtr) ExtForceMsg::pack,(CkUnpackFnPtr) ExtForceMsg::unpack);

/* REG: group ComputeExtMgr: IrrGroup{
ComputeExtMgr();
void recvCoord(ExtCoordMsg* impl_msg);
void recvForce(ExtForceMsg* impl_msg);
};
*/
  CkIndex_ComputeExtMgr::__register("ComputeExtMgr", sizeof(ComputeExtMgr));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_ComputeExtMgr::virtual_pup(PUP::er &p) {
    recursive_pup<ComputeExtMgr>(dynamic_cast<ComputeExtMgr*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
