


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Node::startup_2_closure : public SDAG::Closure {
      

      startup_2_closure() {
        init();
      }
      startup_2_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~startup_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(startup_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Node::mallocTest_3_closure : public SDAG::Closure {
            int impl_noname_0;


      mallocTest_3_closure() {
        init();
      }
      mallocTest_3_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return impl_noname_0;}
      void pup(PUP::er& __p) {
        __p | impl_noname_0;
        packClosure(__p);
      }
      virtual ~mallocTest_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(mallocTest_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Node::mallocTestQd_4_closure : public SDAG::Closure {
      

      mallocTestQd_4_closure() {
        init();
      }
      mallocTestQd_4_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~mallocTestQd_4_closure() {
      }
      PUPable_decl(SINGLE_ARG(mallocTestQd_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Node::run_5_closure : public SDAG::Closure {
      

      run_5_closure() {
        init();
      }
      run_5_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~run_5_closure() {
      }
      PUPable_decl(SINGLE_ARG(run_5_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Node::scriptBarrier_6_closure : public SDAG::Closure {
      

      scriptBarrier_6_closure() {
        init();
      }
      scriptBarrier_6_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~scriptBarrier_6_closure() {
      }
      PUPable_decl(SINGLE_ARG(scriptBarrier_6_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Node::reloadCharges_8_closure : public SDAG::Closure {
            float *charge;
            int n;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      reloadCharges_8_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      reloadCharges_8_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            float *& getP0() { return charge;}
            int & getP1() { return n;}
      void pup(PUP::er& __p) {
        __p | n;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  int impl_off_charge, impl_cnt_charge;
  implP|impl_off_charge;
  implP|impl_cnt_charge;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
          impl_buf+=CK_ALIGN(implP.size(),16);
          charge = (float *)(impl_buf+impl_off_charge);
        }
      }
      virtual ~reloadCharges_8_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(reloadCharges_8_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Node::reloadGridforceGrid_9_closure : public SDAG::Closure {
            int gridnum;


      reloadGridforceGrid_9_closure() {
        init();
      }
      reloadGridforceGrid_9_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return gridnum;}
      void pup(PUP::er& __p) {
        __p | gridnum;
        packClosure(__p);
      }
      virtual ~reloadGridforceGrid_9_closure() {
      }
      PUPable_decl(SINGLE_ARG(reloadGridforceGrid_9_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Node::updateGridScale_10_closure : public SDAG::Closure {
            int gridnum;
            float sx;
            float sy;
            float sz;


      updateGridScale_10_closure() {
        init();
      }
      updateGridScale_10_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return gridnum;}
            float & getP1() { return sx;}
            float & getP2() { return sy;}
            float & getP3() { return sz;}
      void pup(PUP::er& __p) {
        __p | gridnum;
        __p | sx;
        __p | sy;
        __p | sz;
        packClosure(__p);
      }
      virtual ~updateGridScale_10_closure() {
      }
      PUPable_decl(SINGLE_ARG(updateGridScale_10_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Node::resendMolecule_11_closure : public SDAG::Closure {
      

      resendMolecule_11_closure() {
        init();
      }
      resendMolecule_11_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~resendMolecule_11_closure() {
      }
      PUPable_decl(SINGLE_ARG(resendMolecule_11_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Node::resendMolecule2_12_closure : public SDAG::Closure {
      

      resendMolecule2_12_closure() {
        init();
      }
      resendMolecule2_12_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~resendMolecule2_12_closure() {
      }
      PUPable_decl(SINGLE_ARG(resendMolecule2_12_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Node::recvEnableExitScheduler_15_closure : public SDAG::Closure {
      

      recvEnableExitScheduler_15_closure() {
        init();
      }
      recvEnableExitScheduler_15_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~recvEnableExitScheduler_15_closure() {
      }
      PUPable_decl(SINGLE_ARG(recvEnableExitScheduler_15_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Node::exitScheduler_16_closure : public SDAG::Closure {
      

      exitScheduler_16_closure() {
        init();
      }
      exitScheduler_16_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~exitScheduler_16_closure() {
      }
      PUPable_decl(SINGLE_ARG(exitScheduler_16_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Node::recvEnableEarlyExit_17_closure : public SDAG::Closure {
      

      recvEnableEarlyExit_17_closure() {
        init();
      }
      recvEnableEarlyExit_17_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~recvEnableEarlyExit_17_closure() {
      }
      PUPable_decl(SINGLE_ARG(recvEnableEarlyExit_17_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Node::earlyExit_18_closure : public SDAG::Closure {
      

      earlyExit_18_closure() {
        init();
      }
      earlyExit_18_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~earlyExit_18_closure() {
      }
      PUPable_decl(SINGLE_ARG(earlyExit_18_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Node::startHPM_19_closure : public SDAG::Closure {
      

      startHPM_19_closure() {
        init();
      }
      startHPM_19_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~startHPM_19_closure() {
      }
      PUPable_decl(SINGLE_ARG(startHPM_19_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Node::stopHPM_20_closure : public SDAG::Closure {
      

      stopHPM_20_closure() {
        init();
      }
      stopHPM_20_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~stopHPM_20_closure() {
      }
      PUPable_decl(SINGLE_ARG(stopHPM_20_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Node::traceBarrier_21_closure : public SDAG::Closure {
            int impl_noname_1;
            int impl_noname_2;


      traceBarrier_21_closure() {
        init();
      }
      traceBarrier_21_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return impl_noname_1;}
            int & getP1() { return impl_noname_2;}
      void pup(PUP::er& __p) {
        __p | impl_noname_1;
        __p | impl_noname_2;
        packClosure(__p);
      }
      virtual ~traceBarrier_21_closure() {
      }
      PUPable_decl(SINGLE_ARG(traceBarrier_21_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Node::papiMeasureBarrier_23_closure : public SDAG::Closure {
            int impl_noname_3;
            int impl_noname_4;


      papiMeasureBarrier_23_closure() {
        init();
      }
      papiMeasureBarrier_23_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return impl_noname_3;}
            int & getP1() { return impl_noname_4;}
      void pup(PUP::er& __p) {
        __p | impl_noname_3;
        __p | impl_noname_4;
        packClosure(__p);
      }
      virtual ~papiMeasureBarrier_23_closure() {
      }
      PUPable_decl(SINGLE_ARG(papiMeasureBarrier_23_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: message GroupInitMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_GroupInitMsg::operator new(size_t s){
  return GroupInitMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_GroupInitMsg::operator new(size_t s, int* sz){
  return GroupInitMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_GroupInitMsg::operator new(size_t s, int* sz,const int pb){
  return GroupInitMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_GroupInitMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return GroupInitMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_GroupInitMsg::operator new(size_t s, const int p) {
  return GroupInitMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_GroupInitMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return GroupInitMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_GroupInitMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_GroupInitMsg::CMessage_GroupInitMsg() {
GroupInitMsg *newmsg = (GroupInitMsg *)this;
}
void CMessage_GroupInitMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_GroupInitMsg::pack(GroupInitMsg *msg) {
  return (void *) msg;
}
GroupInitMsg* CMessage_GroupInitMsg::unpack(void* buf) {
  GroupInitMsg *msg = (GroupInitMsg *) buf;
  return msg;
}
int CMessage_GroupInitMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message ScriptParamMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_ScriptParamMsg::operator new(size_t s){
  return ScriptParamMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_ScriptParamMsg::operator new(size_t s, int* sz){
  return ScriptParamMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_ScriptParamMsg::operator new(size_t s, int* sz,const int pb){
  return ScriptParamMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_ScriptParamMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return ScriptParamMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_ScriptParamMsg::operator new(size_t s, const int p) {
  return ScriptParamMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_ScriptParamMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return ScriptParamMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_ScriptParamMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_ScriptParamMsg::CMessage_ScriptParamMsg() {
ScriptParamMsg *newmsg = (ScriptParamMsg *)this;
}
void CMessage_ScriptParamMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_ScriptParamMsg::pack(ScriptParamMsg *msg) {
  return (void *) msg;
}
ScriptParamMsg* CMessage_ScriptParamMsg::unpack(void* buf) {
  ScriptParamMsg *msg = (ScriptParamMsg *) buf;
  return msg;
}
int CMessage_ScriptParamMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message CheckpointMsg{
char key[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_CheckpointMsg::operator new(size_t s){
  return CheckpointMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_CheckpointMsg::operator new(size_t s, int* sz){
  return CheckpointMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_CheckpointMsg::operator new(size_t s, int* sz,const int pb){
  return CheckpointMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_CheckpointMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return CheckpointMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_CheckpointMsg::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return CheckpointMsg::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_CheckpointMsg::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return CheckpointMsg::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_CheckpointMsg::operator new(size_t s, int sz0, const int p, const GroupDepNum groupDepNum) {
  int sizes[1];
  sizes[0] = sz0;
  return CheckpointMsg::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_CheckpointMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(char)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb, groupDepNum);
}
CMessage_CheckpointMsg::CMessage_CheckpointMsg() {
CheckpointMsg *newmsg = (CheckpointMsg *)this;
  newmsg->key = (char *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
void CMessage_CheckpointMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_CheckpointMsg::pack(CheckpointMsg *msg) {
  msg->key = (char *) ((char *)msg->key - (char *)msg);
  return (void *) msg;
}
CheckpointMsg* CMessage_CheckpointMsg::unpack(void* buf) {
  CheckpointMsg *msg = (CheckpointMsg *) buf;
  msg->key = (char *) ((size_t)msg->key + (char *)msg);
  return msg;
}
int CMessage_CheckpointMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group Node: IrrGroup{
Node(GroupInitMsg* impl_msg);
void startup();
void mallocTest(int impl_noname_0);
void mallocTestQd();
void run();
void scriptBarrier();
void scriptParam(ScriptParamMsg* impl_msg);
void reloadCharges(const float *charge, int n);
void reloadGridforceGrid(int gridnum);
void updateGridScale(int gridnum, float sx, float sy, float sz);
void resendMolecule();
void resendMolecule2();
void recvCheckpointReq(CheckpointMsg* impl_msg);
void recvCheckpointAck(CheckpointMsg* impl_msg);
void recvEnableExitScheduler();
void exitScheduler();
void recvEnableEarlyExit();
void earlyExit();
void startHPM();
void stopHPM();
void traceBarrier(int impl_noname_1, int impl_noname_2);
void resumeAfterTraceBarrier(CkReductionMsg* impl_msg);
void papiMeasureBarrier(int impl_noname_3, int impl_noname_4);
void resumeAfterPapiMeasureBarrier(CkReductionMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_Node::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: Node(GroupInitMsg* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startup();
 */
void CProxyElement_Node::startup(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::idx_startup_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_Node::idx_startup_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_Node::idx_startup_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void mallocTest(int impl_noname_0);
 */
void CProxyElement_Node::mallocTest(int impl_noname_0, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_0;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::idx_mallocTest_marshall3(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_Node::idx_mallocTest_marshall3(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_Node::idx_mallocTest_marshall3(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void mallocTestQd();
 */
void CProxyElement_Node::mallocTestQd(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::idx_mallocTestQd_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_Node::idx_mallocTestQd_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_Node::idx_mallocTestQd_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void run();
 */
void CProxyElement_Node::run(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::idx_run_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_Node::idx_run_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_Node::idx_run_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void scriptBarrier();
 */
void CProxyElement_Node::scriptBarrier(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::idx_scriptBarrier_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_Node::idx_scriptBarrier_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_Node::idx_scriptBarrier_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void scriptParam(ScriptParamMsg* impl_msg);
 */
void CProxyElement_Node::scriptParam(ScriptParamMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::idx_scriptParam_ScriptParamMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_Node::idx_scriptParam_ScriptParamMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_Node::idx_scriptParam_ScriptParamMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void reloadCharges(const float *charge, int n);
 */
void CProxyElement_Node::reloadCharges(const float *charge, int n, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const float *charge, int n
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_charge, impl_cnt_charge;
  impl_off_charge=impl_off=CK_ALIGN(impl_off,sizeof(float));
  impl_off+=(impl_cnt_charge=sizeof(float)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_charge;
    implP|impl_cnt_charge;
    implP|n;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_charge;
    implP|impl_cnt_charge;
    implP|n;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_charge,charge,impl_cnt_charge);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::idx_reloadCharges_marshall8(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_Node::idx_reloadCharges_marshall8(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_Node::idx_reloadCharges_marshall8(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void reloadGridforceGrid(int gridnum);
 */
void CProxyElement_Node::reloadGridforceGrid(int gridnum, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int gridnum
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|gridnum;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|gridnum;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::idx_reloadGridforceGrid_marshall9(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_Node::idx_reloadGridforceGrid_marshall9(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_Node::idx_reloadGridforceGrid_marshall9(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void updateGridScale(int gridnum, float sx, float sy, float sz);
 */
void CProxyElement_Node::updateGridScale(int gridnum, float sx, float sy, float sz, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int gridnum, float sx, float sy, float sz
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|gridnum;
    implP|sx;
    implP|sy;
    implP|sz;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|gridnum;
    implP|sx;
    implP|sy;
    implP|sz;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::idx_updateGridScale_marshall10(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_Node::idx_updateGridScale_marshall10(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_Node::idx_updateGridScale_marshall10(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void resendMolecule();
 */
void CProxyElement_Node::resendMolecule(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::idx_resendMolecule_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_Node::idx_resendMolecule_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_Node::idx_resendMolecule_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void resendMolecule2();
 */
void CProxyElement_Node::resendMolecule2(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::idx_resendMolecule2_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_Node::idx_resendMolecule2_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_Node::idx_resendMolecule2_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvCheckpointReq(CheckpointMsg* impl_msg);
 */
void CProxyElement_Node::recvCheckpointReq(CheckpointMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::idx_recvCheckpointReq_CheckpointMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_Node::idx_recvCheckpointReq_CheckpointMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_Node::idx_recvCheckpointReq_CheckpointMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvCheckpointAck(CheckpointMsg* impl_msg);
 */
void CProxyElement_Node::recvCheckpointAck(CheckpointMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::idx_recvCheckpointAck_CheckpointMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_Node::idx_recvCheckpointAck_CheckpointMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_Node::idx_recvCheckpointAck_CheckpointMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvEnableExitScheduler();
 */
void CProxyElement_Node::recvEnableExitScheduler(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::idx_recvEnableExitScheduler_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_Node::idx_recvEnableExitScheduler_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_Node::idx_recvEnableExitScheduler_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void exitScheduler();
 */
void CProxyElement_Node::exitScheduler(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::idx_exitScheduler_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_Node::idx_exitScheduler_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_Node::idx_exitScheduler_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvEnableEarlyExit();
 */
void CProxyElement_Node::recvEnableEarlyExit(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::idx_recvEnableEarlyExit_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_Node::idx_recvEnableEarlyExit_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_Node::idx_recvEnableEarlyExit_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void earlyExit();
 */
void CProxyElement_Node::earlyExit(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::idx_earlyExit_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_Node::idx_earlyExit_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_Node::idx_earlyExit_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startHPM();
 */
void CProxyElement_Node::startHPM(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::idx_startHPM_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_Node::idx_startHPM_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_Node::idx_startHPM_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void stopHPM();
 */
void CProxyElement_Node::stopHPM(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::idx_stopHPM_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_Node::idx_stopHPM_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_Node::idx_stopHPM_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void traceBarrier(int impl_noname_1, int impl_noname_2);
 */
void CProxyElement_Node::traceBarrier(int impl_noname_1, int impl_noname_2, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_1, int impl_noname_2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_1;
    implP|impl_noname_2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_1;
    implP|impl_noname_2;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::idx_traceBarrier_marshall21(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_Node::idx_traceBarrier_marshall21(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_Node::idx_traceBarrier_marshall21(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void resumeAfterTraceBarrier(CkReductionMsg* impl_msg);
 */
void CProxyElement_Node::resumeAfterTraceBarrier(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::idx_resumeAfterTraceBarrier_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_Node::idx_resumeAfterTraceBarrier_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_Node::idx_resumeAfterTraceBarrier_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void papiMeasureBarrier(int impl_noname_3, int impl_noname_4);
 */
void CProxyElement_Node::papiMeasureBarrier(int impl_noname_3, int impl_noname_4, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_3, int impl_noname_4
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_3;
    implP|impl_noname_4;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_3;
    implP|impl_noname_4;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::idx_papiMeasureBarrier_marshall23(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_Node::idx_papiMeasureBarrier_marshall23(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_Node::idx_papiMeasureBarrier_marshall23(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void resumeAfterPapiMeasureBarrier(CkReductionMsg* impl_msg);
 */
void CProxyElement_Node::resumeAfterPapiMeasureBarrier(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::idx_resumeAfterPapiMeasureBarrier_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_Node::idx_resumeAfterPapiMeasureBarrier_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_Node::idx_resumeAfterPapiMeasureBarrier_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Node(GroupInitMsg* impl_msg);
 */
CkGroupID CProxy_Node::ckNew(GroupInitMsg* impl_msg)
{
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_Node::__idx, CkIndex_Node::idx_Node_GroupInitMsg(), impl_msg);
  return gId;
}
  CProxy_Node::CProxy_Node(GroupInitMsg* impl_msg)
{
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  ckSetGroupID(CkCreateGroup(CkIndex_Node::__idx, CkIndex_Node::idx_Node_GroupInitMsg(), impl_msg));
}

// Entry point registration function
int CkIndex_Node::reg_Node_GroupInitMsg() {
  int epidx = CkRegisterEp("Node(GroupInitMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_Node_GroupInitMsg), CMessage_GroupInitMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)GroupInitMsg::ckDebugPup);
  return epidx;
}

void CkIndex_Node::_call_Node_GroupInitMsg(void* impl_msg, void* impl_obj_void)
{
  Node* impl_obj = static_cast<Node*>(impl_obj_void);
  new (impl_obj_void) Node((GroupInitMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startup();
 */
void CProxy_Node::startup(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::idx_startup_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_Node::idx_startup_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_Node::idx_startup_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_Node::startup(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_Node::idx_startup_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_Node::startup(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_Node::idx_startup_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_Node::reg_startup_void() {
  int epidx = CkRegisterEp("startup()",
      reinterpret_cast<CkCallFnPtr>(_call_startup_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_Node::_call_startup_void(void* impl_msg, void* impl_obj_void)
{
  Node* impl_obj = static_cast<Node*>(impl_obj_void);
  impl_obj->startup();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_Node::startup_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void mallocTest(int impl_noname_0);
 */
void CProxy_Node::mallocTest(int impl_noname_0, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_0;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::idx_mallocTest_marshall3(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_Node::idx_mallocTest_marshall3(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_Node::idx_mallocTest_marshall3(), impl_msg, ckGetGroupID(),0);
}
void CProxy_Node::mallocTest(int impl_noname_0, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_0;
  }
  CkSendMsgBranchMulti(CkIndex_Node::idx_mallocTest_marshall3(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_Node::mallocTest(int impl_noname_0, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_0;
  }
  CkSendMsgBranchGroup(CkIndex_Node::idx_mallocTest_marshall3(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_Node::reg_mallocTest_marshall3() {
  int epidx = CkRegisterEp("mallocTest(int impl_noname_0)",
      reinterpret_cast<CkCallFnPtr>(_call_mallocTest_marshall3), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_mallocTest_marshall3);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_mallocTest_marshall3);

  return epidx;
}

void CkIndex_Node::_call_mallocTest_marshall3(void* impl_msg, void* impl_obj_void)
{
  Node* impl_obj = static_cast<Node*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_0;
  implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->mallocTest(std::move(impl_noname_0.t));
}
int CkIndex_Node::_callmarshall_mallocTest_marshall3(char* impl_buf, void* impl_obj_void) {
  Node* impl_obj = static_cast<Node*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_0;
  implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->mallocTest(std::move(impl_noname_0.t));
  return implP.size();
}
void CkIndex_Node::_marshallmessagepup_mallocTest_marshall3(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_0;
  implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_0");
  implDestP|impl_noname_0;
}
PUPable_def(SINGLE_ARG(Closure_Node::mallocTest_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void mallocTestQd();
 */
void CProxy_Node::mallocTestQd(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::idx_mallocTestQd_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_Node::idx_mallocTestQd_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_Node::idx_mallocTestQd_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_Node::mallocTestQd(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_Node::idx_mallocTestQd_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_Node::mallocTestQd(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_Node::idx_mallocTestQd_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_Node::reg_mallocTestQd_void() {
  int epidx = CkRegisterEp("mallocTestQd()",
      reinterpret_cast<CkCallFnPtr>(_call_mallocTestQd_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_Node::_call_mallocTestQd_void(void* impl_msg, void* impl_obj_void)
{
  Node* impl_obj = static_cast<Node*>(impl_obj_void);
  impl_obj->mallocTestQd();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_Node::mallocTestQd_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void run();
 */
void CProxy_Node::run(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::idx_run_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_Node::idx_run_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_Node::idx_run_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_Node::run(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_Node::idx_run_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_Node::run(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_Node::idx_run_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_Node::reg_run_void() {
  int epidx = CkRegisterEp("run()",
      reinterpret_cast<CkCallFnPtr>(_call_run_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_Node::_call_run_void(void* impl_msg, void* impl_obj_void)
{
  Node* impl_obj = static_cast<Node*>(impl_obj_void);
  impl_obj->run();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_Node::run_5_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void scriptBarrier();
 */
void CProxy_Node::scriptBarrier(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::idx_scriptBarrier_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_Node::idx_scriptBarrier_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_Node::idx_scriptBarrier_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_Node::scriptBarrier(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_Node::idx_scriptBarrier_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_Node::scriptBarrier(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_Node::idx_scriptBarrier_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_Node::reg_scriptBarrier_void() {
  int epidx = CkRegisterEp("scriptBarrier()",
      reinterpret_cast<CkCallFnPtr>(_call_scriptBarrier_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_Node::_call_scriptBarrier_void(void* impl_msg, void* impl_obj_void)
{
  Node* impl_obj = static_cast<Node*>(impl_obj_void);
  impl_obj->scriptBarrier();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_Node::scriptBarrier_6_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void scriptParam(ScriptParamMsg* impl_msg);
 */
void CProxy_Node::scriptParam(ScriptParamMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::idx_scriptParam_ScriptParamMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_Node::idx_scriptParam_ScriptParamMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_Node::idx_scriptParam_ScriptParamMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_Node::scriptParam(ScriptParamMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_Node::idx_scriptParam_ScriptParamMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_Node::scriptParam(ScriptParamMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_Node::idx_scriptParam_ScriptParamMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_Node::reg_scriptParam_ScriptParamMsg() {
  int epidx = CkRegisterEp("scriptParam(ScriptParamMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_scriptParam_ScriptParamMsg), CMessage_ScriptParamMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)ScriptParamMsg::ckDebugPup);
  return epidx;
}

void CkIndex_Node::_call_scriptParam_ScriptParamMsg(void* impl_msg, void* impl_obj_void)
{
  Node* impl_obj = static_cast<Node*>(impl_obj_void);
  impl_obj->scriptParam((ScriptParamMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void reloadCharges(const float *charge, int n);
 */
void CProxy_Node::reloadCharges(const float *charge, int n, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const float *charge, int n
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_charge, impl_cnt_charge;
  impl_off_charge=impl_off=CK_ALIGN(impl_off,sizeof(float));
  impl_off+=(impl_cnt_charge=sizeof(float)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_charge;
    implP|impl_cnt_charge;
    implP|n;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_charge;
    implP|impl_cnt_charge;
    implP|n;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_charge,charge,impl_cnt_charge);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::idx_reloadCharges_marshall8(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_Node::idx_reloadCharges_marshall8(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_Node::idx_reloadCharges_marshall8(), impl_msg, ckGetGroupID(),0);
}
void CProxy_Node::reloadCharges(const float *charge, int n, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const float *charge, int n
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_charge, impl_cnt_charge;
  impl_off_charge=impl_off=CK_ALIGN(impl_off,sizeof(float));
  impl_off+=(impl_cnt_charge=sizeof(float)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_charge;
    implP|impl_cnt_charge;
    implP|n;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_charge;
    implP|impl_cnt_charge;
    implP|n;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_charge,charge,impl_cnt_charge);
  CkSendMsgBranchMulti(CkIndex_Node::idx_reloadCharges_marshall8(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_Node::reloadCharges(const float *charge, int n, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const float *charge, int n
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_charge, impl_cnt_charge;
  impl_off_charge=impl_off=CK_ALIGN(impl_off,sizeof(float));
  impl_off+=(impl_cnt_charge=sizeof(float)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_charge;
    implP|impl_cnt_charge;
    implP|n;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_charge;
    implP|impl_cnt_charge;
    implP|n;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_charge,charge,impl_cnt_charge);
  CkSendMsgBranchGroup(CkIndex_Node::idx_reloadCharges_marshall8(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_Node::reg_reloadCharges_marshall8() {
  int epidx = CkRegisterEp("reloadCharges(const float *charge, int n)",
      reinterpret_cast<CkCallFnPtr>(_call_reloadCharges_marshall8), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_reloadCharges_marshall8);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_reloadCharges_marshall8);

  return epidx;
}

void CkIndex_Node::_call_reloadCharges_marshall8(void* impl_msg, void* impl_obj_void)
{
  Node* impl_obj = static_cast<Node*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const float *charge, int n*/
  PUP::fromMem implP(impl_buf);
  int impl_off_charge, impl_cnt_charge;
  implP|impl_off_charge;
  implP|impl_cnt_charge;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  float *charge=(float *)(impl_buf+impl_off_charge);
  impl_obj->reloadCharges(charge, std::move(n.t));
}
int CkIndex_Node::_callmarshall_reloadCharges_marshall8(char* impl_buf, void* impl_obj_void) {
  Node* impl_obj = static_cast<Node*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const float *charge, int n*/
  PUP::fromMem implP(impl_buf);
  int impl_off_charge, impl_cnt_charge;
  implP|impl_off_charge;
  implP|impl_cnt_charge;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  float *charge=(float *)(impl_buf+impl_off_charge);
  impl_obj->reloadCharges(charge, std::move(n.t));
  return implP.size();
}
void CkIndex_Node::_marshallmessagepup_reloadCharges_marshall8(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const float *charge, int n*/
  PUP::fromMem implP(impl_buf);
  int impl_off_charge, impl_cnt_charge;
  implP|impl_off_charge;
  implP|impl_cnt_charge;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  float *charge=(float *)(impl_buf+impl_off_charge);
  if (implDestP.hasComments()) implDestP.comment("charge");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*charge))<impl_cnt_charge;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|charge[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("n");
  implDestP|n;
}
PUPable_def(SINGLE_ARG(Closure_Node::reloadCharges_8_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void reloadGridforceGrid(int gridnum);
 */
void CProxy_Node::reloadGridforceGrid(int gridnum, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int gridnum
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|gridnum;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|gridnum;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::idx_reloadGridforceGrid_marshall9(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_Node::idx_reloadGridforceGrid_marshall9(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_Node::idx_reloadGridforceGrid_marshall9(), impl_msg, ckGetGroupID(),0);
}
void CProxy_Node::reloadGridforceGrid(int gridnum, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int gridnum
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|gridnum;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|gridnum;
  }
  CkSendMsgBranchMulti(CkIndex_Node::idx_reloadGridforceGrid_marshall9(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_Node::reloadGridforceGrid(int gridnum, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int gridnum
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|gridnum;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|gridnum;
  }
  CkSendMsgBranchGroup(CkIndex_Node::idx_reloadGridforceGrid_marshall9(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_Node::reg_reloadGridforceGrid_marshall9() {
  int epidx = CkRegisterEp("reloadGridforceGrid(int gridnum)",
      reinterpret_cast<CkCallFnPtr>(_call_reloadGridforceGrid_marshall9), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_reloadGridforceGrid_marshall9);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_reloadGridforceGrid_marshall9);

  return epidx;
}

void CkIndex_Node::_call_reloadGridforceGrid_marshall9(void* impl_msg, void* impl_obj_void)
{
  Node* impl_obj = static_cast<Node*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int gridnum*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> gridnum;
  implP|gridnum;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->reloadGridforceGrid(std::move(gridnum.t));
}
int CkIndex_Node::_callmarshall_reloadGridforceGrid_marshall9(char* impl_buf, void* impl_obj_void) {
  Node* impl_obj = static_cast<Node*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int gridnum*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> gridnum;
  implP|gridnum;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->reloadGridforceGrid(std::move(gridnum.t));
  return implP.size();
}
void CkIndex_Node::_marshallmessagepup_reloadGridforceGrid_marshall9(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int gridnum*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> gridnum;
  implP|gridnum;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("gridnum");
  implDestP|gridnum;
}
PUPable_def(SINGLE_ARG(Closure_Node::reloadGridforceGrid_9_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void updateGridScale(int gridnum, float sx, float sy, float sz);
 */
void CProxy_Node::updateGridScale(int gridnum, float sx, float sy, float sz, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int gridnum, float sx, float sy, float sz
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|gridnum;
    implP|sx;
    implP|sy;
    implP|sz;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|gridnum;
    implP|sx;
    implP|sy;
    implP|sz;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::idx_updateGridScale_marshall10(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_Node::idx_updateGridScale_marshall10(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_Node::idx_updateGridScale_marshall10(), impl_msg, ckGetGroupID(),0);
}
void CProxy_Node::updateGridScale(int gridnum, float sx, float sy, float sz, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int gridnum, float sx, float sy, float sz
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|gridnum;
    implP|sx;
    implP|sy;
    implP|sz;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|gridnum;
    implP|sx;
    implP|sy;
    implP|sz;
  }
  CkSendMsgBranchMulti(CkIndex_Node::idx_updateGridScale_marshall10(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_Node::updateGridScale(int gridnum, float sx, float sy, float sz, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int gridnum, float sx, float sy, float sz
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|gridnum;
    implP|sx;
    implP|sy;
    implP|sz;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|gridnum;
    implP|sx;
    implP|sy;
    implP|sz;
  }
  CkSendMsgBranchGroup(CkIndex_Node::idx_updateGridScale_marshall10(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_Node::reg_updateGridScale_marshall10() {
  int epidx = CkRegisterEp("updateGridScale(int gridnum, float sx, float sy, float sz)",
      reinterpret_cast<CkCallFnPtr>(_call_updateGridScale_marshall10), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_updateGridScale_marshall10);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_updateGridScale_marshall10);

  return epidx;
}

void CkIndex_Node::_call_updateGridScale_marshall10(void* impl_msg, void* impl_obj_void)
{
  Node* impl_obj = static_cast<Node*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int gridnum, float sx, float sy, float sz*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> gridnum;
  implP|gridnum;
  PUP::detail::TemporaryObjectHolder<float> sx;
  implP|sx;
  PUP::detail::TemporaryObjectHolder<float> sy;
  implP|sy;
  PUP::detail::TemporaryObjectHolder<float> sz;
  implP|sz;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->updateGridScale(std::move(gridnum.t), std::move(sx.t), std::move(sy.t), std::move(sz.t));
}
int CkIndex_Node::_callmarshall_updateGridScale_marshall10(char* impl_buf, void* impl_obj_void) {
  Node* impl_obj = static_cast<Node*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int gridnum, float sx, float sy, float sz*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> gridnum;
  implP|gridnum;
  PUP::detail::TemporaryObjectHolder<float> sx;
  implP|sx;
  PUP::detail::TemporaryObjectHolder<float> sy;
  implP|sy;
  PUP::detail::TemporaryObjectHolder<float> sz;
  implP|sz;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->updateGridScale(std::move(gridnum.t), std::move(sx.t), std::move(sy.t), std::move(sz.t));
  return implP.size();
}
void CkIndex_Node::_marshallmessagepup_updateGridScale_marshall10(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int gridnum, float sx, float sy, float sz*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> gridnum;
  implP|gridnum;
  PUP::detail::TemporaryObjectHolder<float> sx;
  implP|sx;
  PUP::detail::TemporaryObjectHolder<float> sy;
  implP|sy;
  PUP::detail::TemporaryObjectHolder<float> sz;
  implP|sz;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("gridnum");
  implDestP|gridnum;
  if (implDestP.hasComments()) implDestP.comment("sx");
  implDestP|sx;
  if (implDestP.hasComments()) implDestP.comment("sy");
  implDestP|sy;
  if (implDestP.hasComments()) implDestP.comment("sz");
  implDestP|sz;
}
PUPable_def(SINGLE_ARG(Closure_Node::updateGridScale_10_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void resendMolecule();
 */
void CProxy_Node::resendMolecule(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::idx_resendMolecule_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_Node::idx_resendMolecule_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_Node::idx_resendMolecule_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_Node::resendMolecule(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_Node::idx_resendMolecule_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_Node::resendMolecule(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_Node::idx_resendMolecule_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_Node::reg_resendMolecule_void() {
  int epidx = CkRegisterEp("resendMolecule()",
      reinterpret_cast<CkCallFnPtr>(_call_resendMolecule_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_Node::_call_resendMolecule_void(void* impl_msg, void* impl_obj_void)
{
  Node* impl_obj = static_cast<Node*>(impl_obj_void);
  impl_obj->resendMolecule();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_Node::resendMolecule_11_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void resendMolecule2();
 */
void CProxy_Node::resendMolecule2(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::idx_resendMolecule2_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_Node::idx_resendMolecule2_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_Node::idx_resendMolecule2_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_Node::resendMolecule2(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_Node::idx_resendMolecule2_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_Node::resendMolecule2(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_Node::idx_resendMolecule2_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_Node::reg_resendMolecule2_void() {
  int epidx = CkRegisterEp("resendMolecule2()",
      reinterpret_cast<CkCallFnPtr>(_call_resendMolecule2_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_Node::_call_resendMolecule2_void(void* impl_msg, void* impl_obj_void)
{
  Node* impl_obj = static_cast<Node*>(impl_obj_void);
  impl_obj->resendMolecule2();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_Node::resendMolecule2_12_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvCheckpointReq(CheckpointMsg* impl_msg);
 */
void CProxy_Node::recvCheckpointReq(CheckpointMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::idx_recvCheckpointReq_CheckpointMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_Node::idx_recvCheckpointReq_CheckpointMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_Node::idx_recvCheckpointReq_CheckpointMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_Node::recvCheckpointReq(CheckpointMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_Node::idx_recvCheckpointReq_CheckpointMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_Node::recvCheckpointReq(CheckpointMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_Node::idx_recvCheckpointReq_CheckpointMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_Node::reg_recvCheckpointReq_CheckpointMsg() {
  int epidx = CkRegisterEp("recvCheckpointReq(CheckpointMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvCheckpointReq_CheckpointMsg), CMessage_CheckpointMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CheckpointMsg::ckDebugPup);
  return epidx;
}

void CkIndex_Node::_call_recvCheckpointReq_CheckpointMsg(void* impl_msg, void* impl_obj_void)
{
  Node* impl_obj = static_cast<Node*>(impl_obj_void);
  impl_obj->recvCheckpointReq((CheckpointMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvCheckpointAck(CheckpointMsg* impl_msg);
 */
void CProxy_Node::recvCheckpointAck(CheckpointMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::idx_recvCheckpointAck_CheckpointMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_Node::idx_recvCheckpointAck_CheckpointMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_Node::idx_recvCheckpointAck_CheckpointMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_Node::recvCheckpointAck(CheckpointMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_Node::idx_recvCheckpointAck_CheckpointMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_Node::recvCheckpointAck(CheckpointMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_Node::idx_recvCheckpointAck_CheckpointMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_Node::reg_recvCheckpointAck_CheckpointMsg() {
  int epidx = CkRegisterEp("recvCheckpointAck(CheckpointMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvCheckpointAck_CheckpointMsg), CMessage_CheckpointMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CheckpointMsg::ckDebugPup);
  return epidx;
}

void CkIndex_Node::_call_recvCheckpointAck_CheckpointMsg(void* impl_msg, void* impl_obj_void)
{
  Node* impl_obj = static_cast<Node*>(impl_obj_void);
  impl_obj->recvCheckpointAck((CheckpointMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvEnableExitScheduler();
 */
void CProxy_Node::recvEnableExitScheduler(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::idx_recvEnableExitScheduler_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_Node::idx_recvEnableExitScheduler_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_Node::idx_recvEnableExitScheduler_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_Node::recvEnableExitScheduler(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_Node::idx_recvEnableExitScheduler_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_Node::recvEnableExitScheduler(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_Node::idx_recvEnableExitScheduler_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_Node::reg_recvEnableExitScheduler_void() {
  int epidx = CkRegisterEp("recvEnableExitScheduler()",
      reinterpret_cast<CkCallFnPtr>(_call_recvEnableExitScheduler_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_Node::_call_recvEnableExitScheduler_void(void* impl_msg, void* impl_obj_void)
{
  Node* impl_obj = static_cast<Node*>(impl_obj_void);
  impl_obj->recvEnableExitScheduler();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_Node::recvEnableExitScheduler_15_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void exitScheduler();
 */
void CProxy_Node::exitScheduler(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::idx_exitScheduler_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_Node::idx_exitScheduler_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_Node::idx_exitScheduler_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_Node::exitScheduler(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_Node::idx_exitScheduler_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_Node::exitScheduler(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_Node::idx_exitScheduler_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_Node::reg_exitScheduler_void() {
  int epidx = CkRegisterEp("exitScheduler()",
      reinterpret_cast<CkCallFnPtr>(_call_exitScheduler_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_Node::_call_exitScheduler_void(void* impl_msg, void* impl_obj_void)
{
  Node* impl_obj = static_cast<Node*>(impl_obj_void);
  impl_obj->exitScheduler();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_Node::exitScheduler_16_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvEnableEarlyExit();
 */
void CProxy_Node::recvEnableEarlyExit(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::idx_recvEnableEarlyExit_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_Node::idx_recvEnableEarlyExit_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_Node::idx_recvEnableEarlyExit_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_Node::recvEnableEarlyExit(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_Node::idx_recvEnableEarlyExit_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_Node::recvEnableEarlyExit(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_Node::idx_recvEnableEarlyExit_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_Node::reg_recvEnableEarlyExit_void() {
  int epidx = CkRegisterEp("recvEnableEarlyExit()",
      reinterpret_cast<CkCallFnPtr>(_call_recvEnableEarlyExit_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_Node::_call_recvEnableEarlyExit_void(void* impl_msg, void* impl_obj_void)
{
  Node* impl_obj = static_cast<Node*>(impl_obj_void);
  impl_obj->recvEnableEarlyExit();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_Node::recvEnableEarlyExit_17_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void earlyExit();
 */
void CProxy_Node::earlyExit(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::idx_earlyExit_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_Node::idx_earlyExit_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_Node::idx_earlyExit_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_Node::earlyExit(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_Node::idx_earlyExit_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_Node::earlyExit(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_Node::idx_earlyExit_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_Node::reg_earlyExit_void() {
  int epidx = CkRegisterEp("earlyExit()",
      reinterpret_cast<CkCallFnPtr>(_call_earlyExit_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_Node::_call_earlyExit_void(void* impl_msg, void* impl_obj_void)
{
  Node* impl_obj = static_cast<Node*>(impl_obj_void);
  impl_obj->earlyExit();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_Node::earlyExit_18_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startHPM();
 */
void CProxy_Node::startHPM(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::idx_startHPM_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_Node::idx_startHPM_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_Node::idx_startHPM_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_Node::startHPM(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_Node::idx_startHPM_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_Node::startHPM(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_Node::idx_startHPM_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_Node::reg_startHPM_void() {
  int epidx = CkRegisterEp("startHPM()",
      reinterpret_cast<CkCallFnPtr>(_call_startHPM_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_Node::_call_startHPM_void(void* impl_msg, void* impl_obj_void)
{
  Node* impl_obj = static_cast<Node*>(impl_obj_void);
  impl_obj->startHPM();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_Node::startHPM_19_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void stopHPM();
 */
void CProxy_Node::stopHPM(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::idx_stopHPM_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_Node::idx_stopHPM_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_Node::idx_stopHPM_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_Node::stopHPM(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_Node::idx_stopHPM_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_Node::stopHPM(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_Node::idx_stopHPM_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_Node::reg_stopHPM_void() {
  int epidx = CkRegisterEp("stopHPM()",
      reinterpret_cast<CkCallFnPtr>(_call_stopHPM_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_Node::_call_stopHPM_void(void* impl_msg, void* impl_obj_void)
{
  Node* impl_obj = static_cast<Node*>(impl_obj_void);
  impl_obj->stopHPM();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_Node::stopHPM_20_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void traceBarrier(int impl_noname_1, int impl_noname_2);
 */
void CProxy_Node::traceBarrier(int impl_noname_1, int impl_noname_2, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_1, int impl_noname_2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_1;
    implP|impl_noname_2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_1;
    implP|impl_noname_2;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::idx_traceBarrier_marshall21(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_Node::idx_traceBarrier_marshall21(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_Node::idx_traceBarrier_marshall21(), impl_msg, ckGetGroupID(),0);
}
void CProxy_Node::traceBarrier(int impl_noname_1, int impl_noname_2, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int impl_noname_1, int impl_noname_2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_1;
    implP|impl_noname_2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_1;
    implP|impl_noname_2;
  }
  CkSendMsgBranchMulti(CkIndex_Node::idx_traceBarrier_marshall21(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_Node::traceBarrier(int impl_noname_1, int impl_noname_2, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int impl_noname_1, int impl_noname_2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_1;
    implP|impl_noname_2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_1;
    implP|impl_noname_2;
  }
  CkSendMsgBranchGroup(CkIndex_Node::idx_traceBarrier_marshall21(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_Node::reg_traceBarrier_marshall21() {
  int epidx = CkRegisterEp("traceBarrier(int impl_noname_1, int impl_noname_2)",
      reinterpret_cast<CkCallFnPtr>(_call_traceBarrier_marshall21), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_traceBarrier_marshall21);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_traceBarrier_marshall21);

  return epidx;
}

void CkIndex_Node::_call_traceBarrier_marshall21(void* impl_msg, void* impl_obj_void)
{
  Node* impl_obj = static_cast<Node*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int impl_noname_1, int impl_noname_2*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_1;
  implP|impl_noname_1;
  PUP::detail::TemporaryObjectHolder<int> impl_noname_2;
  implP|impl_noname_2;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->traceBarrier(std::move(impl_noname_1.t), std::move(impl_noname_2.t));
}
int CkIndex_Node::_callmarshall_traceBarrier_marshall21(char* impl_buf, void* impl_obj_void) {
  Node* impl_obj = static_cast<Node*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int impl_noname_1, int impl_noname_2*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_1;
  implP|impl_noname_1;
  PUP::detail::TemporaryObjectHolder<int> impl_noname_2;
  implP|impl_noname_2;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->traceBarrier(std::move(impl_noname_1.t), std::move(impl_noname_2.t));
  return implP.size();
}
void CkIndex_Node::_marshallmessagepup_traceBarrier_marshall21(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int impl_noname_1, int impl_noname_2*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_1;
  implP|impl_noname_1;
  PUP::detail::TemporaryObjectHolder<int> impl_noname_2;
  implP|impl_noname_2;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_1");
  implDestP|impl_noname_1;
  if (implDestP.hasComments()) implDestP.comment("impl_noname_2");
  implDestP|impl_noname_2;
}
PUPable_def(SINGLE_ARG(Closure_Node::traceBarrier_21_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void resumeAfterTraceBarrier(CkReductionMsg* impl_msg);
 */
void CProxy_Node::resumeAfterTraceBarrier(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::idx_resumeAfterTraceBarrier_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_Node::idx_resumeAfterTraceBarrier_CkReductionMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_Node::idx_resumeAfterTraceBarrier_CkReductionMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_Node::resumeAfterTraceBarrier(CkReductionMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_Node::idx_resumeAfterTraceBarrier_CkReductionMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_Node::resumeAfterTraceBarrier(CkReductionMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_Node::idx_resumeAfterTraceBarrier_CkReductionMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_Node::reg_resumeAfterTraceBarrier_CkReductionMsg() {
  int epidx = CkRegisterEp("resumeAfterTraceBarrier(CkReductionMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_resumeAfterTraceBarrier_CkReductionMsg), CMessage_CkReductionMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}

void CkIndex_Node::_call_resumeAfterTraceBarrier_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  Node* impl_obj = static_cast<Node*>(impl_obj_void);
  impl_obj->resumeAfterTraceBarrier((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void papiMeasureBarrier(int impl_noname_3, int impl_noname_4);
 */
void CProxy_Node::papiMeasureBarrier(int impl_noname_3, int impl_noname_4, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_3, int impl_noname_4
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_3;
    implP|impl_noname_4;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_3;
    implP|impl_noname_4;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::idx_papiMeasureBarrier_marshall23(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_Node::idx_papiMeasureBarrier_marshall23(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_Node::idx_papiMeasureBarrier_marshall23(), impl_msg, ckGetGroupID(),0);
}
void CProxy_Node::papiMeasureBarrier(int impl_noname_3, int impl_noname_4, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int impl_noname_3, int impl_noname_4
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_3;
    implP|impl_noname_4;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_3;
    implP|impl_noname_4;
  }
  CkSendMsgBranchMulti(CkIndex_Node::idx_papiMeasureBarrier_marshall23(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_Node::papiMeasureBarrier(int impl_noname_3, int impl_noname_4, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int impl_noname_3, int impl_noname_4
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_3;
    implP|impl_noname_4;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_3;
    implP|impl_noname_4;
  }
  CkSendMsgBranchGroup(CkIndex_Node::idx_papiMeasureBarrier_marshall23(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_Node::reg_papiMeasureBarrier_marshall23() {
  int epidx = CkRegisterEp("papiMeasureBarrier(int impl_noname_3, int impl_noname_4)",
      reinterpret_cast<CkCallFnPtr>(_call_papiMeasureBarrier_marshall23), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_papiMeasureBarrier_marshall23);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_papiMeasureBarrier_marshall23);

  return epidx;
}

void CkIndex_Node::_call_papiMeasureBarrier_marshall23(void* impl_msg, void* impl_obj_void)
{
  Node* impl_obj = static_cast<Node*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int impl_noname_3, int impl_noname_4*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_3;
  implP|impl_noname_3;
  PUP::detail::TemporaryObjectHolder<int> impl_noname_4;
  implP|impl_noname_4;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->papiMeasureBarrier(std::move(impl_noname_3.t), std::move(impl_noname_4.t));
}
int CkIndex_Node::_callmarshall_papiMeasureBarrier_marshall23(char* impl_buf, void* impl_obj_void) {
  Node* impl_obj = static_cast<Node*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int impl_noname_3, int impl_noname_4*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_3;
  implP|impl_noname_3;
  PUP::detail::TemporaryObjectHolder<int> impl_noname_4;
  implP|impl_noname_4;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->papiMeasureBarrier(std::move(impl_noname_3.t), std::move(impl_noname_4.t));
  return implP.size();
}
void CkIndex_Node::_marshallmessagepup_papiMeasureBarrier_marshall23(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int impl_noname_3, int impl_noname_4*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_3;
  implP|impl_noname_3;
  PUP::detail::TemporaryObjectHolder<int> impl_noname_4;
  implP|impl_noname_4;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_3");
  implDestP|impl_noname_3;
  if (implDestP.hasComments()) implDestP.comment("impl_noname_4");
  implDestP|impl_noname_4;
}
PUPable_def(SINGLE_ARG(Closure_Node::papiMeasureBarrier_23_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void resumeAfterPapiMeasureBarrier(CkReductionMsg* impl_msg);
 */
void CProxy_Node::resumeAfterPapiMeasureBarrier(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Node::idx_resumeAfterPapiMeasureBarrier_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_Node::idx_resumeAfterPapiMeasureBarrier_CkReductionMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_Node::idx_resumeAfterPapiMeasureBarrier_CkReductionMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_Node::resumeAfterPapiMeasureBarrier(CkReductionMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_Node::idx_resumeAfterPapiMeasureBarrier_CkReductionMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_Node::resumeAfterPapiMeasureBarrier(CkReductionMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_Node::idx_resumeAfterPapiMeasureBarrier_CkReductionMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_Node::reg_resumeAfterPapiMeasureBarrier_CkReductionMsg() {
  int epidx = CkRegisterEp("resumeAfterPapiMeasureBarrier(CkReductionMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_resumeAfterPapiMeasureBarrier_CkReductionMsg), CMessage_CkReductionMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}

void CkIndex_Node::_call_resumeAfterPapiMeasureBarrier_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  Node* impl_obj = static_cast<Node*>(impl_obj_void);
  impl_obj->resumeAfterPapiMeasureBarrier((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Node(GroupInitMsg* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startup();
 */
void CProxySection_Node::startup(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_Node::idx_startup_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_Node::idx_startup_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void mallocTest(int impl_noname_0);
 */
void CProxySection_Node::mallocTest(int impl_noname_0, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_0;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_Node::idx_mallocTest_marshall3(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_Node::idx_mallocTest_marshall3(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void mallocTestQd();
 */
void CProxySection_Node::mallocTestQd(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_Node::idx_mallocTestQd_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_Node::idx_mallocTestQd_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void run();
 */
void CProxySection_Node::run(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_Node::idx_run_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_Node::idx_run_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void scriptBarrier();
 */
void CProxySection_Node::scriptBarrier(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_Node::idx_scriptBarrier_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_Node::idx_scriptBarrier_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void scriptParam(ScriptParamMsg* impl_msg);
 */
void CProxySection_Node::scriptParam(ScriptParamMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_Node::idx_scriptParam_ScriptParamMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_Node::idx_scriptParam_ScriptParamMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void reloadCharges(const float *charge, int n);
 */
void CProxySection_Node::reloadCharges(const float *charge, int n, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const float *charge, int n
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_charge, impl_cnt_charge;
  impl_off_charge=impl_off=CK_ALIGN(impl_off,sizeof(float));
  impl_off+=(impl_cnt_charge=sizeof(float)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_charge;
    implP|impl_cnt_charge;
    implP|n;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_charge;
    implP|impl_cnt_charge;
    implP|n;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_charge,charge,impl_cnt_charge);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_Node::idx_reloadCharges_marshall8(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_Node::idx_reloadCharges_marshall8(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void reloadGridforceGrid(int gridnum);
 */
void CProxySection_Node::reloadGridforceGrid(int gridnum, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int gridnum
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|gridnum;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|gridnum;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_Node::idx_reloadGridforceGrid_marshall9(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_Node::idx_reloadGridforceGrid_marshall9(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void updateGridScale(int gridnum, float sx, float sy, float sz);
 */
void CProxySection_Node::updateGridScale(int gridnum, float sx, float sy, float sz, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int gridnum, float sx, float sy, float sz
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|gridnum;
    implP|sx;
    implP|sy;
    implP|sz;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|gridnum;
    implP|sx;
    implP|sy;
    implP|sz;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_Node::idx_updateGridScale_marshall10(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_Node::idx_updateGridScale_marshall10(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void resendMolecule();
 */
void CProxySection_Node::resendMolecule(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_Node::idx_resendMolecule_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_Node::idx_resendMolecule_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void resendMolecule2();
 */
void CProxySection_Node::resendMolecule2(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_Node::idx_resendMolecule2_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_Node::idx_resendMolecule2_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvCheckpointReq(CheckpointMsg* impl_msg);
 */
void CProxySection_Node::recvCheckpointReq(CheckpointMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_Node::idx_recvCheckpointReq_CheckpointMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_Node::idx_recvCheckpointReq_CheckpointMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvCheckpointAck(CheckpointMsg* impl_msg);
 */
void CProxySection_Node::recvCheckpointAck(CheckpointMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_Node::idx_recvCheckpointAck_CheckpointMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_Node::idx_recvCheckpointAck_CheckpointMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvEnableExitScheduler();
 */
void CProxySection_Node::recvEnableExitScheduler(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_Node::idx_recvEnableExitScheduler_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_Node::idx_recvEnableExitScheduler_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void exitScheduler();
 */
void CProxySection_Node::exitScheduler(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_Node::idx_exitScheduler_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_Node::idx_exitScheduler_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvEnableEarlyExit();
 */
void CProxySection_Node::recvEnableEarlyExit(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_Node::idx_recvEnableEarlyExit_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_Node::idx_recvEnableEarlyExit_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void earlyExit();
 */
void CProxySection_Node::earlyExit(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_Node::idx_earlyExit_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_Node::idx_earlyExit_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startHPM();
 */
void CProxySection_Node::startHPM(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_Node::idx_startHPM_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_Node::idx_startHPM_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void stopHPM();
 */
void CProxySection_Node::stopHPM(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_Node::idx_stopHPM_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_Node::idx_stopHPM_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void traceBarrier(int impl_noname_1, int impl_noname_2);
 */
void CProxySection_Node::traceBarrier(int impl_noname_1, int impl_noname_2, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_1, int impl_noname_2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_1;
    implP|impl_noname_2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_1;
    implP|impl_noname_2;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_Node::idx_traceBarrier_marshall21(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_Node::idx_traceBarrier_marshall21(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void resumeAfterTraceBarrier(CkReductionMsg* impl_msg);
 */
void CProxySection_Node::resumeAfterTraceBarrier(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_Node::idx_resumeAfterTraceBarrier_CkReductionMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_Node::idx_resumeAfterTraceBarrier_CkReductionMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void papiMeasureBarrier(int impl_noname_3, int impl_noname_4);
 */
void CProxySection_Node::papiMeasureBarrier(int impl_noname_3, int impl_noname_4, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_3, int impl_noname_4
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_3;
    implP|impl_noname_4;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_3;
    implP|impl_noname_4;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_Node::idx_papiMeasureBarrier_marshall23(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_Node::idx_papiMeasureBarrier_marshall23(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void resumeAfterPapiMeasureBarrier(CkReductionMsg* impl_msg);
 */
void CProxySection_Node::resumeAfterPapiMeasureBarrier(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_Node::idx_resumeAfterPapiMeasureBarrier_CkReductionMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_Node::idx_resumeAfterPapiMeasureBarrier_CkReductionMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_Node::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,Node::isIrreducible());
  // REG: Node(GroupInitMsg* impl_msg);
  idx_Node_GroupInitMsg();

  // REG: void startup();
  idx_startup_void();

  // REG: void mallocTest(int impl_noname_0);
  idx_mallocTest_marshall3();

  // REG: void mallocTestQd();
  idx_mallocTestQd_void();

  // REG: void run();
  idx_run_void();

  // REG: void scriptBarrier();
  idx_scriptBarrier_void();

  // REG: void scriptParam(ScriptParamMsg* impl_msg);
  idx_scriptParam_ScriptParamMsg();

  // REG: void reloadCharges(const float *charge, int n);
  idx_reloadCharges_marshall8();

  // REG: void reloadGridforceGrid(int gridnum);
  idx_reloadGridforceGrid_marshall9();

  // REG: void updateGridScale(int gridnum, float sx, float sy, float sz);
  idx_updateGridScale_marshall10();

  // REG: void resendMolecule();
  idx_resendMolecule_void();

  // REG: void resendMolecule2();
  idx_resendMolecule2_void();

  // REG: void recvCheckpointReq(CheckpointMsg* impl_msg);
  idx_recvCheckpointReq_CheckpointMsg();

  // REG: void recvCheckpointAck(CheckpointMsg* impl_msg);
  idx_recvCheckpointAck_CheckpointMsg();

  // REG: void recvEnableExitScheduler();
  idx_recvEnableExitScheduler_void();

  // REG: void exitScheduler();
  idx_exitScheduler_void();

  // REG: void recvEnableEarlyExit();
  idx_recvEnableEarlyExit_void();

  // REG: void earlyExit();
  idx_earlyExit_void();

  // REG: void startHPM();
  idx_startHPM_void();

  // REG: void stopHPM();
  idx_stopHPM_void();

  // REG: void traceBarrier(int impl_noname_1, int impl_noname_2);
  idx_traceBarrier_marshall21();

  // REG: void resumeAfterTraceBarrier(CkReductionMsg* impl_msg);
  idx_resumeAfterTraceBarrier_CkReductionMsg();

  // REG: void papiMeasureBarrier(int impl_noname_3, int impl_noname_4);
  idx_papiMeasureBarrier_marshall23();

  // REG: void resumeAfterPapiMeasureBarrier(CkReductionMsg* impl_msg);
  idx_resumeAfterPapiMeasureBarrier_CkReductionMsg();

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerNode(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: message GroupInitMsg;
*/
CMessage_GroupInitMsg::__register("GroupInitMsg", sizeof(GroupInitMsg),(CkPackFnPtr) GroupInitMsg::pack,(CkUnpackFnPtr) GroupInitMsg::unpack);

/* REG: message ScriptParamMsg;
*/
CMessage_ScriptParamMsg::__register("ScriptParamMsg", sizeof(ScriptParamMsg),(CkPackFnPtr) ScriptParamMsg::pack,(CkUnpackFnPtr) ScriptParamMsg::unpack);

/* REG: message CheckpointMsg{
char key[];
}
;
*/
CMessage_CheckpointMsg::__register("CheckpointMsg", sizeof(CheckpointMsg),(CkPackFnPtr) CheckpointMsg::pack,(CkUnpackFnPtr) CheckpointMsg::unpack);

/* REG: group Node: IrrGroup{
Node(GroupInitMsg* impl_msg);
void startup();
void mallocTest(int impl_noname_0);
void mallocTestQd();
void run();
void scriptBarrier();
void scriptParam(ScriptParamMsg* impl_msg);
void reloadCharges(const float *charge, int n);
void reloadGridforceGrid(int gridnum);
void updateGridScale(int gridnum, float sx, float sy, float sz);
void resendMolecule();
void resendMolecule2();
void recvCheckpointReq(CheckpointMsg* impl_msg);
void recvCheckpointAck(CheckpointMsg* impl_msg);
void recvEnableExitScheduler();
void exitScheduler();
void recvEnableEarlyExit();
void earlyExit();
void startHPM();
void stopHPM();
void traceBarrier(int impl_noname_1, int impl_noname_2);
void resumeAfterTraceBarrier(CkReductionMsg* impl_msg);
void papiMeasureBarrier(int impl_noname_3, int impl_noname_4);
void resumeAfterPapiMeasureBarrier(CkReductionMsg* impl_msg);
};
*/
  CkIndex_Node::__register("Node", sizeof(Node));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_Node::virtual_pup(PUP::er &p) {
    recursive_pup<Node>(dynamic_cast<Node*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
