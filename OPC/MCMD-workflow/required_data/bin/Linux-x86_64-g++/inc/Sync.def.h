/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: group Sync: IrrGroup{
Sync();
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_Sync::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: Sync();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Sync();
 */
CkGroupID CProxy_Sync::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_Sync::__idx, CkIndex_Sync::idx_Sync_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_Sync::reg_Sync_void() {
  int epidx = CkRegisterEp("Sync()",
      reinterpret_cast<CkCallFnPtr>(_call_Sync_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_Sync::_call_Sync_void(void* impl_msg, void* impl_obj_void)
{
  Sync* impl_obj = static_cast<Sync*>(impl_obj_void);
  new (impl_obj_void) Sync();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Sync();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_Sync::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,Sync::isIrreducible());
  // REG: Sync();
  idx_Sync_void();
  CkRegisterDefaultCtor(__idx, idx_Sync_void());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerSync(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: group Sync: IrrGroup{
Sync();
};
*/
  CkIndex_Sync::__register("Sync", sizeof(Sync));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_Sync::virtual_pup(PUP::er &p) {
    recursive_pup<Sync>(dynamic_cast<Sync*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
