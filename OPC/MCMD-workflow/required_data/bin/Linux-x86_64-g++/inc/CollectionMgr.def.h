
/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: message SlaveInitMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_SlaveInitMsg::operator new(size_t s){
  return SlaveInitMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_SlaveInitMsg::operator new(size_t s, int* sz){
  return SlaveInitMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_SlaveInitMsg::operator new(size_t s, int* sz,const int pb){
  return SlaveInitMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_SlaveInitMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return SlaveInitMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_SlaveInitMsg::operator new(size_t s, const int p) {
  return SlaveInitMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_SlaveInitMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return SlaveInitMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_SlaveInitMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_SlaveInitMsg::CMessage_SlaveInitMsg() {
SlaveInitMsg *newmsg = (SlaveInitMsg *)this;
}
void CMessage_SlaveInitMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_SlaveInitMsg::pack(SlaveInitMsg *msg) {
  return (void *) msg;
}
SlaveInitMsg* CMessage_SlaveInitMsg::unpack(void* buf) {
  SlaveInitMsg *msg = (SlaveInitMsg *) buf;
  return msg;
}
int CMessage_SlaveInitMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group CollectionMgr: IrrGroup{
CollectionMgr(SlaveInitMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_CollectionMgr::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: CollectionMgr(SlaveInitMsg* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CollectionMgr(SlaveInitMsg* impl_msg);
 */
CkGroupID CProxy_CollectionMgr::ckNew(SlaveInitMsg* impl_msg)
{
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_CollectionMgr::__idx, CkIndex_CollectionMgr::idx_CollectionMgr_SlaveInitMsg(), impl_msg);
  return gId;
}
  CProxy_CollectionMgr::CProxy_CollectionMgr(SlaveInitMsg* impl_msg)
{
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  ckSetGroupID(CkCreateGroup(CkIndex_CollectionMgr::__idx, CkIndex_CollectionMgr::idx_CollectionMgr_SlaveInitMsg(), impl_msg));
}

// Entry point registration function
int CkIndex_CollectionMgr::reg_CollectionMgr_SlaveInitMsg() {
  int epidx = CkRegisterEp("CollectionMgr(SlaveInitMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_CollectionMgr_SlaveInitMsg), CMessage_SlaveInitMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)SlaveInitMsg::ckDebugPup);
  return epidx;
}

void CkIndex_CollectionMgr::_call_CollectionMgr_SlaveInitMsg(void* impl_msg, void* impl_obj_void)
{
  CollectionMgr* impl_obj = static_cast<CollectionMgr*>(impl_obj_void);
  new (impl_obj_void) CollectionMgr((SlaveInitMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CollectionMgr(SlaveInitMsg* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_CollectionMgr::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,CollectionMgr::isIrreducible());
  // REG: CollectionMgr(SlaveInitMsg* impl_msg);
  idx_CollectionMgr_SlaveInitMsg();

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerCollectionMgr(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: message SlaveInitMsg;
*/
CMessage_SlaveInitMsg::__register("SlaveInitMsg", sizeof(SlaveInitMsg),(CkPackFnPtr) SlaveInitMsg::pack,(CkUnpackFnPtr) SlaveInitMsg::unpack);

/* REG: group CollectionMgr: IrrGroup{
CollectionMgr(SlaveInitMsg* impl_msg);
};
*/
  CkIndex_CollectionMgr::__register("CollectionMgr", sizeof(CollectionMgr));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_CollectionMgr::virtual_pup(PUP::er &p) {
    recursive_pup<CollectionMgr>(dynamic_cast<CollectionMgr*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
