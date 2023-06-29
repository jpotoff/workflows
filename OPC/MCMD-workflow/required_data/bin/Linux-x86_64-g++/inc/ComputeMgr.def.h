







/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ComputeMgr::updateComputes3_3_closure : public SDAG::Closure {
      

      updateComputes3_3_closure() {
        init();
      }
      updateComputes3_3_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~updateComputes3_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(updateComputes3_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ComputeMgr::splitComputes_4_closure : public SDAG::Closure {
      

      splitComputes_4_closure() {
        init();
      }
      splitComputes_4_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~splitComputes_4_closure() {
      }
      PUPable_decl(SINGLE_ARG(splitComputes_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ComputeMgr::updateLocalComputes_6_closure : public SDAG::Closure {
      

      updateLocalComputes_6_closure() {
        init();
      }
      updateLocalComputes_6_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~updateLocalComputes_6_closure() {
      }
      PUPable_decl(SINGLE_ARG(updateLocalComputes_6_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ComputeMgr::updateLocalComputes3_8_closure : public SDAG::Closure {
      

      updateLocalComputes3_8_closure() {
        init();
      }
      updateLocalComputes3_8_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~updateLocalComputes3_8_closure() {
      }
      PUPable_decl(SINGLE_ARG(updateLocalComputes3_8_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ComputeMgr::updateLocalComputes5_10_closure : public SDAG::Closure {
      

      updateLocalComputes5_10_closure() {
        init();
      }
      updateLocalComputes5_10_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~updateLocalComputes5_10_closure() {
      }
      PUPable_decl(SINGLE_ARG(updateLocalComputes5_10_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ComputeMgr::doneUpdateLocalComputes_11_closure : public SDAG::Closure {
      

      doneUpdateLocalComputes_11_closure() {
        init();
      }
      doneUpdateLocalComputes_11_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~doneUpdateLocalComputes_11_closure() {
      }
      PUPable_decl(SINGLE_ARG(doneUpdateLocalComputes_11_closure));
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

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ComputeMgr::recvYieldDevice_19_closure : public SDAG::Closure {
            int pe;


      recvYieldDevice_19_closure() {
        init();
      }
      recvYieldDevice_19_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return pe;}
      void pup(PUP::er& __p) {
        __p | pe;
        packClosure(__p);
      }
      virtual ~recvYieldDevice_19_closure() {
      }
      PUPable_decl(SINGLE_ARG(recvYieldDevice_19_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ComputeMgr::recvBuildMICForceTable_20_closure : public SDAG::Closure {
      

      recvBuildMICForceTable_20_closure() {
        init();
      }
      recvBuildMICForceTable_20_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~recvBuildMICForceTable_20_closure() {
      }
      PUPable_decl(SINGLE_ARG(recvBuildMICForceTable_20_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ComputeMgr::recvNonbondedMICSlaveReady_22_closure : public SDAG::Closure {
            int impl_noname_0;
            int impl_noname_1;
            int impl_noname_2;


      recvNonbondedMICSlaveReady_22_closure() {
        init();
      }
      recvNonbondedMICSlaveReady_22_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return impl_noname_0;}
            int & getP1() { return impl_noname_1;}
            int & getP2() { return impl_noname_2;}
      void pup(PUP::er& __p) {
        __p | impl_noname_0;
        __p | impl_noname_1;
        __p | impl_noname_2;
        packClosure(__p);
      }
      virtual ~recvNonbondedMICSlaveReady_22_closure() {
      }
      PUPable_decl(SINGLE_ARG(recvNonbondedMICSlaveReady_22_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ComputeMgr::recvMICPEData_24_closure : public SDAG::Closure {
            int impl_noname_3;
            int impl_noname_4;


      recvMICPEData_24_closure() {
        init();
      }
      recvMICPEData_24_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return impl_noname_3;}
            int & getP1() { return impl_noname_4;}
      void pup(PUP::er& __p) {
        __p | impl_noname_3;
        __p | impl_noname_4;
        packClosure(__p);
      }
      virtual ~recvMICPEData_24_closure() {
      }
      PUPable_decl(SINGLE_ARG(recvMICPEData_24_closure));
    };
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: message ComputeGlobalDataMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_ComputeGlobalDataMsg::operator new(size_t s){
  return ComputeGlobalDataMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_ComputeGlobalDataMsg::operator new(size_t s, int* sz){
  return ComputeGlobalDataMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_ComputeGlobalDataMsg::operator new(size_t s, int* sz,const int pb){
  return ComputeGlobalDataMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_ComputeGlobalDataMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return ComputeGlobalDataMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_ComputeGlobalDataMsg::operator new(size_t s, const int p) {
  return ComputeGlobalDataMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_ComputeGlobalDataMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return ComputeGlobalDataMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_ComputeGlobalDataMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_ComputeGlobalDataMsg::CMessage_ComputeGlobalDataMsg() {
ComputeGlobalDataMsg *newmsg = (ComputeGlobalDataMsg *)this;
}
void CMessage_ComputeGlobalDataMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_ComputeGlobalDataMsg::pack(ComputeGlobalDataMsg *msg) {
  return (void *) msg;
}
ComputeGlobalDataMsg* CMessage_ComputeGlobalDataMsg::unpack(void* buf) {
  ComputeGlobalDataMsg *msg = (ComputeGlobalDataMsg *) buf;
  return msg;
}
int CMessage_ComputeGlobalDataMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message ComputeGlobalResultsMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_ComputeGlobalResultsMsg::operator new(size_t s){
  return ComputeGlobalResultsMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_ComputeGlobalResultsMsg::operator new(size_t s, int* sz){
  return ComputeGlobalResultsMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_ComputeGlobalResultsMsg::operator new(size_t s, int* sz,const int pb){
  return ComputeGlobalResultsMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_ComputeGlobalResultsMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return ComputeGlobalResultsMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_ComputeGlobalResultsMsg::operator new(size_t s, const int p) {
  return ComputeGlobalResultsMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_ComputeGlobalResultsMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return ComputeGlobalResultsMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_ComputeGlobalResultsMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_ComputeGlobalResultsMsg::CMessage_ComputeGlobalResultsMsg() {
ComputeGlobalResultsMsg *newmsg = (ComputeGlobalResultsMsg *)this;
}
void CMessage_ComputeGlobalResultsMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_ComputeGlobalResultsMsg::pack(ComputeGlobalResultsMsg *msg) {
  return (void *) msg;
}
ComputeGlobalResultsMsg* CMessage_ComputeGlobalResultsMsg::unpack(void* buf) {
  ComputeGlobalResultsMsg *msg = (ComputeGlobalResultsMsg *) buf;
  return msg;
}
int CMessage_ComputeGlobalResultsMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message ComputeDPMEDataMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_ComputeDPMEDataMsg::operator new(size_t s){
  return ComputeDPMEDataMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_ComputeDPMEDataMsg::operator new(size_t s, int* sz){
  return ComputeDPMEDataMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_ComputeDPMEDataMsg::operator new(size_t s, int* sz,const int pb){
  return ComputeDPMEDataMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_ComputeDPMEDataMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return ComputeDPMEDataMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_ComputeDPMEDataMsg::operator new(size_t s, const int p) {
  return ComputeDPMEDataMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_ComputeDPMEDataMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return ComputeDPMEDataMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_ComputeDPMEDataMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_ComputeDPMEDataMsg::CMessage_ComputeDPMEDataMsg() {
ComputeDPMEDataMsg *newmsg = (ComputeDPMEDataMsg *)this;
}
void CMessage_ComputeDPMEDataMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_ComputeDPMEDataMsg::pack(ComputeDPMEDataMsg *msg) {
  return (void *) msg;
}
ComputeDPMEDataMsg* CMessage_ComputeDPMEDataMsg::unpack(void* buf) {
  ComputeDPMEDataMsg *msg = (ComputeDPMEDataMsg *) buf;
  return msg;
}
int CMessage_ComputeDPMEDataMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message ComputeDPMEResultsMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_ComputeDPMEResultsMsg::operator new(size_t s){
  return ComputeDPMEResultsMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_ComputeDPMEResultsMsg::operator new(size_t s, int* sz){
  return ComputeDPMEResultsMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_ComputeDPMEResultsMsg::operator new(size_t s, int* sz,const int pb){
  return ComputeDPMEResultsMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_ComputeDPMEResultsMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return ComputeDPMEResultsMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_ComputeDPMEResultsMsg::operator new(size_t s, const int p) {
  return ComputeDPMEResultsMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_ComputeDPMEResultsMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return ComputeDPMEResultsMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_ComputeDPMEResultsMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_ComputeDPMEResultsMsg::CMessage_ComputeDPMEResultsMsg() {
ComputeDPMEResultsMsg *newmsg = (ComputeDPMEResultsMsg *)this;
}
void CMessage_ComputeDPMEResultsMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_ComputeDPMEResultsMsg::pack(ComputeDPMEResultsMsg *msg) {
  return (void *) msg;
}
ComputeDPMEResultsMsg* CMessage_ComputeDPMEResultsMsg::unpack(void* buf) {
  ComputeDPMEResultsMsg *msg = (ComputeDPMEResultsMsg *) buf;
  return msg;
}
int CMessage_ComputeDPMEResultsMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message ComputeConsForceMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_ComputeConsForceMsg::operator new(size_t s){
  return ComputeConsForceMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_ComputeConsForceMsg::operator new(size_t s, int* sz){
  return ComputeConsForceMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_ComputeConsForceMsg::operator new(size_t s, int* sz,const int pb){
  return ComputeConsForceMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_ComputeConsForceMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return ComputeConsForceMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_ComputeConsForceMsg::operator new(size_t s, const int p) {
  return ComputeConsForceMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_ComputeConsForceMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return ComputeConsForceMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_ComputeConsForceMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_ComputeConsForceMsg::CMessage_ComputeConsForceMsg() {
ComputeConsForceMsg *newmsg = (ComputeConsForceMsg *)this;
}
void CMessage_ComputeConsForceMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_ComputeConsForceMsg::pack(ComputeConsForceMsg *msg) {
  return (void *) msg;
}
ComputeConsForceMsg* CMessage_ComputeConsForceMsg::unpack(void* buf) {
  ComputeConsForceMsg *msg = (ComputeConsForceMsg *) buf;
  return msg;
}
int CMessage_ComputeConsForceMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message ComputeEwaldMsg{
float eik[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_ComputeEwaldMsg::operator new(size_t s){
  return ComputeEwaldMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_ComputeEwaldMsg::operator new(size_t s, int* sz){
  return ComputeEwaldMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_ComputeEwaldMsg::operator new(size_t s, int* sz,const int pb){
  return ComputeEwaldMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_ComputeEwaldMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return ComputeEwaldMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_ComputeEwaldMsg::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return ComputeEwaldMsg::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_ComputeEwaldMsg::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return ComputeEwaldMsg::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_ComputeEwaldMsg::operator new(size_t s, int sz0, const int p, const GroupDepNum groupDepNum) {
  int sizes[1];
  sizes[0] = sz0;
  return ComputeEwaldMsg::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_ComputeEwaldMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(float)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb, groupDepNum);
}
CMessage_ComputeEwaldMsg::CMessage_ComputeEwaldMsg() {
ComputeEwaldMsg *newmsg = (ComputeEwaldMsg *)this;
  newmsg->eik = (float *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
void CMessage_ComputeEwaldMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_ComputeEwaldMsg::pack(ComputeEwaldMsg *msg) {
  msg->eik = (float *) ((char *)msg->eik - (char *)msg);
  return (void *) msg;
}
ComputeEwaldMsg* CMessage_ComputeEwaldMsg::unpack(void* buf) {
  ComputeEwaldMsg *msg = (ComputeEwaldMsg *) buf;
  msg->eik = (float *) ((size_t)msg->eik + (char *)msg);
  return msg;
}
int CMessage_ComputeEwaldMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message NonbondedMICSlaveMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_NonbondedMICSlaveMsg::operator new(size_t s){
  return NonbondedMICSlaveMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_NonbondedMICSlaveMsg::operator new(size_t s, int* sz){
  return NonbondedMICSlaveMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_NonbondedMICSlaveMsg::operator new(size_t s, int* sz,const int pb){
  return NonbondedMICSlaveMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_NonbondedMICSlaveMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return NonbondedMICSlaveMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_NonbondedMICSlaveMsg::operator new(size_t s, const int p) {
  return NonbondedMICSlaveMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_NonbondedMICSlaveMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return NonbondedMICSlaveMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_NonbondedMICSlaveMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_NonbondedMICSlaveMsg::CMessage_NonbondedMICSlaveMsg() {
NonbondedMICSlaveMsg *newmsg = (NonbondedMICSlaveMsg *)this;
}
void CMessage_NonbondedMICSlaveMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_NonbondedMICSlaveMsg::pack(NonbondedMICSlaveMsg *msg) {
  return (void *) msg;
}
NonbondedMICSlaveMsg* CMessage_NonbondedMICSlaveMsg::unpack(void* buf) {
  NonbondedMICSlaveMsg *msg = (NonbondedMICSlaveMsg *) buf;
  return msg;
}
int CMessage_NonbondedMICSlaveMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message NonbondedMICSkipMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_NonbondedMICSkipMsg::operator new(size_t s){
  return NonbondedMICSkipMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_NonbondedMICSkipMsg::operator new(size_t s, int* sz){
  return NonbondedMICSkipMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_NonbondedMICSkipMsg::operator new(size_t s, int* sz,const int pb){
  return NonbondedMICSkipMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_NonbondedMICSkipMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return NonbondedMICSkipMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_NonbondedMICSkipMsg::operator new(size_t s, const int p) {
  return NonbondedMICSkipMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_NonbondedMICSkipMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return NonbondedMICSkipMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_NonbondedMICSkipMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_NonbondedMICSkipMsg::CMessage_NonbondedMICSkipMsg() {
NonbondedMICSkipMsg *newmsg = (NonbondedMICSkipMsg *)this;
}
void CMessage_NonbondedMICSkipMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_NonbondedMICSkipMsg::pack(NonbondedMICSkipMsg *msg) {
  return (void *) msg;
}
NonbondedMICSkipMsg* CMessage_NonbondedMICSkipMsg::unpack(void* buf) {
  NonbondedMICSkipMsg *msg = (NonbondedMICSkipMsg *) buf;
  return msg;
}
int CMessage_NonbondedMICSkipMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group ComputeMgr: IrrGroup{
ComputeMgr();
void updateComputes2(CkQdMsg* impl_msg);
void updateComputes3();
void splitComputes();
void splitComputes2(CkQdMsg* impl_msg);
void updateLocalComputes();
void updateLocalComputes2(CkQdMsg* impl_msg);
void updateLocalComputes3();
void updateLocalComputes4(CkQdMsg* impl_msg);
void updateLocalComputes5();
void doneUpdateLocalComputes();
void recvComputeGlobalData(ComputeGlobalDataMsg* impl_msg);
void recvComputeGlobalResults(ComputeGlobalResultsMsg* impl_msg);
void recvComputeDPMEData(ComputeDPMEDataMsg* impl_msg);
void recvComputeDPMEResults(ComputeDPMEResultsMsg* impl_msg);
void recvComputeConsForceMsg(ComputeConsForceMsg* impl_msg);
void recvComputeEwaldData(ComputeEwaldMsg* impl_msg);
void recvComputeEwaldResults(ComputeEwaldMsg* impl_msg);
void recvYieldDevice(int pe);
void recvBuildMICForceTable();
void recvCreateNonbondedMICSlave(NonbondedMICSlaveMsg* impl_msg);
void recvNonbondedMICSlaveReady(int impl_noname_0, int impl_noname_1, int impl_noname_2);
void recvNonbondedMICSlaveSkip(NonbondedMICSkipMsg* impl_msg);
void recvMICPEData(int impl_noname_3, int impl_noname_4);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_ComputeMgr::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: ComputeMgr();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void updateComputes2(CkQdMsg* impl_msg);
 */
void CProxyElement_ComputeMgr::updateComputes2(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::idx_updateComputes2_CkQdMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_updateComputes2_CkQdMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputeMgr::idx_updateComputes2_CkQdMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void updateComputes3();
 */
void CProxyElement_ComputeMgr::updateComputes3(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::idx_updateComputes3_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_updateComputes3_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputeMgr::idx_updateComputes3_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void splitComputes();
 */
void CProxyElement_ComputeMgr::splitComputes(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::idx_splitComputes_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_splitComputes_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputeMgr::idx_splitComputes_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void splitComputes2(CkQdMsg* impl_msg);
 */
void CProxyElement_ComputeMgr::splitComputes2(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::idx_splitComputes2_CkQdMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_splitComputes2_CkQdMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputeMgr::idx_splitComputes2_CkQdMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void updateLocalComputes();
 */
void CProxyElement_ComputeMgr::updateLocalComputes(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::idx_updateLocalComputes_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_updateLocalComputes_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputeMgr::idx_updateLocalComputes_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void updateLocalComputes2(CkQdMsg* impl_msg);
 */
void CProxyElement_ComputeMgr::updateLocalComputes2(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::idx_updateLocalComputes2_CkQdMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_updateLocalComputes2_CkQdMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputeMgr::idx_updateLocalComputes2_CkQdMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void updateLocalComputes3();
 */
void CProxyElement_ComputeMgr::updateLocalComputes3(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::idx_updateLocalComputes3_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_updateLocalComputes3_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputeMgr::idx_updateLocalComputes3_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void updateLocalComputes4(CkQdMsg* impl_msg);
 */
void CProxyElement_ComputeMgr::updateLocalComputes4(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::idx_updateLocalComputes4_CkQdMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_updateLocalComputes4_CkQdMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputeMgr::idx_updateLocalComputes4_CkQdMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void updateLocalComputes5();
 */
void CProxyElement_ComputeMgr::updateLocalComputes5(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::idx_updateLocalComputes5_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_updateLocalComputes5_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputeMgr::idx_updateLocalComputes5_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void doneUpdateLocalComputes();
 */
void CProxyElement_ComputeMgr::doneUpdateLocalComputes(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::idx_doneUpdateLocalComputes_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_doneUpdateLocalComputes_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputeMgr::idx_doneUpdateLocalComputes_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvComputeGlobalData(ComputeGlobalDataMsg* impl_msg);
 */
void CProxyElement_ComputeMgr::recvComputeGlobalData(ComputeGlobalDataMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::idx_recvComputeGlobalData_ComputeGlobalDataMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_recvComputeGlobalData_ComputeGlobalDataMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputeMgr::idx_recvComputeGlobalData_ComputeGlobalDataMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvComputeGlobalResults(ComputeGlobalResultsMsg* impl_msg);
 */
void CProxyElement_ComputeMgr::recvComputeGlobalResults(ComputeGlobalResultsMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::idx_recvComputeGlobalResults_ComputeGlobalResultsMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_recvComputeGlobalResults_ComputeGlobalResultsMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputeMgr::idx_recvComputeGlobalResults_ComputeGlobalResultsMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvComputeDPMEData(ComputeDPMEDataMsg* impl_msg);
 */
void CProxyElement_ComputeMgr::recvComputeDPMEData(ComputeDPMEDataMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::idx_recvComputeDPMEData_ComputeDPMEDataMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_recvComputeDPMEData_ComputeDPMEDataMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputeMgr::idx_recvComputeDPMEData_ComputeDPMEDataMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvComputeDPMEResults(ComputeDPMEResultsMsg* impl_msg);
 */
void CProxyElement_ComputeMgr::recvComputeDPMEResults(ComputeDPMEResultsMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::idx_recvComputeDPMEResults_ComputeDPMEResultsMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_recvComputeDPMEResults_ComputeDPMEResultsMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputeMgr::idx_recvComputeDPMEResults_ComputeDPMEResultsMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvComputeConsForceMsg(ComputeConsForceMsg* impl_msg);
 */
void CProxyElement_ComputeMgr::recvComputeConsForceMsg(ComputeConsForceMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::idx_recvComputeConsForceMsg_ComputeConsForceMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_recvComputeConsForceMsg_ComputeConsForceMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputeMgr::idx_recvComputeConsForceMsg_ComputeConsForceMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvComputeEwaldData(ComputeEwaldMsg* impl_msg);
 */
void CProxyElement_ComputeMgr::recvComputeEwaldData(ComputeEwaldMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::idx_recvComputeEwaldData_ComputeEwaldMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_recvComputeEwaldData_ComputeEwaldMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputeMgr::idx_recvComputeEwaldData_ComputeEwaldMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvComputeEwaldResults(ComputeEwaldMsg* impl_msg);
 */
void CProxyElement_ComputeMgr::recvComputeEwaldResults(ComputeEwaldMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::idx_recvComputeEwaldResults_ComputeEwaldMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_recvComputeEwaldResults_ComputeEwaldMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputeMgr::idx_recvComputeEwaldResults_ComputeEwaldMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvYieldDevice(int pe);
 */
void CProxyElement_ComputeMgr::recvYieldDevice(int pe, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int pe
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|pe;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|pe;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::idx_recvYieldDevice_marshall19(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_recvYieldDevice_marshall19(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputeMgr::idx_recvYieldDevice_marshall19(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvBuildMICForceTable();
 */
void CProxyElement_ComputeMgr::recvBuildMICForceTable(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::idx_recvBuildMICForceTable_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_recvBuildMICForceTable_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputeMgr::idx_recvBuildMICForceTable_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvCreateNonbondedMICSlave(NonbondedMICSlaveMsg* impl_msg);
 */
void CProxyElement_ComputeMgr::recvCreateNonbondedMICSlave(NonbondedMICSlaveMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::idx_recvCreateNonbondedMICSlave_NonbondedMICSlaveMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_recvCreateNonbondedMICSlave_NonbondedMICSlaveMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputeMgr::idx_recvCreateNonbondedMICSlave_NonbondedMICSlaveMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvNonbondedMICSlaveReady(int impl_noname_0, int impl_noname_1, int impl_noname_2);
 */
void CProxyElement_ComputeMgr::recvNonbondedMICSlaveReady(int impl_noname_0, int impl_noname_1, int impl_noname_2, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_0, int impl_noname_1, int impl_noname_2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_0;
    implP|impl_noname_1;
    implP|impl_noname_2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_0;
    implP|impl_noname_1;
    implP|impl_noname_2;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::idx_recvNonbondedMICSlaveReady_marshall22(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_recvNonbondedMICSlaveReady_marshall22(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputeMgr::idx_recvNonbondedMICSlaveReady_marshall22(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvNonbondedMICSlaveSkip(NonbondedMICSkipMsg* impl_msg);
 */
void CProxyElement_ComputeMgr::recvNonbondedMICSlaveSkip(NonbondedMICSkipMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::idx_recvNonbondedMICSlaveSkip_NonbondedMICSkipMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_recvNonbondedMICSlaveSkip_NonbondedMICSkipMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputeMgr::idx_recvNonbondedMICSlaveSkip_NonbondedMICSkipMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvMICPEData(int impl_noname_3, int impl_noname_4);
 */
void CProxyElement_ComputeMgr::recvMICPEData(int impl_noname_3, int impl_noname_4, const CkEntryOptions *impl_e_opts)
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
     CkGroupMsgPrep(CkIndex_ComputeMgr::idx_recvMICPEData_marshall24(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_recvMICPEData_marshall24(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputeMgr::idx_recvMICPEData_marshall24(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ComputeMgr();
 */
CkGroupID CProxy_ComputeMgr::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_ComputeMgr::__idx, CkIndex_ComputeMgr::idx_ComputeMgr_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_ComputeMgr::reg_ComputeMgr_void() {
  int epidx = CkRegisterEp("ComputeMgr()",
      reinterpret_cast<CkCallFnPtr>(_call_ComputeMgr_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_ComputeMgr::_call_ComputeMgr_void(void* impl_msg, void* impl_obj_void)
{
  ComputeMgr* impl_obj = static_cast<ComputeMgr*>(impl_obj_void);
  new (impl_obj_void) ComputeMgr();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void updateComputes2(CkQdMsg* impl_msg);
 */
void CProxy_ComputeMgr::updateComputes2(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::idx_updateComputes2_CkQdMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_updateComputes2_CkQdMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMgr::idx_updateComputes2_CkQdMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMgr::updateComputes2(CkQdMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputeMgr::idx_updateComputes2_CkQdMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMgr::updateComputes2(CkQdMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputeMgr::idx_updateComputes2_CkQdMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputeMgr::reg_updateComputes2_CkQdMsg() {
  int epidx = CkRegisterEp("updateComputes2(CkQdMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_updateComputes2_CkQdMsg), CMessage_CkQdMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkQdMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ComputeMgr::_call_updateComputes2_CkQdMsg(void* impl_msg, void* impl_obj_void)
{
  ComputeMgr* impl_obj = static_cast<ComputeMgr*>(impl_obj_void);
  impl_obj->updateComputes2((CkQdMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void updateComputes3();
 */
void CProxy_ComputeMgr::updateComputes3(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::idx_updateComputes3_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_updateComputes3_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMgr::idx_updateComputes3_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMgr::updateComputes3(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_ComputeMgr::idx_updateComputes3_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMgr::updateComputes3(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_ComputeMgr::idx_updateComputes3_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputeMgr::reg_updateComputes3_void() {
  int epidx = CkRegisterEp("updateComputes3()",
      reinterpret_cast<CkCallFnPtr>(_call_updateComputes3_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_ComputeMgr::_call_updateComputes3_void(void* impl_msg, void* impl_obj_void)
{
  ComputeMgr* impl_obj = static_cast<ComputeMgr*>(impl_obj_void);
  impl_obj->updateComputes3();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_ComputeMgr::updateComputes3_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void splitComputes();
 */
void CProxy_ComputeMgr::splitComputes(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::idx_splitComputes_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_splitComputes_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMgr::idx_splitComputes_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMgr::splitComputes(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_ComputeMgr::idx_splitComputes_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMgr::splitComputes(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_ComputeMgr::idx_splitComputes_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputeMgr::reg_splitComputes_void() {
  int epidx = CkRegisterEp("splitComputes()",
      reinterpret_cast<CkCallFnPtr>(_call_splitComputes_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_ComputeMgr::_call_splitComputes_void(void* impl_msg, void* impl_obj_void)
{
  ComputeMgr* impl_obj = static_cast<ComputeMgr*>(impl_obj_void);
  impl_obj->splitComputes();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_ComputeMgr::splitComputes_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void splitComputes2(CkQdMsg* impl_msg);
 */
void CProxy_ComputeMgr::splitComputes2(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::idx_splitComputes2_CkQdMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_splitComputes2_CkQdMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMgr::idx_splitComputes2_CkQdMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMgr::splitComputes2(CkQdMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputeMgr::idx_splitComputes2_CkQdMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMgr::splitComputes2(CkQdMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputeMgr::idx_splitComputes2_CkQdMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputeMgr::reg_splitComputes2_CkQdMsg() {
  int epidx = CkRegisterEp("splitComputes2(CkQdMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_splitComputes2_CkQdMsg), CMessage_CkQdMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkQdMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ComputeMgr::_call_splitComputes2_CkQdMsg(void* impl_msg, void* impl_obj_void)
{
  ComputeMgr* impl_obj = static_cast<ComputeMgr*>(impl_obj_void);
  impl_obj->splitComputes2((CkQdMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void updateLocalComputes();
 */
void CProxy_ComputeMgr::updateLocalComputes(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::idx_updateLocalComputes_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_updateLocalComputes_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMgr::idx_updateLocalComputes_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMgr::updateLocalComputes(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_ComputeMgr::idx_updateLocalComputes_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMgr::updateLocalComputes(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_ComputeMgr::idx_updateLocalComputes_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputeMgr::reg_updateLocalComputes_void() {
  int epidx = CkRegisterEp("updateLocalComputes()",
      reinterpret_cast<CkCallFnPtr>(_call_updateLocalComputes_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_ComputeMgr::_call_updateLocalComputes_void(void* impl_msg, void* impl_obj_void)
{
  ComputeMgr* impl_obj = static_cast<ComputeMgr*>(impl_obj_void);
  impl_obj->updateLocalComputes();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_ComputeMgr::updateLocalComputes_6_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void updateLocalComputes2(CkQdMsg* impl_msg);
 */
void CProxy_ComputeMgr::updateLocalComputes2(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::idx_updateLocalComputes2_CkQdMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_updateLocalComputes2_CkQdMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMgr::idx_updateLocalComputes2_CkQdMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMgr::updateLocalComputes2(CkQdMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputeMgr::idx_updateLocalComputes2_CkQdMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMgr::updateLocalComputes2(CkQdMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputeMgr::idx_updateLocalComputes2_CkQdMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputeMgr::reg_updateLocalComputes2_CkQdMsg() {
  int epidx = CkRegisterEp("updateLocalComputes2(CkQdMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_updateLocalComputes2_CkQdMsg), CMessage_CkQdMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkQdMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ComputeMgr::_call_updateLocalComputes2_CkQdMsg(void* impl_msg, void* impl_obj_void)
{
  ComputeMgr* impl_obj = static_cast<ComputeMgr*>(impl_obj_void);
  impl_obj->updateLocalComputes2((CkQdMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void updateLocalComputes3();
 */
void CProxy_ComputeMgr::updateLocalComputes3(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::idx_updateLocalComputes3_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_updateLocalComputes3_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMgr::idx_updateLocalComputes3_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMgr::updateLocalComputes3(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_ComputeMgr::idx_updateLocalComputes3_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMgr::updateLocalComputes3(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_ComputeMgr::idx_updateLocalComputes3_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputeMgr::reg_updateLocalComputes3_void() {
  int epidx = CkRegisterEp("updateLocalComputes3()",
      reinterpret_cast<CkCallFnPtr>(_call_updateLocalComputes3_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_ComputeMgr::_call_updateLocalComputes3_void(void* impl_msg, void* impl_obj_void)
{
  ComputeMgr* impl_obj = static_cast<ComputeMgr*>(impl_obj_void);
  impl_obj->updateLocalComputes3();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_ComputeMgr::updateLocalComputes3_8_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void updateLocalComputes4(CkQdMsg* impl_msg);
 */
void CProxy_ComputeMgr::updateLocalComputes4(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::idx_updateLocalComputes4_CkQdMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_updateLocalComputes4_CkQdMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMgr::idx_updateLocalComputes4_CkQdMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMgr::updateLocalComputes4(CkQdMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputeMgr::idx_updateLocalComputes4_CkQdMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMgr::updateLocalComputes4(CkQdMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputeMgr::idx_updateLocalComputes4_CkQdMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputeMgr::reg_updateLocalComputes4_CkQdMsg() {
  int epidx = CkRegisterEp("updateLocalComputes4(CkQdMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_updateLocalComputes4_CkQdMsg), CMessage_CkQdMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkQdMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ComputeMgr::_call_updateLocalComputes4_CkQdMsg(void* impl_msg, void* impl_obj_void)
{
  ComputeMgr* impl_obj = static_cast<ComputeMgr*>(impl_obj_void);
  impl_obj->updateLocalComputes4((CkQdMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void updateLocalComputes5();
 */
void CProxy_ComputeMgr::updateLocalComputes5(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::idx_updateLocalComputes5_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_updateLocalComputes5_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMgr::idx_updateLocalComputes5_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMgr::updateLocalComputes5(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_ComputeMgr::idx_updateLocalComputes5_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMgr::updateLocalComputes5(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_ComputeMgr::idx_updateLocalComputes5_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputeMgr::reg_updateLocalComputes5_void() {
  int epidx = CkRegisterEp("updateLocalComputes5()",
      reinterpret_cast<CkCallFnPtr>(_call_updateLocalComputes5_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_ComputeMgr::_call_updateLocalComputes5_void(void* impl_msg, void* impl_obj_void)
{
  ComputeMgr* impl_obj = static_cast<ComputeMgr*>(impl_obj_void);
  impl_obj->updateLocalComputes5();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_ComputeMgr::updateLocalComputes5_10_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void doneUpdateLocalComputes();
 */
void CProxy_ComputeMgr::doneUpdateLocalComputes(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::idx_doneUpdateLocalComputes_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_doneUpdateLocalComputes_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMgr::idx_doneUpdateLocalComputes_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMgr::doneUpdateLocalComputes(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_ComputeMgr::idx_doneUpdateLocalComputes_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMgr::doneUpdateLocalComputes(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_ComputeMgr::idx_doneUpdateLocalComputes_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputeMgr::reg_doneUpdateLocalComputes_void() {
  int epidx = CkRegisterEp("doneUpdateLocalComputes()",
      reinterpret_cast<CkCallFnPtr>(_call_doneUpdateLocalComputes_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_ComputeMgr::_call_doneUpdateLocalComputes_void(void* impl_msg, void* impl_obj_void)
{
  ComputeMgr* impl_obj = static_cast<ComputeMgr*>(impl_obj_void);
  impl_obj->doneUpdateLocalComputes();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_ComputeMgr::doneUpdateLocalComputes_11_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvComputeGlobalData(ComputeGlobalDataMsg* impl_msg);
 */
void CProxy_ComputeMgr::recvComputeGlobalData(ComputeGlobalDataMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::idx_recvComputeGlobalData_ComputeGlobalDataMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_recvComputeGlobalData_ComputeGlobalDataMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMgr::idx_recvComputeGlobalData_ComputeGlobalDataMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMgr::recvComputeGlobalData(ComputeGlobalDataMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputeMgr::idx_recvComputeGlobalData_ComputeGlobalDataMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMgr::recvComputeGlobalData(ComputeGlobalDataMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputeMgr::idx_recvComputeGlobalData_ComputeGlobalDataMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputeMgr::reg_recvComputeGlobalData_ComputeGlobalDataMsg() {
  int epidx = CkRegisterEp("recvComputeGlobalData(ComputeGlobalDataMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvComputeGlobalData_ComputeGlobalDataMsg), CMessage_ComputeGlobalDataMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)ComputeGlobalDataMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ComputeMgr::_call_recvComputeGlobalData_ComputeGlobalDataMsg(void* impl_msg, void* impl_obj_void)
{
  ComputeMgr* impl_obj = static_cast<ComputeMgr*>(impl_obj_void);
  impl_obj->recvComputeGlobalData((ComputeGlobalDataMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvComputeGlobalResults(ComputeGlobalResultsMsg* impl_msg);
 */
void CProxy_ComputeMgr::recvComputeGlobalResults(ComputeGlobalResultsMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::idx_recvComputeGlobalResults_ComputeGlobalResultsMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_recvComputeGlobalResults_ComputeGlobalResultsMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMgr::idx_recvComputeGlobalResults_ComputeGlobalResultsMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMgr::recvComputeGlobalResults(ComputeGlobalResultsMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputeMgr::idx_recvComputeGlobalResults_ComputeGlobalResultsMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMgr::recvComputeGlobalResults(ComputeGlobalResultsMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputeMgr::idx_recvComputeGlobalResults_ComputeGlobalResultsMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputeMgr::reg_recvComputeGlobalResults_ComputeGlobalResultsMsg() {
  int epidx = CkRegisterEp("recvComputeGlobalResults(ComputeGlobalResultsMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvComputeGlobalResults_ComputeGlobalResultsMsg), CMessage_ComputeGlobalResultsMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)ComputeGlobalResultsMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ComputeMgr::_call_recvComputeGlobalResults_ComputeGlobalResultsMsg(void* impl_msg, void* impl_obj_void)
{
  ComputeMgr* impl_obj = static_cast<ComputeMgr*>(impl_obj_void);
  impl_obj->recvComputeGlobalResults((ComputeGlobalResultsMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvComputeDPMEData(ComputeDPMEDataMsg* impl_msg);
 */
void CProxy_ComputeMgr::recvComputeDPMEData(ComputeDPMEDataMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::idx_recvComputeDPMEData_ComputeDPMEDataMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_recvComputeDPMEData_ComputeDPMEDataMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMgr::idx_recvComputeDPMEData_ComputeDPMEDataMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMgr::recvComputeDPMEData(ComputeDPMEDataMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputeMgr::idx_recvComputeDPMEData_ComputeDPMEDataMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMgr::recvComputeDPMEData(ComputeDPMEDataMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputeMgr::idx_recvComputeDPMEData_ComputeDPMEDataMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputeMgr::reg_recvComputeDPMEData_ComputeDPMEDataMsg() {
  int epidx = CkRegisterEp("recvComputeDPMEData(ComputeDPMEDataMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvComputeDPMEData_ComputeDPMEDataMsg), CMessage_ComputeDPMEDataMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)ComputeDPMEDataMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ComputeMgr::_call_recvComputeDPMEData_ComputeDPMEDataMsg(void* impl_msg, void* impl_obj_void)
{
  ComputeMgr* impl_obj = static_cast<ComputeMgr*>(impl_obj_void);
  impl_obj->recvComputeDPMEData((ComputeDPMEDataMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvComputeDPMEResults(ComputeDPMEResultsMsg* impl_msg);
 */
void CProxy_ComputeMgr::recvComputeDPMEResults(ComputeDPMEResultsMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::idx_recvComputeDPMEResults_ComputeDPMEResultsMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_recvComputeDPMEResults_ComputeDPMEResultsMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMgr::idx_recvComputeDPMEResults_ComputeDPMEResultsMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMgr::recvComputeDPMEResults(ComputeDPMEResultsMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputeMgr::idx_recvComputeDPMEResults_ComputeDPMEResultsMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMgr::recvComputeDPMEResults(ComputeDPMEResultsMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputeMgr::idx_recvComputeDPMEResults_ComputeDPMEResultsMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputeMgr::reg_recvComputeDPMEResults_ComputeDPMEResultsMsg() {
  int epidx = CkRegisterEp("recvComputeDPMEResults(ComputeDPMEResultsMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvComputeDPMEResults_ComputeDPMEResultsMsg), CMessage_ComputeDPMEResultsMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)ComputeDPMEResultsMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ComputeMgr::_call_recvComputeDPMEResults_ComputeDPMEResultsMsg(void* impl_msg, void* impl_obj_void)
{
  ComputeMgr* impl_obj = static_cast<ComputeMgr*>(impl_obj_void);
  impl_obj->recvComputeDPMEResults((ComputeDPMEResultsMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvComputeConsForceMsg(ComputeConsForceMsg* impl_msg);
 */
void CProxy_ComputeMgr::recvComputeConsForceMsg(ComputeConsForceMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::idx_recvComputeConsForceMsg_ComputeConsForceMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_recvComputeConsForceMsg_ComputeConsForceMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMgr::idx_recvComputeConsForceMsg_ComputeConsForceMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMgr::recvComputeConsForceMsg(ComputeConsForceMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputeMgr::idx_recvComputeConsForceMsg_ComputeConsForceMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMgr::recvComputeConsForceMsg(ComputeConsForceMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputeMgr::idx_recvComputeConsForceMsg_ComputeConsForceMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputeMgr::reg_recvComputeConsForceMsg_ComputeConsForceMsg() {
  int epidx = CkRegisterEp("recvComputeConsForceMsg(ComputeConsForceMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvComputeConsForceMsg_ComputeConsForceMsg), CMessage_ComputeConsForceMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)ComputeConsForceMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ComputeMgr::_call_recvComputeConsForceMsg_ComputeConsForceMsg(void* impl_msg, void* impl_obj_void)
{
  ComputeMgr* impl_obj = static_cast<ComputeMgr*>(impl_obj_void);
  impl_obj->recvComputeConsForceMsg((ComputeConsForceMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvComputeEwaldData(ComputeEwaldMsg* impl_msg);
 */
void CProxy_ComputeMgr::recvComputeEwaldData(ComputeEwaldMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::idx_recvComputeEwaldData_ComputeEwaldMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_recvComputeEwaldData_ComputeEwaldMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMgr::idx_recvComputeEwaldData_ComputeEwaldMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMgr::recvComputeEwaldData(ComputeEwaldMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputeMgr::idx_recvComputeEwaldData_ComputeEwaldMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMgr::recvComputeEwaldData(ComputeEwaldMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputeMgr::idx_recvComputeEwaldData_ComputeEwaldMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputeMgr::reg_recvComputeEwaldData_ComputeEwaldMsg() {
  int epidx = CkRegisterEp("recvComputeEwaldData(ComputeEwaldMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvComputeEwaldData_ComputeEwaldMsg), CMessage_ComputeEwaldMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)ComputeEwaldMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ComputeMgr::_call_recvComputeEwaldData_ComputeEwaldMsg(void* impl_msg, void* impl_obj_void)
{
  ComputeMgr* impl_obj = static_cast<ComputeMgr*>(impl_obj_void);
  impl_obj->recvComputeEwaldData((ComputeEwaldMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvComputeEwaldResults(ComputeEwaldMsg* impl_msg);
 */
void CProxy_ComputeMgr::recvComputeEwaldResults(ComputeEwaldMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::idx_recvComputeEwaldResults_ComputeEwaldMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_recvComputeEwaldResults_ComputeEwaldMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMgr::idx_recvComputeEwaldResults_ComputeEwaldMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMgr::recvComputeEwaldResults(ComputeEwaldMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputeMgr::idx_recvComputeEwaldResults_ComputeEwaldMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMgr::recvComputeEwaldResults(ComputeEwaldMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputeMgr::idx_recvComputeEwaldResults_ComputeEwaldMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputeMgr::reg_recvComputeEwaldResults_ComputeEwaldMsg() {
  int epidx = CkRegisterEp("recvComputeEwaldResults(ComputeEwaldMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvComputeEwaldResults_ComputeEwaldMsg), CMessage_ComputeEwaldMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)ComputeEwaldMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ComputeMgr::_call_recvComputeEwaldResults_ComputeEwaldMsg(void* impl_msg, void* impl_obj_void)
{
  ComputeMgr* impl_obj = static_cast<ComputeMgr*>(impl_obj_void);
  impl_obj->recvComputeEwaldResults((ComputeEwaldMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvYieldDevice(int pe);
 */
void CProxy_ComputeMgr::recvYieldDevice(int pe, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int pe
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|pe;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|pe;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::idx_recvYieldDevice_marshall19(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_recvYieldDevice_marshall19(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMgr::idx_recvYieldDevice_marshall19(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMgr::recvYieldDevice(int pe, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int pe
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|pe;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|pe;
  }
  CkSendMsgBranchMulti(CkIndex_ComputeMgr::idx_recvYieldDevice_marshall19(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMgr::recvYieldDevice(int pe, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int pe
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|pe;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|pe;
  }
  CkSendMsgBranchGroup(CkIndex_ComputeMgr::idx_recvYieldDevice_marshall19(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputeMgr::reg_recvYieldDevice_marshall19() {
  int epidx = CkRegisterEp("recvYieldDevice(int pe)",
      reinterpret_cast<CkCallFnPtr>(_call_recvYieldDevice_marshall19), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_recvYieldDevice_marshall19);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_recvYieldDevice_marshall19);

  return epidx;
}

void CkIndex_ComputeMgr::_call_recvYieldDevice_marshall19(void* impl_msg, void* impl_obj_void)
{
  ComputeMgr* impl_obj = static_cast<ComputeMgr*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int pe*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> pe;
  implP|pe;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->recvYieldDevice(std::move(pe.t));
}
int CkIndex_ComputeMgr::_callmarshall_recvYieldDevice_marshall19(char* impl_buf, void* impl_obj_void) {
  ComputeMgr* impl_obj = static_cast<ComputeMgr*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int pe*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> pe;
  implP|pe;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->recvYieldDevice(std::move(pe.t));
  return implP.size();
}
void CkIndex_ComputeMgr::_marshallmessagepup_recvYieldDevice_marshall19(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int pe*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> pe;
  implP|pe;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("pe");
  implDestP|pe;
}
PUPable_def(SINGLE_ARG(Closure_ComputeMgr::recvYieldDevice_19_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvBuildMICForceTable();
 */
void CProxy_ComputeMgr::recvBuildMICForceTable(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::idx_recvBuildMICForceTable_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_recvBuildMICForceTable_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMgr::idx_recvBuildMICForceTable_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMgr::recvBuildMICForceTable(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_ComputeMgr::idx_recvBuildMICForceTable_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMgr::recvBuildMICForceTable(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_ComputeMgr::idx_recvBuildMICForceTable_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputeMgr::reg_recvBuildMICForceTable_void() {
  int epidx = CkRegisterEp("recvBuildMICForceTable()",
      reinterpret_cast<CkCallFnPtr>(_call_recvBuildMICForceTable_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_ComputeMgr::_call_recvBuildMICForceTable_void(void* impl_msg, void* impl_obj_void)
{
  ComputeMgr* impl_obj = static_cast<ComputeMgr*>(impl_obj_void);
  impl_obj->recvBuildMICForceTable();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_ComputeMgr::recvBuildMICForceTable_20_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvCreateNonbondedMICSlave(NonbondedMICSlaveMsg* impl_msg);
 */
void CProxy_ComputeMgr::recvCreateNonbondedMICSlave(NonbondedMICSlaveMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::idx_recvCreateNonbondedMICSlave_NonbondedMICSlaveMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_recvCreateNonbondedMICSlave_NonbondedMICSlaveMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMgr::idx_recvCreateNonbondedMICSlave_NonbondedMICSlaveMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMgr::recvCreateNonbondedMICSlave(NonbondedMICSlaveMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputeMgr::idx_recvCreateNonbondedMICSlave_NonbondedMICSlaveMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMgr::recvCreateNonbondedMICSlave(NonbondedMICSlaveMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputeMgr::idx_recvCreateNonbondedMICSlave_NonbondedMICSlaveMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputeMgr::reg_recvCreateNonbondedMICSlave_NonbondedMICSlaveMsg() {
  int epidx = CkRegisterEp("recvCreateNonbondedMICSlave(NonbondedMICSlaveMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvCreateNonbondedMICSlave_NonbondedMICSlaveMsg), CMessage_NonbondedMICSlaveMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)NonbondedMICSlaveMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ComputeMgr::_call_recvCreateNonbondedMICSlave_NonbondedMICSlaveMsg(void* impl_msg, void* impl_obj_void)
{
  ComputeMgr* impl_obj = static_cast<ComputeMgr*>(impl_obj_void);
  impl_obj->recvCreateNonbondedMICSlave((NonbondedMICSlaveMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvNonbondedMICSlaveReady(int impl_noname_0, int impl_noname_1, int impl_noname_2);
 */
void CProxy_ComputeMgr::recvNonbondedMICSlaveReady(int impl_noname_0, int impl_noname_1, int impl_noname_2, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_0, int impl_noname_1, int impl_noname_2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_0;
    implP|impl_noname_1;
    implP|impl_noname_2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_0;
    implP|impl_noname_1;
    implP|impl_noname_2;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::idx_recvNonbondedMICSlaveReady_marshall22(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_recvNonbondedMICSlaveReady_marshall22(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMgr::idx_recvNonbondedMICSlaveReady_marshall22(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMgr::recvNonbondedMICSlaveReady(int impl_noname_0, int impl_noname_1, int impl_noname_2, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int impl_noname_0, int impl_noname_1, int impl_noname_2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_0;
    implP|impl_noname_1;
    implP|impl_noname_2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_0;
    implP|impl_noname_1;
    implP|impl_noname_2;
  }
  CkSendMsgBranchMulti(CkIndex_ComputeMgr::idx_recvNonbondedMICSlaveReady_marshall22(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMgr::recvNonbondedMICSlaveReady(int impl_noname_0, int impl_noname_1, int impl_noname_2, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int impl_noname_0, int impl_noname_1, int impl_noname_2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_0;
    implP|impl_noname_1;
    implP|impl_noname_2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_0;
    implP|impl_noname_1;
    implP|impl_noname_2;
  }
  CkSendMsgBranchGroup(CkIndex_ComputeMgr::idx_recvNonbondedMICSlaveReady_marshall22(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputeMgr::reg_recvNonbondedMICSlaveReady_marshall22() {
  int epidx = CkRegisterEp("recvNonbondedMICSlaveReady(int impl_noname_0, int impl_noname_1, int impl_noname_2)",
      reinterpret_cast<CkCallFnPtr>(_call_recvNonbondedMICSlaveReady_marshall22), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_recvNonbondedMICSlaveReady_marshall22);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_recvNonbondedMICSlaveReady_marshall22);

  return epidx;
}

void CkIndex_ComputeMgr::_call_recvNonbondedMICSlaveReady_marshall22(void* impl_msg, void* impl_obj_void)
{
  ComputeMgr* impl_obj = static_cast<ComputeMgr*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int impl_noname_0, int impl_noname_1, int impl_noname_2*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_0;
  implP|impl_noname_0;
  PUP::detail::TemporaryObjectHolder<int> impl_noname_1;
  implP|impl_noname_1;
  PUP::detail::TemporaryObjectHolder<int> impl_noname_2;
  implP|impl_noname_2;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->recvNonbondedMICSlaveReady(std::move(impl_noname_0.t), std::move(impl_noname_1.t), std::move(impl_noname_2.t));
}
int CkIndex_ComputeMgr::_callmarshall_recvNonbondedMICSlaveReady_marshall22(char* impl_buf, void* impl_obj_void) {
  ComputeMgr* impl_obj = static_cast<ComputeMgr*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int impl_noname_0, int impl_noname_1, int impl_noname_2*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_0;
  implP|impl_noname_0;
  PUP::detail::TemporaryObjectHolder<int> impl_noname_1;
  implP|impl_noname_1;
  PUP::detail::TemporaryObjectHolder<int> impl_noname_2;
  implP|impl_noname_2;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->recvNonbondedMICSlaveReady(std::move(impl_noname_0.t), std::move(impl_noname_1.t), std::move(impl_noname_2.t));
  return implP.size();
}
void CkIndex_ComputeMgr::_marshallmessagepup_recvNonbondedMICSlaveReady_marshall22(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int impl_noname_0, int impl_noname_1, int impl_noname_2*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_0;
  implP|impl_noname_0;
  PUP::detail::TemporaryObjectHolder<int> impl_noname_1;
  implP|impl_noname_1;
  PUP::detail::TemporaryObjectHolder<int> impl_noname_2;
  implP|impl_noname_2;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_0");
  implDestP|impl_noname_0;
  if (implDestP.hasComments()) implDestP.comment("impl_noname_1");
  implDestP|impl_noname_1;
  if (implDestP.hasComments()) implDestP.comment("impl_noname_2");
  implDestP|impl_noname_2;
}
PUPable_def(SINGLE_ARG(Closure_ComputeMgr::recvNonbondedMICSlaveReady_22_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvNonbondedMICSlaveSkip(NonbondedMICSkipMsg* impl_msg);
 */
void CProxy_ComputeMgr::recvNonbondedMICSlaveSkip(NonbondedMICSkipMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeMgr::idx_recvNonbondedMICSlaveSkip_NonbondedMICSkipMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_recvNonbondedMICSlaveSkip_NonbondedMICSkipMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMgr::idx_recvNonbondedMICSlaveSkip_NonbondedMICSkipMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMgr::recvNonbondedMICSlaveSkip(NonbondedMICSkipMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputeMgr::idx_recvNonbondedMICSlaveSkip_NonbondedMICSkipMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMgr::recvNonbondedMICSlaveSkip(NonbondedMICSkipMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputeMgr::idx_recvNonbondedMICSlaveSkip_NonbondedMICSkipMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputeMgr::reg_recvNonbondedMICSlaveSkip_NonbondedMICSkipMsg() {
  int epidx = CkRegisterEp("recvNonbondedMICSlaveSkip(NonbondedMICSkipMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvNonbondedMICSlaveSkip_NonbondedMICSkipMsg), CMessage_NonbondedMICSkipMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)NonbondedMICSkipMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ComputeMgr::_call_recvNonbondedMICSlaveSkip_NonbondedMICSkipMsg(void* impl_msg, void* impl_obj_void)
{
  ComputeMgr* impl_obj = static_cast<ComputeMgr*>(impl_obj_void);
  impl_obj->recvNonbondedMICSlaveSkip((NonbondedMICSkipMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvMICPEData(int impl_noname_3, int impl_noname_4);
 */
void CProxy_ComputeMgr::recvMICPEData(int impl_noname_3, int impl_noname_4, const CkEntryOptions *impl_e_opts)
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
     CkGroupMsgPrep(CkIndex_ComputeMgr::idx_recvMICPEData_marshall24(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_recvMICPEData_marshall24(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeMgr::idx_recvMICPEData_marshall24(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeMgr::recvMICPEData(int impl_noname_3, int impl_noname_4, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
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
  CkSendMsgBranchMulti(CkIndex_ComputeMgr::idx_recvMICPEData_marshall24(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeMgr::recvMICPEData(int impl_noname_3, int impl_noname_4, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
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
  CkSendMsgBranchGroup(CkIndex_ComputeMgr::idx_recvMICPEData_marshall24(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputeMgr::reg_recvMICPEData_marshall24() {
  int epidx = CkRegisterEp("recvMICPEData(int impl_noname_3, int impl_noname_4)",
      reinterpret_cast<CkCallFnPtr>(_call_recvMICPEData_marshall24), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_recvMICPEData_marshall24);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_recvMICPEData_marshall24);

  return epidx;
}

void CkIndex_ComputeMgr::_call_recvMICPEData_marshall24(void* impl_msg, void* impl_obj_void)
{
  ComputeMgr* impl_obj = static_cast<ComputeMgr*>(impl_obj_void);
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
  impl_obj->recvMICPEData(std::move(impl_noname_3.t), std::move(impl_noname_4.t));
}
int CkIndex_ComputeMgr::_callmarshall_recvMICPEData_marshall24(char* impl_buf, void* impl_obj_void) {
  ComputeMgr* impl_obj = static_cast<ComputeMgr*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int impl_noname_3, int impl_noname_4*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_3;
  implP|impl_noname_3;
  PUP::detail::TemporaryObjectHolder<int> impl_noname_4;
  implP|impl_noname_4;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->recvMICPEData(std::move(impl_noname_3.t), std::move(impl_noname_4.t));
  return implP.size();
}
void CkIndex_ComputeMgr::_marshallmessagepup_recvMICPEData_marshall24(PUP::er &implDestP,void *impl_msg) {
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
PUPable_def(SINGLE_ARG(Closure_ComputeMgr::recvMICPEData_24_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ComputeMgr();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void updateComputes2(CkQdMsg* impl_msg);
 */
void CProxySection_ComputeMgr::updateComputes2(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_updateComputes2_CkQdMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMgr::idx_updateComputes2_CkQdMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void updateComputes3();
 */
void CProxySection_ComputeMgr::updateComputes3(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_updateComputes3_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMgr::idx_updateComputes3_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void splitComputes();
 */
void CProxySection_ComputeMgr::splitComputes(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_splitComputes_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMgr::idx_splitComputes_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void splitComputes2(CkQdMsg* impl_msg);
 */
void CProxySection_ComputeMgr::splitComputes2(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_splitComputes2_CkQdMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMgr::idx_splitComputes2_CkQdMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void updateLocalComputes();
 */
void CProxySection_ComputeMgr::updateLocalComputes(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_updateLocalComputes_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMgr::idx_updateLocalComputes_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void updateLocalComputes2(CkQdMsg* impl_msg);
 */
void CProxySection_ComputeMgr::updateLocalComputes2(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_updateLocalComputes2_CkQdMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMgr::idx_updateLocalComputes2_CkQdMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void updateLocalComputes3();
 */
void CProxySection_ComputeMgr::updateLocalComputes3(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_updateLocalComputes3_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMgr::idx_updateLocalComputes3_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void updateLocalComputes4(CkQdMsg* impl_msg);
 */
void CProxySection_ComputeMgr::updateLocalComputes4(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_updateLocalComputes4_CkQdMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMgr::idx_updateLocalComputes4_CkQdMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void updateLocalComputes5();
 */
void CProxySection_ComputeMgr::updateLocalComputes5(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_updateLocalComputes5_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMgr::idx_updateLocalComputes5_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void doneUpdateLocalComputes();
 */
void CProxySection_ComputeMgr::doneUpdateLocalComputes(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_doneUpdateLocalComputes_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMgr::idx_doneUpdateLocalComputes_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvComputeGlobalData(ComputeGlobalDataMsg* impl_msg);
 */
void CProxySection_ComputeMgr::recvComputeGlobalData(ComputeGlobalDataMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_recvComputeGlobalData_ComputeGlobalDataMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMgr::idx_recvComputeGlobalData_ComputeGlobalDataMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvComputeGlobalResults(ComputeGlobalResultsMsg* impl_msg);
 */
void CProxySection_ComputeMgr::recvComputeGlobalResults(ComputeGlobalResultsMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_recvComputeGlobalResults_ComputeGlobalResultsMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMgr::idx_recvComputeGlobalResults_ComputeGlobalResultsMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvComputeDPMEData(ComputeDPMEDataMsg* impl_msg);
 */
void CProxySection_ComputeMgr::recvComputeDPMEData(ComputeDPMEDataMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_recvComputeDPMEData_ComputeDPMEDataMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMgr::idx_recvComputeDPMEData_ComputeDPMEDataMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvComputeDPMEResults(ComputeDPMEResultsMsg* impl_msg);
 */
void CProxySection_ComputeMgr::recvComputeDPMEResults(ComputeDPMEResultsMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_recvComputeDPMEResults_ComputeDPMEResultsMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMgr::idx_recvComputeDPMEResults_ComputeDPMEResultsMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvComputeConsForceMsg(ComputeConsForceMsg* impl_msg);
 */
void CProxySection_ComputeMgr::recvComputeConsForceMsg(ComputeConsForceMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_recvComputeConsForceMsg_ComputeConsForceMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMgr::idx_recvComputeConsForceMsg_ComputeConsForceMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvComputeEwaldData(ComputeEwaldMsg* impl_msg);
 */
void CProxySection_ComputeMgr::recvComputeEwaldData(ComputeEwaldMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_recvComputeEwaldData_ComputeEwaldMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMgr::idx_recvComputeEwaldData_ComputeEwaldMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvComputeEwaldResults(ComputeEwaldMsg* impl_msg);
 */
void CProxySection_ComputeMgr::recvComputeEwaldResults(ComputeEwaldMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_recvComputeEwaldResults_ComputeEwaldMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMgr::idx_recvComputeEwaldResults_ComputeEwaldMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvYieldDevice(int pe);
 */
void CProxySection_ComputeMgr::recvYieldDevice(int pe, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int pe
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|pe;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|pe;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_recvYieldDevice_marshall19(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMgr::idx_recvYieldDevice_marshall19(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvBuildMICForceTable();
 */
void CProxySection_ComputeMgr::recvBuildMICForceTable(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_recvBuildMICForceTable_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMgr::idx_recvBuildMICForceTable_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvCreateNonbondedMICSlave(NonbondedMICSlaveMsg* impl_msg);
 */
void CProxySection_ComputeMgr::recvCreateNonbondedMICSlave(NonbondedMICSlaveMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_recvCreateNonbondedMICSlave_NonbondedMICSlaveMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMgr::idx_recvCreateNonbondedMICSlave_NonbondedMICSlaveMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvNonbondedMICSlaveReady(int impl_noname_0, int impl_noname_1, int impl_noname_2);
 */
void CProxySection_ComputeMgr::recvNonbondedMICSlaveReady(int impl_noname_0, int impl_noname_1, int impl_noname_2, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_0, int impl_noname_1, int impl_noname_2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_0;
    implP|impl_noname_1;
    implP|impl_noname_2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_0;
    implP|impl_noname_1;
    implP|impl_noname_2;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_recvNonbondedMICSlaveReady_marshall22(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMgr::idx_recvNonbondedMICSlaveReady_marshall22(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvNonbondedMICSlaveSkip(NonbondedMICSkipMsg* impl_msg);
 */
void CProxySection_ComputeMgr::recvNonbondedMICSlaveSkip(NonbondedMICSkipMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_recvNonbondedMICSlaveSkip_NonbondedMICSkipMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMgr::idx_recvNonbondedMICSlaveSkip_NonbondedMICSkipMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvMICPEData(int impl_noname_3, int impl_noname_4);
 */
void CProxySection_ComputeMgr::recvMICPEData(int impl_noname_3, int impl_noname_4, const CkEntryOptions *impl_e_opts)
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
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeMgr::idx_recvMICPEData_marshall24(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeMgr::idx_recvMICPEData_marshall24(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_ComputeMgr::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,ComputeMgr::isIrreducible());
  // REG: ComputeMgr();
  idx_ComputeMgr_void();
  CkRegisterDefaultCtor(__idx, idx_ComputeMgr_void());

  // REG: void updateComputes2(CkQdMsg* impl_msg);
  idx_updateComputes2_CkQdMsg();

  // REG: void updateComputes3();
  idx_updateComputes3_void();

  // REG: void splitComputes();
  idx_splitComputes_void();

  // REG: void splitComputes2(CkQdMsg* impl_msg);
  idx_splitComputes2_CkQdMsg();

  // REG: void updateLocalComputes();
  idx_updateLocalComputes_void();

  // REG: void updateLocalComputes2(CkQdMsg* impl_msg);
  idx_updateLocalComputes2_CkQdMsg();

  // REG: void updateLocalComputes3();
  idx_updateLocalComputes3_void();

  // REG: void updateLocalComputes4(CkQdMsg* impl_msg);
  idx_updateLocalComputes4_CkQdMsg();

  // REG: void updateLocalComputes5();
  idx_updateLocalComputes5_void();

  // REG: void doneUpdateLocalComputes();
  idx_doneUpdateLocalComputes_void();

  // REG: void recvComputeGlobalData(ComputeGlobalDataMsg* impl_msg);
  idx_recvComputeGlobalData_ComputeGlobalDataMsg();

  // REG: void recvComputeGlobalResults(ComputeGlobalResultsMsg* impl_msg);
  idx_recvComputeGlobalResults_ComputeGlobalResultsMsg();

  // REG: void recvComputeDPMEData(ComputeDPMEDataMsg* impl_msg);
  idx_recvComputeDPMEData_ComputeDPMEDataMsg();

  // REG: void recvComputeDPMEResults(ComputeDPMEResultsMsg* impl_msg);
  idx_recvComputeDPMEResults_ComputeDPMEResultsMsg();

  // REG: void recvComputeConsForceMsg(ComputeConsForceMsg* impl_msg);
  idx_recvComputeConsForceMsg_ComputeConsForceMsg();

  // REG: void recvComputeEwaldData(ComputeEwaldMsg* impl_msg);
  idx_recvComputeEwaldData_ComputeEwaldMsg();

  // REG: void recvComputeEwaldResults(ComputeEwaldMsg* impl_msg);
  idx_recvComputeEwaldResults_ComputeEwaldMsg();

  // REG: void recvYieldDevice(int pe);
  idx_recvYieldDevice_marshall19();

  // REG: void recvBuildMICForceTable();
  idx_recvBuildMICForceTable_void();

  // REG: void recvCreateNonbondedMICSlave(NonbondedMICSlaveMsg* impl_msg);
  idx_recvCreateNonbondedMICSlave_NonbondedMICSlaveMsg();

  // REG: void recvNonbondedMICSlaveReady(int impl_noname_0, int impl_noname_1, int impl_noname_2);
  idx_recvNonbondedMICSlaveReady_marshall22();

  // REG: void recvNonbondedMICSlaveSkip(NonbondedMICSkipMsg* impl_msg);
  idx_recvNonbondedMICSlaveSkip_NonbondedMICSkipMsg();

  // REG: void recvMICPEData(int impl_noname_3, int impl_noname_4);
  idx_recvMICPEData_marshall24();

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerComputeMgr(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: message ComputeGlobalDataMsg;
*/
CMessage_ComputeGlobalDataMsg::__register("ComputeGlobalDataMsg", sizeof(ComputeGlobalDataMsg),(CkPackFnPtr) ComputeGlobalDataMsg::pack,(CkUnpackFnPtr) ComputeGlobalDataMsg::unpack);

/* REG: message ComputeGlobalResultsMsg;
*/
CMessage_ComputeGlobalResultsMsg::__register("ComputeGlobalResultsMsg", sizeof(ComputeGlobalResultsMsg),(CkPackFnPtr) ComputeGlobalResultsMsg::pack,(CkUnpackFnPtr) ComputeGlobalResultsMsg::unpack);

/* REG: message ComputeDPMEDataMsg;
*/
CMessage_ComputeDPMEDataMsg::__register("ComputeDPMEDataMsg", sizeof(ComputeDPMEDataMsg),(CkPackFnPtr) ComputeDPMEDataMsg::pack,(CkUnpackFnPtr) ComputeDPMEDataMsg::unpack);

/* REG: message ComputeDPMEResultsMsg;
*/
CMessage_ComputeDPMEResultsMsg::__register("ComputeDPMEResultsMsg", sizeof(ComputeDPMEResultsMsg),(CkPackFnPtr) ComputeDPMEResultsMsg::pack,(CkUnpackFnPtr) ComputeDPMEResultsMsg::unpack);

/* REG: message ComputeConsForceMsg;
*/
CMessage_ComputeConsForceMsg::__register("ComputeConsForceMsg", sizeof(ComputeConsForceMsg),(CkPackFnPtr) ComputeConsForceMsg::pack,(CkUnpackFnPtr) ComputeConsForceMsg::unpack);

/* REG: message ComputeEwaldMsg{
float eik[];
}
;
*/
CMessage_ComputeEwaldMsg::__register("ComputeEwaldMsg", sizeof(ComputeEwaldMsg),(CkPackFnPtr) ComputeEwaldMsg::pack,(CkUnpackFnPtr) ComputeEwaldMsg::unpack);

/* REG: message NonbondedMICSlaveMsg;
*/
CMessage_NonbondedMICSlaveMsg::__register("NonbondedMICSlaveMsg", sizeof(NonbondedMICSlaveMsg),(CkPackFnPtr) NonbondedMICSlaveMsg::pack,(CkUnpackFnPtr) NonbondedMICSlaveMsg::unpack);

/* REG: message NonbondedMICSkipMsg;
*/
CMessage_NonbondedMICSkipMsg::__register("NonbondedMICSkipMsg", sizeof(NonbondedMICSkipMsg),(CkPackFnPtr) NonbondedMICSkipMsg::pack,(CkUnpackFnPtr) NonbondedMICSkipMsg::unpack);

/* REG: group ComputeMgr: IrrGroup{
ComputeMgr();
void updateComputes2(CkQdMsg* impl_msg);
void updateComputes3();
void splitComputes();
void splitComputes2(CkQdMsg* impl_msg);
void updateLocalComputes();
void updateLocalComputes2(CkQdMsg* impl_msg);
void updateLocalComputes3();
void updateLocalComputes4(CkQdMsg* impl_msg);
void updateLocalComputes5();
void doneUpdateLocalComputes();
void recvComputeGlobalData(ComputeGlobalDataMsg* impl_msg);
void recvComputeGlobalResults(ComputeGlobalResultsMsg* impl_msg);
void recvComputeDPMEData(ComputeDPMEDataMsg* impl_msg);
void recvComputeDPMEResults(ComputeDPMEResultsMsg* impl_msg);
void recvComputeConsForceMsg(ComputeConsForceMsg* impl_msg);
void recvComputeEwaldData(ComputeEwaldMsg* impl_msg);
void recvComputeEwaldResults(ComputeEwaldMsg* impl_msg);
void recvYieldDevice(int pe);
void recvBuildMICForceTable();
void recvCreateNonbondedMICSlave(NonbondedMICSlaveMsg* impl_msg);
void recvNonbondedMICSlaveReady(int impl_noname_0, int impl_noname_1, int impl_noname_2);
void recvNonbondedMICSlaveSkip(NonbondedMICSkipMsg* impl_msg);
void recvMICPEData(int impl_noname_3, int impl_noname_4);
};
*/
  CkIndex_ComputeMgr::__register("ComputeMgr", sizeof(ComputeMgr));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_ComputeMgr::virtual_pup(PUP::er &p) {
    recursive_pup<ComputeMgr>(dynamic_cast<ComputeMgr*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
