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

    struct Closure_ComputeMoaMgr::recvMoaData_5_closure : public SDAG::Closure {
            MoaData impl_noname_0;


      recvMoaData_5_closure() {
        init();
      }
      recvMoaData_5_closure(CkMigrateMessage*) {
        init();
      }
            MoaData & getP0() { return impl_noname_0;}
      void pup(PUP::er& __p) {
        __p | impl_noname_0;
        packClosure(__p);
      }
      virtual ~recvMoaData_5_closure() {
      }
      PUPable_decl(SINGLE_ARG(recvMoaData_5_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ComputeMoaMgr::recvQ_6_closure : public SDAG::Closure {
            int nq;
            double *q;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      recvQ_6_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      recvQ_6_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            int & getP0() { return nq;}
            double *& getP1() { return q;}
      void pup(PUP::er& __p) {
        __p | nq;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> nq;
  implP|nq;
  int impl_off_q, impl_cnt_q;
  implP|impl_off_q;
  implP|impl_cnt_q;
          impl_buf+=CK_ALIGN(implP.size(),16);
          q = (double *)(impl_buf+impl_off_q);
        }
      }
      virtual ~recvQ_6_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(recvQ_6_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ComputeMoaMgr::recvB_7_closure : public SDAG::Closure {
            int K2_start;
            int K2_end;
            int K3_start;
            int K3_end;
            int K1_len;
            int K2_len;
            int K3_len;
            double *bm1;
            double *bm2;
            double *bm3;
            int order;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      recvB_7_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      recvB_7_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            int & getP0() { return K2_start;}
            int & getP1() { return K2_end;}
            int & getP2() { return K3_start;}
            int & getP3() { return K3_end;}
            int & getP4() { return K1_len;}
            int & getP5() { return K2_len;}
            int & getP6() { return K3_len;}
            double *& getP7() { return bm1;}
            double *& getP8() { return bm2;}
            double *& getP9() { return bm3;}
            int & getP10() { return order;}
      void pup(PUP::er& __p) {
        __p | K2_start;
        __p | K2_end;
        __p | K3_start;
        __p | K3_end;
        __p | K1_len;
        __p | K2_len;
        __p | K3_len;
        __p | order;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> K2_start;
  implP|K2_start;
  PUP::detail::TemporaryObjectHolder<int> K2_end;
  implP|K2_end;
  PUP::detail::TemporaryObjectHolder<int> K3_start;
  implP|K3_start;
  PUP::detail::TemporaryObjectHolder<int> K3_end;
  implP|K3_end;
  PUP::detail::TemporaryObjectHolder<int> K1_len;
  implP|K1_len;
  PUP::detail::TemporaryObjectHolder<int> K2_len;
  implP|K2_len;
  PUP::detail::TemporaryObjectHolder<int> K3_len;
  implP|K3_len;
  int impl_off_bm1, impl_cnt_bm1;
  implP|impl_off_bm1;
  implP|impl_cnt_bm1;
  int impl_off_bm2, impl_cnt_bm2;
  implP|impl_off_bm2;
  implP|impl_cnt_bm2;
  int impl_off_bm3, impl_cnt_bm3;
  implP|impl_off_bm3;
  implP|impl_cnt_bm3;
  PUP::detail::TemporaryObjectHolder<int> order;
  implP|order;
          impl_buf+=CK_ALIGN(implP.size(),16);
          bm1 = (double *)(impl_buf+impl_off_bm1);
          bm2 = (double *)(impl_buf+impl_off_bm2);
          bm3 = (double *)(impl_buf+impl_off_bm3);
        }
      }
      virtual ~recvB_7_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(recvB_7_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ComputeMoaMgr::recvSGrid_8_closure : public SDAG::Closure {
            int ns;
            double *sg;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      recvSGrid_8_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      recvSGrid_8_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            int & getP0() { return ns;}
            double *& getP1() { return sg;}
      void pup(PUP::er& __p) {
        __p | ns;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> ns;
  implP|ns;
  int impl_off_sg, impl_cnt_sg;
  implP|impl_off_sg;
  implP|impl_cnt_sg;
          impl_buf+=CK_ALIGN(implP.size(),16);
          sg = (double *)(impl_buf+impl_off_sg);
        }
      }
      virtual ~recvSGrid_8_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(recvSGrid_8_closure));
    };
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_MoaS::compute_2_closure : public SDAG::Closure {
      

      compute_2_closure() {
        init();
      }
      compute_2_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~compute_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(compute_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: group ComputeMoaMgr: IrrGroup{
ComputeMoaMgr();
void initialize(CkQdMsg* impl_msg);
void initWorkers(CkQdMsg* impl_msg);
void startWorkers(CkQdMsg* impl_msg);
void recvMoaData(const MoaData &impl_noname_0);
void recvQ(int nq, const double *q);
void recvB(int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order);
void recvSGrid(int ns, const double *sg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_ComputeMoaMgr::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: ComputeMoaMgr();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initialize(CkQdMsg* impl_msg);
 */
void CProxyElement_ComputeMoaMgr::initialize(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMoaMgr::idx_initialize_CkQdMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMoaMgr::idx_initialize_CkQdMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputeMoaMgr::idx_initialize_CkQdMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initWorkers(CkQdMsg* impl_msg);
 */
void CProxyElement_ComputeMoaMgr::initWorkers(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMoaMgr::idx_initWorkers_CkQdMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMoaMgr::idx_initWorkers_CkQdMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputeMoaMgr::idx_initWorkers_CkQdMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startWorkers(CkQdMsg* impl_msg);
 */
void CProxyElement_ComputeMoaMgr::startWorkers(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMoaMgr::idx_startWorkers_CkQdMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMoaMgr::idx_startWorkers_CkQdMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputeMoaMgr::idx_startWorkers_CkQdMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvMoaData(const MoaData &impl_noname_0);
 */
void CProxyElement_ComputeMoaMgr::recvMoaData(const MoaData &impl_noname_0, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const MoaData &impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MoaData>::type>::type &)impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MoaData>::type>::type &)impl_noname_0;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMoaMgr::idx_recvMoaData_marshall5(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMoaMgr::idx_recvMoaData_marshall5(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputeMoaMgr::idx_recvMoaData_marshall5(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvQ(int nq, const double *q);
 */
void CProxyElement_ComputeMoaMgr::recvQ(int nq, const double *q, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int nq, const double *q
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_q, impl_cnt_q;
  impl_off_q=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_q=sizeof(double)*(nq));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|nq;
    implP|impl_off_q;
    implP|impl_cnt_q;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|nq;
    implP|impl_off_q;
    implP|impl_cnt_q;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_q,q,impl_cnt_q);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMoaMgr::idx_recvQ_marshall6(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMoaMgr::idx_recvQ_marshall6(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputeMoaMgr::idx_recvQ_marshall6(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvB(int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order);
 */
void CProxyElement_ComputeMoaMgr::recvB(int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_bm1, impl_cnt_bm1;
  impl_off_bm1=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_bm1=sizeof(double)*(K1_len));
  int impl_off_bm2, impl_cnt_bm2;
  impl_off_bm2=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_bm2=sizeof(double)*(K2_len));
  int impl_off_bm3, impl_cnt_bm3;
  impl_off_bm3=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_bm3=sizeof(double)*(K3_len));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|K2_start;
    implP|K2_end;
    implP|K3_start;
    implP|K3_end;
    implP|K1_len;
    implP|K2_len;
    implP|K3_len;
    implP|impl_off_bm1;
    implP|impl_cnt_bm1;
    implP|impl_off_bm2;
    implP|impl_cnt_bm2;
    implP|impl_off_bm3;
    implP|impl_cnt_bm3;
    implP|order;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|K2_start;
    implP|K2_end;
    implP|K3_start;
    implP|K3_end;
    implP|K1_len;
    implP|K2_len;
    implP|K3_len;
    implP|impl_off_bm1;
    implP|impl_cnt_bm1;
    implP|impl_off_bm2;
    implP|impl_cnt_bm2;
    implP|impl_off_bm3;
    implP|impl_cnt_bm3;
    implP|order;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_bm1,bm1,impl_cnt_bm1);
  memcpy(impl_buf+impl_off_bm2,bm2,impl_cnt_bm2);
  memcpy(impl_buf+impl_off_bm3,bm3,impl_cnt_bm3);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMoaMgr::idx_recvB_marshall7(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMoaMgr::idx_recvB_marshall7(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputeMoaMgr::idx_recvB_marshall7(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvSGrid(int ns, const double *sg);
 */
void CProxyElement_ComputeMoaMgr::recvSGrid(int ns, const double *sg, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int ns, const double *sg
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_sg, impl_cnt_sg;
  impl_off_sg=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_sg=sizeof(double)*(ns));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|ns;
    implP|impl_off_sg;
    implP|impl_cnt_sg;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|ns;
    implP|impl_off_sg;
    implP|impl_cnt_sg;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_sg,sg,impl_cnt_sg);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMoaMgr::idx_recvSGrid_marshall8(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMoaMgr::idx_recvSGrid_marshall8(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputeMoaMgr::idx_recvSGrid_marshall8(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ComputeMoaMgr();
 */
CkGroupID CProxy_ComputeMoaMgr::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_ComputeMoaMgr::__idx, CkIndex_ComputeMoaMgr::idx_ComputeMoaMgr_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_ComputeMoaMgr::reg_ComputeMoaMgr_void() {
  int epidx = CkRegisterEp("ComputeMoaMgr()",
      reinterpret_cast<CkCallFnPtr>(_call_ComputeMoaMgr_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_ComputeMoaMgr::_call_ComputeMoaMgr_void(void* impl_msg, void* impl_obj_void)
{
  ComputeMoaMgr* impl_obj = static_cast<ComputeMoaMgr*>(impl_obj_void);
  new (impl_obj_void) ComputeMoaMgr();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initialize(CkQdMsg* impl_msg);
 */
void CProxy_ComputeMoaMgr::initialize(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMoaMgr::idx_initialize_CkQdMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMoaMgr::idx_initialize_CkQdMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMoaMgr::idx_initialize_CkQdMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMoaMgr::initialize(CkQdMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputeMoaMgr::idx_initialize_CkQdMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMoaMgr::initialize(CkQdMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputeMoaMgr::idx_initialize_CkQdMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputeMoaMgr::reg_initialize_CkQdMsg() {
  int epidx = CkRegisterEp("initialize(CkQdMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_initialize_CkQdMsg), CMessage_CkQdMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkQdMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ComputeMoaMgr::_call_initialize_CkQdMsg(void* impl_msg, void* impl_obj_void)
{
  ComputeMoaMgr* impl_obj = static_cast<ComputeMoaMgr*>(impl_obj_void);
  impl_obj->initialize((CkQdMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initWorkers(CkQdMsg* impl_msg);
 */
void CProxy_ComputeMoaMgr::initWorkers(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMoaMgr::idx_initWorkers_CkQdMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMoaMgr::idx_initWorkers_CkQdMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMoaMgr::idx_initWorkers_CkQdMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMoaMgr::initWorkers(CkQdMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputeMoaMgr::idx_initWorkers_CkQdMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMoaMgr::initWorkers(CkQdMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputeMoaMgr::idx_initWorkers_CkQdMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputeMoaMgr::reg_initWorkers_CkQdMsg() {
  int epidx = CkRegisterEp("initWorkers(CkQdMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_initWorkers_CkQdMsg), CMessage_CkQdMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkQdMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ComputeMoaMgr::_call_initWorkers_CkQdMsg(void* impl_msg, void* impl_obj_void)
{
  ComputeMoaMgr* impl_obj = static_cast<ComputeMoaMgr*>(impl_obj_void);
  impl_obj->initWorkers((CkQdMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startWorkers(CkQdMsg* impl_msg);
 */
void CProxy_ComputeMoaMgr::startWorkers(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMoaMgr::idx_startWorkers_CkQdMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMoaMgr::idx_startWorkers_CkQdMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMoaMgr::idx_startWorkers_CkQdMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMoaMgr::startWorkers(CkQdMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputeMoaMgr::idx_startWorkers_CkQdMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMoaMgr::startWorkers(CkQdMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputeMoaMgr::idx_startWorkers_CkQdMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputeMoaMgr::reg_startWorkers_CkQdMsg() {
  int epidx = CkRegisterEp("startWorkers(CkQdMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_startWorkers_CkQdMsg), CMessage_CkQdMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkQdMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ComputeMoaMgr::_call_startWorkers_CkQdMsg(void* impl_msg, void* impl_obj_void)
{
  ComputeMoaMgr* impl_obj = static_cast<ComputeMoaMgr*>(impl_obj_void);
  impl_obj->startWorkers((CkQdMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvMoaData(const MoaData &impl_noname_0);
 */
void CProxy_ComputeMoaMgr::recvMoaData(const MoaData &impl_noname_0, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const MoaData &impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MoaData>::type>::type &)impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MoaData>::type>::type &)impl_noname_0;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMoaMgr::idx_recvMoaData_marshall5(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMoaMgr::idx_recvMoaData_marshall5(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMoaMgr::idx_recvMoaData_marshall5(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMoaMgr::recvMoaData(const MoaData &impl_noname_0, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const MoaData &impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MoaData>::type>::type &)impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MoaData>::type>::type &)impl_noname_0;
  }
  CkSendMsgBranchMulti(CkIndex_ComputeMoaMgr::idx_recvMoaData_marshall5(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMoaMgr::recvMoaData(const MoaData &impl_noname_0, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const MoaData &impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MoaData>::type>::type &)impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MoaData>::type>::type &)impl_noname_0;
  }
  CkSendMsgBranchGroup(CkIndex_ComputeMoaMgr::idx_recvMoaData_marshall5(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputeMoaMgr::reg_recvMoaData_marshall5() {
  int epidx = CkRegisterEp("recvMoaData(const MoaData &impl_noname_0)",
      reinterpret_cast<CkCallFnPtr>(_call_recvMoaData_marshall5), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_recvMoaData_marshall5);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_recvMoaData_marshall5);

  return epidx;
}

void CkIndex_ComputeMoaMgr::_call_recvMoaData_marshall5(void* impl_msg, void* impl_obj_void)
{
  ComputeMoaMgr* impl_obj = static_cast<ComputeMoaMgr*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const MoaData &impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<MoaData> impl_noname_0;
  implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->recvMoaData(std::move(impl_noname_0.t));
}
int CkIndex_ComputeMoaMgr::_callmarshall_recvMoaData_marshall5(char* impl_buf, void* impl_obj_void) {
  ComputeMoaMgr* impl_obj = static_cast<ComputeMoaMgr*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const MoaData &impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<MoaData> impl_noname_0;
  implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->recvMoaData(std::move(impl_noname_0.t));
  return implP.size();
}
void CkIndex_ComputeMoaMgr::_marshallmessagepup_recvMoaData_marshall5(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const MoaData &impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<MoaData> impl_noname_0;
  implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_0");
  implDestP|impl_noname_0;
}
PUPable_def(SINGLE_ARG(Closure_ComputeMoaMgr::recvMoaData_5_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvQ(int nq, const double *q);
 */
void CProxy_ComputeMoaMgr::recvQ(int nq, const double *q, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int nq, const double *q
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_q, impl_cnt_q;
  impl_off_q=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_q=sizeof(double)*(nq));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|nq;
    implP|impl_off_q;
    implP|impl_cnt_q;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|nq;
    implP|impl_off_q;
    implP|impl_cnt_q;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_q,q,impl_cnt_q);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMoaMgr::idx_recvQ_marshall6(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMoaMgr::idx_recvQ_marshall6(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMoaMgr::idx_recvQ_marshall6(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMoaMgr::recvQ(int nq, const double *q, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int nq, const double *q
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_q, impl_cnt_q;
  impl_off_q=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_q=sizeof(double)*(nq));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|nq;
    implP|impl_off_q;
    implP|impl_cnt_q;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|nq;
    implP|impl_off_q;
    implP|impl_cnt_q;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_q,q,impl_cnt_q);
  CkSendMsgBranchMulti(CkIndex_ComputeMoaMgr::idx_recvQ_marshall6(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMoaMgr::recvQ(int nq, const double *q, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int nq, const double *q
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_q, impl_cnt_q;
  impl_off_q=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_q=sizeof(double)*(nq));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|nq;
    implP|impl_off_q;
    implP|impl_cnt_q;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|nq;
    implP|impl_off_q;
    implP|impl_cnt_q;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_q,q,impl_cnt_q);
  CkSendMsgBranchGroup(CkIndex_ComputeMoaMgr::idx_recvQ_marshall6(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputeMoaMgr::reg_recvQ_marshall6() {
  int epidx = CkRegisterEp("recvQ(int nq, const double *q)",
      reinterpret_cast<CkCallFnPtr>(_call_recvQ_marshall6), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_recvQ_marshall6);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_recvQ_marshall6);

  return epidx;
}

void CkIndex_ComputeMoaMgr::_call_recvQ_marshall6(void* impl_msg, void* impl_obj_void)
{
  ComputeMoaMgr* impl_obj = static_cast<ComputeMoaMgr*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int nq, const double *q*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> nq;
  implP|nq;
  int impl_off_q, impl_cnt_q;
  implP|impl_off_q;
  implP|impl_cnt_q;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *q=(double *)(impl_buf+impl_off_q);
  impl_obj->recvQ(std::move(nq.t), q);
}
int CkIndex_ComputeMoaMgr::_callmarshall_recvQ_marshall6(char* impl_buf, void* impl_obj_void) {
  ComputeMoaMgr* impl_obj = static_cast<ComputeMoaMgr*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int nq, const double *q*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> nq;
  implP|nq;
  int impl_off_q, impl_cnt_q;
  implP|impl_off_q;
  implP|impl_cnt_q;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *q=(double *)(impl_buf+impl_off_q);
  impl_obj->recvQ(std::move(nq.t), q);
  return implP.size();
}
void CkIndex_ComputeMoaMgr::_marshallmessagepup_recvQ_marshall6(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int nq, const double *q*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> nq;
  implP|nq;
  int impl_off_q, impl_cnt_q;
  implP|impl_off_q;
  implP|impl_cnt_q;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *q=(double *)(impl_buf+impl_off_q);
  if (implDestP.hasComments()) implDestP.comment("nq");
  implDestP|nq;
  if (implDestP.hasComments()) implDestP.comment("q");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*q))<impl_cnt_q;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|q[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
}
PUPable_def(SINGLE_ARG(Closure_ComputeMoaMgr::recvQ_6_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvB(int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order);
 */
void CProxy_ComputeMoaMgr::recvB(int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_bm1, impl_cnt_bm1;
  impl_off_bm1=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_bm1=sizeof(double)*(K1_len));
  int impl_off_bm2, impl_cnt_bm2;
  impl_off_bm2=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_bm2=sizeof(double)*(K2_len));
  int impl_off_bm3, impl_cnt_bm3;
  impl_off_bm3=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_bm3=sizeof(double)*(K3_len));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|K2_start;
    implP|K2_end;
    implP|K3_start;
    implP|K3_end;
    implP|K1_len;
    implP|K2_len;
    implP|K3_len;
    implP|impl_off_bm1;
    implP|impl_cnt_bm1;
    implP|impl_off_bm2;
    implP|impl_cnt_bm2;
    implP|impl_off_bm3;
    implP|impl_cnt_bm3;
    implP|order;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|K2_start;
    implP|K2_end;
    implP|K3_start;
    implP|K3_end;
    implP|K1_len;
    implP|K2_len;
    implP|K3_len;
    implP|impl_off_bm1;
    implP|impl_cnt_bm1;
    implP|impl_off_bm2;
    implP|impl_cnt_bm2;
    implP|impl_off_bm3;
    implP|impl_cnt_bm3;
    implP|order;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_bm1,bm1,impl_cnt_bm1);
  memcpy(impl_buf+impl_off_bm2,bm2,impl_cnt_bm2);
  memcpy(impl_buf+impl_off_bm3,bm3,impl_cnt_bm3);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMoaMgr::idx_recvB_marshall7(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMoaMgr::idx_recvB_marshall7(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMoaMgr::idx_recvB_marshall7(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMoaMgr::recvB(int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_bm1, impl_cnt_bm1;
  impl_off_bm1=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_bm1=sizeof(double)*(K1_len));
  int impl_off_bm2, impl_cnt_bm2;
  impl_off_bm2=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_bm2=sizeof(double)*(K2_len));
  int impl_off_bm3, impl_cnt_bm3;
  impl_off_bm3=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_bm3=sizeof(double)*(K3_len));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|K2_start;
    implP|K2_end;
    implP|K3_start;
    implP|K3_end;
    implP|K1_len;
    implP|K2_len;
    implP|K3_len;
    implP|impl_off_bm1;
    implP|impl_cnt_bm1;
    implP|impl_off_bm2;
    implP|impl_cnt_bm2;
    implP|impl_off_bm3;
    implP|impl_cnt_bm3;
    implP|order;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|K2_start;
    implP|K2_end;
    implP|K3_start;
    implP|K3_end;
    implP|K1_len;
    implP|K2_len;
    implP|K3_len;
    implP|impl_off_bm1;
    implP|impl_cnt_bm1;
    implP|impl_off_bm2;
    implP|impl_cnt_bm2;
    implP|impl_off_bm3;
    implP|impl_cnt_bm3;
    implP|order;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_bm1,bm1,impl_cnt_bm1);
  memcpy(impl_buf+impl_off_bm2,bm2,impl_cnt_bm2);
  memcpy(impl_buf+impl_off_bm3,bm3,impl_cnt_bm3);
  CkSendMsgBranchMulti(CkIndex_ComputeMoaMgr::idx_recvB_marshall7(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMoaMgr::recvB(int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_bm1, impl_cnt_bm1;
  impl_off_bm1=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_bm1=sizeof(double)*(K1_len));
  int impl_off_bm2, impl_cnt_bm2;
  impl_off_bm2=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_bm2=sizeof(double)*(K2_len));
  int impl_off_bm3, impl_cnt_bm3;
  impl_off_bm3=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_bm3=sizeof(double)*(K3_len));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|K2_start;
    implP|K2_end;
    implP|K3_start;
    implP|K3_end;
    implP|K1_len;
    implP|K2_len;
    implP|K3_len;
    implP|impl_off_bm1;
    implP|impl_cnt_bm1;
    implP|impl_off_bm2;
    implP|impl_cnt_bm2;
    implP|impl_off_bm3;
    implP|impl_cnt_bm3;
    implP|order;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|K2_start;
    implP|K2_end;
    implP|K3_start;
    implP|K3_end;
    implP|K1_len;
    implP|K2_len;
    implP|K3_len;
    implP|impl_off_bm1;
    implP|impl_cnt_bm1;
    implP|impl_off_bm2;
    implP|impl_cnt_bm2;
    implP|impl_off_bm3;
    implP|impl_cnt_bm3;
    implP|order;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_bm1,bm1,impl_cnt_bm1);
  memcpy(impl_buf+impl_off_bm2,bm2,impl_cnt_bm2);
  memcpy(impl_buf+impl_off_bm3,bm3,impl_cnt_bm3);
  CkSendMsgBranchGroup(CkIndex_ComputeMoaMgr::idx_recvB_marshall7(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputeMoaMgr::reg_recvB_marshall7() {
  int epidx = CkRegisterEp("recvB(int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order)",
      reinterpret_cast<CkCallFnPtr>(_call_recvB_marshall7), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_recvB_marshall7);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_recvB_marshall7);

  return epidx;
}

void CkIndex_ComputeMoaMgr::_call_recvB_marshall7(void* impl_msg, void* impl_obj_void)
{
  ComputeMoaMgr* impl_obj = static_cast<ComputeMoaMgr*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> K2_start;
  implP|K2_start;
  PUP::detail::TemporaryObjectHolder<int> K2_end;
  implP|K2_end;
  PUP::detail::TemporaryObjectHolder<int> K3_start;
  implP|K3_start;
  PUP::detail::TemporaryObjectHolder<int> K3_end;
  implP|K3_end;
  PUP::detail::TemporaryObjectHolder<int> K1_len;
  implP|K1_len;
  PUP::detail::TemporaryObjectHolder<int> K2_len;
  implP|K2_len;
  PUP::detail::TemporaryObjectHolder<int> K3_len;
  implP|K3_len;
  int impl_off_bm1, impl_cnt_bm1;
  implP|impl_off_bm1;
  implP|impl_cnt_bm1;
  int impl_off_bm2, impl_cnt_bm2;
  implP|impl_off_bm2;
  implP|impl_cnt_bm2;
  int impl_off_bm3, impl_cnt_bm3;
  implP|impl_off_bm3;
  implP|impl_cnt_bm3;
  PUP::detail::TemporaryObjectHolder<int> order;
  implP|order;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *bm1=(double *)(impl_buf+impl_off_bm1);
  double *bm2=(double *)(impl_buf+impl_off_bm2);
  double *bm3=(double *)(impl_buf+impl_off_bm3);
  impl_obj->recvB(std::move(K2_start.t), std::move(K2_end.t), std::move(K3_start.t), std::move(K3_end.t), std::move(K1_len.t), std::move(K2_len.t), std::move(K3_len.t), bm1, bm2, bm3, std::move(order.t));
}
int CkIndex_ComputeMoaMgr::_callmarshall_recvB_marshall7(char* impl_buf, void* impl_obj_void) {
  ComputeMoaMgr* impl_obj = static_cast<ComputeMoaMgr*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> K2_start;
  implP|K2_start;
  PUP::detail::TemporaryObjectHolder<int> K2_end;
  implP|K2_end;
  PUP::detail::TemporaryObjectHolder<int> K3_start;
  implP|K3_start;
  PUP::detail::TemporaryObjectHolder<int> K3_end;
  implP|K3_end;
  PUP::detail::TemporaryObjectHolder<int> K1_len;
  implP|K1_len;
  PUP::detail::TemporaryObjectHolder<int> K2_len;
  implP|K2_len;
  PUP::detail::TemporaryObjectHolder<int> K3_len;
  implP|K3_len;
  int impl_off_bm1, impl_cnt_bm1;
  implP|impl_off_bm1;
  implP|impl_cnt_bm1;
  int impl_off_bm2, impl_cnt_bm2;
  implP|impl_off_bm2;
  implP|impl_cnt_bm2;
  int impl_off_bm3, impl_cnt_bm3;
  implP|impl_off_bm3;
  implP|impl_cnt_bm3;
  PUP::detail::TemporaryObjectHolder<int> order;
  implP|order;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *bm1=(double *)(impl_buf+impl_off_bm1);
  double *bm2=(double *)(impl_buf+impl_off_bm2);
  double *bm3=(double *)(impl_buf+impl_off_bm3);
  impl_obj->recvB(std::move(K2_start.t), std::move(K2_end.t), std::move(K3_start.t), std::move(K3_end.t), std::move(K1_len.t), std::move(K2_len.t), std::move(K3_len.t), bm1, bm2, bm3, std::move(order.t));
  return implP.size();
}
void CkIndex_ComputeMoaMgr::_marshallmessagepup_recvB_marshall7(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> K2_start;
  implP|K2_start;
  PUP::detail::TemporaryObjectHolder<int> K2_end;
  implP|K2_end;
  PUP::detail::TemporaryObjectHolder<int> K3_start;
  implP|K3_start;
  PUP::detail::TemporaryObjectHolder<int> K3_end;
  implP|K3_end;
  PUP::detail::TemporaryObjectHolder<int> K1_len;
  implP|K1_len;
  PUP::detail::TemporaryObjectHolder<int> K2_len;
  implP|K2_len;
  PUP::detail::TemporaryObjectHolder<int> K3_len;
  implP|K3_len;
  int impl_off_bm1, impl_cnt_bm1;
  implP|impl_off_bm1;
  implP|impl_cnt_bm1;
  int impl_off_bm2, impl_cnt_bm2;
  implP|impl_off_bm2;
  implP|impl_cnt_bm2;
  int impl_off_bm3, impl_cnt_bm3;
  implP|impl_off_bm3;
  implP|impl_cnt_bm3;
  PUP::detail::TemporaryObjectHolder<int> order;
  implP|order;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *bm1=(double *)(impl_buf+impl_off_bm1);
  double *bm2=(double *)(impl_buf+impl_off_bm2);
  double *bm3=(double *)(impl_buf+impl_off_bm3);
  if (implDestP.hasComments()) implDestP.comment("K2_start");
  implDestP|K2_start;
  if (implDestP.hasComments()) implDestP.comment("K2_end");
  implDestP|K2_end;
  if (implDestP.hasComments()) implDestP.comment("K3_start");
  implDestP|K3_start;
  if (implDestP.hasComments()) implDestP.comment("K3_end");
  implDestP|K3_end;
  if (implDestP.hasComments()) implDestP.comment("K1_len");
  implDestP|K1_len;
  if (implDestP.hasComments()) implDestP.comment("K2_len");
  implDestP|K2_len;
  if (implDestP.hasComments()) implDestP.comment("K3_len");
  implDestP|K3_len;
  if (implDestP.hasComments()) implDestP.comment("bm1");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*bm1))<impl_cnt_bm1;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|bm1[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("bm2");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*bm2))<impl_cnt_bm2;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|bm2[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("bm3");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*bm3))<impl_cnt_bm3;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|bm3[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("order");
  implDestP|order;
}
PUPable_def(SINGLE_ARG(Closure_ComputeMoaMgr::recvB_7_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvSGrid(int ns, const double *sg);
 */
void CProxy_ComputeMoaMgr::recvSGrid(int ns, const double *sg, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int ns, const double *sg
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_sg, impl_cnt_sg;
  impl_off_sg=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_sg=sizeof(double)*(ns));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|ns;
    implP|impl_off_sg;
    implP|impl_cnt_sg;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|ns;
    implP|impl_off_sg;
    implP|impl_cnt_sg;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_sg,sg,impl_cnt_sg);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMoaMgr::idx_recvSGrid_marshall8(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMoaMgr::idx_recvSGrid_marshall8(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMoaMgr::idx_recvSGrid_marshall8(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMoaMgr::recvSGrid(int ns, const double *sg, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int ns, const double *sg
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_sg, impl_cnt_sg;
  impl_off_sg=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_sg=sizeof(double)*(ns));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|ns;
    implP|impl_off_sg;
    implP|impl_cnt_sg;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|ns;
    implP|impl_off_sg;
    implP|impl_cnt_sg;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_sg,sg,impl_cnt_sg);
  CkSendMsgBranchMulti(CkIndex_ComputeMoaMgr::idx_recvSGrid_marshall8(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMoaMgr::recvSGrid(int ns, const double *sg, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int ns, const double *sg
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_sg, impl_cnt_sg;
  impl_off_sg=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_sg=sizeof(double)*(ns));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|ns;
    implP|impl_off_sg;
    implP|impl_cnt_sg;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|ns;
    implP|impl_off_sg;
    implP|impl_cnt_sg;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_sg,sg,impl_cnt_sg);
  CkSendMsgBranchGroup(CkIndex_ComputeMoaMgr::idx_recvSGrid_marshall8(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputeMoaMgr::reg_recvSGrid_marshall8() {
  int epidx = CkRegisterEp("recvSGrid(int ns, const double *sg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvSGrid_marshall8), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_recvSGrid_marshall8);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_recvSGrid_marshall8);

  return epidx;
}

void CkIndex_ComputeMoaMgr::_call_recvSGrid_marshall8(void* impl_msg, void* impl_obj_void)
{
  ComputeMoaMgr* impl_obj = static_cast<ComputeMoaMgr*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int ns, const double *sg*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> ns;
  implP|ns;
  int impl_off_sg, impl_cnt_sg;
  implP|impl_off_sg;
  implP|impl_cnt_sg;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *sg=(double *)(impl_buf+impl_off_sg);
  impl_obj->recvSGrid(std::move(ns.t), sg);
}
int CkIndex_ComputeMoaMgr::_callmarshall_recvSGrid_marshall8(char* impl_buf, void* impl_obj_void) {
  ComputeMoaMgr* impl_obj = static_cast<ComputeMoaMgr*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int ns, const double *sg*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> ns;
  implP|ns;
  int impl_off_sg, impl_cnt_sg;
  implP|impl_off_sg;
  implP|impl_cnt_sg;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *sg=(double *)(impl_buf+impl_off_sg);
  impl_obj->recvSGrid(std::move(ns.t), sg);
  return implP.size();
}
void CkIndex_ComputeMoaMgr::_marshallmessagepup_recvSGrid_marshall8(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int ns, const double *sg*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> ns;
  implP|ns;
  int impl_off_sg, impl_cnt_sg;
  implP|impl_off_sg;
  implP|impl_cnt_sg;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *sg=(double *)(impl_buf+impl_off_sg);
  if (implDestP.hasComments()) implDestP.comment("ns");
  implDestP|ns;
  if (implDestP.hasComments()) implDestP.comment("sg");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*sg))<impl_cnt_sg;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|sg[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
}
PUPable_def(SINGLE_ARG(Closure_ComputeMoaMgr::recvSGrid_8_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ComputeMoaMgr();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initialize(CkQdMsg* impl_msg);
 */
void CProxySection_ComputeMoaMgr::initialize(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMoaMgr::idx_initialize_CkQdMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMoaMgr::idx_initialize_CkQdMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initWorkers(CkQdMsg* impl_msg);
 */
void CProxySection_ComputeMoaMgr::initWorkers(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMoaMgr::idx_initWorkers_CkQdMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMoaMgr::idx_initWorkers_CkQdMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startWorkers(CkQdMsg* impl_msg);
 */
void CProxySection_ComputeMoaMgr::startWorkers(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMoaMgr::idx_startWorkers_CkQdMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMoaMgr::idx_startWorkers_CkQdMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvMoaData(const MoaData &impl_noname_0);
 */
void CProxySection_ComputeMoaMgr::recvMoaData(const MoaData &impl_noname_0, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const MoaData &impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MoaData>::type>::type &)impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MoaData>::type>::type &)impl_noname_0;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMoaMgr::idx_recvMoaData_marshall5(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMoaMgr::idx_recvMoaData_marshall5(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvQ(int nq, const double *q);
 */
void CProxySection_ComputeMoaMgr::recvQ(int nq, const double *q, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int nq, const double *q
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_q, impl_cnt_q;
  impl_off_q=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_q=sizeof(double)*(nq));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|nq;
    implP|impl_off_q;
    implP|impl_cnt_q;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|nq;
    implP|impl_off_q;
    implP|impl_cnt_q;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_q,q,impl_cnt_q);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMoaMgr::idx_recvQ_marshall6(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMoaMgr::idx_recvQ_marshall6(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvB(int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order);
 */
void CProxySection_ComputeMoaMgr::recvB(int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_bm1, impl_cnt_bm1;
  impl_off_bm1=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_bm1=sizeof(double)*(K1_len));
  int impl_off_bm2, impl_cnt_bm2;
  impl_off_bm2=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_bm2=sizeof(double)*(K2_len));
  int impl_off_bm3, impl_cnt_bm3;
  impl_off_bm3=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_bm3=sizeof(double)*(K3_len));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|K2_start;
    implP|K2_end;
    implP|K3_start;
    implP|K3_end;
    implP|K1_len;
    implP|K2_len;
    implP|K3_len;
    implP|impl_off_bm1;
    implP|impl_cnt_bm1;
    implP|impl_off_bm2;
    implP|impl_cnt_bm2;
    implP|impl_off_bm3;
    implP|impl_cnt_bm3;
    implP|order;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|K2_start;
    implP|K2_end;
    implP|K3_start;
    implP|K3_end;
    implP|K1_len;
    implP|K2_len;
    implP|K3_len;
    implP|impl_off_bm1;
    implP|impl_cnt_bm1;
    implP|impl_off_bm2;
    implP|impl_cnt_bm2;
    implP|impl_off_bm3;
    implP|impl_cnt_bm3;
    implP|order;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_bm1,bm1,impl_cnt_bm1);
  memcpy(impl_buf+impl_off_bm2,bm2,impl_cnt_bm2);
  memcpy(impl_buf+impl_off_bm3,bm3,impl_cnt_bm3);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMoaMgr::idx_recvB_marshall7(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMoaMgr::idx_recvB_marshall7(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvSGrid(int ns, const double *sg);
 */
void CProxySection_ComputeMoaMgr::recvSGrid(int ns, const double *sg, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int ns, const double *sg
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_sg, impl_cnt_sg;
  impl_off_sg=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_sg=sizeof(double)*(ns));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|ns;
    implP|impl_off_sg;
    implP|impl_cnt_sg;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|ns;
    implP|impl_off_sg;
    implP|impl_cnt_sg;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_sg,sg,impl_cnt_sg);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMoaMgr::idx_recvSGrid_marshall8(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMoaMgr::idx_recvSGrid_marshall8(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_ComputeMoaMgr::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,ComputeMoaMgr::isIrreducible());
  // REG: ComputeMoaMgr();
  idx_ComputeMoaMgr_void();
  CkRegisterDefaultCtor(__idx, idx_ComputeMoaMgr_void());

  // REG: void initialize(CkQdMsg* impl_msg);
  idx_initialize_CkQdMsg();

  // REG: void initWorkers(CkQdMsg* impl_msg);
  idx_initWorkers_CkQdMsg();

  // REG: void startWorkers(CkQdMsg* impl_msg);
  idx_startWorkers_CkQdMsg();

  // REG: void recvMoaData(const MoaData &impl_noname_0);
  idx_recvMoaData_marshall5();

  // REG: void recvQ(int nq, const double *q);
  idx_recvQ_marshall6();

  // REG: void recvB(int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order);
  idx_recvB_marshall7();

  // REG: void recvSGrid(int ns, const double *sg);
  idx_recvSGrid_marshall8();

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: array MoaS: ArrayElement{
MoaS(const Moa3Grid &qh, const Moa3Grid &bh);
threaded void compute();
MoaS(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_MoaS::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CProxySection_MoaS::contribute(CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, userData, fragSize);
}

void CProxySection_MoaS::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, userData, fragSize);
}

template <typename T>
void CProxySection_MoaS::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, userData, fragSize);
}

void CProxySection_MoaS::contribute(CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, cb, userData, fragSize);
}

void CProxySection_MoaS::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, cb, userData, fragSize);
}

template <typename T>
void CProxySection_MoaS::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, cb, userData, fragSize);
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: MoaS(const Moa3Grid &qh, const Moa3Grid &bh);
 */
void CProxyElement_MoaS::insert(const Moa3Grid &qh, const Moa3Grid &bh, int onPE, const CkEntryOptions *impl_e_opts)
{ 
   //Marshall: const Moa3Grid &qh, const Moa3Grid &bh
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Moa3Grid>::type>::type &)qh;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Moa3Grid>::type>::type &)bh;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Moa3Grid>::type>::type &)qh;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Moa3Grid>::type>::type &)bh;
  }
   UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_MoaS::idx_MoaS_marshall1(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void compute();
 */
void CProxyElement_MoaS::compute(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_MoaS::idx_compute_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: MoaS(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: MoaS(const Moa3Grid &qh, const Moa3Grid &bh);
 */
CkArrayID CProxy_MoaS::ckNew(const Moa3Grid &qh, const Moa3Grid &bh, const CkArrayOptions &opts, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const Moa3Grid &qh, const Moa3Grid &bh
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Moa3Grid>::type>::type &)qh;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Moa3Grid>::type>::type &)bh;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Moa3Grid>::type>::type &)qh;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Moa3Grid>::type>::type &)bh;
  }
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_MoaS::idx_MoaS_marshall1(), opts);
  return gId;
}
void CProxy_MoaS::ckNew(const Moa3Grid &qh, const Moa3Grid &bh, const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const Moa3Grid &qh, const Moa3Grid &bh
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Moa3Grid>::type>::type &)qh;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Moa3Grid>::type>::type &)bh;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Moa3Grid>::type>::type &)qh;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Moa3Grid>::type>::type &)bh;
  }
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_MoaS::idx_MoaS_marshall1(), _ck_array_creation_cb, opts, impl_msg);
}
CkArrayID CProxy_MoaS::ckNew(const Moa3Grid &qh, const Moa3Grid &bh, const int s1, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const Moa3Grid &qh, const Moa3Grid &bh
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Moa3Grid>::type>::type &)qh;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Moa3Grid>::type>::type &)bh;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Moa3Grid>::type>::type &)qh;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Moa3Grid>::type>::type &)bh;
  }
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_MoaS::idx_MoaS_marshall1(), opts);
  return gId;
}
void CProxy_MoaS::ckNew(const Moa3Grid &qh, const Moa3Grid &bh, const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const Moa3Grid &qh, const Moa3Grid &bh
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Moa3Grid>::type>::type &)qh;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Moa3Grid>::type>::type &)bh;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Moa3Grid>::type>::type &)qh;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Moa3Grid>::type>::type &)bh;
  }
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_MoaS::idx_MoaS_marshall1(), _ck_array_creation_cb, opts, impl_msg);
}

// Entry point registration function
int CkIndex_MoaS::reg_MoaS_marshall1() {
  int epidx = CkRegisterEp("MoaS(const Moa3Grid &qh, const Moa3Grid &bh)",
      reinterpret_cast<CkCallFnPtr>(_call_MoaS_marshall1), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_MoaS_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_MoaS_marshall1);

  return epidx;
}

void CkIndex_MoaS::_call_MoaS_marshall1(void* impl_msg, void* impl_obj_void)
{
  MoaS* impl_obj = static_cast<MoaS*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const Moa3Grid &qh, const Moa3Grid &bh*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<Moa3Grid> qh;
  implP|qh;
  PUP::detail::TemporaryObjectHolder<Moa3Grid> bh;
  implP|bh;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) MoaS(std::move(qh.t), std::move(bh.t));
}
int CkIndex_MoaS::_callmarshall_MoaS_marshall1(char* impl_buf, void* impl_obj_void) {
  MoaS* impl_obj = static_cast<MoaS*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const Moa3Grid &qh, const Moa3Grid &bh*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<Moa3Grid> qh;
  implP|qh;
  PUP::detail::TemporaryObjectHolder<Moa3Grid> bh;
  implP|bh;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) MoaS(std::move(qh.t), std::move(bh.t));
  return implP.size();
}
void CkIndex_MoaS::_marshallmessagepup_MoaS_marshall1(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const Moa3Grid &qh, const Moa3Grid &bh*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<Moa3Grid> qh;
  implP|qh;
  PUP::detail::TemporaryObjectHolder<Moa3Grid> bh;
  implP|bh;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("qh");
  implDestP|qh;
  if (implDestP.hasComments()) implDestP.comment("bh");
  implDestP|bh;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void compute();
 */
void CProxy_MoaS::compute(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_MoaS::idx_compute_void(),0);
}

// Entry point registration function
int CkIndex_MoaS::reg_compute_void() {
  int epidx = CkRegisterEp("compute()",
      reinterpret_cast<CkCallFnPtr>(_call_compute_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_MoaS::_call_compute_void(void* impl_msg, void* impl_obj_void)
{
  MoaS* impl_obj = static_cast<MoaS*>(impl_obj_void);
  CthThread tid = CthCreate((CthVoidFn)_callthr_compute_void, new CkThrCallArg(impl_msg,impl_obj), 0);
  ((Chare *)impl_obj)->CkAddThreadListeners(tid,impl_msg);
  CthTraceResume(tid);
  CthResume(tid);
}
void CkIndex_MoaS::_callthr_compute_void(CkThrCallArg *impl_arg)
{
  void *impl_msg = impl_arg->msg;
  void *impl_obj_void = impl_arg->obj;
  MoaS *impl_obj = static_cast<MoaS *>(impl_obj_void);
  delete impl_arg;
  impl_obj->compute();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_MoaS::compute_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: MoaS(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_MoaS::reg_MoaS_CkMigrateMessage() {
  int epidx = CkRegisterEp("MoaS(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_MoaS_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_MoaS::_call_MoaS_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  call_migration_constructor<MoaS> c = impl_obj_void;
  c((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: MoaS(const Moa3Grid &qh, const Moa3Grid &bh);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void compute();
 */
void CProxySection_MoaS::compute(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_MoaS::idx_compute_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: MoaS(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_MoaS::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterArrayDimensions(__idx, 1);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
  // REG: MoaS(const Moa3Grid &qh, const Moa3Grid &bh);
  idx_MoaS_marshall1();

  // REG: threaded void compute();
  idx_compute_void();

  // REG: MoaS(CkMigrateMessage* impl_msg);
  idx_MoaS_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_MoaS_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerComputeMoaMgr(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: group ComputeMoaMgr: IrrGroup{
ComputeMoaMgr();
void initialize(CkQdMsg* impl_msg);
void initWorkers(CkQdMsg* impl_msg);
void startWorkers(CkQdMsg* impl_msg);
void recvMoaData(const MoaData &impl_noname_0);
void recvQ(int nq, const double *q);
void recvB(int K2_start, int K2_end, int K3_start, int K3_end, int K1_len, int K2_len, int K3_len, const double *bm1, const double *bm2, const double *bm3, int order);
void recvSGrid(int ns, const double *sg);
};
*/
  CkIndex_ComputeMoaMgr::__register("ComputeMoaMgr", sizeof(ComputeMoaMgr));

/* REG: array MoaS: ArrayElement{
MoaS(const Moa3Grid &qh, const Moa3Grid &bh);
threaded void compute();
MoaS(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_MoaS::__register("MoaS", sizeof(MoaS));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_ComputeMoaMgr::virtual_pup(PUP::er &p) {
    recursive_pup<ComputeMoaMgr>(dynamic_cast<ComputeMoaMgr*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_MoaS::virtual_pup(PUP::er &p) {
    recursive_pup<MoaS>(dynamic_cast<MoaS*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
