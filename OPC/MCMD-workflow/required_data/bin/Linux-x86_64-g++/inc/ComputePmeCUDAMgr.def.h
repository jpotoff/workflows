
/* ---------------- method closures -------------- */


/* DEFS: nodegroup ComputePmeCUDAMgr: NodeGroup;
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_ComputePmeCUDAMgr::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_ComputePmeCUDAMgr::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_NodeGroup::__idx);
   CkRegisterGroupIrr(__idx,ComputePmeCUDAMgr::isIrreducible());
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerComputePmeCUDAMgr(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  _registerCudaPmeSolver();

/* REG: nodegroup ComputePmeCUDAMgr: NodeGroup;
*/
  CkIndex_ComputePmeCUDAMgr::__register("ComputePmeCUDAMgr", sizeof(ComputePmeCUDAMgr));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_ComputePmeCUDAMgr::virtual_pup(PUP::er &p) {
    recursive_pup<ComputePmeCUDAMgr>(dynamic_cast<ComputePmeCUDAMgr*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
