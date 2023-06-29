/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
























/* DEFS: mainchare main: Chare{
main(CkArgMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_main::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: main(CkArgMsg* impl_msg);
 */
CkChareID CProxy_main::ckNew(CkArgMsg* impl_msg, int impl_onPE)
{
  CkChareID impl_ret;
  CkCreateChare(CkIndex_main::__idx, CkIndex_main::idx_main_CkArgMsg(), impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}
void CProxy_main::ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int impl_onPE)
{
  CkCreateChare(CkIndex_main::__idx, CkIndex_main::idx_main_CkArgMsg(), impl_msg, pcid, impl_onPE);
}

// Entry point registration function
int CkIndex_main::reg_main_CkArgMsg() {
  int epidx = CkRegisterEp("main(CkArgMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_main_CkArgMsg), CMessage_CkArgMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkArgMsg::ckDebugPup);
  return epidx;
}

void CkIndex_main::_call_main_CkArgMsg(void* impl_msg, void* impl_obj_void)
{
  main* impl_obj = static_cast<main*>(impl_obj_void);
  new (impl_obj_void) main((CkArgMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_main::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeMainChare);
  CkRegisterBase(__idx, CkIndex_Chare::__idx);
  // REG: main(CkArgMsg* impl_msg);
  idx_main_CkArgMsg();
  CkRegisterMainChare(__idx, idx_main_CkArgMsg());

}
#endif /* CK_TEMPLATES_ONLY */























#ifndef CK_TEMPLATES_ONLY
void _registermain(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: mainchare main: Chare{
main(CkArgMsg* impl_msg);
};
*/
  CkIndex_main::__register("main", sizeof(main));

  _registerWorkDistrib();

  _registerReductionMgr();

  _registerPatchMgr();

  _registerProxyMgr();

  _registerNode();

  _registerLdbCoordinator();

  _registerComputeMgr();

  _registerComputePmeMgr();

  _registerComputePmeCUDAMgr();

  _registerComputeCUDAMgr();

  _registerComputeExtMgr();

  _registerComputeQMMgr();

  _registerComputeGBISserMgr();

  _registerComputeFmmSerialMgr();

  _registerComputeMsmSerialMgr();

  _registerComputeMsmMgr();

  _registerCollectionMgr();

  _registerCollectionMaster();

  _registerBroadcastMgr();

  _registerSync();

  _registerParallelIOMgr();

  _registerDataExchanger();

}
extern "C" void CkRegisterMainModule(void) {
  _registermain();
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_main::virtual_pup(PUP::er &p) {
    recursive_pup<main>(dynamic_cast<main*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
