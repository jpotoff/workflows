






/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */







/* DEFS: message LocalLBInfoMsg{
MigrateInfo moves[];
double cpuloads[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_LocalLBInfoMsg::operator new(size_t s){
  return LocalLBInfoMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_LocalLBInfoMsg::operator new(size_t s, int* sz){
  return LocalLBInfoMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_LocalLBInfoMsg::operator new(size_t s, int* sz,const int pb){
  return LocalLBInfoMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_LocalLBInfoMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return LocalLBInfoMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_LocalLBInfoMsg::operator new(size_t s, int sz0, int sz1) {
  int sizes[2];
  sizes[0] = sz0;
  sizes[1] = sz1;
  return LocalLBInfoMsg::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_LocalLBInfoMsg::operator new(size_t s, int sz0, int sz1, const int p) {
  int sizes[2];
  sizes[0] = sz0;
  sizes[1] = sz1;
  return LocalLBInfoMsg::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_LocalLBInfoMsg::operator new(size_t s, int sz0, int sz1, const int p, const GroupDepNum groupDepNum) {
  int sizes[2];
  sizes[0] = sz0;
  sizes[1] = sz1;
  return LocalLBInfoMsg::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_LocalLBInfoMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(MigrateInfo)*sizes[0]);
  if(sizes==0)
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[1] + ALIGN_DEFAULT(sizeof(double)*sizes[1]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[2], pb, groupDepNum);
}
CMessage_LocalLBInfoMsg::CMessage_LocalLBInfoMsg() {
LocalLBInfoMsg *newmsg = (LocalLBInfoMsg *)this;
  newmsg->moves = (MigrateInfo *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
  newmsg->cpuloads = (double *) ((char *)newmsg + CkpvAccess(_offsets)[1]);
}
void CMessage_LocalLBInfoMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_LocalLBInfoMsg::pack(LocalLBInfoMsg *msg) {
  msg->moves = (MigrateInfo *) ((char *)msg->moves - (char *)msg);
  msg->cpuloads = (double *) ((char *)msg->cpuloads - (char *)msg);
  return (void *) msg;
}
LocalLBInfoMsg* CMessage_LocalLBInfoMsg::unpack(void* buf) {
  LocalLBInfoMsg *msg = (LocalLBInfoMsg *) buf;
  msg->moves = (MigrateInfo *) ((size_t)msg->moves + (char *)msg);
  msg->cpuloads = (double *) ((size_t)msg->cpuloads + (char *)msg);
  return msg;
}
int CMessage_LocalLBInfoMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message SplitComputesMsg{
int cid[];
float load[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_SplitComputesMsg::operator new(size_t s){
  return SplitComputesMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_SplitComputesMsg::operator new(size_t s, int* sz){
  return SplitComputesMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_SplitComputesMsg::operator new(size_t s, int* sz,const int pb){
  return SplitComputesMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_SplitComputesMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return SplitComputesMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_SplitComputesMsg::operator new(size_t s, int sz0, int sz1) {
  int sizes[2];
  sizes[0] = sz0;
  sizes[1] = sz1;
  return SplitComputesMsg::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_SplitComputesMsg::operator new(size_t s, int sz0, int sz1, const int p) {
  int sizes[2];
  sizes[0] = sz0;
  sizes[1] = sz1;
  return SplitComputesMsg::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_SplitComputesMsg::operator new(size_t s, int sz0, int sz1, const int p, const GroupDepNum groupDepNum) {
  int sizes[2];
  sizes[0] = sz0;
  sizes[1] = sz1;
  return SplitComputesMsg::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_SplitComputesMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(int)*sizes[0]);
  if(sizes==0)
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[1] + ALIGN_DEFAULT(sizeof(float)*sizes[1]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[2], pb, groupDepNum);
}
CMessage_SplitComputesMsg::CMessage_SplitComputesMsg() {
SplitComputesMsg *newmsg = (SplitComputesMsg *)this;
  newmsg->cid = (int *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
  newmsg->load = (float *) ((char *)newmsg + CkpvAccess(_offsets)[1]);
}
void CMessage_SplitComputesMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_SplitComputesMsg::pack(SplitComputesMsg *msg) {
  msg->cid = (int *) ((char *)msg->cid - (char *)msg);
  msg->load = (float *) ((char *)msg->load - (char *)msg);
  return (void *) msg;
}
SplitComputesMsg* CMessage_SplitComputesMsg::unpack(void* buf) {
  SplitComputesMsg *msg = (SplitComputesMsg *) buf;
  msg->cid = (int *) ((size_t)msg->cid + (char *)msg);
  msg->load = (float *) ((size_t)msg->load + (char *)msg);
  return msg;
}
int CMessage_SplitComputesMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group NamdHybridLB: HybridBaseLB{
void NamdHybridLB(const CkLBOptions &impl_noname_0);
void UpdateLocalLBInfo(LocalLBInfoMsg* impl_msg);
void splitComputes(SplitComputesMsg* impl_msg);
NamdHybridLB(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_NamdHybridLB::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: void NamdHybridLB(const CkLBOptions &impl_noname_0);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void UpdateLocalLBInfo(LocalLBInfoMsg* impl_msg);
 */
void CProxyElement_NamdHybridLB::UpdateLocalLBInfo(LocalLBInfoMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_NamdHybridLB::idx_UpdateLocalLBInfo_LocalLBInfoMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_NamdHybridLB::idx_UpdateLocalLBInfo_LocalLBInfoMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_NamdHybridLB::idx_UpdateLocalLBInfo_LocalLBInfoMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void splitComputes(SplitComputesMsg* impl_msg);
 */
void CProxyElement_NamdHybridLB::splitComputes(SplitComputesMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_NamdHybridLB::idx_splitComputes_SplitComputesMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_NamdHybridLB::idx_splitComputes_SplitComputesMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_NamdHybridLB::idx_splitComputes_SplitComputesMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: NamdHybridLB(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void NamdHybridLB(const CkLBOptions &impl_noname_0);
 */
CkGroupID CProxy_NamdHybridLB::ckNew(const CkLBOptions &impl_noname_0, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CkLBOptions &impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkLBOptions>::type>::type &)impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkLBOptions>::type>::type &)impl_noname_0;
  }
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_NamdHybridLB::__idx, CkIndex_NamdHybridLB::idx_NamdHybridLB_marshall1(), impl_msg);
  return gId;
}
  CProxy_NamdHybridLB::CProxy_NamdHybridLB(const CkLBOptions &impl_noname_0, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CkLBOptions &impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkLBOptions>::type>::type &)impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkLBOptions>::type>::type &)impl_noname_0;
  }
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  ckSetGroupID(CkCreateGroup(CkIndex_NamdHybridLB::__idx, CkIndex_NamdHybridLB::idx_NamdHybridLB_marshall1(), impl_msg));
}

// Entry point registration function
int CkIndex_NamdHybridLB::reg_NamdHybridLB_marshall1() {
  int epidx = CkRegisterEp("NamdHybridLB(const CkLBOptions &impl_noname_0)",
      reinterpret_cast<CkCallFnPtr>(_call_NamdHybridLB_marshall1), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_NamdHybridLB_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_NamdHybridLB_marshall1);

  return epidx;
}

void CkIndex_NamdHybridLB::_call_NamdHybridLB_marshall1(void* impl_msg, void* impl_obj_void)
{
  NamdHybridLB* impl_obj = static_cast<NamdHybridLB*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkLBOptions &impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkLBOptions> impl_noname_0;
  implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) NamdHybridLB(std::move(impl_noname_0.t));
}
int CkIndex_NamdHybridLB::_callmarshall_NamdHybridLB_marshall1(char* impl_buf, void* impl_obj_void) {
  NamdHybridLB* impl_obj = static_cast<NamdHybridLB*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CkLBOptions &impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkLBOptions> impl_noname_0;
  implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) NamdHybridLB(std::move(impl_noname_0.t));
  return implP.size();
}
void CkIndex_NamdHybridLB::_marshallmessagepup_NamdHybridLB_marshall1(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkLBOptions &impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkLBOptions> impl_noname_0;
  implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_0");
  implDestP|impl_noname_0;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void UpdateLocalLBInfo(LocalLBInfoMsg* impl_msg);
 */
void CProxy_NamdHybridLB::UpdateLocalLBInfo(LocalLBInfoMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_NamdHybridLB::idx_UpdateLocalLBInfo_LocalLBInfoMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_NamdHybridLB::idx_UpdateLocalLBInfo_LocalLBInfoMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_NamdHybridLB::idx_UpdateLocalLBInfo_LocalLBInfoMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_NamdHybridLB::UpdateLocalLBInfo(LocalLBInfoMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_NamdHybridLB::idx_UpdateLocalLBInfo_LocalLBInfoMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_NamdHybridLB::UpdateLocalLBInfo(LocalLBInfoMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_NamdHybridLB::idx_UpdateLocalLBInfo_LocalLBInfoMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_NamdHybridLB::reg_UpdateLocalLBInfo_LocalLBInfoMsg() {
  int epidx = CkRegisterEp("UpdateLocalLBInfo(LocalLBInfoMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_UpdateLocalLBInfo_LocalLBInfoMsg), CMessage_LocalLBInfoMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)LocalLBInfoMsg::ckDebugPup);
  return epidx;
}

void CkIndex_NamdHybridLB::_call_UpdateLocalLBInfo_LocalLBInfoMsg(void* impl_msg, void* impl_obj_void)
{
  NamdHybridLB* impl_obj = static_cast<NamdHybridLB*>(impl_obj_void);
  impl_obj->UpdateLocalLBInfo((LocalLBInfoMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void splitComputes(SplitComputesMsg* impl_msg);
 */
void CProxy_NamdHybridLB::splitComputes(SplitComputesMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_NamdHybridLB::idx_splitComputes_SplitComputesMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_NamdHybridLB::idx_splitComputes_SplitComputesMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_NamdHybridLB::idx_splitComputes_SplitComputesMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_NamdHybridLB::splitComputes(SplitComputesMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_NamdHybridLB::idx_splitComputes_SplitComputesMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_NamdHybridLB::splitComputes(SplitComputesMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_NamdHybridLB::idx_splitComputes_SplitComputesMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_NamdHybridLB::reg_splitComputes_SplitComputesMsg() {
  int epidx = CkRegisterEp("splitComputes(SplitComputesMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_splitComputes_SplitComputesMsg), CMessage_SplitComputesMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)SplitComputesMsg::ckDebugPup);
  return epidx;
}

void CkIndex_NamdHybridLB::_call_splitComputes_SplitComputesMsg(void* impl_msg, void* impl_obj_void)
{
  NamdHybridLB* impl_obj = static_cast<NamdHybridLB*>(impl_obj_void);
  impl_obj->splitComputes((SplitComputesMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: NamdHybridLB(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_NamdHybridLB::reg_NamdHybridLB_CkMigrateMessage() {
  int epidx = CkRegisterEp("NamdHybridLB(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_NamdHybridLB_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_NamdHybridLB::_call_NamdHybridLB_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  new (impl_obj_void) NamdHybridLB((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void NamdHybridLB(const CkLBOptions &impl_noname_0);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void UpdateLocalLBInfo(LocalLBInfoMsg* impl_msg);
 */
void CProxySection_NamdHybridLB::UpdateLocalLBInfo(LocalLBInfoMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_NamdHybridLB::idx_UpdateLocalLBInfo_LocalLBInfoMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_NamdHybridLB::idx_UpdateLocalLBInfo_LocalLBInfoMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void splitComputes(SplitComputesMsg* impl_msg);
 */
void CProxySection_NamdHybridLB::splitComputes(SplitComputesMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_NamdHybridLB::idx_splitComputes_SplitComputesMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_NamdHybridLB::idx_splitComputes_SplitComputesMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: NamdHybridLB(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_NamdHybridLB::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_HybridBaseLB::__idx);
   CkRegisterGroupIrr(__idx,NamdHybridLB::isIrreducible());
  // REG: void NamdHybridLB(const CkLBOptions &impl_noname_0);
  idx_NamdHybridLB_marshall1();

  // REG: void UpdateLocalLBInfo(LocalLBInfoMsg* impl_msg);
  idx_UpdateLocalLBInfo_LocalLBInfoMsg();

  // REG: void splitComputes(SplitComputesMsg* impl_msg);
  idx_splitComputes_SplitComputesMsg();

  // REG: NamdHybridLB(CkMigrateMessage* impl_msg);
  idx_NamdHybridLB_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_NamdHybridLB_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerNamdHybridLB(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  _registerHybridBaseLB();

  _registerBaseLB();




/* REG: message LocalLBInfoMsg{
MigrateInfo moves[];
double cpuloads[];
}
;
*/
CMessage_LocalLBInfoMsg::__register("LocalLBInfoMsg", sizeof(LocalLBInfoMsg),(CkPackFnPtr) LocalLBInfoMsg::pack,(CkUnpackFnPtr) LocalLBInfoMsg::unpack);

/* REG: message SplitComputesMsg{
int cid[];
float load[];
}
;
*/
CMessage_SplitComputesMsg::__register("SplitComputesMsg", sizeof(SplitComputesMsg),(CkPackFnPtr) SplitComputesMsg::pack,(CkUnpackFnPtr) SplitComputesMsg::unpack);

/* REG: group NamdHybridLB: HybridBaseLB{
void NamdHybridLB(const CkLBOptions &impl_noname_0);
void UpdateLocalLBInfo(LocalLBInfoMsg* impl_msg);
void splitComputes(SplitComputesMsg* impl_msg);
NamdHybridLB(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_NamdHybridLB::__register("NamdHybridLB", sizeof(NamdHybridLB));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_NamdHybridLB::virtual_pup(PUP::er &p) {
    recursive_pup<NamdHybridLB>(dynamic_cast<NamdHybridLB*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
