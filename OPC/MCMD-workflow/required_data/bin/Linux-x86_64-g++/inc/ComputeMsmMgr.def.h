








/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ComputeMsmMgr::initialize_create_3_closure : public SDAG::Closure {
      

      initialize_create_3_closure() {
        init();
      }
      initialize_create_3_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~initialize_create_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(initialize_create_3_closure));
    };
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
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


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

    struct Closure_MsmBlock::setupSections_5_closure : public SDAG::Closure {
      

      setupSections_5_closure() {
        init();
      }
      setupSections_5_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~setupSections_5_closure() {
      }
      PUPable_decl(SINGLE_ARG(setupSections_5_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


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

    struct Closure_MsmC1HermiteBlock::setupSections_5_closure : public SDAG::Closure {
      

      setupSections_5_closure() {
        init();
      }
      setupSections_5_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~setupSections_5_closure() {
      }
      PUPable_decl(SINGLE_ARG(setupSections_5_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


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


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_MsmTimer::done_2_closure : public SDAG::Closure {
            double *tm;
            int n;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      done_2_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      done_2_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            double *& getP0() { return tm;}
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
  int impl_off_tm, impl_cnt_tm;
  implP|impl_off_tm;
  implP|impl_cnt_tm;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
          impl_buf+=CK_ALIGN(implP.size(),16);
          tm = (double *)(impl_buf+impl_off_tm);
        }
      }
      virtual ~done_2_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(done_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_MsmProfiler::done_2_closure : public SDAG::Closure {
            int *tm;
            int n;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      done_2_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      done_2_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            int *& getP0() { return tm;}
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
  int impl_off_tm, impl_cnt_tm;
  implP|impl_off_tm;
  implP|impl_cnt_tm;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
          impl_buf+=CK_ALIGN(implP.size(),16);
          tm = (int *)(impl_buf+impl_off_tm);
        }
      }
      virtual ~done_2_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(done_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: message MsmInitMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_MsmInitMsg::operator new(size_t s){
  return MsmInitMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_MsmInitMsg::operator new(size_t s, int* sz){
  return MsmInitMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_MsmInitMsg::operator new(size_t s, int* sz,const int pb){
  return MsmInitMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_MsmInitMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return MsmInitMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_MsmInitMsg::operator new(size_t s, const int p) {
  return MsmInitMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_MsmInitMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return MsmInitMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_MsmInitMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_MsmInitMsg::CMessage_MsmInitMsg() {
MsmInitMsg *newmsg = (MsmInitMsg *)this;
}
void CMessage_MsmInitMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_MsmInitMsg::pack(MsmInitMsg *msg) {
  return (void *) msg;
}
MsmInitMsg* CMessage_MsmInitMsg::unpack(void* buf) {
  MsmInitMsg *msg = (MsmInitMsg *) buf;
  return msg;
}
int CMessage_MsmInitMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message GridMsg{
char gdata[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_GridMsg::operator new(size_t s){
  return GridMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_GridMsg::operator new(size_t s, int* sz){
  return GridMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_GridMsg::operator new(size_t s, int* sz,const int pb){
  return GridMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_GridMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return GridMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_GridMsg::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return GridMsg::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_GridMsg::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return GridMsg::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_GridMsg::operator new(size_t s, int sz0, const int p, const GroupDepNum groupDepNum) {
  int sizes[1];
  sizes[0] = sz0;
  return GridMsg::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_GridMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(char)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb, groupDepNum);
}
CMessage_GridMsg::CMessage_GridMsg() {
GridMsg *newmsg = (GridMsg *)this;
  newmsg->gdata = (char *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
void CMessage_GridMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_GridMsg::pack(GridMsg *msg) {
  msg->gdata = (char *) ((char *)msg->gdata - (char *)msg);
  return (void *) msg;
}
GridMsg* CMessage_GridMsg::unpack(void* buf) {
  GridMsg *msg = (GridMsg *) buf;
  msg->gdata = (char *) ((size_t)msg->gdata + (char *)msg);
  return msg;
}
int CMessage_GridMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message MsmBlockProxyMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_MsmBlockProxyMsg::operator new(size_t s){
  return MsmBlockProxyMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_MsmBlockProxyMsg::operator new(size_t s, int* sz){
  return MsmBlockProxyMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_MsmBlockProxyMsg::operator new(size_t s, int* sz,const int pb){
  return MsmBlockProxyMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_MsmBlockProxyMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return MsmBlockProxyMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_MsmBlockProxyMsg::operator new(size_t s, const int p) {
  return MsmBlockProxyMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_MsmBlockProxyMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return MsmBlockProxyMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_MsmBlockProxyMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_MsmBlockProxyMsg::CMessage_MsmBlockProxyMsg() {
MsmBlockProxyMsg *newmsg = (MsmBlockProxyMsg *)this;
}
void CMessage_MsmBlockProxyMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_MsmBlockProxyMsg::pack(MsmBlockProxyMsg *msg) {
  return (void *) msg;
}
MsmBlockProxyMsg* CMessage_MsmBlockProxyMsg::unpack(void* buf) {
  MsmBlockProxyMsg *msg = (MsmBlockProxyMsg *) buf;
  return msg;
}
int CMessage_MsmBlockProxyMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message MsmC1HermiteBlockProxyMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_MsmC1HermiteBlockProxyMsg::operator new(size_t s){
  return MsmC1HermiteBlockProxyMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_MsmC1HermiteBlockProxyMsg::operator new(size_t s, int* sz){
  return MsmC1HermiteBlockProxyMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_MsmC1HermiteBlockProxyMsg::operator new(size_t s, int* sz,const int pb){
  return MsmC1HermiteBlockProxyMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_MsmC1HermiteBlockProxyMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return MsmC1HermiteBlockProxyMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_MsmC1HermiteBlockProxyMsg::operator new(size_t s, const int p) {
  return MsmC1HermiteBlockProxyMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_MsmC1HermiteBlockProxyMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return MsmC1HermiteBlockProxyMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_MsmC1HermiteBlockProxyMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_MsmC1HermiteBlockProxyMsg::CMessage_MsmC1HermiteBlockProxyMsg() {
MsmC1HermiteBlockProxyMsg *newmsg = (MsmC1HermiteBlockProxyMsg *)this;
}
void CMessage_MsmC1HermiteBlockProxyMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_MsmC1HermiteBlockProxyMsg::pack(MsmC1HermiteBlockProxyMsg *msg) {
  return (void *) msg;
}
MsmC1HermiteBlockProxyMsg* CMessage_MsmC1HermiteBlockProxyMsg::unpack(void* buf) {
  MsmC1HermiteBlockProxyMsg *msg = (MsmC1HermiteBlockProxyMsg *) buf;
  return msg;
}
int CMessage_MsmC1HermiteBlockProxyMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message MsmGridCutoffProxyMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_MsmGridCutoffProxyMsg::operator new(size_t s){
  return MsmGridCutoffProxyMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_MsmGridCutoffProxyMsg::operator new(size_t s, int* sz){
  return MsmGridCutoffProxyMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_MsmGridCutoffProxyMsg::operator new(size_t s, int* sz,const int pb){
  return MsmGridCutoffProxyMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_MsmGridCutoffProxyMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return MsmGridCutoffProxyMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_MsmGridCutoffProxyMsg::operator new(size_t s, const int p) {
  return MsmGridCutoffProxyMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_MsmGridCutoffProxyMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return MsmGridCutoffProxyMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_MsmGridCutoffProxyMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_MsmGridCutoffProxyMsg::CMessage_MsmGridCutoffProxyMsg() {
MsmGridCutoffProxyMsg *newmsg = (MsmGridCutoffProxyMsg *)this;
}
void CMessage_MsmGridCutoffProxyMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_MsmGridCutoffProxyMsg::pack(MsmGridCutoffProxyMsg *msg) {
  return (void *) msg;
}
MsmGridCutoffProxyMsg* CMessage_MsmGridCutoffProxyMsg::unpack(void* buf) {
  MsmGridCutoffProxyMsg *msg = (MsmGridCutoffProxyMsg *) buf;
  return msg;
}
int CMessage_MsmGridCutoffProxyMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message MsmC1HermiteGridCutoffProxyMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_MsmC1HermiteGridCutoffProxyMsg::operator new(size_t s){
  return MsmC1HermiteGridCutoffProxyMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_MsmC1HermiteGridCutoffProxyMsg::operator new(size_t s, int* sz){
  return MsmC1HermiteGridCutoffProxyMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_MsmC1HermiteGridCutoffProxyMsg::operator new(size_t s, int* sz,const int pb){
  return MsmC1HermiteGridCutoffProxyMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_MsmC1HermiteGridCutoffProxyMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return MsmC1HermiteGridCutoffProxyMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_MsmC1HermiteGridCutoffProxyMsg::operator new(size_t s, const int p) {
  return MsmC1HermiteGridCutoffProxyMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_MsmC1HermiteGridCutoffProxyMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return MsmC1HermiteGridCutoffProxyMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_MsmC1HermiteGridCutoffProxyMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_MsmC1HermiteGridCutoffProxyMsg::CMessage_MsmC1HermiteGridCutoffProxyMsg() {
MsmC1HermiteGridCutoffProxyMsg *newmsg = (MsmC1HermiteGridCutoffProxyMsg *)this;
}
void CMessage_MsmC1HermiteGridCutoffProxyMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_MsmC1HermiteGridCutoffProxyMsg::pack(MsmC1HermiteGridCutoffProxyMsg *msg) {
  return (void *) msg;
}
MsmC1HermiteGridCutoffProxyMsg* CMessage_MsmC1HermiteGridCutoffProxyMsg::unpack(void* buf) {
  MsmC1HermiteGridCutoffProxyMsg *msg = (MsmC1HermiteGridCutoffProxyMsg *) buf;
  return msg;
}
int CMessage_MsmC1HermiteGridCutoffProxyMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message MsmGridCutoffInitMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_MsmGridCutoffInitMsg::operator new(size_t s){
  return MsmGridCutoffInitMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_MsmGridCutoffInitMsg::operator new(size_t s, int* sz){
  return MsmGridCutoffInitMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_MsmGridCutoffInitMsg::operator new(size_t s, int* sz,const int pb){
  return MsmGridCutoffInitMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_MsmGridCutoffInitMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return MsmGridCutoffInitMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_MsmGridCutoffInitMsg::operator new(size_t s, const int p) {
  return MsmGridCutoffInitMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_MsmGridCutoffInitMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return MsmGridCutoffInitMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_MsmGridCutoffInitMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_MsmGridCutoffInitMsg::CMessage_MsmGridCutoffInitMsg() {
MsmGridCutoffInitMsg *newmsg = (MsmGridCutoffInitMsg *)this;
}
void CMessage_MsmGridCutoffInitMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_MsmGridCutoffInitMsg::pack(MsmGridCutoffInitMsg *msg) {
  return (void *) msg;
}
MsmGridCutoffInitMsg* CMessage_MsmGridCutoffInitMsg::unpack(void* buf) {
  MsmGridCutoffInitMsg *msg = (MsmGridCutoffInitMsg *) buf;
  return msg;
}
int CMessage_MsmGridCutoffInitMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message MsmGridCutoffSetupMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_MsmGridCutoffSetupMsg::operator new(size_t s){
  return MsmGridCutoffSetupMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_MsmGridCutoffSetupMsg::operator new(size_t s, int* sz){
  return MsmGridCutoffSetupMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_MsmGridCutoffSetupMsg::operator new(size_t s, int* sz,const int pb){
  return MsmGridCutoffSetupMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_MsmGridCutoffSetupMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return MsmGridCutoffSetupMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_MsmGridCutoffSetupMsg::operator new(size_t s, const int p) {
  return MsmGridCutoffSetupMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_MsmGridCutoffSetupMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return MsmGridCutoffSetupMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_MsmGridCutoffSetupMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_MsmGridCutoffSetupMsg::CMessage_MsmGridCutoffSetupMsg() {
MsmGridCutoffSetupMsg *newmsg = (MsmGridCutoffSetupMsg *)this;
}
void CMessage_MsmGridCutoffSetupMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_MsmGridCutoffSetupMsg::pack(MsmGridCutoffSetupMsg *msg) {
  return (void *) msg;
}
MsmGridCutoffSetupMsg* CMessage_MsmGridCutoffSetupMsg::unpack(void* buf) {
  MsmGridCutoffSetupMsg *msg = (MsmGridCutoffSetupMsg *) buf;
  return msg;
}
int CMessage_MsmGridCutoffSetupMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message MsmC1HermiteGridCutoffSetupMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_MsmC1HermiteGridCutoffSetupMsg::operator new(size_t s){
  return MsmC1HermiteGridCutoffSetupMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_MsmC1HermiteGridCutoffSetupMsg::operator new(size_t s, int* sz){
  return MsmC1HermiteGridCutoffSetupMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_MsmC1HermiteGridCutoffSetupMsg::operator new(size_t s, int* sz,const int pb){
  return MsmC1HermiteGridCutoffSetupMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_MsmC1HermiteGridCutoffSetupMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return MsmC1HermiteGridCutoffSetupMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_MsmC1HermiteGridCutoffSetupMsg::operator new(size_t s, const int p) {
  return MsmC1HermiteGridCutoffSetupMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_MsmC1HermiteGridCutoffSetupMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return MsmC1HermiteGridCutoffSetupMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_MsmC1HermiteGridCutoffSetupMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_MsmC1HermiteGridCutoffSetupMsg::CMessage_MsmC1HermiteGridCutoffSetupMsg() {
MsmC1HermiteGridCutoffSetupMsg *newmsg = (MsmC1HermiteGridCutoffSetupMsg *)this;
}
void CMessage_MsmC1HermiteGridCutoffSetupMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_MsmC1HermiteGridCutoffSetupMsg::pack(MsmC1HermiteGridCutoffSetupMsg *msg) {
  return (void *) msg;
}
MsmC1HermiteGridCutoffSetupMsg* CMessage_MsmC1HermiteGridCutoffSetupMsg::unpack(void* buf) {
  MsmC1HermiteGridCutoffSetupMsg *msg = (MsmC1HermiteGridCutoffSetupMsg *) buf;
  return msg;
}
int CMessage_MsmC1HermiteGridCutoffSetupMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group ComputeMsmMgr: IrrGroup{
ComputeMsmMgr();
void initialize(MsmInitMsg* impl_msg);
void initialize_create();
void recvMsmBlockProxy(MsmBlockProxyMsg* impl_msg);
void recvMsmGridCutoffProxy(MsmGridCutoffProxyMsg* impl_msg);
void recvMsmC1HermiteBlockProxy(MsmC1HermiteBlockProxyMsg* impl_msg);
void recvMsmC1HermiteGridCutoffProxy(MsmC1HermiteGridCutoffProxyMsg* impl_msg);
void update(CkQdMsg* impl_msg);
void addPotential(GridMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_ComputeMsmMgr::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: ComputeMsmMgr();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initialize(MsmInitMsg* impl_msg);
 */
void CProxyElement_ComputeMsmMgr::initialize(MsmInitMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMsmMgr::idx_initialize_MsmInitMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMsmMgr::idx_initialize_MsmInitMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputeMsmMgr::idx_initialize_MsmInitMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initialize_create();
 */
void CProxyElement_ComputeMsmMgr::initialize_create(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMsmMgr::idx_initialize_create_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMsmMgr::idx_initialize_create_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputeMsmMgr::idx_initialize_create_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvMsmBlockProxy(MsmBlockProxyMsg* impl_msg);
 */
void CProxyElement_ComputeMsmMgr::recvMsmBlockProxy(MsmBlockProxyMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMsmMgr::idx_recvMsmBlockProxy_MsmBlockProxyMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMsmMgr::idx_recvMsmBlockProxy_MsmBlockProxyMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputeMsmMgr::idx_recvMsmBlockProxy_MsmBlockProxyMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvMsmGridCutoffProxy(MsmGridCutoffProxyMsg* impl_msg);
 */
void CProxyElement_ComputeMsmMgr::recvMsmGridCutoffProxy(MsmGridCutoffProxyMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMsmMgr::idx_recvMsmGridCutoffProxy_MsmGridCutoffProxyMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMsmMgr::idx_recvMsmGridCutoffProxy_MsmGridCutoffProxyMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputeMsmMgr::idx_recvMsmGridCutoffProxy_MsmGridCutoffProxyMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvMsmC1HermiteBlockProxy(MsmC1HermiteBlockProxyMsg* impl_msg);
 */
void CProxyElement_ComputeMsmMgr::recvMsmC1HermiteBlockProxy(MsmC1HermiteBlockProxyMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMsmMgr::idx_recvMsmC1HermiteBlockProxy_MsmC1HermiteBlockProxyMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMsmMgr::idx_recvMsmC1HermiteBlockProxy_MsmC1HermiteBlockProxyMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputeMsmMgr::idx_recvMsmC1HermiteBlockProxy_MsmC1HermiteBlockProxyMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvMsmC1HermiteGridCutoffProxy(MsmC1HermiteGridCutoffProxyMsg* impl_msg);
 */
void CProxyElement_ComputeMsmMgr::recvMsmC1HermiteGridCutoffProxy(MsmC1HermiteGridCutoffProxyMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMsmMgr::idx_recvMsmC1HermiteGridCutoffProxy_MsmC1HermiteGridCutoffProxyMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMsmMgr::idx_recvMsmC1HermiteGridCutoffProxy_MsmC1HermiteGridCutoffProxyMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputeMsmMgr::idx_recvMsmC1HermiteGridCutoffProxy_MsmC1HermiteGridCutoffProxyMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void update(CkQdMsg* impl_msg);
 */
void CProxyElement_ComputeMsmMgr::update(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMsmMgr::idx_update_CkQdMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMsmMgr::idx_update_CkQdMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputeMsmMgr::idx_update_CkQdMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void addPotential(GridMsg* impl_msg);
 */
void CProxyElement_ComputeMsmMgr::addPotential(GridMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMsmMgr::idx_addPotential_GridMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMsmMgr::idx_addPotential_GridMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputeMsmMgr::idx_addPotential_GridMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ComputeMsmMgr();
 */
CkGroupID CProxy_ComputeMsmMgr::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_ComputeMsmMgr::__idx, CkIndex_ComputeMsmMgr::idx_ComputeMsmMgr_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_ComputeMsmMgr::reg_ComputeMsmMgr_void() {
  int epidx = CkRegisterEp("ComputeMsmMgr()",
      reinterpret_cast<CkCallFnPtr>(_call_ComputeMsmMgr_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_ComputeMsmMgr::_call_ComputeMsmMgr_void(void* impl_msg, void* impl_obj_void)
{
  ComputeMsmMgr* impl_obj = static_cast<ComputeMsmMgr*>(impl_obj_void);
  new (impl_obj_void) ComputeMsmMgr();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initialize(MsmInitMsg* impl_msg);
 */
void CProxy_ComputeMsmMgr::initialize(MsmInitMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMsmMgr::idx_initialize_MsmInitMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMsmMgr::idx_initialize_MsmInitMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMsmMgr::idx_initialize_MsmInitMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMsmMgr::initialize(MsmInitMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputeMsmMgr::idx_initialize_MsmInitMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMsmMgr::initialize(MsmInitMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputeMsmMgr::idx_initialize_MsmInitMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputeMsmMgr::reg_initialize_MsmInitMsg() {
  int epidx = CkRegisterEp("initialize(MsmInitMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_initialize_MsmInitMsg), CMessage_MsmInitMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)MsmInitMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ComputeMsmMgr::_call_initialize_MsmInitMsg(void* impl_msg, void* impl_obj_void)
{
  ComputeMsmMgr* impl_obj = static_cast<ComputeMsmMgr*>(impl_obj_void);
  impl_obj->initialize((MsmInitMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initialize_create();
 */
void CProxy_ComputeMsmMgr::initialize_create(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMsmMgr::idx_initialize_create_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMsmMgr::idx_initialize_create_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMsmMgr::idx_initialize_create_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMsmMgr::initialize_create(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_ComputeMsmMgr::idx_initialize_create_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMsmMgr::initialize_create(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_ComputeMsmMgr::idx_initialize_create_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputeMsmMgr::reg_initialize_create_void() {
  int epidx = CkRegisterEp("initialize_create()",
      reinterpret_cast<CkCallFnPtr>(_call_initialize_create_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_ComputeMsmMgr::_call_initialize_create_void(void* impl_msg, void* impl_obj_void)
{
  ComputeMsmMgr* impl_obj = static_cast<ComputeMsmMgr*>(impl_obj_void);
  impl_obj->initialize_create();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_ComputeMsmMgr::initialize_create_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvMsmBlockProxy(MsmBlockProxyMsg* impl_msg);
 */
void CProxy_ComputeMsmMgr::recvMsmBlockProxy(MsmBlockProxyMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMsmMgr::idx_recvMsmBlockProxy_MsmBlockProxyMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMsmMgr::idx_recvMsmBlockProxy_MsmBlockProxyMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMsmMgr::idx_recvMsmBlockProxy_MsmBlockProxyMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMsmMgr::recvMsmBlockProxy(MsmBlockProxyMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputeMsmMgr::idx_recvMsmBlockProxy_MsmBlockProxyMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMsmMgr::recvMsmBlockProxy(MsmBlockProxyMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputeMsmMgr::idx_recvMsmBlockProxy_MsmBlockProxyMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputeMsmMgr::reg_recvMsmBlockProxy_MsmBlockProxyMsg() {
  int epidx = CkRegisterEp("recvMsmBlockProxy(MsmBlockProxyMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvMsmBlockProxy_MsmBlockProxyMsg), CMessage_MsmBlockProxyMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)MsmBlockProxyMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ComputeMsmMgr::_call_recvMsmBlockProxy_MsmBlockProxyMsg(void* impl_msg, void* impl_obj_void)
{
  ComputeMsmMgr* impl_obj = static_cast<ComputeMsmMgr*>(impl_obj_void);
  impl_obj->recvMsmBlockProxy((MsmBlockProxyMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvMsmGridCutoffProxy(MsmGridCutoffProxyMsg* impl_msg);
 */
void CProxy_ComputeMsmMgr::recvMsmGridCutoffProxy(MsmGridCutoffProxyMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMsmMgr::idx_recvMsmGridCutoffProxy_MsmGridCutoffProxyMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMsmMgr::idx_recvMsmGridCutoffProxy_MsmGridCutoffProxyMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMsmMgr::idx_recvMsmGridCutoffProxy_MsmGridCutoffProxyMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMsmMgr::recvMsmGridCutoffProxy(MsmGridCutoffProxyMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputeMsmMgr::idx_recvMsmGridCutoffProxy_MsmGridCutoffProxyMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMsmMgr::recvMsmGridCutoffProxy(MsmGridCutoffProxyMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputeMsmMgr::idx_recvMsmGridCutoffProxy_MsmGridCutoffProxyMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputeMsmMgr::reg_recvMsmGridCutoffProxy_MsmGridCutoffProxyMsg() {
  int epidx = CkRegisterEp("recvMsmGridCutoffProxy(MsmGridCutoffProxyMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvMsmGridCutoffProxy_MsmGridCutoffProxyMsg), CMessage_MsmGridCutoffProxyMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)MsmGridCutoffProxyMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ComputeMsmMgr::_call_recvMsmGridCutoffProxy_MsmGridCutoffProxyMsg(void* impl_msg, void* impl_obj_void)
{
  ComputeMsmMgr* impl_obj = static_cast<ComputeMsmMgr*>(impl_obj_void);
  impl_obj->recvMsmGridCutoffProxy((MsmGridCutoffProxyMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvMsmC1HermiteBlockProxy(MsmC1HermiteBlockProxyMsg* impl_msg);
 */
void CProxy_ComputeMsmMgr::recvMsmC1HermiteBlockProxy(MsmC1HermiteBlockProxyMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMsmMgr::idx_recvMsmC1HermiteBlockProxy_MsmC1HermiteBlockProxyMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMsmMgr::idx_recvMsmC1HermiteBlockProxy_MsmC1HermiteBlockProxyMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMsmMgr::idx_recvMsmC1HermiteBlockProxy_MsmC1HermiteBlockProxyMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMsmMgr::recvMsmC1HermiteBlockProxy(MsmC1HermiteBlockProxyMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputeMsmMgr::idx_recvMsmC1HermiteBlockProxy_MsmC1HermiteBlockProxyMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMsmMgr::recvMsmC1HermiteBlockProxy(MsmC1HermiteBlockProxyMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputeMsmMgr::idx_recvMsmC1HermiteBlockProxy_MsmC1HermiteBlockProxyMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputeMsmMgr::reg_recvMsmC1HermiteBlockProxy_MsmC1HermiteBlockProxyMsg() {
  int epidx = CkRegisterEp("recvMsmC1HermiteBlockProxy(MsmC1HermiteBlockProxyMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvMsmC1HermiteBlockProxy_MsmC1HermiteBlockProxyMsg), CMessage_MsmC1HermiteBlockProxyMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)MsmC1HermiteBlockProxyMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ComputeMsmMgr::_call_recvMsmC1HermiteBlockProxy_MsmC1HermiteBlockProxyMsg(void* impl_msg, void* impl_obj_void)
{
  ComputeMsmMgr* impl_obj = static_cast<ComputeMsmMgr*>(impl_obj_void);
  impl_obj->recvMsmC1HermiteBlockProxy((MsmC1HermiteBlockProxyMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvMsmC1HermiteGridCutoffProxy(MsmC1HermiteGridCutoffProxyMsg* impl_msg);
 */
void CProxy_ComputeMsmMgr::recvMsmC1HermiteGridCutoffProxy(MsmC1HermiteGridCutoffProxyMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMsmMgr::idx_recvMsmC1HermiteGridCutoffProxy_MsmC1HermiteGridCutoffProxyMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMsmMgr::idx_recvMsmC1HermiteGridCutoffProxy_MsmC1HermiteGridCutoffProxyMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMsmMgr::idx_recvMsmC1HermiteGridCutoffProxy_MsmC1HermiteGridCutoffProxyMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMsmMgr::recvMsmC1HermiteGridCutoffProxy(MsmC1HermiteGridCutoffProxyMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputeMsmMgr::idx_recvMsmC1HermiteGridCutoffProxy_MsmC1HermiteGridCutoffProxyMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMsmMgr::recvMsmC1HermiteGridCutoffProxy(MsmC1HermiteGridCutoffProxyMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputeMsmMgr::idx_recvMsmC1HermiteGridCutoffProxy_MsmC1HermiteGridCutoffProxyMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputeMsmMgr::reg_recvMsmC1HermiteGridCutoffProxy_MsmC1HermiteGridCutoffProxyMsg() {
  int epidx = CkRegisterEp("recvMsmC1HermiteGridCutoffProxy(MsmC1HermiteGridCutoffProxyMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvMsmC1HermiteGridCutoffProxy_MsmC1HermiteGridCutoffProxyMsg), CMessage_MsmC1HermiteGridCutoffProxyMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)MsmC1HermiteGridCutoffProxyMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ComputeMsmMgr::_call_recvMsmC1HermiteGridCutoffProxy_MsmC1HermiteGridCutoffProxyMsg(void* impl_msg, void* impl_obj_void)
{
  ComputeMsmMgr* impl_obj = static_cast<ComputeMsmMgr*>(impl_obj_void);
  impl_obj->recvMsmC1HermiteGridCutoffProxy((MsmC1HermiteGridCutoffProxyMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void update(CkQdMsg* impl_msg);
 */
void CProxy_ComputeMsmMgr::update(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMsmMgr::idx_update_CkQdMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMsmMgr::idx_update_CkQdMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMsmMgr::idx_update_CkQdMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMsmMgr::update(CkQdMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputeMsmMgr::idx_update_CkQdMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMsmMgr::update(CkQdMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputeMsmMgr::idx_update_CkQdMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputeMsmMgr::reg_update_CkQdMsg() {
  int epidx = CkRegisterEp("update(CkQdMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_update_CkQdMsg), CMessage_CkQdMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkQdMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ComputeMsmMgr::_call_update_CkQdMsg(void* impl_msg, void* impl_obj_void)
{
  ComputeMsmMgr* impl_obj = static_cast<ComputeMsmMgr*>(impl_obj_void);
  impl_obj->update((CkQdMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void addPotential(GridMsg* impl_msg);
 */
void CProxy_ComputeMsmMgr::addPotential(GridMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMsmMgr::idx_addPotential_GridMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMsmMgr::idx_addPotential_GridMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMsmMgr::idx_addPotential_GridMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMsmMgr::addPotential(GridMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputeMsmMgr::idx_addPotential_GridMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMsmMgr::addPotential(GridMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputeMsmMgr::idx_addPotential_GridMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputeMsmMgr::reg_addPotential_GridMsg() {
  int epidx = CkRegisterEp("addPotential(GridMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_addPotential_GridMsg), CMessage_GridMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)GridMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ComputeMsmMgr::_call_addPotential_GridMsg(void* impl_msg, void* impl_obj_void)
{
  ComputeMsmMgr* impl_obj = static_cast<ComputeMsmMgr*>(impl_obj_void);
  impl_obj->addPotential((GridMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ComputeMsmMgr();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initialize(MsmInitMsg* impl_msg);
 */
void CProxySection_ComputeMsmMgr::initialize(MsmInitMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMsmMgr::idx_initialize_MsmInitMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMsmMgr::idx_initialize_MsmInitMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initialize_create();
 */
void CProxySection_ComputeMsmMgr::initialize_create(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMsmMgr::idx_initialize_create_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMsmMgr::idx_initialize_create_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvMsmBlockProxy(MsmBlockProxyMsg* impl_msg);
 */
void CProxySection_ComputeMsmMgr::recvMsmBlockProxy(MsmBlockProxyMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMsmMgr::idx_recvMsmBlockProxy_MsmBlockProxyMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMsmMgr::idx_recvMsmBlockProxy_MsmBlockProxyMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvMsmGridCutoffProxy(MsmGridCutoffProxyMsg* impl_msg);
 */
void CProxySection_ComputeMsmMgr::recvMsmGridCutoffProxy(MsmGridCutoffProxyMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMsmMgr::idx_recvMsmGridCutoffProxy_MsmGridCutoffProxyMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMsmMgr::idx_recvMsmGridCutoffProxy_MsmGridCutoffProxyMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvMsmC1HermiteBlockProxy(MsmC1HermiteBlockProxyMsg* impl_msg);
 */
void CProxySection_ComputeMsmMgr::recvMsmC1HermiteBlockProxy(MsmC1HermiteBlockProxyMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMsmMgr::idx_recvMsmC1HermiteBlockProxy_MsmC1HermiteBlockProxyMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMsmMgr::idx_recvMsmC1HermiteBlockProxy_MsmC1HermiteBlockProxyMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvMsmC1HermiteGridCutoffProxy(MsmC1HermiteGridCutoffProxyMsg* impl_msg);
 */
void CProxySection_ComputeMsmMgr::recvMsmC1HermiteGridCutoffProxy(MsmC1HermiteGridCutoffProxyMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMsmMgr::idx_recvMsmC1HermiteGridCutoffProxy_MsmC1HermiteGridCutoffProxyMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMsmMgr::idx_recvMsmC1HermiteGridCutoffProxy_MsmC1HermiteGridCutoffProxyMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void update(CkQdMsg* impl_msg);
 */
void CProxySection_ComputeMsmMgr::update(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMsmMgr::idx_update_CkQdMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMsmMgr::idx_update_CkQdMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void addPotential(GridMsg* impl_msg);
 */
void CProxySection_ComputeMsmMgr::addPotential(GridMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMsmMgr::idx_addPotential_GridMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMsmMgr::idx_addPotential_GridMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_ComputeMsmMgr::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,ComputeMsmMgr::isIrreducible());
  // REG: ComputeMsmMgr();
  idx_ComputeMsmMgr_void();
  CkRegisterDefaultCtor(__idx, idx_ComputeMsmMgr_void());

  // REG: void initialize(MsmInitMsg* impl_msg);
  idx_initialize_MsmInitMsg();

  // REG: void initialize_create();
  idx_initialize_create_void();

  // REG: void recvMsmBlockProxy(MsmBlockProxyMsg* impl_msg);
  idx_recvMsmBlockProxy_MsmBlockProxyMsg();

  // REG: void recvMsmGridCutoffProxy(MsmGridCutoffProxyMsg* impl_msg);
  idx_recvMsmGridCutoffProxy_MsmGridCutoffProxyMsg();

  // REG: void recvMsmC1HermiteBlockProxy(MsmC1HermiteBlockProxyMsg* impl_msg);
  idx_recvMsmC1HermiteBlockProxy_MsmC1HermiteBlockProxyMsg();

  // REG: void recvMsmC1HermiteGridCutoffProxy(MsmC1HermiteGridCutoffProxyMsg* impl_msg);
  idx_recvMsmC1HermiteGridCutoffProxy_MsmC1HermiteGridCutoffProxyMsg();

  // REG: void update(CkQdMsg* impl_msg);
  idx_update_CkQdMsg();

  // REG: void addPotential(GridMsg* impl_msg);
  idx_addPotential_GridMsg();

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group MsmBlockMap: CkArrayMap{
MsmBlockMap(int level);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_MsmBlockMap::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: MsmBlockMap(int level);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: MsmBlockMap(int level);
 */
CkGroupID CProxy_MsmBlockMap::ckNew(int level, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int level
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|level;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|level;
  }
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_MsmBlockMap::__idx, CkIndex_MsmBlockMap::idx_MsmBlockMap_marshall1(), impl_msg);
  return gId;
}
  CProxy_MsmBlockMap::CProxy_MsmBlockMap(int level, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int level
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|level;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|level;
  }
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  ckSetGroupID(CkCreateGroup(CkIndex_MsmBlockMap::__idx, CkIndex_MsmBlockMap::idx_MsmBlockMap_marshall1(), impl_msg));
}

// Entry point registration function
int CkIndex_MsmBlockMap::reg_MsmBlockMap_marshall1() {
  int epidx = CkRegisterEp("MsmBlockMap(int level)",
      reinterpret_cast<CkCallFnPtr>(_call_MsmBlockMap_marshall1), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_MsmBlockMap_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_MsmBlockMap_marshall1);

  return epidx;
}

void CkIndex_MsmBlockMap::_call_MsmBlockMap_marshall1(void* impl_msg, void* impl_obj_void)
{
  MsmBlockMap* impl_obj = static_cast<MsmBlockMap*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int level*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> level;
  implP|level;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) MsmBlockMap(std::move(level.t));
}
int CkIndex_MsmBlockMap::_callmarshall_MsmBlockMap_marshall1(char* impl_buf, void* impl_obj_void) {
  MsmBlockMap* impl_obj = static_cast<MsmBlockMap*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int level*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> level;
  implP|level;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) MsmBlockMap(std::move(level.t));
  return implP.size();
}
void CkIndex_MsmBlockMap::_marshallmessagepup_MsmBlockMap_marshall1(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int level*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> level;
  implP|level;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("level");
  implDestP|level;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: MsmBlockMap(int level);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_MsmBlockMap::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_CkArrayMap::__idx);
   CkRegisterGroupIrr(__idx,MsmBlockMap::isIrreducible());
  // REG: MsmBlockMap(int level);
  idx_MsmBlockMap_marshall1();

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: array MsmBlock: ArrayElement{
MsmBlock(int level);
void addCharge(GridMsg* impl_msg);
void addPotential(GridMsg* impl_msg);
void sumReducedPotential(CkReductionMsg* impl_msg);
void setupSections();
MsmBlock(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_MsmBlock::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CProxySection_MsmBlock::contribute(CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, userData, fragSize);
}

void CProxySection_MsmBlock::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, userData, fragSize);
}

template <typename T>
void CProxySection_MsmBlock::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, userData, fragSize);
}

void CProxySection_MsmBlock::contribute(CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, cb, userData, fragSize);
}

void CProxySection_MsmBlock::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, cb, userData, fragSize);
}

template <typename T>
void CProxySection_MsmBlock::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, cb, userData, fragSize);
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: MsmBlock(int level);
 */
void CProxyElement_MsmBlock::insert(int level, int onPE, const CkEntryOptions *impl_e_opts)
{ 
   //Marshall: int level
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|level;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|level;
  }
   UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_MsmBlock::idx_MsmBlock_marshall1(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void addCharge(GridMsg* impl_msg);
 */
void CProxyElement_MsmBlock::addCharge(GridMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_MsmBlock::idx_addCharge_GridMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void addPotential(GridMsg* impl_msg);
 */
void CProxyElement_MsmBlock::addPotential(GridMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_MsmBlock::idx_addPotential_GridMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sumReducedPotential(CkReductionMsg* impl_msg);
 */
void CProxyElement_MsmBlock::sumReducedPotential(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_MsmBlock::idx_sumReducedPotential_CkReductionMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setupSections();
 */
void CProxyElement_MsmBlock::setupSections(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_MsmBlock::idx_setupSections_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: MsmBlock(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: MsmBlock(int level);
 */
CkArrayID CProxy_MsmBlock::ckNew(int level, const CkArrayOptions &opts, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int level
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|level;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|level;
  }
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_MsmBlock::idx_MsmBlock_marshall1(), opts);
  return gId;
}
void CProxy_MsmBlock::ckNew(int level, const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int level
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|level;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|level;
  }
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_MsmBlock::idx_MsmBlock_marshall1(), _ck_array_creation_cb, opts, impl_msg);
}
CkArrayID CProxy_MsmBlock::ckNew(int level, const int s1, const int s2, const int s3, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int level
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|level;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|level;
  }
  CkArrayOptions opts(s1, s2, s3);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_MsmBlock::idx_MsmBlock_marshall1(), opts);
  return gId;
}
void CProxy_MsmBlock::ckNew(int level, const int s1, const int s2, const int s3, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int level
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|level;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|level;
  }
  CkArrayOptions opts(s1, s2, s3);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_MsmBlock::idx_MsmBlock_marshall1(), _ck_array_creation_cb, opts, impl_msg);
}

// Entry point registration function
int CkIndex_MsmBlock::reg_MsmBlock_marshall1() {
  int epidx = CkRegisterEp("MsmBlock(int level)",
      reinterpret_cast<CkCallFnPtr>(_call_MsmBlock_marshall1), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_MsmBlock_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_MsmBlock_marshall1);

  return epidx;
}

void CkIndex_MsmBlock::_call_MsmBlock_marshall1(void* impl_msg, void* impl_obj_void)
{
  MsmBlock* impl_obj = static_cast<MsmBlock*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int level*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> level;
  implP|level;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) MsmBlock(std::move(level.t));
}
int CkIndex_MsmBlock::_callmarshall_MsmBlock_marshall1(char* impl_buf, void* impl_obj_void) {
  MsmBlock* impl_obj = static_cast<MsmBlock*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int level*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> level;
  implP|level;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) MsmBlock(std::move(level.t));
  return implP.size();
}
void CkIndex_MsmBlock::_marshallmessagepup_MsmBlock_marshall1(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int level*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> level;
  implP|level;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("level");
  implDestP|level;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void addCharge(GridMsg* impl_msg);
 */
void CProxy_MsmBlock::addCharge(GridMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_MsmBlock::idx_addCharge_GridMsg(),0);
}

// Entry point registration function
int CkIndex_MsmBlock::reg_addCharge_GridMsg() {
  int epidx = CkRegisterEp("addCharge(GridMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_addCharge_GridMsg), CMessage_GridMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)GridMsg::ckDebugPup);
  return epidx;
}

void CkIndex_MsmBlock::_call_addCharge_GridMsg(void* impl_msg, void* impl_obj_void)
{
  MsmBlock* impl_obj = static_cast<MsmBlock*>(impl_obj_void);
  impl_obj->addCharge((GridMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void addPotential(GridMsg* impl_msg);
 */
void CProxy_MsmBlock::addPotential(GridMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_MsmBlock::idx_addPotential_GridMsg(),0);
}

// Entry point registration function
int CkIndex_MsmBlock::reg_addPotential_GridMsg() {
  int epidx = CkRegisterEp("addPotential(GridMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_addPotential_GridMsg), CMessage_GridMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)GridMsg::ckDebugPup);
  return epidx;
}

void CkIndex_MsmBlock::_call_addPotential_GridMsg(void* impl_msg, void* impl_obj_void)
{
  MsmBlock* impl_obj = static_cast<MsmBlock*>(impl_obj_void);
  impl_obj->addPotential((GridMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sumReducedPotential(CkReductionMsg* impl_msg);
 */
void CProxy_MsmBlock::sumReducedPotential(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_MsmBlock::idx_sumReducedPotential_CkReductionMsg(),0);
}

// Entry point registration function
int CkIndex_MsmBlock::reg_sumReducedPotential_CkReductionMsg() {
  int epidx = CkRegisterEp("sumReducedPotential(CkReductionMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_sumReducedPotential_CkReductionMsg), CMessage_CkReductionMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}

void CkIndex_MsmBlock::_call_sumReducedPotential_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  MsmBlock* impl_obj = static_cast<MsmBlock*>(impl_obj_void);
  impl_obj->sumReducedPotential((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setupSections();
 */
void CProxy_MsmBlock::setupSections(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_MsmBlock::idx_setupSections_void(),0);
}

// Entry point registration function
int CkIndex_MsmBlock::reg_setupSections_void() {
  int epidx = CkRegisterEp("setupSections()",
      reinterpret_cast<CkCallFnPtr>(_call_setupSections_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_MsmBlock::_call_setupSections_void(void* impl_msg, void* impl_obj_void)
{
  MsmBlock* impl_obj = static_cast<MsmBlock*>(impl_obj_void);
  impl_obj->setupSections();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_MsmBlock::setupSections_5_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: MsmBlock(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_MsmBlock::reg_MsmBlock_CkMigrateMessage() {
  int epidx = CkRegisterEp("MsmBlock(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_MsmBlock_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_MsmBlock::_call_MsmBlock_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  call_migration_constructor<MsmBlock> c = impl_obj_void;
  c((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: MsmBlock(int level);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void addCharge(GridMsg* impl_msg);
 */
void CProxySection_MsmBlock::addCharge(GridMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_MsmBlock::idx_addCharge_GridMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void addPotential(GridMsg* impl_msg);
 */
void CProxySection_MsmBlock::addPotential(GridMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_MsmBlock::idx_addPotential_GridMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sumReducedPotential(CkReductionMsg* impl_msg);
 */
void CProxySection_MsmBlock::sumReducedPotential(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_MsmBlock::idx_sumReducedPotential_CkReductionMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setupSections();
 */
void CProxySection_MsmBlock::setupSections(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_MsmBlock::idx_setupSections_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: MsmBlock(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_MsmBlock::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterArrayDimensions(__idx, 3);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
  // REG: MsmBlock(int level);
  idx_MsmBlock_marshall1();

  // REG: void addCharge(GridMsg* impl_msg);
  idx_addCharge_GridMsg();

  // REG: void addPotential(GridMsg* impl_msg);
  idx_addPotential_GridMsg();

  // REG: void sumReducedPotential(CkReductionMsg* impl_msg);
  idx_sumReducedPotential_CkReductionMsg();

  // REG: void setupSections();
  idx_setupSections_void();

  // REG: MsmBlock(CkMigrateMessage* impl_msg);
  idx_MsmBlock_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_MsmBlock_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: array MsmC1HermiteBlock: ArrayElement{
MsmC1HermiteBlock(int level);
void addCharge(GridMsg* impl_msg);
void addPotential(GridMsg* impl_msg);
void sumReducedPotential(CkReductionMsg* impl_msg);
void setupSections();
MsmC1HermiteBlock(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_MsmC1HermiteBlock::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CProxySection_MsmC1HermiteBlock::contribute(CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, userData, fragSize);
}

void CProxySection_MsmC1HermiteBlock::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, userData, fragSize);
}

template <typename T>
void CProxySection_MsmC1HermiteBlock::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, userData, fragSize);
}

void CProxySection_MsmC1HermiteBlock::contribute(CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, cb, userData, fragSize);
}

void CProxySection_MsmC1HermiteBlock::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, cb, userData, fragSize);
}

template <typename T>
void CProxySection_MsmC1HermiteBlock::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, cb, userData, fragSize);
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: MsmC1HermiteBlock(int level);
 */
void CProxyElement_MsmC1HermiteBlock::insert(int level, int onPE, const CkEntryOptions *impl_e_opts)
{ 
   //Marshall: int level
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|level;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|level;
  }
   UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_MsmC1HermiteBlock::idx_MsmC1HermiteBlock_marshall1(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void addCharge(GridMsg* impl_msg);
 */
void CProxyElement_MsmC1HermiteBlock::addCharge(GridMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_MsmC1HermiteBlock::idx_addCharge_GridMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void addPotential(GridMsg* impl_msg);
 */
void CProxyElement_MsmC1HermiteBlock::addPotential(GridMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_MsmC1HermiteBlock::idx_addPotential_GridMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sumReducedPotential(CkReductionMsg* impl_msg);
 */
void CProxyElement_MsmC1HermiteBlock::sumReducedPotential(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_MsmC1HermiteBlock::idx_sumReducedPotential_CkReductionMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setupSections();
 */
void CProxyElement_MsmC1HermiteBlock::setupSections(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_MsmC1HermiteBlock::idx_setupSections_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: MsmC1HermiteBlock(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: MsmC1HermiteBlock(int level);
 */
CkArrayID CProxy_MsmC1HermiteBlock::ckNew(int level, const CkArrayOptions &opts, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int level
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|level;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|level;
  }
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_MsmC1HermiteBlock::idx_MsmC1HermiteBlock_marshall1(), opts);
  return gId;
}
void CProxy_MsmC1HermiteBlock::ckNew(int level, const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int level
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|level;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|level;
  }
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_MsmC1HermiteBlock::idx_MsmC1HermiteBlock_marshall1(), _ck_array_creation_cb, opts, impl_msg);
}
CkArrayID CProxy_MsmC1HermiteBlock::ckNew(int level, const int s1, const int s2, const int s3, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int level
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|level;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|level;
  }
  CkArrayOptions opts(s1, s2, s3);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_MsmC1HermiteBlock::idx_MsmC1HermiteBlock_marshall1(), opts);
  return gId;
}
void CProxy_MsmC1HermiteBlock::ckNew(int level, const int s1, const int s2, const int s3, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int level
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|level;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|level;
  }
  CkArrayOptions opts(s1, s2, s3);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_MsmC1HermiteBlock::idx_MsmC1HermiteBlock_marshall1(), _ck_array_creation_cb, opts, impl_msg);
}

// Entry point registration function
int CkIndex_MsmC1HermiteBlock::reg_MsmC1HermiteBlock_marshall1() {
  int epidx = CkRegisterEp("MsmC1HermiteBlock(int level)",
      reinterpret_cast<CkCallFnPtr>(_call_MsmC1HermiteBlock_marshall1), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_MsmC1HermiteBlock_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_MsmC1HermiteBlock_marshall1);

  return epidx;
}

void CkIndex_MsmC1HermiteBlock::_call_MsmC1HermiteBlock_marshall1(void* impl_msg, void* impl_obj_void)
{
  MsmC1HermiteBlock* impl_obj = static_cast<MsmC1HermiteBlock*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int level*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> level;
  implP|level;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) MsmC1HermiteBlock(std::move(level.t));
}
int CkIndex_MsmC1HermiteBlock::_callmarshall_MsmC1HermiteBlock_marshall1(char* impl_buf, void* impl_obj_void) {
  MsmC1HermiteBlock* impl_obj = static_cast<MsmC1HermiteBlock*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int level*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> level;
  implP|level;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) MsmC1HermiteBlock(std::move(level.t));
  return implP.size();
}
void CkIndex_MsmC1HermiteBlock::_marshallmessagepup_MsmC1HermiteBlock_marshall1(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int level*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> level;
  implP|level;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("level");
  implDestP|level;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void addCharge(GridMsg* impl_msg);
 */
void CProxy_MsmC1HermiteBlock::addCharge(GridMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_MsmC1HermiteBlock::idx_addCharge_GridMsg(),0);
}

// Entry point registration function
int CkIndex_MsmC1HermiteBlock::reg_addCharge_GridMsg() {
  int epidx = CkRegisterEp("addCharge(GridMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_addCharge_GridMsg), CMessage_GridMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)GridMsg::ckDebugPup);
  return epidx;
}

void CkIndex_MsmC1HermiteBlock::_call_addCharge_GridMsg(void* impl_msg, void* impl_obj_void)
{
  MsmC1HermiteBlock* impl_obj = static_cast<MsmC1HermiteBlock*>(impl_obj_void);
  impl_obj->addCharge((GridMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void addPotential(GridMsg* impl_msg);
 */
void CProxy_MsmC1HermiteBlock::addPotential(GridMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_MsmC1HermiteBlock::idx_addPotential_GridMsg(),0);
}

// Entry point registration function
int CkIndex_MsmC1HermiteBlock::reg_addPotential_GridMsg() {
  int epidx = CkRegisterEp("addPotential(GridMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_addPotential_GridMsg), CMessage_GridMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)GridMsg::ckDebugPup);
  return epidx;
}

void CkIndex_MsmC1HermiteBlock::_call_addPotential_GridMsg(void* impl_msg, void* impl_obj_void)
{
  MsmC1HermiteBlock* impl_obj = static_cast<MsmC1HermiteBlock*>(impl_obj_void);
  impl_obj->addPotential((GridMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sumReducedPotential(CkReductionMsg* impl_msg);
 */
void CProxy_MsmC1HermiteBlock::sumReducedPotential(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_MsmC1HermiteBlock::idx_sumReducedPotential_CkReductionMsg(),0);
}

// Entry point registration function
int CkIndex_MsmC1HermiteBlock::reg_sumReducedPotential_CkReductionMsg() {
  int epidx = CkRegisterEp("sumReducedPotential(CkReductionMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_sumReducedPotential_CkReductionMsg), CMessage_CkReductionMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}

void CkIndex_MsmC1HermiteBlock::_call_sumReducedPotential_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  MsmC1HermiteBlock* impl_obj = static_cast<MsmC1HermiteBlock*>(impl_obj_void);
  impl_obj->sumReducedPotential((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setupSections();
 */
void CProxy_MsmC1HermiteBlock::setupSections(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_MsmC1HermiteBlock::idx_setupSections_void(),0);
}

// Entry point registration function
int CkIndex_MsmC1HermiteBlock::reg_setupSections_void() {
  int epidx = CkRegisterEp("setupSections()",
      reinterpret_cast<CkCallFnPtr>(_call_setupSections_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_MsmC1HermiteBlock::_call_setupSections_void(void* impl_msg, void* impl_obj_void)
{
  MsmC1HermiteBlock* impl_obj = static_cast<MsmC1HermiteBlock*>(impl_obj_void);
  impl_obj->setupSections();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_MsmC1HermiteBlock::setupSections_5_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: MsmC1HermiteBlock(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_MsmC1HermiteBlock::reg_MsmC1HermiteBlock_CkMigrateMessage() {
  int epidx = CkRegisterEp("MsmC1HermiteBlock(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_MsmC1HermiteBlock_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_MsmC1HermiteBlock::_call_MsmC1HermiteBlock_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  call_migration_constructor<MsmC1HermiteBlock> c = impl_obj_void;
  c((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: MsmC1HermiteBlock(int level);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void addCharge(GridMsg* impl_msg);
 */
void CProxySection_MsmC1HermiteBlock::addCharge(GridMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_MsmC1HermiteBlock::idx_addCharge_GridMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void addPotential(GridMsg* impl_msg);
 */
void CProxySection_MsmC1HermiteBlock::addPotential(GridMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_MsmC1HermiteBlock::idx_addPotential_GridMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sumReducedPotential(CkReductionMsg* impl_msg);
 */
void CProxySection_MsmC1HermiteBlock::sumReducedPotential(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_MsmC1HermiteBlock::idx_sumReducedPotential_CkReductionMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setupSections();
 */
void CProxySection_MsmC1HermiteBlock::setupSections(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_MsmC1HermiteBlock::idx_setupSections_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: MsmC1HermiteBlock(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_MsmC1HermiteBlock::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterArrayDimensions(__idx, 3);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
  // REG: MsmC1HermiteBlock(int level);
  idx_MsmC1HermiteBlock_marshall1();

  // REG: void addCharge(GridMsg* impl_msg);
  idx_addCharge_GridMsg();

  // REG: void addPotential(GridMsg* impl_msg);
  idx_addPotential_GridMsg();

  // REG: void sumReducedPotential(CkReductionMsg* impl_msg);
  idx_sumReducedPotential_CkReductionMsg();

  // REG: void setupSections();
  idx_setupSections_void();

  // REG: MsmC1HermiteBlock(CkMigrateMessage* impl_msg);
  idx_MsmC1HermiteBlock_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_MsmC1HermiteBlock_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group MsmGridCutoffMap: CkArrayMap{
MsmGridCutoffMap();
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_MsmGridCutoffMap::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: MsmGridCutoffMap();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: MsmGridCutoffMap();
 */
CkGroupID CProxy_MsmGridCutoffMap::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_MsmGridCutoffMap::__idx, CkIndex_MsmGridCutoffMap::idx_MsmGridCutoffMap_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_MsmGridCutoffMap::reg_MsmGridCutoffMap_void() {
  int epidx = CkRegisterEp("MsmGridCutoffMap()",
      reinterpret_cast<CkCallFnPtr>(_call_MsmGridCutoffMap_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_MsmGridCutoffMap::_call_MsmGridCutoffMap_void(void* impl_msg, void* impl_obj_void)
{
  MsmGridCutoffMap* impl_obj = static_cast<MsmGridCutoffMap*>(impl_obj_void);
  new (impl_obj_void) MsmGridCutoffMap();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: MsmGridCutoffMap();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_MsmGridCutoffMap::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_CkArrayMap::__idx);
   CkRegisterGroupIrr(__idx,MsmGridCutoffMap::isIrreducible());
  // REG: MsmGridCutoffMap();
  idx_MsmGridCutoffMap_void();
  CkRegisterDefaultCtor(__idx, idx_MsmGridCutoffMap_void());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: array MsmGridCutoff: ArrayElement{
MsmGridCutoff();
void setup(MsmGridCutoffInitMsg* impl_msg);
void setupSections(MsmGridCutoffSetupMsg* impl_msg);
void compute(GridMsg* impl_msg);
MsmGridCutoff(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_MsmGridCutoff::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CProxySection_MsmGridCutoff::contribute(CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, userData, fragSize);
}

void CProxySection_MsmGridCutoff::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, userData, fragSize);
}

template <typename T>
void CProxySection_MsmGridCutoff::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, userData, fragSize);
}

void CProxySection_MsmGridCutoff::contribute(CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, cb, userData, fragSize);
}

void CProxySection_MsmGridCutoff::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, cb, userData, fragSize);
}

template <typename T>
void CProxySection_MsmGridCutoff::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, cb, userData, fragSize);
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: MsmGridCutoff();
 */
void CProxyElement_MsmGridCutoff::insert(int onPE, const CkEntryOptions *impl_e_opts)
{ 
   void *impl_msg = CkAllocSysMsg(impl_e_opts);
   UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_MsmGridCutoff::idx_MsmGridCutoff_void(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setup(MsmGridCutoffInitMsg* impl_msg);
 */
void CProxyElement_MsmGridCutoff::setup(MsmGridCutoffInitMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_MsmGridCutoff::idx_setup_MsmGridCutoffInitMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setupSections(MsmGridCutoffSetupMsg* impl_msg);
 */
void CProxyElement_MsmGridCutoff::setupSections(MsmGridCutoffSetupMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_MsmGridCutoff::idx_setupSections_MsmGridCutoffSetupMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void compute(GridMsg* impl_msg);
 */
void CProxyElement_MsmGridCutoff::compute(GridMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_MsmGridCutoff::idx_compute_GridMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: MsmGridCutoff(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: MsmGridCutoff();
 */
CkArrayID CProxy_MsmGridCutoff::ckNew(const CkArrayOptions &opts, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_MsmGridCutoff::idx_MsmGridCutoff_void(), opts);
  return gId;
}
void CProxy_MsmGridCutoff::ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_MsmGridCutoff::idx_MsmGridCutoff_void(), _ck_array_creation_cb, opts, impl_msg);
}
CkArrayID CProxy_MsmGridCutoff::ckNew(const int s1, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_MsmGridCutoff::idx_MsmGridCutoff_void(), opts);
  return gId;
}
void CProxy_MsmGridCutoff::ckNew(const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_MsmGridCutoff::idx_MsmGridCutoff_void(), _ck_array_creation_cb, opts, impl_msg);
}

// Entry point registration function
int CkIndex_MsmGridCutoff::reg_MsmGridCutoff_void() {
  int epidx = CkRegisterEp("MsmGridCutoff()",
      reinterpret_cast<CkCallFnPtr>(_call_MsmGridCutoff_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_MsmGridCutoff::_call_MsmGridCutoff_void(void* impl_msg, void* impl_obj_void)
{
  MsmGridCutoff* impl_obj = static_cast<MsmGridCutoff*>(impl_obj_void);
  new (impl_obj_void) MsmGridCutoff();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setup(MsmGridCutoffInitMsg* impl_msg);
 */
void CProxy_MsmGridCutoff::setup(MsmGridCutoffInitMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_MsmGridCutoff::idx_setup_MsmGridCutoffInitMsg(),0);
}

// Entry point registration function
int CkIndex_MsmGridCutoff::reg_setup_MsmGridCutoffInitMsg() {
  int epidx = CkRegisterEp("setup(MsmGridCutoffInitMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_setup_MsmGridCutoffInitMsg), CMessage_MsmGridCutoffInitMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)MsmGridCutoffInitMsg::ckDebugPup);
  return epidx;
}

void CkIndex_MsmGridCutoff::_call_setup_MsmGridCutoffInitMsg(void* impl_msg, void* impl_obj_void)
{
  MsmGridCutoff* impl_obj = static_cast<MsmGridCutoff*>(impl_obj_void);
  impl_obj->setup((MsmGridCutoffInitMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setupSections(MsmGridCutoffSetupMsg* impl_msg);
 */
void CProxy_MsmGridCutoff::setupSections(MsmGridCutoffSetupMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_MsmGridCutoff::idx_setupSections_MsmGridCutoffSetupMsg(),0);
}

// Entry point registration function
int CkIndex_MsmGridCutoff::reg_setupSections_MsmGridCutoffSetupMsg() {
  int epidx = CkRegisterEp("setupSections(MsmGridCutoffSetupMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_setupSections_MsmGridCutoffSetupMsg), CMessage_MsmGridCutoffSetupMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)MsmGridCutoffSetupMsg::ckDebugPup);
  return epidx;
}

void CkIndex_MsmGridCutoff::_call_setupSections_MsmGridCutoffSetupMsg(void* impl_msg, void* impl_obj_void)
{
  MsmGridCutoff* impl_obj = static_cast<MsmGridCutoff*>(impl_obj_void);
  impl_obj->setupSections((MsmGridCutoffSetupMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void compute(GridMsg* impl_msg);
 */
void CProxy_MsmGridCutoff::compute(GridMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_MsmGridCutoff::idx_compute_GridMsg(),0);
}

// Entry point registration function
int CkIndex_MsmGridCutoff::reg_compute_GridMsg() {
  int epidx = CkRegisterEp("compute(GridMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_compute_GridMsg), CMessage_GridMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)GridMsg::ckDebugPup);
  return epidx;
}

void CkIndex_MsmGridCutoff::_call_compute_GridMsg(void* impl_msg, void* impl_obj_void)
{
  MsmGridCutoff* impl_obj = static_cast<MsmGridCutoff*>(impl_obj_void);
  impl_obj->compute((GridMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: MsmGridCutoff(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_MsmGridCutoff::reg_MsmGridCutoff_CkMigrateMessage() {
  int epidx = CkRegisterEp("MsmGridCutoff(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_MsmGridCutoff_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_MsmGridCutoff::_call_MsmGridCutoff_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  call_migration_constructor<MsmGridCutoff> c = impl_obj_void;
  c((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: MsmGridCutoff();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setup(MsmGridCutoffInitMsg* impl_msg);
 */
void CProxySection_MsmGridCutoff::setup(MsmGridCutoffInitMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_MsmGridCutoff::idx_setup_MsmGridCutoffInitMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setupSections(MsmGridCutoffSetupMsg* impl_msg);
 */
void CProxySection_MsmGridCutoff::setupSections(MsmGridCutoffSetupMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_MsmGridCutoff::idx_setupSections_MsmGridCutoffSetupMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void compute(GridMsg* impl_msg);
 */
void CProxySection_MsmGridCutoff::compute(GridMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_MsmGridCutoff::idx_compute_GridMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: MsmGridCutoff(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_MsmGridCutoff::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterArrayDimensions(__idx, 1);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
  // REG: MsmGridCutoff();
  idx_MsmGridCutoff_void();
  CkRegisterDefaultCtor(__idx, idx_MsmGridCutoff_void());

  // REG: void setup(MsmGridCutoffInitMsg* impl_msg);
  idx_setup_MsmGridCutoffInitMsg();

  // REG: void setupSections(MsmGridCutoffSetupMsg* impl_msg);
  idx_setupSections_MsmGridCutoffSetupMsg();

  // REG: void compute(GridMsg* impl_msg);
  idx_compute_GridMsg();

  // REG: MsmGridCutoff(CkMigrateMessage* impl_msg);
  idx_MsmGridCutoff_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_MsmGridCutoff_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: array MsmC1HermiteGridCutoff: ArrayElement{
MsmC1HermiteGridCutoff();
void setup(MsmGridCutoffInitMsg* impl_msg);
void setupSections(MsmC1HermiteGridCutoffSetupMsg* impl_msg);
void compute(GridMsg* impl_msg);
MsmC1HermiteGridCutoff(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_MsmC1HermiteGridCutoff::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CProxySection_MsmC1HermiteGridCutoff::contribute(CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, userData, fragSize);
}

void CProxySection_MsmC1HermiteGridCutoff::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, userData, fragSize);
}

template <typename T>
void CProxySection_MsmC1HermiteGridCutoff::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, userData, fragSize);
}

void CProxySection_MsmC1HermiteGridCutoff::contribute(CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, cb, userData, fragSize);
}

void CProxySection_MsmC1HermiteGridCutoff::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, cb, userData, fragSize);
}

template <typename T>
void CProxySection_MsmC1HermiteGridCutoff::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, cb, userData, fragSize);
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: MsmC1HermiteGridCutoff();
 */
void CProxyElement_MsmC1HermiteGridCutoff::insert(int onPE, const CkEntryOptions *impl_e_opts)
{ 
   void *impl_msg = CkAllocSysMsg(impl_e_opts);
   UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_MsmC1HermiteGridCutoff::idx_MsmC1HermiteGridCutoff_void(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setup(MsmGridCutoffInitMsg* impl_msg);
 */
void CProxyElement_MsmC1HermiteGridCutoff::setup(MsmGridCutoffInitMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_MsmC1HermiteGridCutoff::idx_setup_MsmGridCutoffInitMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setupSections(MsmC1HermiteGridCutoffSetupMsg* impl_msg);
 */
void CProxyElement_MsmC1HermiteGridCutoff::setupSections(MsmC1HermiteGridCutoffSetupMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_MsmC1HermiteGridCutoff::idx_setupSections_MsmC1HermiteGridCutoffSetupMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void compute(GridMsg* impl_msg);
 */
void CProxyElement_MsmC1HermiteGridCutoff::compute(GridMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_MsmC1HermiteGridCutoff::idx_compute_GridMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: MsmC1HermiteGridCutoff(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: MsmC1HermiteGridCutoff();
 */
CkArrayID CProxy_MsmC1HermiteGridCutoff::ckNew(const CkArrayOptions &opts, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_MsmC1HermiteGridCutoff::idx_MsmC1HermiteGridCutoff_void(), opts);
  return gId;
}
void CProxy_MsmC1HermiteGridCutoff::ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_MsmC1HermiteGridCutoff::idx_MsmC1HermiteGridCutoff_void(), _ck_array_creation_cb, opts, impl_msg);
}
CkArrayID CProxy_MsmC1HermiteGridCutoff::ckNew(const int s1, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_MsmC1HermiteGridCutoff::idx_MsmC1HermiteGridCutoff_void(), opts);
  return gId;
}
void CProxy_MsmC1HermiteGridCutoff::ckNew(const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_MsmC1HermiteGridCutoff::idx_MsmC1HermiteGridCutoff_void(), _ck_array_creation_cb, opts, impl_msg);
}

// Entry point registration function
int CkIndex_MsmC1HermiteGridCutoff::reg_MsmC1HermiteGridCutoff_void() {
  int epidx = CkRegisterEp("MsmC1HermiteGridCutoff()",
      reinterpret_cast<CkCallFnPtr>(_call_MsmC1HermiteGridCutoff_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_MsmC1HermiteGridCutoff::_call_MsmC1HermiteGridCutoff_void(void* impl_msg, void* impl_obj_void)
{
  MsmC1HermiteGridCutoff* impl_obj = static_cast<MsmC1HermiteGridCutoff*>(impl_obj_void);
  new (impl_obj_void) MsmC1HermiteGridCutoff();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setup(MsmGridCutoffInitMsg* impl_msg);
 */
void CProxy_MsmC1HermiteGridCutoff::setup(MsmGridCutoffInitMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_MsmC1HermiteGridCutoff::idx_setup_MsmGridCutoffInitMsg(),0);
}

// Entry point registration function
int CkIndex_MsmC1HermiteGridCutoff::reg_setup_MsmGridCutoffInitMsg() {
  int epidx = CkRegisterEp("setup(MsmGridCutoffInitMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_setup_MsmGridCutoffInitMsg), CMessage_MsmGridCutoffInitMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)MsmGridCutoffInitMsg::ckDebugPup);
  return epidx;
}

void CkIndex_MsmC1HermiteGridCutoff::_call_setup_MsmGridCutoffInitMsg(void* impl_msg, void* impl_obj_void)
{
  MsmC1HermiteGridCutoff* impl_obj = static_cast<MsmC1HermiteGridCutoff*>(impl_obj_void);
  impl_obj->setup((MsmGridCutoffInitMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setupSections(MsmC1HermiteGridCutoffSetupMsg* impl_msg);
 */
void CProxy_MsmC1HermiteGridCutoff::setupSections(MsmC1HermiteGridCutoffSetupMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_MsmC1HermiteGridCutoff::idx_setupSections_MsmC1HermiteGridCutoffSetupMsg(),0);
}

// Entry point registration function
int CkIndex_MsmC1HermiteGridCutoff::reg_setupSections_MsmC1HermiteGridCutoffSetupMsg() {
  int epidx = CkRegisterEp("setupSections(MsmC1HermiteGridCutoffSetupMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_setupSections_MsmC1HermiteGridCutoffSetupMsg), CMessage_MsmC1HermiteGridCutoffSetupMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)MsmC1HermiteGridCutoffSetupMsg::ckDebugPup);
  return epidx;
}

void CkIndex_MsmC1HermiteGridCutoff::_call_setupSections_MsmC1HermiteGridCutoffSetupMsg(void* impl_msg, void* impl_obj_void)
{
  MsmC1HermiteGridCutoff* impl_obj = static_cast<MsmC1HermiteGridCutoff*>(impl_obj_void);
  impl_obj->setupSections((MsmC1HermiteGridCutoffSetupMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void compute(GridMsg* impl_msg);
 */
void CProxy_MsmC1HermiteGridCutoff::compute(GridMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_MsmC1HermiteGridCutoff::idx_compute_GridMsg(),0);
}

// Entry point registration function
int CkIndex_MsmC1HermiteGridCutoff::reg_compute_GridMsg() {
  int epidx = CkRegisterEp("compute(GridMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_compute_GridMsg), CMessage_GridMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)GridMsg::ckDebugPup);
  return epidx;
}

void CkIndex_MsmC1HermiteGridCutoff::_call_compute_GridMsg(void* impl_msg, void* impl_obj_void)
{
  MsmC1HermiteGridCutoff* impl_obj = static_cast<MsmC1HermiteGridCutoff*>(impl_obj_void);
  impl_obj->compute((GridMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: MsmC1HermiteGridCutoff(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_MsmC1HermiteGridCutoff::reg_MsmC1HermiteGridCutoff_CkMigrateMessage() {
  int epidx = CkRegisterEp("MsmC1HermiteGridCutoff(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_MsmC1HermiteGridCutoff_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_MsmC1HermiteGridCutoff::_call_MsmC1HermiteGridCutoff_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  call_migration_constructor<MsmC1HermiteGridCutoff> c = impl_obj_void;
  c((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: MsmC1HermiteGridCutoff();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setup(MsmGridCutoffInitMsg* impl_msg);
 */
void CProxySection_MsmC1HermiteGridCutoff::setup(MsmGridCutoffInitMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_MsmC1HermiteGridCutoff::idx_setup_MsmGridCutoffInitMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setupSections(MsmC1HermiteGridCutoffSetupMsg* impl_msg);
 */
void CProxySection_MsmC1HermiteGridCutoff::setupSections(MsmC1HermiteGridCutoffSetupMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_MsmC1HermiteGridCutoff::idx_setupSections_MsmC1HermiteGridCutoffSetupMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void compute(GridMsg* impl_msg);
 */
void CProxySection_MsmC1HermiteGridCutoff::compute(GridMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_MsmC1HermiteGridCutoff::idx_compute_GridMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: MsmC1HermiteGridCutoff(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_MsmC1HermiteGridCutoff::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterArrayDimensions(__idx, 1);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
  // REG: MsmC1HermiteGridCutoff();
  idx_MsmC1HermiteGridCutoff_void();
  CkRegisterDefaultCtor(__idx, idx_MsmC1HermiteGridCutoff_void());

  // REG: void setup(MsmGridCutoffInitMsg* impl_msg);
  idx_setup_MsmGridCutoffInitMsg();

  // REG: void setupSections(MsmC1HermiteGridCutoffSetupMsg* impl_msg);
  idx_setupSections_MsmC1HermiteGridCutoffSetupMsg();

  // REG: void compute(GridMsg* impl_msg);
  idx_compute_GridMsg();

  // REG: MsmC1HermiteGridCutoff(CkMigrateMessage* impl_msg);
  idx_MsmC1HermiteGridCutoff_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_MsmC1HermiteGridCutoff_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: chare MsmTimer: Chare{
MsmTimer();
void done(const double *tm, int n);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_MsmTimer::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: MsmTimer();
 */
CkChareID CProxy_MsmTimer::ckNew(int impl_onPE, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkChareID impl_ret;
  CkCreateChare(CkIndex_MsmTimer::__idx, CkIndex_MsmTimer::idx_MsmTimer_void(), impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}
void CProxy_MsmTimer::ckNew(CkChareID* pcid, int impl_onPE, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkCreateChare(CkIndex_MsmTimer::__idx, CkIndex_MsmTimer::idx_MsmTimer_void(), impl_msg, pcid, impl_onPE);
}

// Entry point registration function
int CkIndex_MsmTimer::reg_MsmTimer_void() {
  int epidx = CkRegisterEp("MsmTimer()",
      reinterpret_cast<CkCallFnPtr>(_call_MsmTimer_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_MsmTimer::_call_MsmTimer_void(void* impl_msg, void* impl_obj_void)
{
  MsmTimer* impl_obj = static_cast<MsmTimer*>(impl_obj_void);
  new (impl_obj_void) MsmTimer();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void done(const double *tm, int n);
 */
void CProxy_MsmTimer::done(const double *tm, int n, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const double *tm, int n
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_tm, impl_cnt_tm;
  impl_off_tm=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_tm=sizeof(double)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_tm;
    implP|impl_cnt_tm;
    implP|n;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_tm;
    implP|impl_cnt_tm;
    implP|n;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_tm,tm,impl_cnt_tm);
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_MsmTimer::idx_done_marshall2(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_MsmTimer::idx_done_marshall2(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_MsmTimer::idx_done_marshall2(), impl_msg, &ckGetChareID(),0);
  }
}
void CkIndex_MsmTimer::_call_redn_wrapper_done_marshall2(void* impl_msg, void* impl_obj_void)
{
  MsmTimer* impl_obj = static_cast<MsmTimer*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  /*Unmarshall pup'd fields: const double *tm, int n*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> n; n.t = ((CkReductionMsg*)impl_msg)->getLength() / sizeof(double);
  double* tm; tm = (double*)impl_buf;
  impl_obj->done(tm, std::move(n.t));
  delete (CkReductionMsg*)impl_msg;
}


// Entry point registration function
int CkIndex_MsmTimer::reg_done_marshall2() {
  int epidx = CkRegisterEp("done(const double *tm, int n)",
      reinterpret_cast<CkCallFnPtr>(_call_done_marshall2), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_done_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_done_marshall2);

  return epidx;
}


// Redn wrapper registration function
int CkIndex_MsmTimer::reg_redn_wrapper_done_marshall2() {
  return CkRegisterEp("redn_wrapper_done(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_done_marshall2), CkMarshallMsg::__idx, __idx, 0);
}

void CkIndex_MsmTimer::_call_done_marshall2(void* impl_msg, void* impl_obj_void)
{
  MsmTimer* impl_obj = static_cast<MsmTimer*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const double *tm, int n*/
  PUP::fromMem implP(impl_buf);
  int impl_off_tm, impl_cnt_tm;
  implP|impl_off_tm;
  implP|impl_cnt_tm;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *tm=(double *)(impl_buf+impl_off_tm);
  impl_obj->done(tm, std::move(n.t));
}
int CkIndex_MsmTimer::_callmarshall_done_marshall2(char* impl_buf, void* impl_obj_void) {
  MsmTimer* impl_obj = static_cast<MsmTimer*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const double *tm, int n*/
  PUP::fromMem implP(impl_buf);
  int impl_off_tm, impl_cnt_tm;
  implP|impl_off_tm;
  implP|impl_cnt_tm;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *tm=(double *)(impl_buf+impl_off_tm);
  impl_obj->done(tm, std::move(n.t));
  return implP.size();
}
void CkIndex_MsmTimer::_marshallmessagepup_done_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const double *tm, int n*/
  PUP::fromMem implP(impl_buf);
  int impl_off_tm, impl_cnt_tm;
  implP|impl_off_tm;
  implP|impl_cnt_tm;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *tm=(double *)(impl_buf+impl_off_tm);
  if (implDestP.hasComments()) implDestP.comment("tm");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*tm))<impl_cnt_tm;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|tm[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("n");
  implDestP|n;
}
PUPable_def(SINGLE_ARG(Closure_MsmTimer::done_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_MsmTimer::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeChare);
  CkRegisterBase(__idx, CkIndex_Chare::__idx);
  // REG: MsmTimer();
  idx_MsmTimer_void();
  CkRegisterDefaultCtor(__idx, idx_MsmTimer_void());

  // REG: void done(const double *tm, int n);
  idx_done_marshall2();
  idx_redn_wrapper_done_marshall2();

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: chare MsmProfiler: Chare{
MsmProfiler();
void done(const int *tm, int n);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_MsmProfiler::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: MsmProfiler();
 */
CkChareID CProxy_MsmProfiler::ckNew(int impl_onPE, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkChareID impl_ret;
  CkCreateChare(CkIndex_MsmProfiler::__idx, CkIndex_MsmProfiler::idx_MsmProfiler_void(), impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}
void CProxy_MsmProfiler::ckNew(CkChareID* pcid, int impl_onPE, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkCreateChare(CkIndex_MsmProfiler::__idx, CkIndex_MsmProfiler::idx_MsmProfiler_void(), impl_msg, pcid, impl_onPE);
}

// Entry point registration function
int CkIndex_MsmProfiler::reg_MsmProfiler_void() {
  int epidx = CkRegisterEp("MsmProfiler()",
      reinterpret_cast<CkCallFnPtr>(_call_MsmProfiler_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_MsmProfiler::_call_MsmProfiler_void(void* impl_msg, void* impl_obj_void)
{
  MsmProfiler* impl_obj = static_cast<MsmProfiler*>(impl_obj_void);
  new (impl_obj_void) MsmProfiler();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void done(const int *tm, int n);
 */
void CProxy_MsmProfiler::done(const int *tm, int n, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const int *tm, int n
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_tm, impl_cnt_tm;
  impl_off_tm=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_tm=sizeof(int)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_tm;
    implP|impl_cnt_tm;
    implP|n;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_tm;
    implP|impl_cnt_tm;
    implP|n;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_tm,tm,impl_cnt_tm);
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_MsmProfiler::idx_done_marshall2(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_MsmProfiler::idx_done_marshall2(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_MsmProfiler::idx_done_marshall2(), impl_msg, &ckGetChareID(),0);
  }
}
void CkIndex_MsmProfiler::_call_redn_wrapper_done_marshall2(void* impl_msg, void* impl_obj_void)
{
  MsmProfiler* impl_obj = static_cast<MsmProfiler*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  /*Unmarshall pup'd fields: const int *tm, int n*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> n; n.t = ((CkReductionMsg*)impl_msg)->getLength() / sizeof(int);
  int* tm; tm = (int*)impl_buf;
  impl_obj->done(tm, std::move(n.t));
  delete (CkReductionMsg*)impl_msg;
}


// Entry point registration function
int CkIndex_MsmProfiler::reg_done_marshall2() {
  int epidx = CkRegisterEp("done(const int *tm, int n)",
      reinterpret_cast<CkCallFnPtr>(_call_done_marshall2), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_done_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_done_marshall2);

  return epidx;
}


// Redn wrapper registration function
int CkIndex_MsmProfiler::reg_redn_wrapper_done_marshall2() {
  return CkRegisterEp("redn_wrapper_done(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_done_marshall2), CkMarshallMsg::__idx, __idx, 0);
}

void CkIndex_MsmProfiler::_call_done_marshall2(void* impl_msg, void* impl_obj_void)
{
  MsmProfiler* impl_obj = static_cast<MsmProfiler*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const int *tm, int n*/
  PUP::fromMem implP(impl_buf);
  int impl_off_tm, impl_cnt_tm;
  implP|impl_off_tm;
  implP|impl_cnt_tm;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *tm=(int *)(impl_buf+impl_off_tm);
  impl_obj->done(tm, std::move(n.t));
}
int CkIndex_MsmProfiler::_callmarshall_done_marshall2(char* impl_buf, void* impl_obj_void) {
  MsmProfiler* impl_obj = static_cast<MsmProfiler*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const int *tm, int n*/
  PUP::fromMem implP(impl_buf);
  int impl_off_tm, impl_cnt_tm;
  implP|impl_off_tm;
  implP|impl_cnt_tm;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *tm=(int *)(impl_buf+impl_off_tm);
  impl_obj->done(tm, std::move(n.t));
  return implP.size();
}
void CkIndex_MsmProfiler::_marshallmessagepup_done_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const int *tm, int n*/
  PUP::fromMem implP(impl_buf);
  int impl_off_tm, impl_cnt_tm;
  implP|impl_off_tm;
  implP|impl_cnt_tm;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *tm=(int *)(impl_buf+impl_off_tm);
  if (implDestP.hasComments()) implDestP.comment("tm");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*tm))<impl_cnt_tm;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|tm[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("n");
  implDestP|n;
}
PUPable_def(SINGLE_ARG(Closure_MsmProfiler::done_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_MsmProfiler::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeChare);
  CkRegisterBase(__idx, CkIndex_Chare::__idx);
  // REG: MsmProfiler();
  idx_MsmProfiler_void();
  CkRegisterDefaultCtor(__idx, idx_MsmProfiler_void());

  // REG: void done(const int *tm, int n);
  idx_done_marshall2();
  idx_redn_wrapper_done_marshall2();

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerComputeMsmMgr(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: message MsmInitMsg;
*/
CMessage_MsmInitMsg::__register("MsmInitMsg", sizeof(MsmInitMsg),(CkPackFnPtr) MsmInitMsg::pack,(CkUnpackFnPtr) MsmInitMsg::unpack);

/* REG: message GridMsg{
char gdata[];
}
;
*/
CMessage_GridMsg::__register("GridMsg", sizeof(GridMsg),(CkPackFnPtr) GridMsg::pack,(CkUnpackFnPtr) GridMsg::unpack);

/* REG: message MsmBlockProxyMsg;
*/
CMessage_MsmBlockProxyMsg::__register("MsmBlockProxyMsg", sizeof(MsmBlockProxyMsg),(CkPackFnPtr) MsmBlockProxyMsg::pack,(CkUnpackFnPtr) MsmBlockProxyMsg::unpack);

/* REG: message MsmC1HermiteBlockProxyMsg;
*/
CMessage_MsmC1HermiteBlockProxyMsg::__register("MsmC1HermiteBlockProxyMsg", sizeof(MsmC1HermiteBlockProxyMsg),(CkPackFnPtr) MsmC1HermiteBlockProxyMsg::pack,(CkUnpackFnPtr) MsmC1HermiteBlockProxyMsg::unpack);

/* REG: message MsmGridCutoffProxyMsg;
*/
CMessage_MsmGridCutoffProxyMsg::__register("MsmGridCutoffProxyMsg", sizeof(MsmGridCutoffProxyMsg),(CkPackFnPtr) MsmGridCutoffProxyMsg::pack,(CkUnpackFnPtr) MsmGridCutoffProxyMsg::unpack);

/* REG: message MsmC1HermiteGridCutoffProxyMsg;
*/
CMessage_MsmC1HermiteGridCutoffProxyMsg::__register("MsmC1HermiteGridCutoffProxyMsg", sizeof(MsmC1HermiteGridCutoffProxyMsg),(CkPackFnPtr) MsmC1HermiteGridCutoffProxyMsg::pack,(CkUnpackFnPtr) MsmC1HermiteGridCutoffProxyMsg::unpack);

/* REG: message MsmGridCutoffInitMsg;
*/
CMessage_MsmGridCutoffInitMsg::__register("MsmGridCutoffInitMsg", sizeof(MsmGridCutoffInitMsg),(CkPackFnPtr) MsmGridCutoffInitMsg::pack,(CkUnpackFnPtr) MsmGridCutoffInitMsg::unpack);

/* REG: message MsmGridCutoffSetupMsg;
*/
CMessage_MsmGridCutoffSetupMsg::__register("MsmGridCutoffSetupMsg", sizeof(MsmGridCutoffSetupMsg),(CkPackFnPtr) MsmGridCutoffSetupMsg::pack,(CkUnpackFnPtr) MsmGridCutoffSetupMsg::unpack);

/* REG: message MsmC1HermiteGridCutoffSetupMsg;
*/
CMessage_MsmC1HermiteGridCutoffSetupMsg::__register("MsmC1HermiteGridCutoffSetupMsg", sizeof(MsmC1HermiteGridCutoffSetupMsg),(CkPackFnPtr) MsmC1HermiteGridCutoffSetupMsg::pack,(CkUnpackFnPtr) MsmC1HermiteGridCutoffSetupMsg::unpack);

/* REG: group ComputeMsmMgr: IrrGroup{
ComputeMsmMgr();
void initialize(MsmInitMsg* impl_msg);
void initialize_create();
void recvMsmBlockProxy(MsmBlockProxyMsg* impl_msg);
void recvMsmGridCutoffProxy(MsmGridCutoffProxyMsg* impl_msg);
void recvMsmC1HermiteBlockProxy(MsmC1HermiteBlockProxyMsg* impl_msg);
void recvMsmC1HermiteGridCutoffProxy(MsmC1HermiteGridCutoffProxyMsg* impl_msg);
void update(CkQdMsg* impl_msg);
void addPotential(GridMsg* impl_msg);
};
*/
  CkIndex_ComputeMsmMgr::__register("ComputeMsmMgr", sizeof(ComputeMsmMgr));

/* REG: group MsmBlockMap: CkArrayMap{
MsmBlockMap(int level);
};
*/
  CkIndex_MsmBlockMap::__register("MsmBlockMap", sizeof(MsmBlockMap));

/* REG: array MsmBlock: ArrayElement{
MsmBlock(int level);
void addCharge(GridMsg* impl_msg);
void addPotential(GridMsg* impl_msg);
void sumReducedPotential(CkReductionMsg* impl_msg);
void setupSections();
MsmBlock(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_MsmBlock::__register("MsmBlock", sizeof(MsmBlock));

/* REG: array MsmC1HermiteBlock: ArrayElement{
MsmC1HermiteBlock(int level);
void addCharge(GridMsg* impl_msg);
void addPotential(GridMsg* impl_msg);
void sumReducedPotential(CkReductionMsg* impl_msg);
void setupSections();
MsmC1HermiteBlock(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_MsmC1HermiteBlock::__register("MsmC1HermiteBlock", sizeof(MsmC1HermiteBlock));

/* REG: group MsmGridCutoffMap: CkArrayMap{
MsmGridCutoffMap();
};
*/
  CkIndex_MsmGridCutoffMap::__register("MsmGridCutoffMap", sizeof(MsmGridCutoffMap));

/* REG: array MsmGridCutoff: ArrayElement{
MsmGridCutoff();
void setup(MsmGridCutoffInitMsg* impl_msg);
void setupSections(MsmGridCutoffSetupMsg* impl_msg);
void compute(GridMsg* impl_msg);
MsmGridCutoff(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_MsmGridCutoff::__register("MsmGridCutoff", sizeof(MsmGridCutoff));

/* REG: array MsmC1HermiteGridCutoff: ArrayElement{
MsmC1HermiteGridCutoff();
void setup(MsmGridCutoffInitMsg* impl_msg);
void setupSections(MsmC1HermiteGridCutoffSetupMsg* impl_msg);
void compute(GridMsg* impl_msg);
MsmC1HermiteGridCutoff(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_MsmC1HermiteGridCutoff::__register("MsmC1HermiteGridCutoff", sizeof(MsmC1HermiteGridCutoff));

/* REG: chare MsmTimer: Chare{
MsmTimer();
void done(const double *tm, int n);
};
*/
  CkIndex_MsmTimer::__register("MsmTimer", sizeof(MsmTimer));

/* REG: chare MsmProfiler: Chare{
MsmProfiler();
void done(const int *tm, int n);
};
*/
  CkIndex_MsmProfiler::__register("MsmProfiler", sizeof(MsmProfiler));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_ComputeMsmMgr::virtual_pup(PUP::er &p) {
    recursive_pup<ComputeMsmMgr>(dynamic_cast<ComputeMsmMgr*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_MsmBlockMap::virtual_pup(PUP::er &p) {
    recursive_pup<MsmBlockMap>(dynamic_cast<MsmBlockMap*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_MsmBlock::virtual_pup(PUP::er &p) {
    recursive_pup<MsmBlock>(dynamic_cast<MsmBlock*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_MsmC1HermiteBlock::virtual_pup(PUP::er &p) {
    recursive_pup<MsmC1HermiteBlock>(dynamic_cast<MsmC1HermiteBlock*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_MsmGridCutoffMap::virtual_pup(PUP::er &p) {
    recursive_pup<MsmGridCutoffMap>(dynamic_cast<MsmGridCutoffMap*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_MsmGridCutoff::virtual_pup(PUP::er &p) {
    recursive_pup<MsmGridCutoff>(dynamic_cast<MsmGridCutoff*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_MsmC1HermiteGridCutoff::virtual_pup(PUP::er &p) {
    recursive_pup<MsmC1HermiteGridCutoff>(dynamic_cast<MsmC1HermiteGridCutoff*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_MsmTimer::virtual_pup(PUP::er &p) {
    recursive_pup<MsmTimer>(dynamic_cast<MsmTimer*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_MsmProfiler::virtual_pup(PUP::er &p) {
    recursive_pup<MsmProfiler>(dynamic_cast<MsmProfiler*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
