/* ---------------- method closures -------------- */

/* DEFS: nodegroup ComputeCUDAMgr: NodeGroup;
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_ComputeCUDAMgr::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_ComputeCUDAMgr::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_NodeGroup::__idx);
   CkRegisterGroupIrr(__idx,ComputeCUDAMgr::isIrreducible());
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerComputeCUDAMgr(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: nodegroup ComputeCUDAMgr: NodeGroup;
*/
  CkIndex_ComputeCUDAMgr::__register("ComputeCUDAMgr", sizeof(ComputeCUDAMgr));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_ComputeCUDAMgr::virtual_pup(PUP::er &p) {
    recursive_pup<ComputeCUDAMgr>(dynamic_cast<ComputeCUDAMgr*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
