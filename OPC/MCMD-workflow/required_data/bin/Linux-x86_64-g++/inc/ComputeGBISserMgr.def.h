

/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: message GBISCoordMsg{
ComputeGBISAtom coord[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_GBISCoordMsg::operator new(size_t s){
  return GBISCoordMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_GBISCoordMsg::operator new(size_t s, int* sz){
  return GBISCoordMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_GBISCoordMsg::operator new(size_t s, int* sz,const int pb){
  return GBISCoordMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_GBISCoordMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return GBISCoordMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_GBISCoordMsg::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return GBISCoordMsg::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_GBISCoordMsg::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return GBISCoordMsg::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_GBISCoordMsg::operator new(size_t s, int sz0, const int p, const GroupDepNum groupDepNum) {
  int sizes[1];
  sizes[0] = sz0;
  return GBISCoordMsg::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_GBISCoordMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(ComputeGBISAtom)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb, groupDepNum);
}
CMessage_GBISCoordMsg::CMessage_GBISCoordMsg() {
GBISCoordMsg *newmsg = (GBISCoordMsg *)this;
  newmsg->coord = (ComputeGBISAtom *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
void CMessage_GBISCoordMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_GBISCoordMsg::pack(GBISCoordMsg *msg) {
  msg->coord = (ComputeGBISAtom *) ((char *)msg->coord - (char *)msg);
  return (void *) msg;
}
GBISCoordMsg* CMessage_GBISCoordMsg::unpack(void* buf) {
  GBISCoordMsg *msg = (GBISCoordMsg *) buf;
  msg->coord = (ComputeGBISAtom *) ((size_t)msg->coord + (char *)msg);
  return msg;
}
int CMessage_GBISCoordMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message GBISForceMsg{
ExtForce force[];
ExtForce slowForce[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_GBISForceMsg::operator new(size_t s){
  return GBISForceMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_GBISForceMsg::operator new(size_t s, int* sz){
  return GBISForceMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_GBISForceMsg::operator new(size_t s, int* sz,const int pb){
  return GBISForceMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_GBISForceMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return GBISForceMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_GBISForceMsg::operator new(size_t s, int sz0, int sz1) {
  int sizes[2];
  sizes[0] = sz0;
  sizes[1] = sz1;
  return GBISForceMsg::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_GBISForceMsg::operator new(size_t s, int sz0, int sz1, const int p) {
  int sizes[2];
  sizes[0] = sz0;
  sizes[1] = sz1;
  return GBISForceMsg::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_GBISForceMsg::operator new(size_t s, int sz0, int sz1, const int p, const GroupDepNum groupDepNum) {
  int sizes[2];
  sizes[0] = sz0;
  sizes[1] = sz1;
  return GBISForceMsg::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_GBISForceMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(ExtForce)*sizes[0]);
  if(sizes==0)
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[1] + ALIGN_DEFAULT(sizeof(ExtForce)*sizes[1]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[2], pb, groupDepNum);
}
CMessage_GBISForceMsg::CMessage_GBISForceMsg() {
GBISForceMsg *newmsg = (GBISForceMsg *)this;
  newmsg->force = (ExtForce *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
  newmsg->slowForce = (ExtForce *) ((char *)newmsg + CkpvAccess(_offsets)[1]);
}
void CMessage_GBISForceMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_GBISForceMsg::pack(GBISForceMsg *msg) {
  msg->force = (ExtForce *) ((char *)msg->force - (char *)msg);
  msg->slowForce = (ExtForce *) ((char *)msg->slowForce - (char *)msg);
  return (void *) msg;
}
GBISForceMsg* CMessage_GBISForceMsg::unpack(void* buf) {
  GBISForceMsg *msg = (GBISForceMsg *) buf;
  msg->force = (ExtForce *) ((size_t)msg->force + (char *)msg);
  msg->slowForce = (ExtForce *) ((size_t)msg->slowForce + (char *)msg);
  return msg;
}
int CMessage_GBISForceMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group ComputeGBISserMgr: IrrGroup{
ComputeGBISserMgr();
void recvCoord(GBISCoordMsg* impl_msg);
void recvForce(GBISForceMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_ComputeGBISserMgr::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: ComputeGBISserMgr();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvCoord(GBISCoordMsg* impl_msg);
 */
void CProxyElement_ComputeGBISserMgr::recvCoord(GBISCoordMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeGBISserMgr::idx_recvCoord_GBISCoordMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeGBISserMgr::idx_recvCoord_GBISCoordMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputeGBISserMgr::idx_recvCoord_GBISCoordMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvForce(GBISForceMsg* impl_msg);
 */
void CProxyElement_ComputeGBISserMgr::recvForce(GBISForceMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeGBISserMgr::idx_recvForce_GBISForceMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeGBISserMgr::idx_recvForce_GBISForceMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputeGBISserMgr::idx_recvForce_GBISForceMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ComputeGBISserMgr();
 */
CkGroupID CProxy_ComputeGBISserMgr::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_ComputeGBISserMgr::__idx, CkIndex_ComputeGBISserMgr::idx_ComputeGBISserMgr_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_ComputeGBISserMgr::reg_ComputeGBISserMgr_void() {
  int epidx = CkRegisterEp("ComputeGBISserMgr()",
      reinterpret_cast<CkCallFnPtr>(_call_ComputeGBISserMgr_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_ComputeGBISserMgr::_call_ComputeGBISserMgr_void(void* impl_msg, void* impl_obj_void)
{
  ComputeGBISserMgr* impl_obj = static_cast<ComputeGBISserMgr*>(impl_obj_void);
  new (impl_obj_void) ComputeGBISserMgr();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvCoord(GBISCoordMsg* impl_msg);
 */
void CProxy_ComputeGBISserMgr::recvCoord(GBISCoordMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeGBISserMgr::idx_recvCoord_GBISCoordMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeGBISserMgr::idx_recvCoord_GBISCoordMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeGBISserMgr::idx_recvCoord_GBISCoordMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeGBISserMgr::recvCoord(GBISCoordMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputeGBISserMgr::idx_recvCoord_GBISCoordMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeGBISserMgr::recvCoord(GBISCoordMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputeGBISserMgr::idx_recvCoord_GBISCoordMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputeGBISserMgr::reg_recvCoord_GBISCoordMsg() {
  int epidx = CkRegisterEp("recvCoord(GBISCoordMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvCoord_GBISCoordMsg), CMessage_GBISCoordMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)GBISCoordMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ComputeGBISserMgr::_call_recvCoord_GBISCoordMsg(void* impl_msg, void* impl_obj_void)
{
  ComputeGBISserMgr* impl_obj = static_cast<ComputeGBISserMgr*>(impl_obj_void);
  impl_obj->recvCoord((GBISCoordMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvForce(GBISForceMsg* impl_msg);
 */
void CProxy_ComputeGBISserMgr::recvForce(GBISForceMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeGBISserMgr::idx_recvForce_GBISForceMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeGBISserMgr::idx_recvForce_GBISForceMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeGBISserMgr::idx_recvForce_GBISForceMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeGBISserMgr::recvForce(GBISForceMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputeGBISserMgr::idx_recvForce_GBISForceMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeGBISserMgr::recvForce(GBISForceMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputeGBISserMgr::idx_recvForce_GBISForceMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputeGBISserMgr::reg_recvForce_GBISForceMsg() {
  int epidx = CkRegisterEp("recvForce(GBISForceMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvForce_GBISForceMsg), CMessage_GBISForceMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)GBISForceMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ComputeGBISserMgr::_call_recvForce_GBISForceMsg(void* impl_msg, void* impl_obj_void)
{
  ComputeGBISserMgr* impl_obj = static_cast<ComputeGBISserMgr*>(impl_obj_void);
  impl_obj->recvForce((GBISForceMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ComputeGBISserMgr();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvCoord(GBISCoordMsg* impl_msg);
 */
void CProxySection_ComputeGBISserMgr::recvCoord(GBISCoordMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeGBISserMgr::idx_recvCoord_GBISCoordMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeGBISserMgr::idx_recvCoord_GBISCoordMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvForce(GBISForceMsg* impl_msg);
 */
void CProxySection_ComputeGBISserMgr::recvForce(GBISForceMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeGBISserMgr::idx_recvForce_GBISForceMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeGBISserMgr::idx_recvForce_GBISForceMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_ComputeGBISserMgr::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,ComputeGBISserMgr::isIrreducible());
  // REG: ComputeGBISserMgr();
  idx_ComputeGBISserMgr_void();
  CkRegisterDefaultCtor(__idx, idx_ComputeGBISserMgr_void());

  // REG: void recvCoord(GBISCoordMsg* impl_msg);
  idx_recvCoord_GBISCoordMsg();

  // REG: void recvForce(GBISForceMsg* impl_msg);
  idx_recvForce_GBISForceMsg();

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerComputeGBISserMgr(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: message GBISCoordMsg{
ComputeGBISAtom coord[];
}
;
*/
CMessage_GBISCoordMsg::__register("GBISCoordMsg", sizeof(GBISCoordMsg),(CkPackFnPtr) GBISCoordMsg::pack,(CkUnpackFnPtr) GBISCoordMsg::unpack);

/* REG: message GBISForceMsg{
ExtForce force[];
ExtForce slowForce[];
}
;
*/
CMessage_GBISForceMsg::__register("GBISForceMsg", sizeof(GBISForceMsg),(CkPackFnPtr) GBISForceMsg::pack,(CkUnpackFnPtr) GBISForceMsg::unpack);

/* REG: group ComputeGBISserMgr: IrrGroup{
ComputeGBISserMgr();
void recvCoord(GBISCoordMsg* impl_msg);
void recvForce(GBISForceMsg* impl_msg);
};
*/
  CkIndex_ComputeGBISserMgr::__register("ComputeGBISserMgr", sizeof(ComputeGBISserMgr));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_ComputeGBISserMgr::virtual_pup(PUP::er &p) {
    recursive_pup<ComputeGBISserMgr>(dynamic_cast<ComputeGBISserMgr*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
