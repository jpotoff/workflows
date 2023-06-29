
/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_DataExchanger::recv_data_2_closure : public SDAG::Closure {
            Pointer p;


      recv_data_2_closure() {
        init();
      }
      recv_data_2_closure(CkMigrateMessage*) {
        init();
      }
            Pointer & getP0() { return p;}
      void pup(PUP::er& __p) {
        __p | p;
        packClosure(__p);
      }
      virtual ~recv_data_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(recv_data_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_DataExchanger::recv_eval_result_3_closure : public SDAG::Closure {
            Pointer p;


      recv_eval_result_3_closure() {
        init();
      }
      recv_eval_result_3_closure(CkMigrateMessage*) {
        init();
      }
            Pointer & getP0() { return p;}
      void pup(PUP::er& __p) {
        __p | p;
        packClosure(__p);
      }
      virtual ~recv_eval_result_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(recv_eval_result_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_DataExchanger::recv_ack_4_closure : public SDAG::Closure {
      

      recv_ack_4_closure() {
        init();
      }
      recv_ack_4_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~recv_ack_4_closure() {
      }
      PUPable_decl(SINGLE_ARG(recv_ack_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_DataExchanger::recv_red_5_closure : public SDAG::Closure {
      

      recv_red_5_closure() {
        init();
      }
      recv_red_5_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~recv_red_5_closure() {
      }
      PUPable_decl(SINGLE_ARG(recv_red_5_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_DataExchanger::recv_bcast_6_closure : public SDAG::Closure {
      

      recv_bcast_6_closure() {
        init();
      }
      recv_bcast_6_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~recv_bcast_6_closure() {
      }
      PUPable_decl(SINGLE_ARG(recv_bcast_6_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_DataExchanger::send_7_closure : public SDAG::Closure {
            ConstPointer srcPointer;
            int srcSize;
            int dstPart;
            int dst;


      send_7_closure() {
        init();
      }
      send_7_closure(CkMigrateMessage*) {
        init();
      }
            ConstPointer & getP0() { return srcPointer;}
            int & getP1() { return srcSize;}
            int & getP2() { return dstPart;}
            int & getP3() { return dst;}
      void pup(PUP::er& __p) {
        __p | srcPointer;
        __p | srcSize;
        __p | dstPart;
        __p | dst;
        packClosure(__p);
      }
      virtual ~send_7_closure() {
      }
      PUPable_decl(SINGLE_ARG(send_7_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_DataExchanger::recv_8_closure : public SDAG::Closure {
            Pointer recvPointer;
            int srcPart;
            int src;


      recv_8_closure() {
        init();
      }
      recv_8_closure(CkMigrateMessage*) {
        init();
      }
            Pointer & getP0() { return recvPointer;}
            int & getP1() { return srcPart;}
            int & getP2() { return src;}
      void pup(PUP::er& __p) {
        __p | recvPointer;
        __p | srcPart;
        __p | src;
        packClosure(__p);
      }
      virtual ~recv_8_closure() {
      }
      PUPable_decl(SINGLE_ARG(recv_8_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_DataExchanger::sendRecv_9_closure : public SDAG::Closure {
            ConstPointer srcPointer;
            int srcSize;
            int dstPart;
            int dst;
            Pointer recvPointer;
            int srcPart;
            int src;


      sendRecv_9_closure() {
        init();
      }
      sendRecv_9_closure(CkMigrateMessage*) {
        init();
      }
            ConstPointer & getP0() { return srcPointer;}
            int & getP1() { return srcSize;}
            int & getP2() { return dstPart;}
            int & getP3() { return dst;}
            Pointer & getP4() { return recvPointer;}
            int & getP5() { return srcPart;}
            int & getP6() { return src;}
      void pup(PUP::er& __p) {
        __p | srcPointer;
        __p | srcSize;
        __p | dstPart;
        __p | dst;
        __p | recvPointer;
        __p | srcPart;
        __p | src;
        packClosure(__p);
      }
      virtual ~sendRecv_9_closure() {
      }
      PUPable_decl(SINGLE_ARG(sendRecv_9_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_DataExchanger::eval_10_closure : public SDAG::Closure {
            ConstPointer srcPointer;
            int srcSize;
            int dstPart;
            int dst;
            Pointer recvPointer;


      eval_10_closure() {
        init();
      }
      eval_10_closure(CkMigrateMessage*) {
        init();
      }
            ConstPointer & getP0() { return srcPointer;}
            int & getP1() { return srcSize;}
            int & getP2() { return dstPart;}
            int & getP3() { return dst;}
            Pointer & getP4() { return recvPointer;}
      void pup(PUP::er& __p) {
        __p | srcPointer;
        __p | srcSize;
        __p | dstPart;
        __p | dst;
        __p | recvPointer;
        packClosure(__p);
      }
      virtual ~eval_10_closure() {
      }
      PUPable_decl(SINGLE_ARG(eval_10_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_DataExchanger::recv_eval_command_11_closure : public SDAG::Closure {
            Pointer p;


      recv_eval_command_11_closure() {
        init();
      }
      recv_eval_command_11_closure(CkMigrateMessage*) {
        init();
      }
            Pointer & getP0() { return p;}
      void pup(PUP::er& __p) {
        __p | p;
        packClosure(__p);
      }
      virtual ~recv_eval_command_11_closure() {
      }
      PUPable_decl(SINGLE_ARG(recv_eval_command_11_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_DataExchanger::barrier_12_closure : public SDAG::Closure {
      

      barrier_12_closure() {
        init();
      }
      barrier_12_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~barrier_12_closure() {
      }
      PUPable_decl(SINGLE_ARG(barrier_12_closure));
    };
#endif /* CK_TEMPLATES_ONLY */



/* DEFS: group DataExchanger: IrrGroup{
DataExchanger();
void recv_data(const Pointer &p);
void recv_eval_result(const Pointer &p);
void recv_ack();
void recv_red();
void recv_bcast();
void send(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst);
void recv(const Pointer &recvPointer, int srcPart, int src);
void sendRecv(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const Pointer &recvPointer, int srcPart, int src);
void eval(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const Pointer &recvPointer);
void recv_eval_command(const Pointer &p);
void barrier();
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_DataExchanger::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: DataExchanger();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recv_data(const Pointer &p);
 */
void CProxyElement_DataExchanger::recv_data(const Pointer &p, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const Pointer &p
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Pointer>::type>::type &)p;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Pointer>::type>::type &)p;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_DataExchanger::idx_recv_data_marshall2(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_DataExchanger::idx_recv_data_marshall2(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_DataExchanger::idx_recv_data_marshall2(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recv_eval_result(const Pointer &p);
 */
void CProxyElement_DataExchanger::recv_eval_result(const Pointer &p, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const Pointer &p
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Pointer>::type>::type &)p;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Pointer>::type>::type &)p;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_DataExchanger::idx_recv_eval_result_marshall3(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_DataExchanger::idx_recv_eval_result_marshall3(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_DataExchanger::idx_recv_eval_result_marshall3(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recv_ack();
 */
void CProxyElement_DataExchanger::recv_ack(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_DataExchanger::idx_recv_ack_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_DataExchanger::idx_recv_ack_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_DataExchanger::idx_recv_ack_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recv_red();
 */
void CProxyElement_DataExchanger::recv_red(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_DataExchanger::idx_recv_red_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_DataExchanger::idx_recv_red_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_DataExchanger::idx_recv_red_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recv_bcast();
 */
void CProxyElement_DataExchanger::recv_bcast(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_DataExchanger::idx_recv_bcast_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_DataExchanger::idx_recv_bcast_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_DataExchanger::idx_recv_bcast_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void send(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst);
 */
void CProxyElement_DataExchanger::send(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const ConstPointer &srcPointer, int srcSize, int dstPart, int dst
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<ConstPointer>::type>::type &)srcPointer;
    implP|srcSize;
    implP|dstPart;
    implP|dst;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<ConstPointer>::type>::type &)srcPointer;
    implP|srcSize;
    implP|dstPart;
    implP|dst;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_DataExchanger::idx_send_marshall7(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_DataExchanger::idx_send_marshall7(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_DataExchanger::idx_send_marshall7(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recv(const Pointer &recvPointer, int srcPart, int src);
 */
void CProxyElement_DataExchanger::recv(const Pointer &recvPointer, int srcPart, int src, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const Pointer &recvPointer, int srcPart, int src
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Pointer>::type>::type &)recvPointer;
    implP|srcPart;
    implP|src;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Pointer>::type>::type &)recvPointer;
    implP|srcPart;
    implP|src;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_DataExchanger::idx_recv_marshall8(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_DataExchanger::idx_recv_marshall8(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_DataExchanger::idx_recv_marshall8(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendRecv(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const Pointer &recvPointer, int srcPart, int src);
 */
void CProxyElement_DataExchanger::sendRecv(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const Pointer &recvPointer, int srcPart, int src, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const Pointer &recvPointer, int srcPart, int src
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<ConstPointer>::type>::type &)srcPointer;
    implP|srcSize;
    implP|dstPart;
    implP|dst;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Pointer>::type>::type &)recvPointer;
    implP|srcPart;
    implP|src;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<ConstPointer>::type>::type &)srcPointer;
    implP|srcSize;
    implP|dstPart;
    implP|dst;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Pointer>::type>::type &)recvPointer;
    implP|srcPart;
    implP|src;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_DataExchanger::idx_sendRecv_marshall9(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_DataExchanger::idx_sendRecv_marshall9(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_DataExchanger::idx_sendRecv_marshall9(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void eval(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const Pointer &recvPointer);
 */
void CProxyElement_DataExchanger::eval(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const Pointer &recvPointer, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const Pointer &recvPointer
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<ConstPointer>::type>::type &)srcPointer;
    implP|srcSize;
    implP|dstPart;
    implP|dst;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Pointer>::type>::type &)recvPointer;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<ConstPointer>::type>::type &)srcPointer;
    implP|srcSize;
    implP|dstPart;
    implP|dst;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Pointer>::type>::type &)recvPointer;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_DataExchanger::idx_eval_marshall10(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_DataExchanger::idx_eval_marshall10(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_DataExchanger::idx_eval_marshall10(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recv_eval_command(const Pointer &p);
 */
void CProxyElement_DataExchanger::recv_eval_command(const Pointer &p, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const Pointer &p
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Pointer>::type>::type &)p;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Pointer>::type>::type &)p;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_DataExchanger::idx_recv_eval_command_marshall11(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_DataExchanger::idx_recv_eval_command_marshall11(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_DataExchanger::idx_recv_eval_command_marshall11(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void barrier();
 */
void CProxyElement_DataExchanger::barrier(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_DataExchanger::idx_barrier_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_DataExchanger::idx_barrier_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_DataExchanger::idx_barrier_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: DataExchanger();
 */
CkGroupID CProxy_DataExchanger::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_DataExchanger::__idx, CkIndex_DataExchanger::idx_DataExchanger_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_DataExchanger::reg_DataExchanger_void() {
  int epidx = CkRegisterEp("DataExchanger()",
      reinterpret_cast<CkCallFnPtr>(_call_DataExchanger_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_DataExchanger::_call_DataExchanger_void(void* impl_msg, void* impl_obj_void)
{
  DataExchanger* impl_obj = static_cast<DataExchanger*>(impl_obj_void);
  new (impl_obj_void) DataExchanger();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recv_data(const Pointer &p);
 */
void CProxy_DataExchanger::recv_data(const Pointer &p, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const Pointer &p
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Pointer>::type>::type &)p;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Pointer>::type>::type &)p;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_DataExchanger::idx_recv_data_marshall2(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_DataExchanger::idx_recv_data_marshall2(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_DataExchanger::idx_recv_data_marshall2(), impl_msg, ckGetGroupID(),0);
}
void CProxy_DataExchanger::recv_data(const Pointer &p, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const Pointer &p
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Pointer>::type>::type &)p;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Pointer>::type>::type &)p;
  }
  CkSendMsgBranchMulti(CkIndex_DataExchanger::idx_recv_data_marshall2(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_DataExchanger::recv_data(const Pointer &p, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const Pointer &p
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Pointer>::type>::type &)p;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Pointer>::type>::type &)p;
  }
  CkSendMsgBranchGroup(CkIndex_DataExchanger::idx_recv_data_marshall2(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_DataExchanger::reg_recv_data_marshall2() {
  int epidx = CkRegisterEp("recv_data(const Pointer &p)",
      reinterpret_cast<CkCallFnPtr>(_call_recv_data_marshall2), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_recv_data_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_recv_data_marshall2);

  return epidx;
}

void CkIndex_DataExchanger::_call_recv_data_marshall2(void* impl_msg, void* impl_obj_void)
{
  DataExchanger* impl_obj = static_cast<DataExchanger*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  PUP::fromMem implP(impl_buf);
  Closure_DataExchanger::recv_data_2_closure* genClosure = new Closure_DataExchanger::recv_data_2_closure();
  implP|genClosure->p;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->recv_data(genClosure);
  genClosure->deref();
}
int CkIndex_DataExchanger::_callmarshall_recv_data_marshall2(char* impl_buf, void* impl_obj_void) {
  DataExchanger* impl_obj = static_cast<DataExchanger*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  PUP::fromMem implP(impl_buf);
  Closure_DataExchanger::recv_data_2_closure* genClosure = new Closure_DataExchanger::recv_data_2_closure();
  implP|genClosure->p;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->recv_data(genClosure);
  genClosure->deref();
  return implP.size();
}
void CkIndex_DataExchanger::_marshallmessagepup_recv_data_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const Pointer &p*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<Pointer> p;
  implP|p;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("p");
  implDestP|p;
}
PUPable_def(SINGLE_ARG(Closure_DataExchanger::recv_data_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recv_eval_result(const Pointer &p);
 */
void CProxy_DataExchanger::recv_eval_result(const Pointer &p, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const Pointer &p
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Pointer>::type>::type &)p;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Pointer>::type>::type &)p;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_DataExchanger::idx_recv_eval_result_marshall3(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_DataExchanger::idx_recv_eval_result_marshall3(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_DataExchanger::idx_recv_eval_result_marshall3(), impl_msg, ckGetGroupID(),0);
}
void CProxy_DataExchanger::recv_eval_result(const Pointer &p, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const Pointer &p
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Pointer>::type>::type &)p;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Pointer>::type>::type &)p;
  }
  CkSendMsgBranchMulti(CkIndex_DataExchanger::idx_recv_eval_result_marshall3(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_DataExchanger::recv_eval_result(const Pointer &p, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const Pointer &p
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Pointer>::type>::type &)p;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Pointer>::type>::type &)p;
  }
  CkSendMsgBranchGroup(CkIndex_DataExchanger::idx_recv_eval_result_marshall3(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_DataExchanger::reg_recv_eval_result_marshall3() {
  int epidx = CkRegisterEp("recv_eval_result(const Pointer &p)",
      reinterpret_cast<CkCallFnPtr>(_call_recv_eval_result_marshall3), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_recv_eval_result_marshall3);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_recv_eval_result_marshall3);

  return epidx;
}

void CkIndex_DataExchanger::_call_recv_eval_result_marshall3(void* impl_msg, void* impl_obj_void)
{
  DataExchanger* impl_obj = static_cast<DataExchanger*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  PUP::fromMem implP(impl_buf);
  Closure_DataExchanger::recv_eval_result_3_closure* genClosure = new Closure_DataExchanger::recv_eval_result_3_closure();
  implP|genClosure->p;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->recv_eval_result(genClosure);
  genClosure->deref();
}
int CkIndex_DataExchanger::_callmarshall_recv_eval_result_marshall3(char* impl_buf, void* impl_obj_void) {
  DataExchanger* impl_obj = static_cast<DataExchanger*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  PUP::fromMem implP(impl_buf);
  Closure_DataExchanger::recv_eval_result_3_closure* genClosure = new Closure_DataExchanger::recv_eval_result_3_closure();
  implP|genClosure->p;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->recv_eval_result(genClosure);
  genClosure->deref();
  return implP.size();
}
void CkIndex_DataExchanger::_marshallmessagepup_recv_eval_result_marshall3(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const Pointer &p*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<Pointer> p;
  implP|p;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("p");
  implDestP|p;
}
PUPable_def(SINGLE_ARG(Closure_DataExchanger::recv_eval_result_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recv_ack();
 */
void CProxy_DataExchanger::recv_ack(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_DataExchanger::idx_recv_ack_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_DataExchanger::idx_recv_ack_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_DataExchanger::idx_recv_ack_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_DataExchanger::recv_ack(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_DataExchanger::idx_recv_ack_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_DataExchanger::recv_ack(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_DataExchanger::idx_recv_ack_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_DataExchanger::reg_recv_ack_void() {
  int epidx = CkRegisterEp("recv_ack()",
      reinterpret_cast<CkCallFnPtr>(_call_recv_ack_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_DataExchanger::_call_recv_ack_void(void* impl_msg, void* impl_obj_void)
{
  DataExchanger* impl_obj = static_cast<DataExchanger*>(impl_obj_void);
  impl_obj->recv_ack();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_DataExchanger::recv_ack_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recv_red();
 */
void CProxy_DataExchanger::recv_red(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_DataExchanger::idx_recv_red_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_DataExchanger::idx_recv_red_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_DataExchanger::idx_recv_red_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_DataExchanger::recv_red(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_DataExchanger::idx_recv_red_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_DataExchanger::recv_red(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_DataExchanger::idx_recv_red_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_DataExchanger::reg_recv_red_void() {
  int epidx = CkRegisterEp("recv_red()",
      reinterpret_cast<CkCallFnPtr>(_call_recv_red_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_DataExchanger::_call_recv_red_void(void* impl_msg, void* impl_obj_void)
{
  DataExchanger* impl_obj = static_cast<DataExchanger*>(impl_obj_void);
  impl_obj->recv_red();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_DataExchanger::recv_red_5_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recv_bcast();
 */
void CProxy_DataExchanger::recv_bcast(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_DataExchanger::idx_recv_bcast_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_DataExchanger::idx_recv_bcast_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_DataExchanger::idx_recv_bcast_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_DataExchanger::recv_bcast(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_DataExchanger::idx_recv_bcast_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_DataExchanger::recv_bcast(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_DataExchanger::idx_recv_bcast_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_DataExchanger::reg_recv_bcast_void() {
  int epidx = CkRegisterEp("recv_bcast()",
      reinterpret_cast<CkCallFnPtr>(_call_recv_bcast_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_DataExchanger::_call_recv_bcast_void(void* impl_msg, void* impl_obj_void)
{
  DataExchanger* impl_obj = static_cast<DataExchanger*>(impl_obj_void);
  impl_obj->recv_bcast();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_DataExchanger::recv_bcast_6_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void send(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst);
 */
void CProxy_DataExchanger::send(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const ConstPointer &srcPointer, int srcSize, int dstPart, int dst
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<ConstPointer>::type>::type &)srcPointer;
    implP|srcSize;
    implP|dstPart;
    implP|dst;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<ConstPointer>::type>::type &)srcPointer;
    implP|srcSize;
    implP|dstPart;
    implP|dst;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_DataExchanger::idx_send_marshall7(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_DataExchanger::idx_send_marshall7(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_DataExchanger::idx_send_marshall7(), impl_msg, ckGetGroupID(),0);
}
void CProxy_DataExchanger::send(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const ConstPointer &srcPointer, int srcSize, int dstPart, int dst
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<ConstPointer>::type>::type &)srcPointer;
    implP|srcSize;
    implP|dstPart;
    implP|dst;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<ConstPointer>::type>::type &)srcPointer;
    implP|srcSize;
    implP|dstPart;
    implP|dst;
  }
  CkSendMsgBranchMulti(CkIndex_DataExchanger::idx_send_marshall7(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_DataExchanger::send(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const ConstPointer &srcPointer, int srcSize, int dstPart, int dst
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<ConstPointer>::type>::type &)srcPointer;
    implP|srcSize;
    implP|dstPart;
    implP|dst;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<ConstPointer>::type>::type &)srcPointer;
    implP|srcSize;
    implP|dstPart;
    implP|dst;
  }
  CkSendMsgBranchGroup(CkIndex_DataExchanger::idx_send_marshall7(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_DataExchanger::reg_send_marshall7() {
  int epidx = CkRegisterEp("send(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst)",
      reinterpret_cast<CkCallFnPtr>(_call_send_marshall7), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_send_marshall7);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_send_marshall7);

  return epidx;
}

void CkIndex_DataExchanger::_call_send_marshall7(void* impl_msg, void* impl_obj_void)
{
  DataExchanger* impl_obj = static_cast<DataExchanger*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  PUP::fromMem implP(impl_buf);
  Closure_DataExchanger::send_7_closure* genClosure = new Closure_DataExchanger::send_7_closure();
  implP|genClosure->srcPointer;
  implP|genClosure->srcSize;
  implP|genClosure->dstPart;
  implP|genClosure->dst;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->_sdag_fnc_send(genClosure);
  genClosure->deref();
}
int CkIndex_DataExchanger::_callmarshall_send_marshall7(char* impl_buf, void* impl_obj_void) {
  DataExchanger* impl_obj = static_cast<DataExchanger*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  PUP::fromMem implP(impl_buf);
  Closure_DataExchanger::send_7_closure* genClosure = new Closure_DataExchanger::send_7_closure();
  implP|genClosure->srcPointer;
  implP|genClosure->srcSize;
  implP|genClosure->dstPart;
  implP|genClosure->dst;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->_sdag_fnc_send(genClosure);
  genClosure->deref();
  return implP.size();
}
void CkIndex_DataExchanger::_marshallmessagepup_send_marshall7(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const ConstPointer &srcPointer, int srcSize, int dstPart, int dst*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<ConstPointer> srcPointer;
  implP|srcPointer;
  PUP::detail::TemporaryObjectHolder<int> srcSize;
  implP|srcSize;
  PUP::detail::TemporaryObjectHolder<int> dstPart;
  implP|dstPart;
  PUP::detail::TemporaryObjectHolder<int> dst;
  implP|dst;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("srcPointer");
  implDestP|srcPointer;
  if (implDestP.hasComments()) implDestP.comment("srcSize");
  implDestP|srcSize;
  if (implDestP.hasComments()) implDestP.comment("dstPart");
  implDestP|dstPart;
  if (implDestP.hasComments()) implDestP.comment("dst");
  implDestP|dst;
}
PUPable_def(SINGLE_ARG(Closure_DataExchanger::send_7_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recv(const Pointer &recvPointer, int srcPart, int src);
 */
void CProxy_DataExchanger::recv(const Pointer &recvPointer, int srcPart, int src, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const Pointer &recvPointer, int srcPart, int src
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Pointer>::type>::type &)recvPointer;
    implP|srcPart;
    implP|src;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Pointer>::type>::type &)recvPointer;
    implP|srcPart;
    implP|src;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_DataExchanger::idx_recv_marshall8(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_DataExchanger::idx_recv_marshall8(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_DataExchanger::idx_recv_marshall8(), impl_msg, ckGetGroupID(),0);
}
void CProxy_DataExchanger::recv(const Pointer &recvPointer, int srcPart, int src, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const Pointer &recvPointer, int srcPart, int src
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Pointer>::type>::type &)recvPointer;
    implP|srcPart;
    implP|src;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Pointer>::type>::type &)recvPointer;
    implP|srcPart;
    implP|src;
  }
  CkSendMsgBranchMulti(CkIndex_DataExchanger::idx_recv_marshall8(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_DataExchanger::recv(const Pointer &recvPointer, int srcPart, int src, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const Pointer &recvPointer, int srcPart, int src
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Pointer>::type>::type &)recvPointer;
    implP|srcPart;
    implP|src;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Pointer>::type>::type &)recvPointer;
    implP|srcPart;
    implP|src;
  }
  CkSendMsgBranchGroup(CkIndex_DataExchanger::idx_recv_marshall8(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_DataExchanger::reg_recv_marshall8() {
  int epidx = CkRegisterEp("recv(const Pointer &recvPointer, int srcPart, int src)",
      reinterpret_cast<CkCallFnPtr>(_call_recv_marshall8), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_recv_marshall8);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_recv_marshall8);

  return epidx;
}

void CkIndex_DataExchanger::_call_recv_marshall8(void* impl_msg, void* impl_obj_void)
{
  DataExchanger* impl_obj = static_cast<DataExchanger*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  PUP::fromMem implP(impl_buf);
  Closure_DataExchanger::recv_8_closure* genClosure = new Closure_DataExchanger::recv_8_closure();
  implP|genClosure->recvPointer;
  implP|genClosure->srcPart;
  implP|genClosure->src;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->_sdag_fnc_recv(genClosure);
  genClosure->deref();
}
int CkIndex_DataExchanger::_callmarshall_recv_marshall8(char* impl_buf, void* impl_obj_void) {
  DataExchanger* impl_obj = static_cast<DataExchanger*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  PUP::fromMem implP(impl_buf);
  Closure_DataExchanger::recv_8_closure* genClosure = new Closure_DataExchanger::recv_8_closure();
  implP|genClosure->recvPointer;
  implP|genClosure->srcPart;
  implP|genClosure->src;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->_sdag_fnc_recv(genClosure);
  genClosure->deref();
  return implP.size();
}
void CkIndex_DataExchanger::_marshallmessagepup_recv_marshall8(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const Pointer &recvPointer, int srcPart, int src*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<Pointer> recvPointer;
  implP|recvPointer;
  PUP::detail::TemporaryObjectHolder<int> srcPart;
  implP|srcPart;
  PUP::detail::TemporaryObjectHolder<int> src;
  implP|src;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("recvPointer");
  implDestP|recvPointer;
  if (implDestP.hasComments()) implDestP.comment("srcPart");
  implDestP|srcPart;
  if (implDestP.hasComments()) implDestP.comment("src");
  implDestP|src;
}
PUPable_def(SINGLE_ARG(Closure_DataExchanger::recv_8_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendRecv(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const Pointer &recvPointer, int srcPart, int src);
 */
void CProxy_DataExchanger::sendRecv(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const Pointer &recvPointer, int srcPart, int src, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const Pointer &recvPointer, int srcPart, int src
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<ConstPointer>::type>::type &)srcPointer;
    implP|srcSize;
    implP|dstPart;
    implP|dst;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Pointer>::type>::type &)recvPointer;
    implP|srcPart;
    implP|src;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<ConstPointer>::type>::type &)srcPointer;
    implP|srcSize;
    implP|dstPart;
    implP|dst;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Pointer>::type>::type &)recvPointer;
    implP|srcPart;
    implP|src;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_DataExchanger::idx_sendRecv_marshall9(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_DataExchanger::idx_sendRecv_marshall9(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_DataExchanger::idx_sendRecv_marshall9(), impl_msg, ckGetGroupID(),0);
}
void CProxy_DataExchanger::sendRecv(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const Pointer &recvPointer, int srcPart, int src, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const Pointer &recvPointer, int srcPart, int src
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<ConstPointer>::type>::type &)srcPointer;
    implP|srcSize;
    implP|dstPart;
    implP|dst;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Pointer>::type>::type &)recvPointer;
    implP|srcPart;
    implP|src;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<ConstPointer>::type>::type &)srcPointer;
    implP|srcSize;
    implP|dstPart;
    implP|dst;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Pointer>::type>::type &)recvPointer;
    implP|srcPart;
    implP|src;
  }
  CkSendMsgBranchMulti(CkIndex_DataExchanger::idx_sendRecv_marshall9(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_DataExchanger::sendRecv(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const Pointer &recvPointer, int srcPart, int src, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const Pointer &recvPointer, int srcPart, int src
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<ConstPointer>::type>::type &)srcPointer;
    implP|srcSize;
    implP|dstPart;
    implP|dst;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Pointer>::type>::type &)recvPointer;
    implP|srcPart;
    implP|src;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<ConstPointer>::type>::type &)srcPointer;
    implP|srcSize;
    implP|dstPart;
    implP|dst;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Pointer>::type>::type &)recvPointer;
    implP|srcPart;
    implP|src;
  }
  CkSendMsgBranchGroup(CkIndex_DataExchanger::idx_sendRecv_marshall9(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_DataExchanger::reg_sendRecv_marshall9() {
  int epidx = CkRegisterEp("sendRecv(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const Pointer &recvPointer, int srcPart, int src)",
      reinterpret_cast<CkCallFnPtr>(_call_sendRecv_marshall9), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_sendRecv_marshall9);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_sendRecv_marshall9);

  return epidx;
}

void CkIndex_DataExchanger::_call_sendRecv_marshall9(void* impl_msg, void* impl_obj_void)
{
  DataExchanger* impl_obj = static_cast<DataExchanger*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  PUP::fromMem implP(impl_buf);
  Closure_DataExchanger::sendRecv_9_closure* genClosure = new Closure_DataExchanger::sendRecv_9_closure();
  implP|genClosure->srcPointer;
  implP|genClosure->srcSize;
  implP|genClosure->dstPart;
  implP|genClosure->dst;
  implP|genClosure->recvPointer;
  implP|genClosure->srcPart;
  implP|genClosure->src;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->_sdag_fnc_sendRecv(genClosure);
  genClosure->deref();
}
int CkIndex_DataExchanger::_callmarshall_sendRecv_marshall9(char* impl_buf, void* impl_obj_void) {
  DataExchanger* impl_obj = static_cast<DataExchanger*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  PUP::fromMem implP(impl_buf);
  Closure_DataExchanger::sendRecv_9_closure* genClosure = new Closure_DataExchanger::sendRecv_9_closure();
  implP|genClosure->srcPointer;
  implP|genClosure->srcSize;
  implP|genClosure->dstPart;
  implP|genClosure->dst;
  implP|genClosure->recvPointer;
  implP|genClosure->srcPart;
  implP|genClosure->src;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->_sdag_fnc_sendRecv(genClosure);
  genClosure->deref();
  return implP.size();
}
void CkIndex_DataExchanger::_marshallmessagepup_sendRecv_marshall9(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const Pointer &recvPointer, int srcPart, int src*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<ConstPointer> srcPointer;
  implP|srcPointer;
  PUP::detail::TemporaryObjectHolder<int> srcSize;
  implP|srcSize;
  PUP::detail::TemporaryObjectHolder<int> dstPart;
  implP|dstPart;
  PUP::detail::TemporaryObjectHolder<int> dst;
  implP|dst;
  PUP::detail::TemporaryObjectHolder<Pointer> recvPointer;
  implP|recvPointer;
  PUP::detail::TemporaryObjectHolder<int> srcPart;
  implP|srcPart;
  PUP::detail::TemporaryObjectHolder<int> src;
  implP|src;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("srcPointer");
  implDestP|srcPointer;
  if (implDestP.hasComments()) implDestP.comment("srcSize");
  implDestP|srcSize;
  if (implDestP.hasComments()) implDestP.comment("dstPart");
  implDestP|dstPart;
  if (implDestP.hasComments()) implDestP.comment("dst");
  implDestP|dst;
  if (implDestP.hasComments()) implDestP.comment("recvPointer");
  implDestP|recvPointer;
  if (implDestP.hasComments()) implDestP.comment("srcPart");
  implDestP|srcPart;
  if (implDestP.hasComments()) implDestP.comment("src");
  implDestP|src;
}
PUPable_def(SINGLE_ARG(Closure_DataExchanger::sendRecv_9_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void eval(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const Pointer &recvPointer);
 */
void CProxy_DataExchanger::eval(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const Pointer &recvPointer, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const Pointer &recvPointer
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<ConstPointer>::type>::type &)srcPointer;
    implP|srcSize;
    implP|dstPart;
    implP|dst;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Pointer>::type>::type &)recvPointer;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<ConstPointer>::type>::type &)srcPointer;
    implP|srcSize;
    implP|dstPart;
    implP|dst;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Pointer>::type>::type &)recvPointer;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_DataExchanger::idx_eval_marshall10(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_DataExchanger::idx_eval_marshall10(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_DataExchanger::idx_eval_marshall10(), impl_msg, ckGetGroupID(),0);
}
void CProxy_DataExchanger::eval(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const Pointer &recvPointer, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const Pointer &recvPointer
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<ConstPointer>::type>::type &)srcPointer;
    implP|srcSize;
    implP|dstPart;
    implP|dst;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Pointer>::type>::type &)recvPointer;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<ConstPointer>::type>::type &)srcPointer;
    implP|srcSize;
    implP|dstPart;
    implP|dst;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Pointer>::type>::type &)recvPointer;
  }
  CkSendMsgBranchMulti(CkIndex_DataExchanger::idx_eval_marshall10(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_DataExchanger::eval(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const Pointer &recvPointer, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const Pointer &recvPointer
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<ConstPointer>::type>::type &)srcPointer;
    implP|srcSize;
    implP|dstPart;
    implP|dst;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Pointer>::type>::type &)recvPointer;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<ConstPointer>::type>::type &)srcPointer;
    implP|srcSize;
    implP|dstPart;
    implP|dst;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Pointer>::type>::type &)recvPointer;
  }
  CkSendMsgBranchGroup(CkIndex_DataExchanger::idx_eval_marshall10(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_DataExchanger::reg_eval_marshall10() {
  int epidx = CkRegisterEp("eval(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const Pointer &recvPointer)",
      reinterpret_cast<CkCallFnPtr>(_call_eval_marshall10), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_eval_marshall10);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_eval_marshall10);

  return epidx;
}

void CkIndex_DataExchanger::_call_eval_marshall10(void* impl_msg, void* impl_obj_void)
{
  DataExchanger* impl_obj = static_cast<DataExchanger*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  PUP::fromMem implP(impl_buf);
  Closure_DataExchanger::eval_10_closure* genClosure = new Closure_DataExchanger::eval_10_closure();
  implP|genClosure->srcPointer;
  implP|genClosure->srcSize;
  implP|genClosure->dstPart;
  implP|genClosure->dst;
  implP|genClosure->recvPointer;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->_sdag_fnc_eval(genClosure);
  genClosure->deref();
}
int CkIndex_DataExchanger::_callmarshall_eval_marshall10(char* impl_buf, void* impl_obj_void) {
  DataExchanger* impl_obj = static_cast<DataExchanger*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  PUP::fromMem implP(impl_buf);
  Closure_DataExchanger::eval_10_closure* genClosure = new Closure_DataExchanger::eval_10_closure();
  implP|genClosure->srcPointer;
  implP|genClosure->srcSize;
  implP|genClosure->dstPart;
  implP|genClosure->dst;
  implP|genClosure->recvPointer;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->_sdag_fnc_eval(genClosure);
  genClosure->deref();
  return implP.size();
}
void CkIndex_DataExchanger::_marshallmessagepup_eval_marshall10(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const Pointer &recvPointer*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<ConstPointer> srcPointer;
  implP|srcPointer;
  PUP::detail::TemporaryObjectHolder<int> srcSize;
  implP|srcSize;
  PUP::detail::TemporaryObjectHolder<int> dstPart;
  implP|dstPart;
  PUP::detail::TemporaryObjectHolder<int> dst;
  implP|dst;
  PUP::detail::TemporaryObjectHolder<Pointer> recvPointer;
  implP|recvPointer;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("srcPointer");
  implDestP|srcPointer;
  if (implDestP.hasComments()) implDestP.comment("srcSize");
  implDestP|srcSize;
  if (implDestP.hasComments()) implDestP.comment("dstPart");
  implDestP|dstPart;
  if (implDestP.hasComments()) implDestP.comment("dst");
  implDestP|dst;
  if (implDestP.hasComments()) implDestP.comment("recvPointer");
  implDestP|recvPointer;
}
PUPable_def(SINGLE_ARG(Closure_DataExchanger::eval_10_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recv_eval_command(const Pointer &p);
 */
void CProxy_DataExchanger::recv_eval_command(const Pointer &p, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const Pointer &p
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Pointer>::type>::type &)p;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Pointer>::type>::type &)p;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_DataExchanger::idx_recv_eval_command_marshall11(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_DataExchanger::idx_recv_eval_command_marshall11(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_DataExchanger::idx_recv_eval_command_marshall11(), impl_msg, ckGetGroupID(),0);
}
void CProxy_DataExchanger::recv_eval_command(const Pointer &p, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const Pointer &p
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Pointer>::type>::type &)p;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Pointer>::type>::type &)p;
  }
  CkSendMsgBranchMulti(CkIndex_DataExchanger::idx_recv_eval_command_marshall11(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_DataExchanger::recv_eval_command(const Pointer &p, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const Pointer &p
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Pointer>::type>::type &)p;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Pointer>::type>::type &)p;
  }
  CkSendMsgBranchGroup(CkIndex_DataExchanger::idx_recv_eval_command_marshall11(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_DataExchanger::reg_recv_eval_command_marshall11() {
  int epidx = CkRegisterEp("recv_eval_command(const Pointer &p)",
      reinterpret_cast<CkCallFnPtr>(_call_recv_eval_command_marshall11), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_recv_eval_command_marshall11);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_recv_eval_command_marshall11);

  return epidx;
}

void CkIndex_DataExchanger::_call_recv_eval_command_marshall11(void* impl_msg, void* impl_obj_void)
{
  DataExchanger* impl_obj = static_cast<DataExchanger*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  PUP::fromMem implP(impl_buf);
  Closure_DataExchanger::recv_eval_command_11_closure* genClosure = new Closure_DataExchanger::recv_eval_command_11_closure();
  implP|genClosure->p;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->recv_eval_command(genClosure);
  genClosure->deref();
}
int CkIndex_DataExchanger::_callmarshall_recv_eval_command_marshall11(char* impl_buf, void* impl_obj_void) {
  DataExchanger* impl_obj = static_cast<DataExchanger*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  PUP::fromMem implP(impl_buf);
  Closure_DataExchanger::recv_eval_command_11_closure* genClosure = new Closure_DataExchanger::recv_eval_command_11_closure();
  implP|genClosure->p;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->recv_eval_command(genClosure);
  genClosure->deref();
  return implP.size();
}
void CkIndex_DataExchanger::_marshallmessagepup_recv_eval_command_marshall11(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const Pointer &p*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<Pointer> p;
  implP|p;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("p");
  implDestP|p;
}
PUPable_def(SINGLE_ARG(Closure_DataExchanger::recv_eval_command_11_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void barrier();
 */
void CProxy_DataExchanger::barrier(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_DataExchanger::idx_barrier_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_DataExchanger::idx_barrier_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_DataExchanger::idx_barrier_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_DataExchanger::barrier(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_DataExchanger::idx_barrier_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_DataExchanger::barrier(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_DataExchanger::idx_barrier_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_DataExchanger::reg_barrier_void() {
  int epidx = CkRegisterEp("barrier()",
      reinterpret_cast<CkCallFnPtr>(_call_barrier_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_DataExchanger::_call_barrier_void(void* impl_msg, void* impl_obj_void)
{
  DataExchanger* impl_obj = static_cast<DataExchanger*>(impl_obj_void);
  impl_obj->_sdag_fnc_barrier();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_DataExchanger::barrier_12_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: DataExchanger();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recv_data(const Pointer &p);
 */
void CProxySection_DataExchanger::recv_data(const Pointer &p, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const Pointer &p
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Pointer>::type>::type &)p;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Pointer>::type>::type &)p;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_DataExchanger::idx_recv_data_marshall2(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_DataExchanger::idx_recv_data_marshall2(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recv_eval_result(const Pointer &p);
 */
void CProxySection_DataExchanger::recv_eval_result(const Pointer &p, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const Pointer &p
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Pointer>::type>::type &)p;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Pointer>::type>::type &)p;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_DataExchanger::idx_recv_eval_result_marshall3(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_DataExchanger::idx_recv_eval_result_marshall3(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recv_ack();
 */
void CProxySection_DataExchanger::recv_ack(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_DataExchanger::idx_recv_ack_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_DataExchanger::idx_recv_ack_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recv_red();
 */
void CProxySection_DataExchanger::recv_red(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_DataExchanger::idx_recv_red_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_DataExchanger::idx_recv_red_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recv_bcast();
 */
void CProxySection_DataExchanger::recv_bcast(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_DataExchanger::idx_recv_bcast_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_DataExchanger::idx_recv_bcast_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void send(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst);
 */
void CProxySection_DataExchanger::send(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const ConstPointer &srcPointer, int srcSize, int dstPart, int dst
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<ConstPointer>::type>::type &)srcPointer;
    implP|srcSize;
    implP|dstPart;
    implP|dst;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<ConstPointer>::type>::type &)srcPointer;
    implP|srcSize;
    implP|dstPart;
    implP|dst;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_DataExchanger::idx_send_marshall7(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_DataExchanger::idx_send_marshall7(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recv(const Pointer &recvPointer, int srcPart, int src);
 */
void CProxySection_DataExchanger::recv(const Pointer &recvPointer, int srcPart, int src, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const Pointer &recvPointer, int srcPart, int src
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Pointer>::type>::type &)recvPointer;
    implP|srcPart;
    implP|src;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Pointer>::type>::type &)recvPointer;
    implP|srcPart;
    implP|src;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_DataExchanger::idx_recv_marshall8(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_DataExchanger::idx_recv_marshall8(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendRecv(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const Pointer &recvPointer, int srcPart, int src);
 */
void CProxySection_DataExchanger::sendRecv(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const Pointer &recvPointer, int srcPart, int src, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const Pointer &recvPointer, int srcPart, int src
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<ConstPointer>::type>::type &)srcPointer;
    implP|srcSize;
    implP|dstPart;
    implP|dst;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Pointer>::type>::type &)recvPointer;
    implP|srcPart;
    implP|src;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<ConstPointer>::type>::type &)srcPointer;
    implP|srcSize;
    implP|dstPart;
    implP|dst;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Pointer>::type>::type &)recvPointer;
    implP|srcPart;
    implP|src;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_DataExchanger::idx_sendRecv_marshall9(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_DataExchanger::idx_sendRecv_marshall9(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void eval(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const Pointer &recvPointer);
 */
void CProxySection_DataExchanger::eval(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const Pointer &recvPointer, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const Pointer &recvPointer
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<ConstPointer>::type>::type &)srcPointer;
    implP|srcSize;
    implP|dstPart;
    implP|dst;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Pointer>::type>::type &)recvPointer;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<ConstPointer>::type>::type &)srcPointer;
    implP|srcSize;
    implP|dstPart;
    implP|dst;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Pointer>::type>::type &)recvPointer;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_DataExchanger::idx_eval_marshall10(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_DataExchanger::idx_eval_marshall10(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recv_eval_command(const Pointer &p);
 */
void CProxySection_DataExchanger::recv_eval_command(const Pointer &p, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const Pointer &p
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Pointer>::type>::type &)p;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Pointer>::type>::type &)p;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_DataExchanger::idx_recv_eval_command_marshall11(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_DataExchanger::idx_recv_eval_command_marshall11(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void barrier();
 */
void CProxySection_DataExchanger::barrier(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_DataExchanger::idx_barrier_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_DataExchanger::idx_barrier_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_DataExchanger::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,DataExchanger::isIrreducible());
  // REG: DataExchanger();
  idx_DataExchanger_void();
  CkRegisterDefaultCtor(__idx, idx_DataExchanger_void());

  // REG: void recv_data(const Pointer &p);
  idx_recv_data_marshall2();

  // REG: void recv_eval_result(const Pointer &p);
  idx_recv_eval_result_marshall3();

  // REG: void recv_ack();
  idx_recv_ack_void();

  // REG: void recv_red();
  idx_recv_red_void();

  // REG: void recv_bcast();
  idx_recv_bcast_void();

  // REG: void send(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst);
  idx_send_marshall7();

  // REG: void recv(const Pointer &recvPointer, int srcPart, int src);
  idx_recv_marshall8();

  // REG: void sendRecv(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const Pointer &recvPointer, int srcPart, int src);
  idx_sendRecv_marshall9();

  // REG: void eval(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const Pointer &recvPointer);
  idx_eval_marshall10();

  // REG: void recv_eval_command(const Pointer &p);
  idx_recv_eval_command_marshall11();

  // REG: void barrier();
  idx_barrier_void();

  DataExchanger::__sdag_register(); // Potentially missing DataExchanger_SDAG_CODE in your class definition?
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void DataExchanger::send(ConstPointer srcPointer, int srcSize, int dstPart, int dst){
  CkPrintf("Error> Direct call to SDAG entry method \'%s::%s\'!\n", "DataExchanger", "send(ConstPointer srcPointer, int srcSize, int dstPart, int dst)"); 
  CkAbort("Direct SDAG call is not allowed for SDAG entry methods having when constructs. Call such SDAG methods using a proxy"); 
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_sdag_fnc_send(ConstPointer srcPointer, int srcSize, int dstPart, int dst){
  Closure_DataExchanger::send_7_closure* genClosure = new Closure_DataExchanger::send_7_closure();
  genClosure->getP0() = srcPointer;
  genClosure->getP1() = srcSize;
  genClosure->getP2() = dstPart;
  genClosure->getP3() = dst;
  _sdag_fnc_send(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_sdag_fnc_send(Closure_DataExchanger::send_7_closure* gen0) {
  _TRACE_END_EXECUTE(); 
  if (!__dep.get()) _sdag_init();
  _slist_0(gen0);
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, NULL, this); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::send_end(Closure_DataExchanger::send_7_closure* gen0) {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_slist_0(Closure_DataExchanger::send_7_closure* gen0) {
  _serial_0(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_slist_0_end(Closure_DataExchanger::send_7_closure* gen0) {
  send_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_serial_0(Closure_DataExchanger::send_7_closure* gen0) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_DataExchanger_serial_0()), CkMyPe(), 0, NULL, this); 
  {
    ConstPointer& srcPointer = gen0->getP0();
    int& srcSize = gen0->getP1();
    int& dstPart = gen0->getP2();
    int& dst = gen0->getP3();
    { // begin serial block
#line 12 "inc/DataExchanger.ci"

        packSend(dst,dstPart,(const char*)srcPointer.data,srcSize,recv_data_idx);
      
#line 2211 "DataExchanger.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _when_0(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* DataExchanger::_when_0(Closure_DataExchanger::send_7_closure* gen0) {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(0, false, 0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _serial_1(gen0);
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(0);
    c->addClosure(gen0);
    c->anyEntries.push_back(0);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_when_0_end(Closure_DataExchanger::send_7_closure* gen0) {
  _slist_0_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_serial_1(Closure_DataExchanger::send_7_closure* gen0) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_DataExchanger_serial_1()), CkMyPe(), 0, NULL, this); 
  {
    ConstPointer& srcPointer = gen0->getP0();
    int& srcSize = gen0->getP1();
    int& dstPart = gen0->getP2();
    int& dst = gen0->getP3();
    { // begin serial block
#line 15 "inc/DataExchanger.ci"

        CpvAccess(breakScheduler) = 1;
      
#line 2259 "DataExchanger.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _when_0_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::recv(Pointer recvPointer, int srcPart, int src){
  CkPrintf("Error> Direct call to SDAG entry method \'%s::%s\'!\n", "DataExchanger", "recv(Pointer recvPointer, int srcPart, int src)"); 
  CkAbort("Direct SDAG call is not allowed for SDAG entry methods having when constructs. Call such SDAG methods using a proxy"); 
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_sdag_fnc_recv(Pointer recvPointer, int srcPart, int src){
  Closure_DataExchanger::recv_8_closure* genClosure = new Closure_DataExchanger::recv_8_closure();
  genClosure->getP0() = recvPointer;
  genClosure->getP1() = srcPart;
  genClosure->getP2() = src;
  _sdag_fnc_recv(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_sdag_fnc_recv(Closure_DataExchanger::recv_8_closure* gen0) {
  _TRACE_END_EXECUTE(); 
  if (!__dep.get()) _sdag_init();
  _slist_1(gen0);
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, NULL, this); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::recv_end(Closure_DataExchanger::recv_8_closure* gen0) {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_slist_1(Closure_DataExchanger::recv_8_closure* gen0) {
  _serial_2(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_slist_1_end(Closure_DataExchanger::recv_8_closure* gen0) {
  recv_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_serial_2(Closure_DataExchanger::recv_8_closure* gen0) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_DataExchanger_serial_2()), CkMyPe(), 0, NULL, this); 
  {
    Pointer& recvPointer = gen0->getP0();
    int& srcPart = gen0->getP1();
    int& src = gen0->getP2();
    { // begin serial block
#line 20 "inc/DataExchanger.ci"
 loop = 1;
#line 2326 "DataExchanger.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _while_0(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_while_0(Closure_DataExchanger::recv_8_closure* gen0) {
  {
    Pointer& recvPointer = gen0->getP0();
    int& srcPart = gen0->getP1();
    int& src = gen0->getP2();
    if (loop) {
      _slist_2(gen0);
    } else {
      _slist_1_end(gen0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_while_0_end(Closure_DataExchanger::recv_8_closure* gen0) {
  {
    Pointer& recvPointer = gen0->getP0();
    int& srcPart = gen0->getP1();
    int& src = gen0->getP2();
    if (loop) {
      _slist_2(gen0);
    } else {
      _slist_1_end(gen0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_slist_2(Closure_DataExchanger::recv_8_closure* gen0) {
  _when_1(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_slist_2_end(Closure_DataExchanger::recv_8_closure* gen0) {
  _while_0_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* DataExchanger::_when_1(Closure_DataExchanger::recv_8_closure* gen0) {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(1, false, 0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _serial_3(gen0, static_cast<Closure_DataExchanger::recv_data_2_closure*>(buf0->cl));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(1);
    c->addClosure(gen0);
    c->anyEntries.push_back(1);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_when_1_end(Closure_DataExchanger::recv_8_closure* gen0, Closure_DataExchanger::recv_data_2_closure* gen1) {
  _slist_2_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_serial_3(Closure_DataExchanger::recv_8_closure* gen0, Closure_DataExchanger::recv_data_2_closure* gen1) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_DataExchanger_serial_3()), CkMyPe(), 0, NULL, this); 
  {
    Pointer& recvPointer = gen0->getP0();
    int& srcPart = gen0->getP1();
    int& src = gen0->getP2();
    {
      Pointer& p = gen1->getP0();
      { // begin serial block
#line 22 "inc/DataExchanger.ci"

          DataMessage *dmsg = (DataMessage*)p.data;
          if((srcPart < 0) || (dmsg->src == src && dmsg->srcPart == srcPart)) {
            *((DataMessage**)recvPointer.data) = dmsg;
            if ( ! dmsg->code ) packSend(dmsg->src,dmsg->srcPart,NULL,0,recv_ack_idx);
            loop = 0;
            CpvAccess(breakScheduler) = 1;
          } else {
            thisProxy[CkMyPe()].recv_data(p);
          }
        
#line 2429 "DataExchanger.def.h"
      } // end serial block
    }
  }
  _TRACE_END_EXECUTE(); 
  _when_1_end(gen0, gen1);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::sendRecv(ConstPointer srcPointer, int srcSize, int dstPart, int dst, Pointer recvPointer, int srcPart, int src){
  CkPrintf("Error> Direct call to SDAG entry method \'%s::%s\'!\n", "DataExchanger", "sendRecv(ConstPointer srcPointer, int srcSize, int dstPart, int dst, Pointer recvPointer, int srcPart, int src)"); 
  CkAbort("Direct SDAG call is not allowed for SDAG entry methods having when constructs. Call such SDAG methods using a proxy"); 
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_sdag_fnc_sendRecv(ConstPointer srcPointer, int srcSize, int dstPart, int dst, Pointer recvPointer, int srcPart, int src){
  Closure_DataExchanger::sendRecv_9_closure* genClosure = new Closure_DataExchanger::sendRecv_9_closure();
  genClosure->getP0() = srcPointer;
  genClosure->getP1() = srcSize;
  genClosure->getP2() = dstPart;
  genClosure->getP3() = dst;
  genClosure->getP4() = recvPointer;
  genClosure->getP5() = srcPart;
  genClosure->getP6() = src;
  _sdag_fnc_sendRecv(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_sdag_fnc_sendRecv(Closure_DataExchanger::sendRecv_9_closure* gen0) {
  _TRACE_END_EXECUTE(); 
  if (!__dep.get()) _sdag_init();
  _slist_3(gen0);
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, NULL, this); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::sendRecv_end(Closure_DataExchanger::sendRecv_9_closure* gen0) {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_slist_3(Closure_DataExchanger::sendRecv_9_closure* gen0) {
  _serial_4(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_slist_3_end(Closure_DataExchanger::sendRecv_9_closure* gen0) {
  sendRecv_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_serial_4(Closure_DataExchanger::sendRecv_9_closure* gen0) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_DataExchanger_serial_4()), CkMyPe(), 0, NULL, this); 
  {
    ConstPointer& srcPointer = gen0->getP0();
    int& srcSize = gen0->getP1();
    int& dstPart = gen0->getP2();
    int& dst = gen0->getP3();
    Pointer& recvPointer = gen0->getP4();
    int& srcPart = gen0->getP5();
    int& src = gen0->getP6();
    { // begin serial block
#line 36 "inc/DataExchanger.ci"

        packSend(dst,dstPart,(const char*)srcPointer.data,srcSize,recv_data_idx);
        loop = 1;
      
#line 2508 "DataExchanger.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _while_1(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_while_1(Closure_DataExchanger::sendRecv_9_closure* gen0) {
  {
    ConstPointer& srcPointer = gen0->getP0();
    int& srcSize = gen0->getP1();
    int& dstPart = gen0->getP2();
    int& dst = gen0->getP3();
    Pointer& recvPointer = gen0->getP4();
    int& srcPart = gen0->getP5();
    int& src = gen0->getP6();
    if (loop) {
      _slist_4(gen0);
    } else {
      _when_3(gen0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_while_1_end(Closure_DataExchanger::sendRecv_9_closure* gen0) {
  {
    ConstPointer& srcPointer = gen0->getP0();
    int& srcSize = gen0->getP1();
    int& dstPart = gen0->getP2();
    int& dst = gen0->getP3();
    Pointer& recvPointer = gen0->getP4();
    int& srcPart = gen0->getP5();
    int& src = gen0->getP6();
    if (loop) {
      _slist_4(gen0);
    } else {
      _when_3(gen0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_slist_4(Closure_DataExchanger::sendRecv_9_closure* gen0) {
  _when_2(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_slist_4_end(Closure_DataExchanger::sendRecv_9_closure* gen0) {
  _while_1_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* DataExchanger::_when_2(Closure_DataExchanger::sendRecv_9_closure* gen0) {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(1, false, 0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _serial_5(gen0, static_cast<Closure_DataExchanger::recv_data_2_closure*>(buf0->cl));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(2);
    c->addClosure(gen0);
    c->anyEntries.push_back(1);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_when_2_end(Closure_DataExchanger::sendRecv_9_closure* gen0, Closure_DataExchanger::recv_data_2_closure* gen1) {
  _slist_4_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_serial_5(Closure_DataExchanger::sendRecv_9_closure* gen0, Closure_DataExchanger::recv_data_2_closure* gen1) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_DataExchanger_serial_5()), CkMyPe(), 0, NULL, this); 
  {
    ConstPointer& srcPointer = gen0->getP0();
    int& srcSize = gen0->getP1();
    int& dstPart = gen0->getP2();
    int& dst = gen0->getP3();
    Pointer& recvPointer = gen0->getP4();
    int& srcPart = gen0->getP5();
    int& src = gen0->getP6();
    {
      Pointer& p = gen1->getP0();
      { // begin serial block
#line 41 "inc/DataExchanger.ci"

          DataMessage *dmsg = (DataMessage*)p.data;
          if((srcPart < 0) || (dmsg->src == src && dmsg->srcPart == srcPart)) {
            *((DataMessage**)recvPointer.data) = dmsg;
            if ( ! dmsg->code ) packSend(dmsg->src,dmsg->srcPart,NULL,0,recv_ack_idx);
            loop = 0;
          }else {
            thisProxy[CkMyPe()].recv_data(p);
          }
        
#line 2622 "DataExchanger.def.h"
      } // end serial block
    }
  }
  _TRACE_END_EXECUTE(); 
  _when_2_end(gen0, gen1);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* DataExchanger::_when_3(Closure_DataExchanger::sendRecv_9_closure* gen0) {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(0, false, 0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _serial_6(gen0);
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(3);
    c->addClosure(gen0);
    c->anyEntries.push_back(0);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_when_3_end(Closure_DataExchanger::sendRecv_9_closure* gen0) {
  _slist_3_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_serial_6(Closure_DataExchanger::sendRecv_9_closure* gen0) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_DataExchanger_serial_6()), CkMyPe(), 0, NULL, this); 
  {
    ConstPointer& srcPointer = gen0->getP0();
    int& srcSize = gen0->getP1();
    int& dstPart = gen0->getP2();
    int& dst = gen0->getP3();
    Pointer& recvPointer = gen0->getP4();
    int& srcPart = gen0->getP5();
    int& src = gen0->getP6();
    { // begin serial block
#line 52 "inc/DataExchanger.ci"

        CpvAccess(breakScheduler) = 1;
      
#line 2674 "DataExchanger.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _when_3_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::eval(ConstPointer srcPointer, int srcSize, int dstPart, int dst, Pointer recvPointer){
  CkPrintf("Error> Direct call to SDAG entry method \'%s::%s\'!\n", "DataExchanger", "eval(ConstPointer srcPointer, int srcSize, int dstPart, int dst, Pointer recvPointer)"); 
  CkAbort("Direct SDAG call is not allowed for SDAG entry methods having when constructs. Call such SDAG methods using a proxy"); 
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_sdag_fnc_eval(ConstPointer srcPointer, int srcSize, int dstPart, int dst, Pointer recvPointer){
  Closure_DataExchanger::eval_10_closure* genClosure = new Closure_DataExchanger::eval_10_closure();
  genClosure->getP0() = srcPointer;
  genClosure->getP1() = srcSize;
  genClosure->getP2() = dstPart;
  genClosure->getP3() = dst;
  genClosure->getP4() = recvPointer;
  _sdag_fnc_eval(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_sdag_fnc_eval(Closure_DataExchanger::eval_10_closure* gen0) {
  _TRACE_END_EXECUTE(); 
  if (!__dep.get()) _sdag_init();
  _slist_5(gen0);
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, NULL, this); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::eval_end(Closure_DataExchanger::eval_10_closure* gen0) {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_slist_5(Closure_DataExchanger::eval_10_closure* gen0) {
  _serial_7(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_slist_5_end(Closure_DataExchanger::eval_10_closure* gen0) {
  eval_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_serial_7(Closure_DataExchanger::eval_10_closure* gen0) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_DataExchanger_serial_7()), CkMyPe(), 0, NULL, this); 
  {
    ConstPointer& srcPointer = gen0->getP0();
    int& srcSize = gen0->getP1();
    int& dstPart = gen0->getP2();
    int& dst = gen0->getP3();
    Pointer& recvPointer = gen0->getP4();
    { // begin serial block
#line 57 "inc/DataExchanger.ci"

        packSend(dst,dstPart,(const char*)srcPointer.data,srcSize,recv_eval_command_idx);
      
#line 2747 "DataExchanger.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _when_4(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* DataExchanger::_when_4(Closure_DataExchanger::eval_10_closure* gen0) {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(2, false, 0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _serial_8(gen0, static_cast<Closure_DataExchanger::recv_eval_result_3_closure*>(buf0->cl));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(4);
    c->addClosure(gen0);
    c->anyEntries.push_back(2);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_when_4_end(Closure_DataExchanger::eval_10_closure* gen0, Closure_DataExchanger::recv_eval_result_3_closure* gen1) {
  _slist_5_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_serial_8(Closure_DataExchanger::eval_10_closure* gen0, Closure_DataExchanger::recv_eval_result_3_closure* gen1) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_DataExchanger_serial_8()), CkMyPe(), 0, NULL, this); 
  {
    ConstPointer& srcPointer = gen0->getP0();
    int& srcSize = gen0->getP1();
    int& dstPart = gen0->getP2();
    int& dst = gen0->getP3();
    Pointer& recvPointer = gen0->getP4();
    {
      Pointer& p = gen1->getP0();
      { // begin serial block
#line 60 "inc/DataExchanger.ci"

        DataMessage *dmsg = (DataMessage*)p.data;
        *((DataMessage**)recvPointer.data) = dmsg;
        CpvAccess(breakScheduler) = 1;
      
#line 2800 "DataExchanger.def.h"
      } // end serial block
    }
  }
  _TRACE_END_EXECUTE(); 
  _when_4_end(gen0, gen1);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::recv_eval_command(Pointer p){
  Closure_DataExchanger::recv_eval_command_11_closure* genClosure = new Closure_DataExchanger::recv_eval_command_11_closure();
  genClosure->getP0() = p;
  recv_eval_command(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void DataExchanger::recv_eval_command(Closure_DataExchanger::recv_eval_command_11_closure* gen0) {
  _TRACE_END_EXECUTE(); 
  if (!__dep.get()) _sdag_init();
  _slist_6(gen0);
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, NULL, this); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::recv_eval_command_end(Closure_DataExchanger::recv_eval_command_11_closure* gen0) {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_slist_6(Closure_DataExchanger::recv_eval_command_11_closure* gen0) {
  _serial_9(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_slist_6_end(Closure_DataExchanger::recv_eval_command_11_closure* gen0) {
  recv_eval_command_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_serial_9(Closure_DataExchanger::recv_eval_command_11_closure* gen0) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_DataExchanger_serial_9()), CkMyPe(), 0, NULL, this); 
  {
    Pointer& p = gen0->getP0();
    { // begin serial block
#line 67 "inc/DataExchanger.ci"

        DataMessage *dmsg = (DataMessage*)p.data;
        const char *resultPtr = 0;
        CpvAccess(inEval) = 1;
        int code = Node::Object()->getScript()->eval(dmsg->data, &resultPtr);
        CpvAccess(inEval) = 0;
        int resultSize = strlen(resultPtr);
        packSend(dmsg->src,dmsg->srcPart,resultPtr,resultSize,recv_eval_result_idx,code);
      
#line 2865 "DataExchanger.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _slist_6_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::barrier(){
  CkPrintf("Error> Direct call to SDAG entry method \'%s::%s\'!\n", "DataExchanger", "barrier()"); 
  CkAbort("Direct SDAG call is not allowed for SDAG entry methods having when constructs. Call such SDAG methods using a proxy"); 
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_sdag_fnc_barrier() {
  _TRACE_END_EXECUTE(); 
  if (!__dep.get()) _sdag_init();
  _slist_7();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, NULL, this); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::barrier_end() {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_slist_7() {
  _for_0();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_slist_7_end() {
  barrier_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_for_0() {
  recvred = 0;
  if ( recvred < numChildren) {
    _slist_8();
  } else {
    _if_0();
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_for_0_end() {
   recvred++;
  if ( recvred < numChildren) {
    _slist_8();
  } else {
    _if_0();
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_slist_8() {
  _when_5();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_slist_8_end() {
  _for_0_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* DataExchanger::_when_5() {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(3, false, 0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _when_5_end();
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(5);
    c->anyEntries.push_back(3);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_when_5_end() {
  _slist_8_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_if_0() {
  if (parent != -1) {
    _slist_10();
  } else {
    _else_0();
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_if_0_end() {
  _if_1();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_else_0() {
  _slist_9();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_else_0_end() {
  _if_1();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_slist_9() {
  _serial_10();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_slist_9_end() {
  _else_0_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_serial_10() {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_DataExchanger_serial_10()), CkMyPe(), 0, NULL, this); 
  { // begin serial block
#line 84 "inc/DataExchanger.ci"

          for(sendbcast = 0; sendbcast < numChildren; sendbcast++) {
            packSend(0,firstChild+sendbcast,NULL,0,recv_bcast_idx);
          }
        
#line 3030 "DataExchanger.def.h"
  } // end serial block
  _TRACE_END_EXECUTE(); 
  _slist_9_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_slist_10() {
  _serial_11();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_slist_10_end() {
  _if_0_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_serial_11() {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_DataExchanger_serial_11()), CkMyPe(), 0, NULL, this); 
  { // begin serial block
#line 82 "inc/DataExchanger.ci"
 packSend(0,parent,NULL,0,recv_red_idx); 
#line 3058 "DataExchanger.def.h"
  } // end serial block
  _TRACE_END_EXECUTE(); 
  _slist_10_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_if_1() {
  if (parent != -1) {
    _slist_11();
  } else {
    _if_1_end();
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_if_1_end() {
  _serial_13();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_slist_11() {
  _when_6();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_slist_11_end() {
  _if_1_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* DataExchanger::_when_6() {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(4, false, 0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _slist_12();
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(6);
    c->anyEntries.push_back(4);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_when_6_end() {
  _slist_11_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_slist_12() {
  _serial_12();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_slist_12_end() {
  _when_6_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_serial_12() {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_DataExchanger_serial_12()), CkMyPe(), 0, NULL, this); 
  { // begin serial block
#line 92 "inc/DataExchanger.ci"

            for(sendbcast = 0; sendbcast < numChildren; sendbcast++) {
              packSend(0,firstChild+sendbcast,NULL,0,recv_bcast_idx);
            }
          
#line 3147 "DataExchanger.def.h"
  } // end serial block
  _TRACE_END_EXECUTE(); 
  _slist_12_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_serial_13() {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_DataExchanger_serial_13()), CkMyPe(), 0, NULL, this); 
  { // begin serial block
#line 99 "inc/DataExchanger.ci"

        CpvAccess(breakScheduler) = 1;
      
#line 3163 "DataExchanger.def.h"
  } // end serial block
  _TRACE_END_EXECUTE(); 
  _slist_7_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::recv_ack(){
  Closure_DataExchanger::recv_ack_4_closure* genClosure = new Closure_DataExchanger::recv_ack_4_closure();
  recv_ack(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void DataExchanger::recv_ack(Closure_DataExchanger::recv_ack_4_closure* genClosure){
  if (!__dep.get()) _sdag_init();
  __dep->pushBuffer(0, genClosure);
  SDAG::Continuation* c = __dep->tryFindContinuation(0);
  if (c) {
    _TRACE_END_EXECUTE(); 
    switch(c->whenID) {
    case 0:
      _when_0(
        static_cast<Closure_DataExchanger::send_7_closure*>(c->closure[0])
      );
    break;
    case 3:
      _when_3(
        static_cast<Closure_DataExchanger::sendRecv_9_closure*>(c->closure[0])
      );
    break;
    }
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, NULL, this); 
    delete c;
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void DataExchanger::recv_data(Pointer p){
  Closure_DataExchanger::recv_data_2_closure* genClosure = new Closure_DataExchanger::recv_data_2_closure();
  genClosure->getP0() = p;
  recv_data(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void DataExchanger::recv_data(Closure_DataExchanger::recv_data_2_closure* genClosure){
  if (!__dep.get()) _sdag_init();
  __dep->pushBuffer(1, genClosure);
  SDAG::Continuation* c = __dep->tryFindContinuation(1);
  if (c) {
    _TRACE_END_EXECUTE(); 
    switch(c->whenID) {
    case 1:
      _when_1(
        static_cast<Closure_DataExchanger::recv_8_closure*>(c->closure[0])
      );
    break;
    case 2:
      _when_2(
        static_cast<Closure_DataExchanger::sendRecv_9_closure*>(c->closure[0])
      );
    break;
    }
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, NULL, this); 
    delete c;
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void DataExchanger::recv_eval_result(Pointer p){
  Closure_DataExchanger::recv_eval_result_3_closure* genClosure = new Closure_DataExchanger::recv_eval_result_3_closure();
  genClosure->getP0() = p;
  recv_eval_result(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void DataExchanger::recv_eval_result(Closure_DataExchanger::recv_eval_result_3_closure* genClosure){
  if (!__dep.get()) _sdag_init();
  __dep->pushBuffer(2, genClosure);
  SDAG::Continuation* c = __dep->tryFindContinuation(2);
  if (c) {
    _TRACE_END_EXECUTE(); 
    _when_4(
      static_cast<Closure_DataExchanger::eval_10_closure*>(c->closure[0])
    );
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, NULL, this); 
    delete c;
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void DataExchanger::recv_red(){
  Closure_DataExchanger::recv_red_5_closure* genClosure = new Closure_DataExchanger::recv_red_5_closure();
  recv_red(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void DataExchanger::recv_red(Closure_DataExchanger::recv_red_5_closure* genClosure){
  if (!__dep.get()) _sdag_init();
  __dep->pushBuffer(3, genClosure);
  SDAG::Continuation* c = __dep->tryFindContinuation(3);
  if (c) {
    _TRACE_END_EXECUTE(); 
    _when_5(
    );
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, NULL, this); 
    delete c;
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void DataExchanger::recv_bcast(){
  Closure_DataExchanger::recv_bcast_6_closure* genClosure = new Closure_DataExchanger::recv_bcast_6_closure();
  recv_bcast(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void DataExchanger::recv_bcast(Closure_DataExchanger::recv_bcast_6_closure* genClosure){
  if (!__dep.get()) _sdag_init();
  __dep->pushBuffer(4, genClosure);
  SDAG::Continuation* c = __dep->tryFindContinuation(4);
  if (c) {
    _TRACE_END_EXECUTE(); 
    _when_6(
    );
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, NULL, this); 
    delete c;
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_sdag_init() { // Potentially missing DataExchanger_SDAG_CODE in your class definition?
  __dep.reset(new SDAG::Dependency(5,7));
  __dep->addDepends(0,0);
  __dep->addDepends(3,0);
  __dep->addDepends(1,1);
  __dep->addDepends(2,1);
  __dep->addDepends(4,2);
  __dep->addDepends(5,3);
  __dep->addDepends(6,4);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::__sdag_init() { // Potentially missing DataExchanger_SDAG_CODE in your class definition?
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void DataExchanger::_sdag_pup(PUP::er &p) {  // Potentially missing DataExchanger_SDAG_CODE in your class definition?
  p|__dep;
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void DataExchanger::__sdag_register() { // Potentially missing DataExchanger_SDAG_CODE in your class definition?
  (void)_sdag_idx_DataExchanger_serial_0();
  (void)_sdag_idx_DataExchanger_serial_1();
  (void)_sdag_idx_DataExchanger_serial_2();
  (void)_sdag_idx_DataExchanger_serial_3();
  (void)_sdag_idx_DataExchanger_serial_4();
  (void)_sdag_idx_DataExchanger_serial_5();
  (void)_sdag_idx_DataExchanger_serial_6();
  (void)_sdag_idx_DataExchanger_serial_7();
  (void)_sdag_idx_DataExchanger_serial_8();
  (void)_sdag_idx_DataExchanger_serial_9();
  (void)_sdag_idx_DataExchanger_serial_11();
  (void)_sdag_idx_DataExchanger_serial_10();
  (void)_sdag_idx_DataExchanger_serial_12();
  (void)_sdag_idx_DataExchanger_serial_13();
  PUPable_reg(SINGLE_ARG(Closure_DataExchanger::recv_data_2_closure));
  PUPable_reg(SINGLE_ARG(Closure_DataExchanger::recv_eval_result_3_closure));
  PUPable_reg(SINGLE_ARG(Closure_DataExchanger::recv_ack_4_closure));
  PUPable_reg(SINGLE_ARG(Closure_DataExchanger::recv_red_5_closure));
  PUPable_reg(SINGLE_ARG(Closure_DataExchanger::recv_bcast_6_closure));
  PUPable_reg(SINGLE_ARG(Closure_DataExchanger::send_7_closure));
  PUPable_reg(SINGLE_ARG(Closure_DataExchanger::recv_8_closure));
  PUPable_reg(SINGLE_ARG(Closure_DataExchanger::sendRecv_9_closure));
  PUPable_reg(SINGLE_ARG(Closure_DataExchanger::eval_10_closure));
  PUPable_reg(SINGLE_ARG(Closure_DataExchanger::recv_eval_command_11_closure));
  PUPable_reg(SINGLE_ARG(Closure_DataExchanger::barrier_12_closure));
  PUPable_reg(SINGLE_ARG(Closure_DataExchanger::recv_data_2_closure));
  PUPable_reg(SINGLE_ARG(Closure_DataExchanger::recv_eval_result_3_closure));
  PUPable_reg(SINGLE_ARG(Closure_DataExchanger::recv_ack_4_closure));
  PUPable_reg(SINGLE_ARG(Closure_DataExchanger::recv_red_5_closure));
  PUPable_reg(SINGLE_ARG(Closure_DataExchanger::recv_bcast_6_closure));
  PUPable_reg(SINGLE_ARG(Closure_DataExchanger::send_7_closure));
  PUPable_reg(SINGLE_ARG(Closure_DataExchanger::recv_8_closure));
  PUPable_reg(SINGLE_ARG(Closure_DataExchanger::sendRecv_9_closure));
  PUPable_reg(SINGLE_ARG(Closure_DataExchanger::eval_10_closure));
  PUPable_reg(SINGLE_ARG(Closure_DataExchanger::recv_eval_command_11_closure));
  PUPable_reg(SINGLE_ARG(Closure_DataExchanger::barrier_12_closure));
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int DataExchanger::_sdag_idx_DataExchanger_serial_0() { // Potentially missing DataExchanger_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_DataExchanger_serial_0();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int DataExchanger::_sdag_reg_DataExchanger_serial_0() { // Potentially missing DataExchanger_SDAG_CODE in your class definition?
  return CkRegisterEp("DataExchanger_serial_0", NULL, 0, CkIndex_DataExchanger::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int DataExchanger::_sdag_idx_DataExchanger_serial_1() { // Potentially missing DataExchanger_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_DataExchanger_serial_1();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int DataExchanger::_sdag_reg_DataExchanger_serial_1() { // Potentially missing DataExchanger_SDAG_CODE in your class definition?
  return CkRegisterEp("DataExchanger_serial_1", NULL, 0, CkIndex_DataExchanger::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int DataExchanger::_sdag_idx_DataExchanger_serial_2() { // Potentially missing DataExchanger_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_DataExchanger_serial_2();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int DataExchanger::_sdag_reg_DataExchanger_serial_2() { // Potentially missing DataExchanger_SDAG_CODE in your class definition?
  return CkRegisterEp("DataExchanger_serial_2", NULL, 0, CkIndex_DataExchanger::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int DataExchanger::_sdag_idx_DataExchanger_serial_3() { // Potentially missing DataExchanger_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_DataExchanger_serial_3();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int DataExchanger::_sdag_reg_DataExchanger_serial_3() { // Potentially missing DataExchanger_SDAG_CODE in your class definition?
  return CkRegisterEp("DataExchanger_serial_3", NULL, 0, CkIndex_DataExchanger::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int DataExchanger::_sdag_idx_DataExchanger_serial_4() { // Potentially missing DataExchanger_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_DataExchanger_serial_4();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int DataExchanger::_sdag_reg_DataExchanger_serial_4() { // Potentially missing DataExchanger_SDAG_CODE in your class definition?
  return CkRegisterEp("DataExchanger_serial_4", NULL, 0, CkIndex_DataExchanger::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int DataExchanger::_sdag_idx_DataExchanger_serial_5() { // Potentially missing DataExchanger_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_DataExchanger_serial_5();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int DataExchanger::_sdag_reg_DataExchanger_serial_5() { // Potentially missing DataExchanger_SDAG_CODE in your class definition?
  return CkRegisterEp("DataExchanger_serial_5", NULL, 0, CkIndex_DataExchanger::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int DataExchanger::_sdag_idx_DataExchanger_serial_6() { // Potentially missing DataExchanger_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_DataExchanger_serial_6();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int DataExchanger::_sdag_reg_DataExchanger_serial_6() { // Potentially missing DataExchanger_SDAG_CODE in your class definition?
  return CkRegisterEp("DataExchanger_serial_6", NULL, 0, CkIndex_DataExchanger::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int DataExchanger::_sdag_idx_DataExchanger_serial_7() { // Potentially missing DataExchanger_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_DataExchanger_serial_7();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int DataExchanger::_sdag_reg_DataExchanger_serial_7() { // Potentially missing DataExchanger_SDAG_CODE in your class definition?
  return CkRegisterEp("DataExchanger_serial_7", NULL, 0, CkIndex_DataExchanger::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int DataExchanger::_sdag_idx_DataExchanger_serial_8() { // Potentially missing DataExchanger_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_DataExchanger_serial_8();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int DataExchanger::_sdag_reg_DataExchanger_serial_8() { // Potentially missing DataExchanger_SDAG_CODE in your class definition?
  return CkRegisterEp("DataExchanger_serial_8", NULL, 0, CkIndex_DataExchanger::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int DataExchanger::_sdag_idx_DataExchanger_serial_9() { // Potentially missing DataExchanger_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_DataExchanger_serial_9();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int DataExchanger::_sdag_reg_DataExchanger_serial_9() { // Potentially missing DataExchanger_SDAG_CODE in your class definition?
  return CkRegisterEp("DataExchanger_serial_9", NULL, 0, CkIndex_DataExchanger::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int DataExchanger::_sdag_idx_DataExchanger_serial_11() { // Potentially missing DataExchanger_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_DataExchanger_serial_11();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int DataExchanger::_sdag_reg_DataExchanger_serial_11() { // Potentially missing DataExchanger_SDAG_CODE in your class definition?
  return CkRegisterEp("DataExchanger_serial_11", NULL, 0, CkIndex_DataExchanger::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int DataExchanger::_sdag_idx_DataExchanger_serial_10() { // Potentially missing DataExchanger_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_DataExchanger_serial_10();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int DataExchanger::_sdag_reg_DataExchanger_serial_10() { // Potentially missing DataExchanger_SDAG_CODE in your class definition?
  return CkRegisterEp("DataExchanger_serial_10", NULL, 0, CkIndex_DataExchanger::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int DataExchanger::_sdag_idx_DataExchanger_serial_12() { // Potentially missing DataExchanger_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_DataExchanger_serial_12();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int DataExchanger::_sdag_reg_DataExchanger_serial_12() { // Potentially missing DataExchanger_SDAG_CODE in your class definition?
  return CkRegisterEp("DataExchanger_serial_12", NULL, 0, CkIndex_DataExchanger::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int DataExchanger::_sdag_idx_DataExchanger_serial_13() { // Potentially missing DataExchanger_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_DataExchanger_serial_13();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int DataExchanger::_sdag_reg_DataExchanger_serial_13() { // Potentially missing DataExchanger_SDAG_CODE in your class definition?
  return CkRegisterEp("DataExchanger_serial_13", NULL, 0, CkIndex_DataExchanger::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */



#ifndef CK_TEMPLATES_ONLY
void _registerDataExchanger(void)
{
  static int _done = 0; if(_done) return; _done = 1;

/* REG: group DataExchanger: IrrGroup{
DataExchanger();
void recv_data(const Pointer &p);
void recv_eval_result(const Pointer &p);
void recv_ack();
void recv_red();
void recv_bcast();
void send(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst);
void recv(const Pointer &recvPointer, int srcPart, int src);
void sendRecv(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const Pointer &recvPointer, int srcPart, int src);
void eval(const ConstPointer &srcPointer, int srcSize, int dstPart, int dst, const Pointer &recvPointer);
void recv_eval_command(const Pointer &p);
void barrier();
};
*/
  CkIndex_DataExchanger::__register("DataExchanger", sizeof(DataExchanger));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_DataExchanger::virtual_pup(PUP::er &p) {
    recursive_pup<DataExchanger>(dynamic_cast<DataExchanger*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
