


/* ---------------- method closures -------------- */
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

    struct Closure_CollectionMaster::receiveOutputPosReady_6_closure : public SDAG::Closure {
            int seq;


      receiveOutputPosReady_6_closure() {
        init();
      }
      receiveOutputPosReady_6_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return seq;}
      void pup(PUP::er& __p) {
        __p | seq;
        packClosure(__p);
      }
      virtual ~receiveOutputPosReady_6_closure() {
      }
      PUPable_decl(SINGLE_ARG(receiveOutputPosReady_6_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CollectionMaster::receiveOutputVelReady_7_closure : public SDAG::Closure {
            int seq;


      receiveOutputVelReady_7_closure() {
        init();
      }
      receiveOutputVelReady_7_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return seq;}
      void pup(PUP::er& __p) {
        __p | seq;
        packClosure(__p);
      }
      virtual ~receiveOutputVelReady_7_closure() {
      }
      PUPable_decl(SINGLE_ARG(receiveOutputVelReady_7_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CollectionMaster::receiveOutputForceReady_8_closure : public SDAG::Closure {
            int seq;


      receiveOutputForceReady_8_closure() {
        init();
      }
      receiveOutputForceReady_8_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return seq;}
      void pup(PUP::er& __p) {
        __p | seq;
        packClosure(__p);
      }
      virtual ~receiveOutputForceReady_8_closure() {
      }
      PUPable_decl(SINGLE_ARG(receiveOutputForceReady_8_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CollectionMaster::startNextRoundOutputPos_9_closure : public SDAG::Closure {
            double totalT;


      startNextRoundOutputPos_9_closure() {
        init();
      }
      startNextRoundOutputPos_9_closure(CkMigrateMessage*) {
        init();
      }
            double & getP0() { return totalT;}
      void pup(PUP::er& __p) {
        __p | totalT;
        packClosure(__p);
      }
      virtual ~startNextRoundOutputPos_9_closure() {
      }
      PUPable_decl(SINGLE_ARG(startNextRoundOutputPos_9_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CollectionMaster::startNextRoundOutputVel_10_closure : public SDAG::Closure {
            double totalT;


      startNextRoundOutputVel_10_closure() {
        init();
      }
      startNextRoundOutputVel_10_closure(CkMigrateMessage*) {
        init();
      }
            double & getP0() { return totalT;}
      void pup(PUP::er& __p) {
        __p | totalT;
        packClosure(__p);
      }
      virtual ~startNextRoundOutputVel_10_closure() {
      }
      PUPable_decl(SINGLE_ARG(startNextRoundOutputVel_10_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CollectionMaster::startNextRoundOutputForce_11_closure : public SDAG::Closure {
            double totalT;


      startNextRoundOutputForce_11_closure() {
        init();
      }
      startNextRoundOutputForce_11_closure(CkMigrateMessage*) {
        init();
      }
            double & getP0() { return totalT;}
      void pup(PUP::er& __p) {
        __p | totalT;
        packClosure(__p);
      }
      virtual ~startNextRoundOutputForce_11_closure() {
      }
      PUPable_decl(SINGLE_ARG(startNextRoundOutputForce_11_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CollectionMaster::wrapCoorFinished_12_closure : public SDAG::Closure {
      

      wrapCoorFinished_12_closure() {
        init();
      }
      wrapCoorFinished_12_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~wrapCoorFinished_12_closure() {
      }
      PUPable_decl(SINGLE_ARG(wrapCoorFinished_12_closure));
    };
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: message CollectVectorMsg{
AtomID aid[];
Vector data[];
FloatVector fdata[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_CollectVectorMsg::operator new(size_t s){
  return CollectVectorMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_CollectVectorMsg::operator new(size_t s, int* sz){
  return CollectVectorMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_CollectVectorMsg::operator new(size_t s, int* sz,const int pb){
  return CollectVectorMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_CollectVectorMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return CollectVectorMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_CollectVectorMsg::operator new(size_t s, int sz0, int sz1, int sz2) {
  int sizes[3];
  sizes[0] = sz0;
  sizes[1] = sz1;
  sizes[2] = sz2;
  return CollectVectorMsg::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_CollectVectorMsg::operator new(size_t s, int sz0, int sz1, int sz2, const int p) {
  int sizes[3];
  sizes[0] = sz0;
  sizes[1] = sz1;
  sizes[2] = sz2;
  return CollectVectorMsg::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_CollectVectorMsg::operator new(size_t s, int sz0, int sz1, int sz2, const int p, const GroupDepNum groupDepNum) {
  int sizes[3];
  sizes[0] = sz0;
  sizes[1] = sz1;
  sizes[2] = sz2;
  return CollectVectorMsg::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_CollectVectorMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(AtomID)*sizes[0]);
  if(sizes==0)
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[1] + ALIGN_DEFAULT(sizeof(Vector)*sizes[1]);
  if(sizes==0)
    CkpvAccess(_offsets)[3] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[3] = CkpvAccess(_offsets)[2] + ALIGN_DEFAULT(sizeof(FloatVector)*sizes[2]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[3], pb, groupDepNum);
}
CMessage_CollectVectorMsg::CMessage_CollectVectorMsg() {
CollectVectorMsg *newmsg = (CollectVectorMsg *)this;
  newmsg->aid = (AtomID *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
  newmsg->data = (Vector *) ((char *)newmsg + CkpvAccess(_offsets)[1]);
  newmsg->fdata = (FloatVector *) ((char *)newmsg + CkpvAccess(_offsets)[2]);
}
void CMessage_CollectVectorMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_CollectVectorMsg::pack(CollectVectorMsg *msg) {
  msg->aid = (AtomID *) ((char *)msg->aid - (char *)msg);
  msg->data = (Vector *) ((char *)msg->data - (char *)msg);
  msg->fdata = (FloatVector *) ((char *)msg->fdata - (char *)msg);
  return (void *) msg;
}
CollectVectorMsg* CMessage_CollectVectorMsg::unpack(void* buf) {
  CollectVectorMsg *msg = (CollectVectorMsg *) buf;
  msg->aid = (AtomID *) ((size_t)msg->aid + (char *)msg);
  msg->data = (Vector *) ((size_t)msg->data + (char *)msg);
  msg->fdata = (FloatVector *) ((size_t)msg->fdata + (char *)msg);
  return msg;
}
int CMessage_CollectVectorMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message DataStreamMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_DataStreamMsg::operator new(size_t s){
  return DataStreamMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_DataStreamMsg::operator new(size_t s, int* sz){
  return DataStreamMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_DataStreamMsg::operator new(size_t s, int* sz,const int pb){
  return DataStreamMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_DataStreamMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return DataStreamMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_DataStreamMsg::operator new(size_t s, const int p) {
  return DataStreamMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_DataStreamMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return DataStreamMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_DataStreamMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_DataStreamMsg::CMessage_DataStreamMsg() {
DataStreamMsg *newmsg = (DataStreamMsg *)this;
}
void CMessage_DataStreamMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_DataStreamMsg::pack(DataStreamMsg *msg) {
  return (void *) msg;
}
DataStreamMsg* CMessage_DataStreamMsg::unpack(void* buf) {
  DataStreamMsg *msg = (DataStreamMsg *) buf;
  return msg;
}
int CMessage_DataStreamMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message CollectVectorVarMsg{
AtomID aid[];
Vector data[];
FloatVector fdata[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_CollectVectorVarMsg::operator new(size_t s){
  return CollectVectorVarMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_CollectVectorVarMsg::operator new(size_t s, int* sz){
  return CollectVectorVarMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_CollectVectorVarMsg::operator new(size_t s, int* sz,const int pb){
  return CollectVectorVarMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_CollectVectorVarMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return CollectVectorVarMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_CollectVectorVarMsg::operator new(size_t s, int sz0, int sz1, int sz2) {
  int sizes[3];
  sizes[0] = sz0;
  sizes[1] = sz1;
  sizes[2] = sz2;
  return CollectVectorVarMsg::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_CollectVectorVarMsg::operator new(size_t s, int sz0, int sz1, int sz2, const int p) {
  int sizes[3];
  sizes[0] = sz0;
  sizes[1] = sz1;
  sizes[2] = sz2;
  return CollectVectorVarMsg::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_CollectVectorVarMsg::operator new(size_t s, int sz0, int sz1, int sz2, const int p, const GroupDepNum groupDepNum) {
  int sizes[3];
  sizes[0] = sz0;
  sizes[1] = sz1;
  sizes[2] = sz2;
  return CollectVectorVarMsg::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_CollectVectorVarMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(AtomID)*sizes[0]);
  if(sizes==0)
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[1] + ALIGN_DEFAULT(sizeof(Vector)*sizes[1]);
  if(sizes==0)
    CkpvAccess(_offsets)[3] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[3] = CkpvAccess(_offsets)[2] + ALIGN_DEFAULT(sizeof(FloatVector)*sizes[2]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[3], pb, groupDepNum);
}
CMessage_CollectVectorVarMsg::CMessage_CollectVectorVarMsg() {
CollectVectorVarMsg *newmsg = (CollectVectorVarMsg *)this;
  newmsg->aid = (AtomID *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
  newmsg->data = (Vector *) ((char *)newmsg + CkpvAccess(_offsets)[1]);
  newmsg->fdata = (FloatVector *) ((char *)newmsg + CkpvAccess(_offsets)[2]);
}
void CMessage_CollectVectorVarMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_CollectVectorVarMsg::pack(CollectVectorVarMsg *msg) {
  msg->aid = (AtomID *) ((char *)msg->aid - (char *)msg);
  msg->data = (Vector *) ((char *)msg->data - (char *)msg);
  msg->fdata = (FloatVector *) ((char *)msg->fdata - (char *)msg);
  return (void *) msg;
}
CollectVectorVarMsg* CMessage_CollectVectorVarMsg::unpack(void* buf) {
  CollectVectorVarMsg *msg = (CollectVectorVarMsg *) buf;
  msg->aid = (AtomID *) ((size_t)msg->aid + (char *)msg);
  msg->data = (Vector *) ((size_t)msg->data + (char *)msg);
  msg->fdata = (FloatVector *) ((size_t)msg->fdata + (char *)msg);
  return msg;
}
int CMessage_CollectVectorVarMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: chare CollectionMaster: Chare{
CollectionMaster();
void receivePositions(CollectVectorMsg* impl_msg);
void receiveVelocities(CollectVectorMsg* impl_msg);
void receiveForces(CollectVectorMsg* impl_msg);
void receiveDataStream(DataStreamMsg* impl_msg);
void receiveOutputPosReady(int seq);
void receiveOutputVelReady(int seq);
void receiveOutputForceReady(int seq);
void startNextRoundOutputPos(double totalT);
void startNextRoundOutputVel(double totalT);
void startNextRoundOutputForce(double totalT);
void wrapCoorFinished();
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_CollectionMaster::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: CollectionMaster();
 */
CkChareID CProxy_CollectionMaster::ckNew(int impl_onPE, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkChareID impl_ret;
  CkCreateChare(CkIndex_CollectionMaster::__idx, CkIndex_CollectionMaster::idx_CollectionMaster_void(), impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}
void CProxy_CollectionMaster::ckNew(CkChareID* pcid, int impl_onPE, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkCreateChare(CkIndex_CollectionMaster::__idx, CkIndex_CollectionMaster::idx_CollectionMaster_void(), impl_msg, pcid, impl_onPE);
}

// Entry point registration function
int CkIndex_CollectionMaster::reg_CollectionMaster_void() {
  int epidx = CkRegisterEp("CollectionMaster()",
      reinterpret_cast<CkCallFnPtr>(_call_CollectionMaster_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_CollectionMaster::_call_CollectionMaster_void(void* impl_msg, void* impl_obj_void)
{
  CollectionMaster* impl_obj = static_cast<CollectionMaster*>(impl_obj_void);
  new (impl_obj_void) CollectionMaster();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receivePositions(CollectVectorMsg* impl_msg);
 */
void CProxy_CollectionMaster::receivePositions(CollectVectorMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_CollectionMaster::idx_receivePositions_CollectVectorMsg(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_CollectionMaster::idx_receivePositions_CollectVectorMsg(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_CollectionMaster::idx_receivePositions_CollectVectorMsg(), impl_msg, &ckGetChareID(),0);
  }
}

// Entry point registration function
int CkIndex_CollectionMaster::reg_receivePositions_CollectVectorMsg() {
  int epidx = CkRegisterEp("receivePositions(CollectVectorMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_receivePositions_CollectVectorMsg), CMessage_CollectVectorMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CollectVectorMsg::ckDebugPup);
  return epidx;
}

void CkIndex_CollectionMaster::_call_receivePositions_CollectVectorMsg(void* impl_msg, void* impl_obj_void)
{
  CollectionMaster* impl_obj = static_cast<CollectionMaster*>(impl_obj_void);
  impl_obj->receivePositions((CollectVectorMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receiveVelocities(CollectVectorMsg* impl_msg);
 */
void CProxy_CollectionMaster::receiveVelocities(CollectVectorMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_CollectionMaster::idx_receiveVelocities_CollectVectorMsg(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_CollectionMaster::idx_receiveVelocities_CollectVectorMsg(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_CollectionMaster::idx_receiveVelocities_CollectVectorMsg(), impl_msg, &ckGetChareID(),0);
  }
}

// Entry point registration function
int CkIndex_CollectionMaster::reg_receiveVelocities_CollectVectorMsg() {
  int epidx = CkRegisterEp("receiveVelocities(CollectVectorMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_receiveVelocities_CollectVectorMsg), CMessage_CollectVectorMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CollectVectorMsg::ckDebugPup);
  return epidx;
}

void CkIndex_CollectionMaster::_call_receiveVelocities_CollectVectorMsg(void* impl_msg, void* impl_obj_void)
{
  CollectionMaster* impl_obj = static_cast<CollectionMaster*>(impl_obj_void);
  impl_obj->receiveVelocities((CollectVectorMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receiveForces(CollectVectorMsg* impl_msg);
 */
void CProxy_CollectionMaster::receiveForces(CollectVectorMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_CollectionMaster::idx_receiveForces_CollectVectorMsg(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_CollectionMaster::idx_receiveForces_CollectVectorMsg(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_CollectionMaster::idx_receiveForces_CollectVectorMsg(), impl_msg, &ckGetChareID(),0);
  }
}

// Entry point registration function
int CkIndex_CollectionMaster::reg_receiveForces_CollectVectorMsg() {
  int epidx = CkRegisterEp("receiveForces(CollectVectorMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_receiveForces_CollectVectorMsg), CMessage_CollectVectorMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CollectVectorMsg::ckDebugPup);
  return epidx;
}

void CkIndex_CollectionMaster::_call_receiveForces_CollectVectorMsg(void* impl_msg, void* impl_obj_void)
{
  CollectionMaster* impl_obj = static_cast<CollectionMaster*>(impl_obj_void);
  impl_obj->receiveForces((CollectVectorMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receiveDataStream(DataStreamMsg* impl_msg);
 */
void CProxy_CollectionMaster::receiveDataStream(DataStreamMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_CollectionMaster::idx_receiveDataStream_DataStreamMsg(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_CollectionMaster::idx_receiveDataStream_DataStreamMsg(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_CollectionMaster::idx_receiveDataStream_DataStreamMsg(), impl_msg, &ckGetChareID(),0);
  }
}

// Entry point registration function
int CkIndex_CollectionMaster::reg_receiveDataStream_DataStreamMsg() {
  int epidx = CkRegisterEp("receiveDataStream(DataStreamMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_receiveDataStream_DataStreamMsg), CMessage_DataStreamMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)DataStreamMsg::ckDebugPup);
  return epidx;
}

void CkIndex_CollectionMaster::_call_receiveDataStream_DataStreamMsg(void* impl_msg, void* impl_obj_void)
{
  CollectionMaster* impl_obj = static_cast<CollectionMaster*>(impl_obj_void);
  impl_obj->receiveDataStream((DataStreamMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receiveOutputPosReady(int seq);
 */
void CProxy_CollectionMaster::receiveOutputPosReady(int seq, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int seq
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|seq;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|seq;
  }
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_CollectionMaster::idx_receiveOutputPosReady_marshall6(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_CollectionMaster::idx_receiveOutputPosReady_marshall6(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_CollectionMaster::idx_receiveOutputPosReady_marshall6(), impl_msg, &ckGetChareID(),0);
  }
}

// Entry point registration function
int CkIndex_CollectionMaster::reg_receiveOutputPosReady_marshall6() {
  int epidx = CkRegisterEp("receiveOutputPosReady(int seq)",
      reinterpret_cast<CkCallFnPtr>(_call_receiveOutputPosReady_marshall6), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_receiveOutputPosReady_marshall6);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_receiveOutputPosReady_marshall6);

  return epidx;
}

void CkIndex_CollectionMaster::_call_receiveOutputPosReady_marshall6(void* impl_msg, void* impl_obj_void)
{
  CollectionMaster* impl_obj = static_cast<CollectionMaster*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int seq*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> seq;
  implP|seq;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->receiveOutputPosReady(std::move(seq.t));
}
int CkIndex_CollectionMaster::_callmarshall_receiveOutputPosReady_marshall6(char* impl_buf, void* impl_obj_void) {
  CollectionMaster* impl_obj = static_cast<CollectionMaster*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int seq*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> seq;
  implP|seq;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->receiveOutputPosReady(std::move(seq.t));
  return implP.size();
}
void CkIndex_CollectionMaster::_marshallmessagepup_receiveOutputPosReady_marshall6(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int seq*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> seq;
  implP|seq;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("seq");
  implDestP|seq;
}
PUPable_def(SINGLE_ARG(Closure_CollectionMaster::receiveOutputPosReady_6_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receiveOutputVelReady(int seq);
 */
void CProxy_CollectionMaster::receiveOutputVelReady(int seq, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int seq
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|seq;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|seq;
  }
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_CollectionMaster::idx_receiveOutputVelReady_marshall7(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_CollectionMaster::idx_receiveOutputVelReady_marshall7(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_CollectionMaster::idx_receiveOutputVelReady_marshall7(), impl_msg, &ckGetChareID(),0);
  }
}

// Entry point registration function
int CkIndex_CollectionMaster::reg_receiveOutputVelReady_marshall7() {
  int epidx = CkRegisterEp("receiveOutputVelReady(int seq)",
      reinterpret_cast<CkCallFnPtr>(_call_receiveOutputVelReady_marshall7), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_receiveOutputVelReady_marshall7);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_receiveOutputVelReady_marshall7);

  return epidx;
}

void CkIndex_CollectionMaster::_call_receiveOutputVelReady_marshall7(void* impl_msg, void* impl_obj_void)
{
  CollectionMaster* impl_obj = static_cast<CollectionMaster*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int seq*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> seq;
  implP|seq;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->receiveOutputVelReady(std::move(seq.t));
}
int CkIndex_CollectionMaster::_callmarshall_receiveOutputVelReady_marshall7(char* impl_buf, void* impl_obj_void) {
  CollectionMaster* impl_obj = static_cast<CollectionMaster*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int seq*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> seq;
  implP|seq;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->receiveOutputVelReady(std::move(seq.t));
  return implP.size();
}
void CkIndex_CollectionMaster::_marshallmessagepup_receiveOutputVelReady_marshall7(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int seq*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> seq;
  implP|seq;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("seq");
  implDestP|seq;
}
PUPable_def(SINGLE_ARG(Closure_CollectionMaster::receiveOutputVelReady_7_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receiveOutputForceReady(int seq);
 */
void CProxy_CollectionMaster::receiveOutputForceReady(int seq, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int seq
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|seq;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|seq;
  }
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_CollectionMaster::idx_receiveOutputForceReady_marshall8(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_CollectionMaster::idx_receiveOutputForceReady_marshall8(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_CollectionMaster::idx_receiveOutputForceReady_marshall8(), impl_msg, &ckGetChareID(),0);
  }
}

// Entry point registration function
int CkIndex_CollectionMaster::reg_receiveOutputForceReady_marshall8() {
  int epidx = CkRegisterEp("receiveOutputForceReady(int seq)",
      reinterpret_cast<CkCallFnPtr>(_call_receiveOutputForceReady_marshall8), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_receiveOutputForceReady_marshall8);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_receiveOutputForceReady_marshall8);

  return epidx;
}

void CkIndex_CollectionMaster::_call_receiveOutputForceReady_marshall8(void* impl_msg, void* impl_obj_void)
{
  CollectionMaster* impl_obj = static_cast<CollectionMaster*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int seq*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> seq;
  implP|seq;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->receiveOutputForceReady(std::move(seq.t));
}
int CkIndex_CollectionMaster::_callmarshall_receiveOutputForceReady_marshall8(char* impl_buf, void* impl_obj_void) {
  CollectionMaster* impl_obj = static_cast<CollectionMaster*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int seq*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> seq;
  implP|seq;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->receiveOutputForceReady(std::move(seq.t));
  return implP.size();
}
void CkIndex_CollectionMaster::_marshallmessagepup_receiveOutputForceReady_marshall8(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int seq*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> seq;
  implP|seq;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("seq");
  implDestP|seq;
}
PUPable_def(SINGLE_ARG(Closure_CollectionMaster::receiveOutputForceReady_8_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startNextRoundOutputPos(double totalT);
 */
void CProxy_CollectionMaster::startNextRoundOutputPos(double totalT, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: double totalT
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|totalT;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|totalT;
  }
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_CollectionMaster::idx_startNextRoundOutputPos_marshall9(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_CollectionMaster::idx_startNextRoundOutputPos_marshall9(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_CollectionMaster::idx_startNextRoundOutputPos_marshall9(), impl_msg, &ckGetChareID(),0);
  }
}

// Entry point registration function
int CkIndex_CollectionMaster::reg_startNextRoundOutputPos_marshall9() {
  int epidx = CkRegisterEp("startNextRoundOutputPos(double totalT)",
      reinterpret_cast<CkCallFnPtr>(_call_startNextRoundOutputPos_marshall9), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_startNextRoundOutputPos_marshall9);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_startNextRoundOutputPos_marshall9);

  return epidx;
}

void CkIndex_CollectionMaster::_call_startNextRoundOutputPos_marshall9(void* impl_msg, void* impl_obj_void)
{
  CollectionMaster* impl_obj = static_cast<CollectionMaster*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: double totalT*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<double> totalT;
  implP|totalT;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->startNextRoundOutputPos(std::move(totalT.t));
}
int CkIndex_CollectionMaster::_callmarshall_startNextRoundOutputPos_marshall9(char* impl_buf, void* impl_obj_void) {
  CollectionMaster* impl_obj = static_cast<CollectionMaster*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: double totalT*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<double> totalT;
  implP|totalT;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->startNextRoundOutputPos(std::move(totalT.t));
  return implP.size();
}
void CkIndex_CollectionMaster::_marshallmessagepup_startNextRoundOutputPos_marshall9(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: double totalT*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<double> totalT;
  implP|totalT;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("totalT");
  implDestP|totalT;
}
PUPable_def(SINGLE_ARG(Closure_CollectionMaster::startNextRoundOutputPos_9_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startNextRoundOutputVel(double totalT);
 */
void CProxy_CollectionMaster::startNextRoundOutputVel(double totalT, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: double totalT
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|totalT;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|totalT;
  }
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_CollectionMaster::idx_startNextRoundOutputVel_marshall10(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_CollectionMaster::idx_startNextRoundOutputVel_marshall10(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_CollectionMaster::idx_startNextRoundOutputVel_marshall10(), impl_msg, &ckGetChareID(),0);
  }
}

// Entry point registration function
int CkIndex_CollectionMaster::reg_startNextRoundOutputVel_marshall10() {
  int epidx = CkRegisterEp("startNextRoundOutputVel(double totalT)",
      reinterpret_cast<CkCallFnPtr>(_call_startNextRoundOutputVel_marshall10), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_startNextRoundOutputVel_marshall10);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_startNextRoundOutputVel_marshall10);

  return epidx;
}

void CkIndex_CollectionMaster::_call_startNextRoundOutputVel_marshall10(void* impl_msg, void* impl_obj_void)
{
  CollectionMaster* impl_obj = static_cast<CollectionMaster*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: double totalT*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<double> totalT;
  implP|totalT;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->startNextRoundOutputVel(std::move(totalT.t));
}
int CkIndex_CollectionMaster::_callmarshall_startNextRoundOutputVel_marshall10(char* impl_buf, void* impl_obj_void) {
  CollectionMaster* impl_obj = static_cast<CollectionMaster*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: double totalT*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<double> totalT;
  implP|totalT;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->startNextRoundOutputVel(std::move(totalT.t));
  return implP.size();
}
void CkIndex_CollectionMaster::_marshallmessagepup_startNextRoundOutputVel_marshall10(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: double totalT*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<double> totalT;
  implP|totalT;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("totalT");
  implDestP|totalT;
}
PUPable_def(SINGLE_ARG(Closure_CollectionMaster::startNextRoundOutputVel_10_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startNextRoundOutputForce(double totalT);
 */
void CProxy_CollectionMaster::startNextRoundOutputForce(double totalT, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: double totalT
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|totalT;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|totalT;
  }
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_CollectionMaster::idx_startNextRoundOutputForce_marshall11(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_CollectionMaster::idx_startNextRoundOutputForce_marshall11(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_CollectionMaster::idx_startNextRoundOutputForce_marshall11(), impl_msg, &ckGetChareID(),0);
  }
}

// Entry point registration function
int CkIndex_CollectionMaster::reg_startNextRoundOutputForce_marshall11() {
  int epidx = CkRegisterEp("startNextRoundOutputForce(double totalT)",
      reinterpret_cast<CkCallFnPtr>(_call_startNextRoundOutputForce_marshall11), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_startNextRoundOutputForce_marshall11);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_startNextRoundOutputForce_marshall11);

  return epidx;
}

void CkIndex_CollectionMaster::_call_startNextRoundOutputForce_marshall11(void* impl_msg, void* impl_obj_void)
{
  CollectionMaster* impl_obj = static_cast<CollectionMaster*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: double totalT*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<double> totalT;
  implP|totalT;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->startNextRoundOutputForce(std::move(totalT.t));
}
int CkIndex_CollectionMaster::_callmarshall_startNextRoundOutputForce_marshall11(char* impl_buf, void* impl_obj_void) {
  CollectionMaster* impl_obj = static_cast<CollectionMaster*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: double totalT*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<double> totalT;
  implP|totalT;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->startNextRoundOutputForce(std::move(totalT.t));
  return implP.size();
}
void CkIndex_CollectionMaster::_marshallmessagepup_startNextRoundOutputForce_marshall11(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: double totalT*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<double> totalT;
  implP|totalT;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("totalT");
  implDestP|totalT;
}
PUPable_def(SINGLE_ARG(Closure_CollectionMaster::startNextRoundOutputForce_11_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void wrapCoorFinished();
 */
void CProxy_CollectionMaster::wrapCoorFinished(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_CollectionMaster::idx_wrapCoorFinished_void(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_CollectionMaster::idx_wrapCoorFinished_void(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_CollectionMaster::idx_wrapCoorFinished_void(), impl_msg, &ckGetChareID(),0);
  }
}

// Entry point registration function
int CkIndex_CollectionMaster::reg_wrapCoorFinished_void() {
  int epidx = CkRegisterEp("wrapCoorFinished()",
      reinterpret_cast<CkCallFnPtr>(_call_wrapCoorFinished_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_CollectionMaster::_call_wrapCoorFinished_void(void* impl_msg, void* impl_obj_void)
{
  CollectionMaster* impl_obj = static_cast<CollectionMaster*>(impl_obj_void);
  impl_obj->wrapCoorFinished();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_CollectionMaster::wrapCoorFinished_12_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_CollectionMaster::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeChare);
  CkRegisterBase(__idx, CkIndex_Chare::__idx);
  // REG: CollectionMaster();
  idx_CollectionMaster_void();
  CkRegisterDefaultCtor(__idx, idx_CollectionMaster_void());

  // REG: void receivePositions(CollectVectorMsg* impl_msg);
  idx_receivePositions_CollectVectorMsg();

  // REG: void receiveVelocities(CollectVectorMsg* impl_msg);
  idx_receiveVelocities_CollectVectorMsg();

  // REG: void receiveForces(CollectVectorMsg* impl_msg);
  idx_receiveForces_CollectVectorMsg();

  // REG: void receiveDataStream(DataStreamMsg* impl_msg);
  idx_receiveDataStream_DataStreamMsg();

  // REG: void receiveOutputPosReady(int seq);
  idx_receiveOutputPosReady_marshall6();

  // REG: void receiveOutputVelReady(int seq);
  idx_receiveOutputVelReady_marshall7();

  // REG: void receiveOutputForceReady(int seq);
  idx_receiveOutputForceReady_marshall8();

  // REG: void startNextRoundOutputPos(double totalT);
  idx_startNextRoundOutputPos_marshall9();

  // REG: void startNextRoundOutputVel(double totalT);
  idx_startNextRoundOutputVel_marshall10();

  // REG: void startNextRoundOutputForce(double totalT);
  idx_startNextRoundOutputForce_marshall11();

  // REG: void wrapCoorFinished();
  idx_wrapCoorFinished_void();

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerCollectionMaster(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: message CollectVectorMsg{
AtomID aid[];
Vector data[];
FloatVector fdata[];
}
;
*/
CMessage_CollectVectorMsg::__register("CollectVectorMsg", sizeof(CollectVectorMsg),(CkPackFnPtr) CollectVectorMsg::pack,(CkUnpackFnPtr) CollectVectorMsg::unpack);

/* REG: message DataStreamMsg;
*/
CMessage_DataStreamMsg::__register("DataStreamMsg", sizeof(DataStreamMsg),(CkPackFnPtr) DataStreamMsg::pack,(CkUnpackFnPtr) DataStreamMsg::unpack);

/* REG: message CollectVectorVarMsg{
AtomID aid[];
Vector data[];
FloatVector fdata[];
}
;
*/
CMessage_CollectVectorVarMsg::__register("CollectVectorVarMsg", sizeof(CollectVectorVarMsg),(CkPackFnPtr) CollectVectorVarMsg::pack,(CkUnpackFnPtr) CollectVectorVarMsg::unpack);

/* REG: chare CollectionMaster: Chare{
CollectionMaster();
void receivePositions(CollectVectorMsg* impl_msg);
void receiveVelocities(CollectVectorMsg* impl_msg);
void receiveForces(CollectVectorMsg* impl_msg);
void receiveDataStream(DataStreamMsg* impl_msg);
void receiveOutputPosReady(int seq);
void receiveOutputVelReady(int seq);
void receiveOutputForceReady(int seq);
void startNextRoundOutputPos(double totalT);
void startNextRoundOutputVel(double totalT);
void startNextRoundOutputForce(double totalT);
void wrapCoorFinished();
};
*/
  CkIndex_CollectionMaster::__register("CollectionMaster", sizeof(CollectionMaster));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_CollectionMaster::virtual_pup(PUP::er &p) {
    recursive_pup<CollectionMaster>(dynamic_cast<CollectionMaster*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
