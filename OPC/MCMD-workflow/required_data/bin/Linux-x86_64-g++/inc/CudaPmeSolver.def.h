

#ifndef CK_TEMPLATES_ONLY
void _registerCudaPmeSolver(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  _registerPmeSolver();

}
#endif /* CK_TEMPLATES_ONLY */
