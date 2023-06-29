




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

#ifndef CK_TEMPLATES_ONLY

    struct Closure_PmeZPencil::dummyRecvGrid_6_closure : public SDAG::Closure {
            int pe;
            int done;


      dummyRecvGrid_6_closure() {
        init();
      }
      dummyRecvGrid_6_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return pe;}
            int & getP1() { return done;}
      void pup(PUP::er& __p) {
        __p | pe;
        __p | done;
        packClosure(__p);
      }
      virtual ~dummyRecvGrid_6_closure() {
      }
      PUPable_decl(SINGLE_ARG(dummyRecvGrid_6_closure));
    };
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


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_NodePmeMgr::recvPencilMapProxies_2_closure : public SDAG::Closure {
            CProxy_PmePencilMap xm;
            CProxy_PmePencilMap ym;
            CProxy_PmePencilMap zm;


      recvPencilMapProxies_2_closure() {
        init();
      }
      recvPencilMapProxies_2_closure(CkMigrateMessage*) {
        init();
      }
            CProxy_PmePencilMap & getP0() { return xm;}
            CProxy_PmePencilMap & getP1() { return ym;}
            CProxy_PmePencilMap & getP2() { return zm;}
      void pup(PUP::er& __p) {
        __p | xm;
        __p | ym;
        __p | zm;
        packClosure(__p);
      }
      virtual ~recvPencilMapProxies_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(recvPencilMapProxies_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_NodePmeMgr::sendDataHelper_5_closure : public SDAG::Closure {
            int impl_noname_0;


      sendDataHelper_5_closure() {
        init();
      }
      sendDataHelper_5_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return impl_noname_0;}
      void pup(PUP::er& __p) {
        __p | impl_noname_0;
        packClosure(__p);
      }
      virtual ~sendDataHelper_5_closure() {
      }
      PUPable_decl(SINGLE_ARG(sendDataHelper_5_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_NodePmeMgr::sendPencilsHelper_6_closure : public SDAG::Closure {
            int impl_noname_1;


      sendPencilsHelper_6_closure() {
        init();
      }
      sendPencilsHelper_6_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return impl_noname_1;}
      void pup(PUP::er& __p) {
        __p | impl_noname_1;
        packClosure(__p);
      }
      virtual ~sendPencilsHelper_6_closure() {
      }
      PUPable_decl(SINGLE_ARG(sendPencilsHelper_6_closure));
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

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ComputePmeMgr::pollChargeGridReady_5_closure : public SDAG::Closure {
      

      pollChargeGridReady_5_closure() {
        init();
      }
      pollChargeGridReady_5_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~pollChargeGridReady_5_closure() {
      }
      PUPable_decl(SINGLE_ARG(pollChargeGridReady_5_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ComputePmeMgr::recvChargeGridReady_6_closure : public SDAG::Closure {
      

      recvChargeGridReady_6_closure() {
        init();
      }
      recvChargeGridReady_6_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~recvChargeGridReady_6_closure() {
      }
      PUPable_decl(SINGLE_ARG(recvChargeGridReady_6_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ComputePmeMgr::sendDataHelper_7_closure : public SDAG::Closure {
            int impl_noname_2;


      sendDataHelper_7_closure() {
        init();
      }
      sendDataHelper_7_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return impl_noname_2;}
      void pup(PUP::er& __p) {
        __p | impl_noname_2;
        packClosure(__p);
      }
      virtual ~sendDataHelper_7_closure() {
      }
      PUPable_decl(SINGLE_ARG(sendDataHelper_7_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ComputePmeMgr::sendPencilsHelper_8_closure : public SDAG::Closure {
            int impl_noname_3;


      sendPencilsHelper_8_closure() {
        init();
      }
      sendPencilsHelper_8_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return impl_noname_3;}
      void pup(PUP::er& __p) {
        __p | impl_noname_3;
        packClosure(__p);
      }
      virtual ~sendPencilsHelper_8_closure() {
      }
      PUPable_decl(SINGLE_ARG(sendPencilsHelper_8_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ComputePmeMgr::gridCalc1_10_closure : public SDAG::Closure {
      

      gridCalc1_10_closure() {
        init();
      }
      gridCalc1_10_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~gridCalc1_10_closure() {
      }
      PUPable_decl(SINGLE_ARG(gridCalc1_10_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ComputePmeMgr::sendTransBarrier_11_closure : public SDAG::Closure {
      

      sendTransBarrier_11_closure() {
        init();
      }
      sendTransBarrier_11_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~sendTransBarrier_11_closure() {
      }
      PUPable_decl(SINGLE_ARG(sendTransBarrier_11_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ComputePmeMgr::sendTrans_12_closure : public SDAG::Closure {
      

      sendTrans_12_closure() {
        init();
      }
      sendTrans_12_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~sendTrans_12_closure() {
      }
      PUPable_decl(SINGLE_ARG(sendTrans_12_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ComputePmeMgr::gridCalc2_15_closure : public SDAG::Closure {
      

      gridCalc2_15_closure() {
        init();
      }
      gridCalc2_15_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~gridCalc2_15_closure() {
      }
      PUPable_decl(SINGLE_ARG(gridCalc2_15_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ComputePmeMgr::gridCalc2R_16_closure : public SDAG::Closure {
      

      gridCalc2R_16_closure() {
        init();
      }
      gridCalc2R_16_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~gridCalc2R_16_closure() {
      }
      PUPable_decl(SINGLE_ARG(gridCalc2R_16_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ComputePmeMgr::sendUntrans_17_closure : public SDAG::Closure {
      

      sendUntrans_17_closure() {
        init();
      }
      sendUntrans_17_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~sendUntrans_17_closure() {
      }
      PUPable_decl(SINGLE_ARG(sendUntrans_17_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ComputePmeMgr::gridCalc3_20_closure : public SDAG::Closure {
      

      gridCalc3_20_closure() {
        init();
      }
      gridCalc3_20_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~gridCalc3_20_closure() {
      }
      PUPable_decl(SINGLE_ARG(gridCalc3_20_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ComputePmeMgr::sendUngrid_21_closure : public SDAG::Closure {
      

      sendUngrid_21_closure() {
        init();
      }
      sendUngrid_21_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~sendUngrid_21_closure() {
      }
      PUPable_decl(SINGLE_ARG(sendUngrid_21_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ComputePmeMgr::ungridCalc_24_closure : public SDAG::Closure {
      

      ungridCalc_24_closure() {
        init();
      }
      ungridCalc_24_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~ungridCalc_24_closure() {
      }
      PUPable_decl(SINGLE_ARG(ungridCalc_24_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ComputePmeMgr::pollForcesReady_25_closure : public SDAG::Closure {
      

      pollForcesReady_25_closure() {
        init();
      }
      pollForcesReady_25_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~pollForcesReady_25_closure() {
      }
      PUPable_decl(SINGLE_ARG(pollForcesReady_25_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ComputePmeMgr::addRecipEvirClient_27_closure : public SDAG::Closure {
      

      addRecipEvirClient_27_closure() {
        init();
      }
      addRecipEvirClient_27_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~addRecipEvirClient_27_closure() {
      }
      PUPable_decl(SINGLE_ARG(addRecipEvirClient_27_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ComputePmeMgr::recvArrays_28_closure : public SDAG::Closure {
            CProxy_PmeXPencil impl_noname_4;
            CProxy_PmeYPencil impl_noname_5;
            CProxy_PmeZPencil impl_noname_6;


      recvArrays_28_closure() {
        init();
      }
      recvArrays_28_closure(CkMigrateMessage*) {
        init();
      }
            CProxy_PmeXPencil & getP0() { return impl_noname_4;}
            CProxy_PmeYPencil & getP1() { return impl_noname_5;}
            CProxy_PmeZPencil & getP2() { return impl_noname_6;}
      void pup(PUP::er& __p) {
        __p | impl_noname_4;
        __p | impl_noname_5;
        __p | impl_noname_6;
        packClosure(__p);
      }
      virtual ~recvArrays_28_closure() {
      }
      PUPable_decl(SINGLE_ARG(recvArrays_28_closure));
    };
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: message PmeGridMsg{
int zlist[];
char fgrid[];
float qgrid[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_PmeGridMsg::operator new(size_t s){
  return PmeGridMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_PmeGridMsg::operator new(size_t s, int* sz){
  return PmeGridMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_PmeGridMsg::operator new(size_t s, int* sz,const int pb){
  return PmeGridMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_PmeGridMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return PmeGridMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_PmeGridMsg::operator new(size_t s, int sz0, int sz1, int sz2) {
  int sizes[3];
  sizes[0] = sz0;
  sizes[1] = sz1;
  sizes[2] = sz2;
  return PmeGridMsg::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_PmeGridMsg::operator new(size_t s, int sz0, int sz1, int sz2, const int p) {
  int sizes[3];
  sizes[0] = sz0;
  sizes[1] = sz1;
  sizes[2] = sz2;
  return PmeGridMsg::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_PmeGridMsg::operator new(size_t s, int sz0, int sz1, int sz2, const int p, const GroupDepNum groupDepNum) {
  int sizes[3];
  sizes[0] = sz0;
  sizes[1] = sz1;
  sizes[2] = sz2;
  return PmeGridMsg::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_PmeGridMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(int)*sizes[0]);
  if(sizes==0)
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[1] + ALIGN_DEFAULT(sizeof(char)*sizes[1]);
  if(sizes==0)
    CkpvAccess(_offsets)[3] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[3] = CkpvAccess(_offsets)[2] + ALIGN_DEFAULT(sizeof(float)*sizes[2]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[3], pb, groupDepNum);
}
CMessage_PmeGridMsg::CMessage_PmeGridMsg() {
PmeGridMsg *newmsg = (PmeGridMsg *)this;
  newmsg->zlist = (int *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
  newmsg->fgrid = (char *) ((char *)newmsg + CkpvAccess(_offsets)[1]);
  newmsg->qgrid = (float *) ((char *)newmsg + CkpvAccess(_offsets)[2]);
}
void CMessage_PmeGridMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_PmeGridMsg::pack(PmeGridMsg *msg) {
  msg->zlist = (int *) ((char *)msg->zlist - (char *)msg);
  msg->fgrid = (char *) ((char *)msg->fgrid - (char *)msg);
  msg->qgrid = (float *) ((char *)msg->qgrid - (char *)msg);
  return (void *) msg;
}
PmeGridMsg* CMessage_PmeGridMsg::unpack(void* buf) {
  PmeGridMsg *msg = (PmeGridMsg *) buf;
  msg->zlist = (int *) ((size_t)msg->zlist + (char *)msg);
  msg->fgrid = (char *) ((size_t)msg->fgrid + (char *)msg);
  msg->qgrid = (float *) ((size_t)msg->qgrid + (char *)msg);
  return msg;
}
int CMessage_PmeGridMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message PmeTransMsg{
float qgrid[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_PmeTransMsg::operator new(size_t s){
  return PmeTransMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_PmeTransMsg::operator new(size_t s, int* sz){
  return PmeTransMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_PmeTransMsg::operator new(size_t s, int* sz,const int pb){
  return PmeTransMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_PmeTransMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return PmeTransMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_PmeTransMsg::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return PmeTransMsg::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_PmeTransMsg::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return PmeTransMsg::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_PmeTransMsg::operator new(size_t s, int sz0, const int p, const GroupDepNum groupDepNum) {
  int sizes[1];
  sizes[0] = sz0;
  return PmeTransMsg::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_PmeTransMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(float)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb, groupDepNum);
}
CMessage_PmeTransMsg::CMessage_PmeTransMsg() {
PmeTransMsg *newmsg = (PmeTransMsg *)this;
  newmsg->qgrid = (float *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
void CMessage_PmeTransMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_PmeTransMsg::pack(PmeTransMsg *msg) {
  msg->qgrid = (float *) ((char *)msg->qgrid - (char *)msg);
  return (void *) msg;
}
PmeTransMsg* CMessage_PmeTransMsg::unpack(void* buf) {
  PmeTransMsg *msg = (PmeTransMsg *) buf;
  msg->qgrid = (float *) ((size_t)msg->qgrid + (char *)msg);
  return msg;
}
int CMessage_PmeTransMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message PmeSharedTransMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_PmeSharedTransMsg::operator new(size_t s){
  return PmeSharedTransMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_PmeSharedTransMsg::operator new(size_t s, int* sz){
  return PmeSharedTransMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_PmeSharedTransMsg::operator new(size_t s, int* sz,const int pb){
  return PmeSharedTransMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_PmeSharedTransMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return PmeSharedTransMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_PmeSharedTransMsg::operator new(size_t s, const int p) {
  return PmeSharedTransMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_PmeSharedTransMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return PmeSharedTransMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_PmeSharedTransMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_PmeSharedTransMsg::CMessage_PmeSharedTransMsg() {
PmeSharedTransMsg *newmsg = (PmeSharedTransMsg *)this;
}
void CMessage_PmeSharedTransMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_PmeSharedTransMsg::pack(PmeSharedTransMsg *msg) {
  return (void *) msg;
}
PmeSharedTransMsg* CMessage_PmeSharedTransMsg::unpack(void* buf) {
  PmeSharedTransMsg *msg = (PmeSharedTransMsg *) buf;
  return msg;
}
int CMessage_PmeSharedTransMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message PmeUntransMsg{
float qgrid[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_PmeUntransMsg::operator new(size_t s){
  return PmeUntransMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_PmeUntransMsg::operator new(size_t s, int* sz){
  return PmeUntransMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_PmeUntransMsg::operator new(size_t s, int* sz,const int pb){
  return PmeUntransMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_PmeUntransMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return PmeUntransMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_PmeUntransMsg::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return PmeUntransMsg::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_PmeUntransMsg::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return PmeUntransMsg::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_PmeUntransMsg::operator new(size_t s, int sz0, const int p, const GroupDepNum groupDepNum) {
  int sizes[1];
  sizes[0] = sz0;
  return PmeUntransMsg::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_PmeUntransMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(float)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb, groupDepNum);
}
CMessage_PmeUntransMsg::CMessage_PmeUntransMsg() {
PmeUntransMsg *newmsg = (PmeUntransMsg *)this;
  newmsg->qgrid = (float *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
void CMessage_PmeUntransMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_PmeUntransMsg::pack(PmeUntransMsg *msg) {
  msg->qgrid = (float *) ((char *)msg->qgrid - (char *)msg);
  return (void *) msg;
}
PmeUntransMsg* CMessage_PmeUntransMsg::unpack(void* buf) {
  PmeUntransMsg *msg = (PmeUntransMsg *) buf;
  msg->qgrid = (float *) ((size_t)msg->qgrid + (char *)msg);
  return msg;
}
int CMessage_PmeUntransMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message PmeSharedUntransMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_PmeSharedUntransMsg::operator new(size_t s){
  return PmeSharedUntransMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_PmeSharedUntransMsg::operator new(size_t s, int* sz){
  return PmeSharedUntransMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_PmeSharedUntransMsg::operator new(size_t s, int* sz,const int pb){
  return PmeSharedUntransMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_PmeSharedUntransMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return PmeSharedUntransMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_PmeSharedUntransMsg::operator new(size_t s, const int p) {
  return PmeSharedUntransMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_PmeSharedUntransMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return PmeSharedUntransMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_PmeSharedUntransMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_PmeSharedUntransMsg::CMessage_PmeSharedUntransMsg() {
PmeSharedUntransMsg *newmsg = (PmeSharedUntransMsg *)this;
}
void CMessage_PmeSharedUntransMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_PmeSharedUntransMsg::pack(PmeSharedUntransMsg *msg) {
  return (void *) msg;
}
PmeSharedUntransMsg* CMessage_PmeSharedUntransMsg::unpack(void* buf) {
  PmeSharedUntransMsg *msg = (PmeSharedUntransMsg *) buf;
  return msg;
}
int CMessage_PmeSharedUntransMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group PmePencilMap: CkArrayMap{
PmePencilMap(int i_a, int i_b, int n_b, int n, const int *d);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_PmePencilMap::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: PmePencilMap(int i_a, int i_b, int n_b, int n, const int *d);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: PmePencilMap(int i_a, int i_b, int n_b, int n, const int *d);
 */
CkGroupID CProxy_PmePencilMap::ckNew(int i_a, int i_b, int n_b, int n, const int *d, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int i_a, int i_b, int n_b, int n, const int *d
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_d, impl_cnt_d;
  impl_off_d=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_d=sizeof(int)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|i_a;
    implP|i_b;
    implP|n_b;
    implP|n;
    implP|impl_off_d;
    implP|impl_cnt_d;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|i_a;
    implP|i_b;
    implP|n_b;
    implP|n;
    implP|impl_off_d;
    implP|impl_cnt_d;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_d,d,impl_cnt_d);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_PmePencilMap::__idx, CkIndex_PmePencilMap::idx_PmePencilMap_marshall1(), impl_msg);
  return gId;
}
  CProxy_PmePencilMap::CProxy_PmePencilMap(int i_a, int i_b, int n_b, int n, const int *d, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int i_a, int i_b, int n_b, int n, const int *d
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_d, impl_cnt_d;
  impl_off_d=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_d=sizeof(int)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|i_a;
    implP|i_b;
    implP|n_b;
    implP|n;
    implP|impl_off_d;
    implP|impl_cnt_d;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|i_a;
    implP|i_b;
    implP|n_b;
    implP|n;
    implP|impl_off_d;
    implP|impl_cnt_d;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_d,d,impl_cnt_d);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  ckSetGroupID(CkCreateGroup(CkIndex_PmePencilMap::__idx, CkIndex_PmePencilMap::idx_PmePencilMap_marshall1(), impl_msg));
}

// Entry point registration function
int CkIndex_PmePencilMap::reg_PmePencilMap_marshall1() {
  int epidx = CkRegisterEp("PmePencilMap(int i_a, int i_b, int n_b, int n, const int *d)",
      reinterpret_cast<CkCallFnPtr>(_call_PmePencilMap_marshall1), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_PmePencilMap_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_PmePencilMap_marshall1);

  return epidx;
}

void CkIndex_PmePencilMap::_call_PmePencilMap_marshall1(void* impl_msg, void* impl_obj_void)
{
  PmePencilMap* impl_obj = static_cast<PmePencilMap*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int i_a, int i_b, int n_b, int n, const int *d*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> i_a;
  implP|i_a;
  PUP::detail::TemporaryObjectHolder<int> i_b;
  implP|i_b;
  PUP::detail::TemporaryObjectHolder<int> n_b;
  implP|n_b;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
  int impl_off_d, impl_cnt_d;
  implP|impl_off_d;
  implP|impl_cnt_d;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *d=(int *)(impl_buf+impl_off_d);
  new (impl_obj_void) PmePencilMap(std::move(i_a.t), std::move(i_b.t), std::move(n_b.t), std::move(n.t), d);
}
int CkIndex_PmePencilMap::_callmarshall_PmePencilMap_marshall1(char* impl_buf, void* impl_obj_void) {
  PmePencilMap* impl_obj = static_cast<PmePencilMap*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int i_a, int i_b, int n_b, int n, const int *d*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> i_a;
  implP|i_a;
  PUP::detail::TemporaryObjectHolder<int> i_b;
  implP|i_b;
  PUP::detail::TemporaryObjectHolder<int> n_b;
  implP|n_b;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
  int impl_off_d, impl_cnt_d;
  implP|impl_off_d;
  implP|impl_cnt_d;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *d=(int *)(impl_buf+impl_off_d);
  new (impl_obj_void) PmePencilMap(std::move(i_a.t), std::move(i_b.t), std::move(n_b.t), std::move(n.t), d);
  return implP.size();
}
void CkIndex_PmePencilMap::_marshallmessagepup_PmePencilMap_marshall1(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int i_a, int i_b, int n_b, int n, const int *d*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> i_a;
  implP|i_a;
  PUP::detail::TemporaryObjectHolder<int> i_b;
  implP|i_b;
  PUP::detail::TemporaryObjectHolder<int> n_b;
  implP|n_b;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
  int impl_off_d, impl_cnt_d;
  implP|impl_off_d;
  implP|impl_cnt_d;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *d=(int *)(impl_buf+impl_off_d);
  if (implDestP.hasComments()) implDestP.comment("i_a");
  implDestP|i_a;
  if (implDestP.hasComments()) implDestP.comment("i_b");
  implDestP|i_b;
  if (implDestP.hasComments()) implDestP.comment("n_b");
  implDestP|n_b;
  if (implDestP.hasComments()) implDestP.comment("n");
  implDestP|n;
  if (implDestP.hasComments()) implDestP.comment("d");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*d))<impl_cnt_d;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|d[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: PmePencilMap(int i_a, int i_b, int n_b, int n, const int *d);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_PmePencilMap::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_CkArrayMap::__idx);
   CkRegisterGroupIrr(__idx,PmePencilMap::isIrreducible());
  // REG: PmePencilMap(int i_a, int i_b, int n_b, int n, const int *d);
  idx_PmePencilMap_marshall1();

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message PmePencilInitMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_PmePencilInitMsg::operator new(size_t s){
  return PmePencilInitMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_PmePencilInitMsg::operator new(size_t s, int* sz){
  return PmePencilInitMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_PmePencilInitMsg::operator new(size_t s, int* sz,const int pb){
  return PmePencilInitMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_PmePencilInitMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return PmePencilInitMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_PmePencilInitMsg::operator new(size_t s, const int p) {
  return PmePencilInitMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_PmePencilInitMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return PmePencilInitMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_PmePencilInitMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_PmePencilInitMsg::CMessage_PmePencilInitMsg() {
PmePencilInitMsg *newmsg = (PmePencilInitMsg *)this;
}
void CMessage_PmePencilInitMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_PmePencilInitMsg::pack(PmePencilInitMsg *msg) {
  return (void *) msg;
}
PmePencilInitMsg* CMessage_PmePencilInitMsg::unpack(void* buf) {
  PmePencilInitMsg *msg = (PmePencilInitMsg *) buf;
  return msg;
}
int CMessage_PmePencilInitMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message PmeAckMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_PmeAckMsg::operator new(size_t s){
  return PmeAckMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_PmeAckMsg::operator new(size_t s, int* sz){
  return PmeAckMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_PmeAckMsg::operator new(size_t s, int* sz,const int pb){
  return PmeAckMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_PmeAckMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return PmeAckMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_PmeAckMsg::operator new(size_t s, const int p) {
  return PmeAckMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_PmeAckMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return PmeAckMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_PmeAckMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_PmeAckMsg::CMessage_PmeAckMsg() {
PmeAckMsg *newmsg = (PmeAckMsg *)this;
}
void CMessage_PmeAckMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_PmeAckMsg::pack(PmeAckMsg *msg) {
  return (void *) msg;
}
PmeAckMsg* CMessage_PmeAckMsg::unpack(void* buf) {
  PmeAckMsg *msg = (PmeAckMsg *) buf;
  return msg;
}
int CMessage_PmeAckMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message PmeEvirMsg{
PmeReduction evir[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_PmeEvirMsg::operator new(size_t s){
  return PmeEvirMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_PmeEvirMsg::operator new(size_t s, int* sz){
  return PmeEvirMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_PmeEvirMsg::operator new(size_t s, int* sz,const int pb){
  return PmeEvirMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_PmeEvirMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return PmeEvirMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_PmeEvirMsg::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return PmeEvirMsg::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_PmeEvirMsg::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return PmeEvirMsg::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_PmeEvirMsg::operator new(size_t s, int sz0, const int p, const GroupDepNum groupDepNum) {
  int sizes[1];
  sizes[0] = sz0;
  return PmeEvirMsg::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_PmeEvirMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(PmeReduction)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb, groupDepNum);
}
CMessage_PmeEvirMsg::CMessage_PmeEvirMsg() {
PmeEvirMsg *newmsg = (PmeEvirMsg *)this;
  newmsg->evir = (PmeReduction *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
void CMessage_PmeEvirMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_PmeEvirMsg::pack(PmeEvirMsg *msg) {
  msg->evir = (PmeReduction *) ((char *)msg->evir - (char *)msg);
  return (void *) msg;
}
PmeEvirMsg* CMessage_PmeEvirMsg::unpack(void* buf) {
  PmeEvirMsg *msg = (PmeEvirMsg *) buf;
  msg->evir = (PmeReduction *) ((size_t)msg->evir + (char *)msg);
  return msg;
}
int CMessage_PmeEvirMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: array PmeZPencil: ArrayElement{
PmeZPencil();
void recvGrid(PmeGridMsg* impl_msg);
void recvUntrans(PmeUntransMsg* impl_msg);
void recvAck(PmeAckMsg* impl_msg);
void recvNodeAck(PmeAckMsg* impl_msg);
void dummyRecvGrid(int pe, int done);
void init(PmePencilInitMsg* impl_msg);
PmeZPencil(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_PmeZPencil::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CProxySection_PmeZPencil::contribute(CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, userData, fragSize);
}

void CProxySection_PmeZPencil::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, userData, fragSize);
}

template <typename T>
void CProxySection_PmeZPencil::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, userData, fragSize);
}

void CProxySection_PmeZPencil::contribute(CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, cb, userData, fragSize);
}

void CProxySection_PmeZPencil::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, cb, userData, fragSize);
}

template <typename T>
void CProxySection_PmeZPencil::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, cb, userData, fragSize);
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: PmeZPencil();
 */
void CProxyElement_PmeZPencil::insert(int onPE, const CkEntryOptions *impl_e_opts)
{ 
   void *impl_msg = CkAllocSysMsg(impl_e_opts);
   UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_PmeZPencil::idx_PmeZPencil_void(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvGrid(PmeGridMsg* impl_msg);
 */
void CProxyElement_PmeZPencil::recvGrid(PmeGridMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_PmeZPencil::idx_recvGrid_PmeGridMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvUntrans(PmeUntransMsg* impl_msg);
 */
void CProxyElement_PmeZPencil::recvUntrans(PmeUntransMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_PmeZPencil::idx_recvUntrans_PmeUntransMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvAck(PmeAckMsg* impl_msg);
 */
void CProxyElement_PmeZPencil::recvAck(PmeAckMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_PmeZPencil::idx_recvAck_PmeAckMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvNodeAck(PmeAckMsg* impl_msg);
 */
void CProxyElement_PmeZPencil::recvNodeAck(PmeAckMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_PmeZPencil::idx_recvNodeAck_PmeAckMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void dummyRecvGrid(int pe, int done);
 */
void CProxyElement_PmeZPencil::dummyRecvGrid(int pe, int done, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int pe, int done
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|pe;
    implP|done;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|pe;
    implP|done;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_PmeZPencil::idx_dummyRecvGrid_marshall6(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void init(PmePencilInitMsg* impl_msg);
 */
void CProxyElement_PmeZPencil::init(PmePencilInitMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_PmeZPencil::idx_init_PmePencilInitMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: PmeZPencil(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: PmeZPencil();
 */
CkArrayID CProxy_PmeZPencil::ckNew(const CkArrayOptions &opts, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_PmeZPencil::idx_PmeZPencil_void(), opts);
  return gId;
}
void CProxy_PmeZPencil::ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_PmeZPencil::idx_PmeZPencil_void(), _ck_array_creation_cb, opts, impl_msg);
}
CkArrayID CProxy_PmeZPencil::ckNew(const int s1, const int s2, const int s3, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkArrayOptions opts(s1, s2, s3);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_PmeZPencil::idx_PmeZPencil_void(), opts);
  return gId;
}
void CProxy_PmeZPencil::ckNew(const int s1, const int s2, const int s3, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkArrayOptions opts(s1, s2, s3);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_PmeZPencil::idx_PmeZPencil_void(), _ck_array_creation_cb, opts, impl_msg);
}

// Entry point registration function
int CkIndex_PmeZPencil::reg_PmeZPencil_void() {
  int epidx = CkRegisterEp("PmeZPencil()",
      reinterpret_cast<CkCallFnPtr>(_call_PmeZPencil_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_PmeZPencil::_call_PmeZPencil_void(void* impl_msg, void* impl_obj_void)
{
  PmeZPencil* impl_obj = static_cast<PmeZPencil*>(impl_obj_void);
  new (impl_obj_void) PmeZPencil();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvGrid(PmeGridMsg* impl_msg);
 */
void CProxy_PmeZPencil::recvGrid(PmeGridMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_PmeZPencil::idx_recvGrid_PmeGridMsg(),0);
}

// Entry point registration function
int CkIndex_PmeZPencil::reg_recvGrid_PmeGridMsg() {
  int epidx = CkRegisterEp("recvGrid(PmeGridMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvGrid_PmeGridMsg), CMessage_PmeGridMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)PmeGridMsg::ckDebugPup);
  return epidx;
}

void CkIndex_PmeZPencil::_call_recvGrid_PmeGridMsg(void* impl_msg, void* impl_obj_void)
{
  PmeZPencil* impl_obj = static_cast<PmeZPencil*>(impl_obj_void);
  impl_obj->recvGrid((PmeGridMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvUntrans(PmeUntransMsg* impl_msg);
 */
void CProxy_PmeZPencil::recvUntrans(PmeUntransMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_PmeZPencil::idx_recvUntrans_PmeUntransMsg(),0);
}

// Entry point registration function
int CkIndex_PmeZPencil::reg_recvUntrans_PmeUntransMsg() {
  int epidx = CkRegisterEp("recvUntrans(PmeUntransMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvUntrans_PmeUntransMsg), CMessage_PmeUntransMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)PmeUntransMsg::ckDebugPup);
  return epidx;
}

void CkIndex_PmeZPencil::_call_recvUntrans_PmeUntransMsg(void* impl_msg, void* impl_obj_void)
{
  PmeZPencil* impl_obj = static_cast<PmeZPencil*>(impl_obj_void);
  impl_obj->recvUntrans((PmeUntransMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvAck(PmeAckMsg* impl_msg);
 */
void CProxy_PmeZPencil::recvAck(PmeAckMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_PmeZPencil::idx_recvAck_PmeAckMsg(),0);
}

// Entry point registration function
int CkIndex_PmeZPencil::reg_recvAck_PmeAckMsg() {
  int epidx = CkRegisterEp("recvAck(PmeAckMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvAck_PmeAckMsg), CMessage_PmeAckMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)PmeAckMsg::ckDebugPup);
  return epidx;
}

void CkIndex_PmeZPencil::_call_recvAck_PmeAckMsg(void* impl_msg, void* impl_obj_void)
{
  PmeZPencil* impl_obj = static_cast<PmeZPencil*>(impl_obj_void);
  impl_obj->recvAck((PmeAckMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvNodeAck(PmeAckMsg* impl_msg);
 */
void CProxy_PmeZPencil::recvNodeAck(PmeAckMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_PmeZPencil::idx_recvNodeAck_PmeAckMsg(),0);
}

// Entry point registration function
int CkIndex_PmeZPencil::reg_recvNodeAck_PmeAckMsg() {
  int epidx = CkRegisterEp("recvNodeAck(PmeAckMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvNodeAck_PmeAckMsg), CMessage_PmeAckMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)PmeAckMsg::ckDebugPup);
  return epidx;
}

void CkIndex_PmeZPencil::_call_recvNodeAck_PmeAckMsg(void* impl_msg, void* impl_obj_void)
{
  PmeZPencil* impl_obj = static_cast<PmeZPencil*>(impl_obj_void);
  impl_obj->recvNodeAck((PmeAckMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void dummyRecvGrid(int pe, int done);
 */
void CProxy_PmeZPencil::dummyRecvGrid(int pe, int done, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int pe, int done
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|pe;
    implP|done;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|pe;
    implP|done;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_PmeZPencil::idx_dummyRecvGrid_marshall6(),0);
}

// Entry point registration function
int CkIndex_PmeZPencil::reg_dummyRecvGrid_marshall6() {
  int epidx = CkRegisterEp("dummyRecvGrid(int pe, int done)",
      reinterpret_cast<CkCallFnPtr>(_call_dummyRecvGrid_marshall6), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_dummyRecvGrid_marshall6);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_dummyRecvGrid_marshall6);

  return epidx;
}

void CkIndex_PmeZPencil::_call_dummyRecvGrid_marshall6(void* impl_msg, void* impl_obj_void)
{
  PmeZPencil* impl_obj = static_cast<PmeZPencil*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  PUP::fromMem implP(impl_buf);
  Closure_PmeZPencil::dummyRecvGrid_6_closure* genClosure = new Closure_PmeZPencil::dummyRecvGrid_6_closure();
  implP|genClosure->pe;
  implP|genClosure->done;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->dummyRecvGrid(genClosure);
  genClosure->deref();
}
int CkIndex_PmeZPencil::_callmarshall_dummyRecvGrid_marshall6(char* impl_buf, void* impl_obj_void) {
  PmeZPencil* impl_obj = static_cast<PmeZPencil*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  PUP::fromMem implP(impl_buf);
  Closure_PmeZPencil::dummyRecvGrid_6_closure* genClosure = new Closure_PmeZPencil::dummyRecvGrid_6_closure();
  implP|genClosure->pe;
  implP|genClosure->done;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->dummyRecvGrid(genClosure);
  genClosure->deref();
  return implP.size();
}
void CkIndex_PmeZPencil::_marshallmessagepup_dummyRecvGrid_marshall6(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int pe, int done*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> pe;
  implP|pe;
  PUP::detail::TemporaryObjectHolder<int> done;
  implP|done;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("pe");
  implDestP|pe;
  if (implDestP.hasComments()) implDestP.comment("done");
  implDestP|done;
}
PUPable_def(SINGLE_ARG(Closure_PmeZPencil::dummyRecvGrid_6_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void init(PmePencilInitMsg* impl_msg);
 */
void CProxy_PmeZPencil::init(PmePencilInitMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_PmeZPencil::idx_init_PmePencilInitMsg(),0);
}

// Entry point registration function
int CkIndex_PmeZPencil::reg_init_PmePencilInitMsg() {
  int epidx = CkRegisterEp("init(PmePencilInitMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_init_PmePencilInitMsg), CMessage_PmePencilInitMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)PmePencilInitMsg::ckDebugPup);
  return epidx;
}

void CkIndex_PmeZPencil::_call_init_PmePencilInitMsg(void* impl_msg, void* impl_obj_void)
{
  PmeZPencil* impl_obj = static_cast<PmeZPencil*>(impl_obj_void);
  impl_obj->_sdag_fnc_init((PmePencilInitMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: PmeZPencil(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_PmeZPencil::reg_PmeZPencil_CkMigrateMessage() {
  int epidx = CkRegisterEp("PmeZPencil(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_PmeZPencil_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_PmeZPencil::_call_PmeZPencil_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  call_migration_constructor<PmeZPencil> c = impl_obj_void;
  c((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: PmeZPencil();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvGrid(PmeGridMsg* impl_msg);
 */
void CProxySection_PmeZPencil::recvGrid(PmeGridMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_PmeZPencil::idx_recvGrid_PmeGridMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvUntrans(PmeUntransMsg* impl_msg);
 */
void CProxySection_PmeZPencil::recvUntrans(PmeUntransMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_PmeZPencil::idx_recvUntrans_PmeUntransMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvAck(PmeAckMsg* impl_msg);
 */
void CProxySection_PmeZPencil::recvAck(PmeAckMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_PmeZPencil::idx_recvAck_PmeAckMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvNodeAck(PmeAckMsg* impl_msg);
 */
void CProxySection_PmeZPencil::recvNodeAck(PmeAckMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_PmeZPencil::idx_recvNodeAck_PmeAckMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void dummyRecvGrid(int pe, int done);
 */
void CProxySection_PmeZPencil::dummyRecvGrid(int pe, int done, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int pe, int done
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|pe;
    implP|done;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|pe;
    implP|done;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_PmeZPencil::idx_dummyRecvGrid_marshall6(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void init(PmePencilInitMsg* impl_msg);
 */
void CProxySection_PmeZPencil::init(PmePencilInitMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_PmeZPencil::idx_init_PmePencilInitMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: PmeZPencil(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_PmeZPencil::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterArrayDimensions(__idx, 3);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
  // REG: PmeZPencil();
  idx_PmeZPencil_void();
  CkRegisterDefaultCtor(__idx, idx_PmeZPencil_void());

  // REG: void recvGrid(PmeGridMsg* impl_msg);
  idx_recvGrid_PmeGridMsg();

  // REG: void recvUntrans(PmeUntransMsg* impl_msg);
  idx_recvUntrans_PmeUntransMsg();

  // REG: void recvAck(PmeAckMsg* impl_msg);
  idx_recvAck_PmeAckMsg();

  // REG: void recvNodeAck(PmeAckMsg* impl_msg);
  idx_recvNodeAck_PmeAckMsg();

  // REG: void dummyRecvGrid(int pe, int done);
  idx_dummyRecvGrid_marshall6();

  // REG: void init(PmePencilInitMsg* impl_msg);
  idx_init_PmePencilInitMsg();

  // REG: PmeZPencil(CkMigrateMessage* impl_msg);
  idx_PmeZPencil_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_PmeZPencil_CkMigrateMessage());

  PmeZPencil::__sdag_register(); // Potentially missing PmeZPencil_SDAG_CODE in your class definition?
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void PmeZPencil::init(PmePencilInitMsg initmsg){
  CkPrintf("Error> Direct call to SDAG entry method \'%s::%s\'!\n", "PmeZPencil", "init(PmePencilInitMsg initmsg)"); 
  CkAbort("Direct SDAG call is not allowed for SDAG entry methods having when constructs. Call such SDAG methods using a proxy"); 
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void PmeZPencil::_sdag_fnc_init(PmePencilInitMsg* gen0) {
  _TRACE_END_EXECUTE(); 
  if (!__dep.get()) _sdag_init();
  CkReferenceMsg(gen0);
  _slist_0(gen0);
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, this->ckGetArrayIndex().getProjectionID(), this); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeZPencil::init_end(PmePencilInitMsg* gen0) {
  CmiFree(UsrToEnv(gen0));
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeZPencil::_slist_0(PmePencilInitMsg* gen0) {
  _serial_0(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeZPencil::_slist_0_end(PmePencilInitMsg* gen0) {
  init_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeZPencil::_serial_0(PmePencilInitMsg* gen0) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_PmeZPencil_serial_0()), CkMyPe(), 0, this->ckGetArrayIndex().getProjectionID(), this); 
  {
    PmePencilInitMsg*& initmsg = gen0;
    { // begin serial block
#line 32 "inc/ComputePmeMgr.ci"

 base_init(initmsg); delete initmsg;
 work_zlist.resize(initdata.grid.dim3);
 fft_init();
 imsg = 0; grid_msgs.resize(0);
      
#line 1847 "ComputePmeMgr.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _while_0(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeZPencil::_while_0(PmePencilInitMsg* gen0) {
  {
    PmePencilInitMsg*& initmsg = gen0;
    if ( ! imsg ) {
      _slist_1(gen0);
    } else {
      _while_1(gen0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeZPencil::_while_0_end(PmePencilInitMsg* gen0) {
  {
    PmePencilInitMsg*& initmsg = gen0;
    if ( ! imsg ) {
      _slist_1(gen0);
    } else {
      _while_1(gen0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeZPencil::_slist_1(PmePencilInitMsg* gen0) {
  _when_0(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeZPencil::_slist_1_end(PmePencilInitMsg* gen0) {
  _while_0_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* PmeZPencil::_when_0(PmePencilInitMsg* gen0) {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(0, false, 0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _serial_1(gen0, static_cast<Closure_PmeZPencil::dummyRecvGrid_6_closure*>(buf0->cl));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(0);
    c->addClosure(new SDAG::MsgClosure(gen0));
    c->anyEntries.push_back(0);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeZPencil::_when_0_end(PmePencilInitMsg* gen0, Closure_PmeZPencil::dummyRecvGrid_6_closure* gen1) {
  _slist_1_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeZPencil::_serial_1(PmePencilInitMsg* gen0, Closure_PmeZPencil::dummyRecvGrid_6_closure* gen1) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_PmeZPencil_serial_1()), CkMyPe(), 0, this->ckGetArrayIndex().getProjectionID(), this); 
  {
    PmePencilInitMsg*& initmsg = gen0;
    {
      int& pe = gen1->getP0();
      int& done = gen1->getP1();
      { // begin serial block
#line 39 "inc/ComputePmeMgr.ci"

          if ( done ) imsg = 1;
          else {
            grid_msgs.add(0);
          }
        
#line 1940 "ComputePmeMgr.def.h"
      } // end serial block
    }
  }
  _TRACE_END_EXECUTE(); 
  _when_0_end(gen0, gen1);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeZPencil::_while_1(PmePencilInitMsg* gen0) {
  {
    PmePencilInitMsg*& initmsg = gen0;
    if ( 1 ) {
      _slist_2(gen0);
    } else {
      _slist_0_end(gen0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeZPencil::_while_1_end(PmePencilInitMsg* gen0) {
  {
    PmePencilInitMsg*& initmsg = gen0;
    if ( 1 ) {
      _slist_2(gen0);
    } else {
      _slist_0_end(gen0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeZPencil::_slist_2(PmePencilInitMsg* gen0) {
  _serial_2(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeZPencil::_slist_2_end(PmePencilInitMsg* gen0) {
  _while_1_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeZPencil::_serial_2(PmePencilInitMsg* gen0) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_PmeZPencil_serial_2()), CkMyPe(), 0, this->ckGetArrayIndex().getProjectionID(), this); 
  {
    PmePencilInitMsg*& initmsg = gen0;
    { // begin serial block
#line 47 "inc/ComputePmeMgr.ci"
 hasData = 0; 
#line 2000 "ComputePmeMgr.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _for_0(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeZPencil::_for_0(PmePencilInitMsg* gen0) {
  {
    PmePencilInitMsg*& initmsg = gen0;
     imsg=0;
    if ( imsg < grid_msgs.size()) {
      _slist_3(gen0);
    } else {
      _if_0(gen0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeZPencil::_for_0_end(PmePencilInitMsg* gen0) {
  {
    PmePencilInitMsg*& initmsg = gen0;
     ++imsg ;
    if ( imsg < grid_msgs.size()) {
      _slist_3(gen0);
    } else {
      _if_0(gen0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeZPencil::_slist_3(PmePencilInitMsg* gen0) {
  _when_1(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeZPencil::_slist_3_end(PmePencilInitMsg* gen0) {
  _for_0_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* PmeZPencil::_when_1(PmePencilInitMsg* gen0) {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(1, false, 0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _serial_3(gen0, static_cast<PmeGridMsg*>(static_cast<SDAG::MsgClosure*>(buf0->cl)->msg));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(1);
    c->addClosure(new SDAG::MsgClosure(gen0));
    c->anyEntries.push_back(1);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeZPencil::_when_1_end(PmePencilInitMsg* gen0, PmeGridMsg* gen1) {
  {
    PmePencilInitMsg*& initmsg = gen0;
    {
      PmeGridMsg*& msg = gen1;
      CmiFree(UsrToEnv(msg));
    }
  }
  _slist_3_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeZPencil::_serial_3(PmePencilInitMsg* gen0, PmeGridMsg* gen1) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_PmeZPencil_recv_grid()), CkMyPe(), 0, this->ckGetArrayIndex().getProjectionID(), this); 
  {
    PmePencilInitMsg*& initmsg = gen0;
    {
      PmeGridMsg*& msg = gen1;
      { // begin serial block
#line 49 "inc/ComputePmeMgr.ci"

            if ( msg->hasData ) hasData = 1;
            recv_grid(msg); grid_msgs[imsg] = msg;
          
#line 2099 "ComputePmeMgr.def.h"
      } // end serial block
    }
  }
  _TRACE_END_EXECUTE(); 
  _when_1_end(gen0, gen1);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeZPencil::_if_0(PmePencilInitMsg* gen0) {
  {
    PmePencilInitMsg*& initmsg = gen0;
    if ( hasData ) {
      _slist_4(gen0);
    } else {
      _if_0_end(gen0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeZPencil::_if_0_end(PmePencilInitMsg* gen0) {
  _serial_5(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeZPencil::_slist_4(PmePencilInitMsg* gen0) {
  _serial_4(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeZPencil::_slist_4_end(PmePencilInitMsg* gen0) {
  _if_0_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeZPencil::_serial_4(PmePencilInitMsg* gen0) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_PmeZPencil_forward_fft()), CkMyPe(), 0, this->ckGetArrayIndex().getProjectionID(), this); 
  {
    PmePencilInitMsg*& initmsg = gen0;
    { // begin serial block
#line 55 "inc/ComputePmeMgr.ci"
 forward_fft(); 
#line 2152 "ComputePmeMgr.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _slist_4_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeZPencil::_serial_5(PmePencilInitMsg* gen0) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_PmeZPencil_send_trans()), CkMyPe(), 0, this->ckGetArrayIndex().getProjectionID(), this); 
  {
    PmePencilInitMsg*& initmsg = gen0;
    { // begin serial block
#line 57 "inc/ComputePmeMgr.ci"
 send_trans(); 
#line 2169 "ComputePmeMgr.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _if_1(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeZPencil::_if_1(PmePencilInitMsg* gen0) {
  {
    PmePencilInitMsg*& initmsg = gen0;
    if ( hasData ) {
      _slist_5(gen0);
    } else {
      _if_1_end(gen0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeZPencil::_if_1_end(PmePencilInitMsg* gen0) {
  _serial_8(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeZPencil::_slist_5(PmePencilInitMsg* gen0) {
  _for_1(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeZPencil::_slist_5_end(PmePencilInitMsg* gen0) {
  _if_1_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeZPencil::_for_1(PmePencilInitMsg* gen0) {
  {
    PmePencilInitMsg*& initmsg = gen0;
     imsg=0;
    if ( imsg < initdata.zBlocks) {
      _slist_6(gen0);
    } else {
      _serial_7(gen0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeZPencil::_for_1_end(PmePencilInitMsg* gen0) {
  {
    PmePencilInitMsg*& initmsg = gen0;
     ++imsg ;
    if ( imsg < initdata.zBlocks) {
      _slist_6(gen0);
    } else {
      _serial_7(gen0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeZPencil::_slist_6(PmePencilInitMsg* gen0) {
  _when_2(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeZPencil::_slist_6_end(PmePencilInitMsg* gen0) {
  _for_1_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* PmeZPencil::_when_2(PmePencilInitMsg* gen0) {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(2, false, 0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _serial_6(gen0, static_cast<PmeUntransMsg*>(static_cast<SDAG::MsgClosure*>(buf0->cl)->msg));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(2);
    c->addClosure(new SDAG::MsgClosure(gen0));
    c->anyEntries.push_back(2);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeZPencil::_when_2_end(PmePencilInitMsg* gen0, PmeUntransMsg* gen1) {
  {
    PmePencilInitMsg*& initmsg = gen0;
    {
      PmeUntransMsg*& msg = gen1;
      CmiFree(UsrToEnv(msg));
    }
  }
  _slist_6_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeZPencil::_serial_6(PmePencilInitMsg* gen0, PmeUntransMsg* gen1) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_PmeZPencil_recv_untrans()), CkMyPe(), 0, this->ckGetArrayIndex().getProjectionID(), this); 
  {
    PmePencilInitMsg*& initmsg = gen0;
    {
      PmeUntransMsg*& msg = gen1;
      { // begin serial block
#line 60 "inc/ComputePmeMgr.ci"

       recv_untrans(msg); delete msg;
     
#line 2302 "ComputePmeMgr.def.h"
      } // end serial block
    }
  }
  _TRACE_END_EXECUTE(); 
  _when_2_end(gen0, gen1);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeZPencil::_serial_7(PmePencilInitMsg* gen0) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_PmeZPencil_backward_fft()), CkMyPe(), 0, this->ckGetArrayIndex().getProjectionID(), this); 
  {
    PmePencilInitMsg*& initmsg = gen0;
    { // begin serial block
#line 64 "inc/ComputePmeMgr.ci"
 backward_fft(); 
#line 2320 "ComputePmeMgr.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _slist_5_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeZPencil::_serial_8(PmePencilInitMsg* gen0) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_PmeZPencil_send_ungrid()), CkMyPe(), 0, this->ckGetArrayIndex().getProjectionID(), this); 
  {
    PmePencilInitMsg*& initmsg = gen0;
    { // begin serial block
#line 66 "inc/ComputePmeMgr.ci"

    send_all_ungrid();
 
#line 2339 "ComputePmeMgr.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _if_2(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeZPencil::_if_2(PmePencilInitMsg* gen0) {
  {
    PmePencilInitMsg*& initmsg = gen0;
    if ( ! hasData ) {
      _slist_7(gen0);
    } else {
      _if_2_end(gen0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeZPencil::_if_2_end(PmePencilInitMsg* gen0) {
  _slist_2_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeZPencil::_slist_7(PmePencilInitMsg* gen0) {
  _for_2(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeZPencil::_slist_7_end(PmePencilInitMsg* gen0) {
  _if_2_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeZPencil::_for_2(PmePencilInitMsg* gen0) {
  {
    PmePencilInitMsg*& initmsg = gen0;
     imsg=0;
    if ( imsg < initdata.zBlocks) {
      _slist_8(gen0);
    } else {
      _slist_7_end(gen0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeZPencil::_for_2_end(PmePencilInitMsg* gen0) {
  {
    PmePencilInitMsg*& initmsg = gen0;
     ++imsg ;
    if ( imsg < initdata.zBlocks) {
      _slist_8(gen0);
    } else {
      _slist_7_end(gen0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeZPencil::_slist_8(PmePencilInitMsg* gen0) {
  _when_3(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeZPencil::_slist_8_end(PmePencilInitMsg* gen0) {
  _for_2_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* PmeZPencil::_when_3(PmePencilInitMsg* gen0) {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(3, false, 0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _serial_9(gen0, static_cast<PmeAckMsg*>(static_cast<SDAG::MsgClosure*>(buf0->cl)->msg));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(3);
    c->addClosure(new SDAG::MsgClosure(gen0));
    c->anyEntries.push_back(3);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeZPencil::_when_3_end(PmePencilInitMsg* gen0, PmeAckMsg* gen1) {
  {
    PmePencilInitMsg*& initmsg = gen0;
    {
      PmeAckMsg*& msg = gen1;
      CmiFree(UsrToEnv(msg));
    }
  }
  _slist_8_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeZPencil::_serial_9(PmePencilInitMsg* gen0, PmeAckMsg* gen1) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_PmeZPencil_serial_9()), CkMyPe(), 0, this->ckGetArrayIndex().getProjectionID(), this); 
  {
    PmePencilInitMsg*& initmsg = gen0;
    {
      PmeAckMsg*& msg = gen1;
      { // begin serial block
#line 71 "inc/ComputePmeMgr.ci"
 delete msg; 
#line 2470 "ComputePmeMgr.def.h"
      } // end serial block
    }
  }
  _TRACE_END_EXECUTE(); 
  _when_3_end(gen0, gen1);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeZPencil::dummyRecvGrid(int pe, int done){
  Closure_PmeZPencil::dummyRecvGrid_6_closure* genClosure = new Closure_PmeZPencil::dummyRecvGrid_6_closure();
  genClosure->getP0() = pe;
  genClosure->getP1() = done;
  dummyRecvGrid(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void PmeZPencil::dummyRecvGrid(Closure_PmeZPencil::dummyRecvGrid_6_closure* genClosure){
  if (!__dep.get()) _sdag_init();
  __dep->pushBuffer(0, genClosure);
  SDAG::Continuation* c = __dep->tryFindContinuation(0);
  if (c) {
    _TRACE_END_EXECUTE(); 
    _when_0(
      static_cast<PmePencilInitMsg*>(static_cast<SDAG::MsgClosure*>(c->closure[0])->msg)
    );
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, this->ckGetArrayIndex().getProjectionID(), this); 
    delete c;
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void PmeZPencil::recvGrid(PmeGridMsg* msg_msg){
  if (!__dep.get()) _sdag_init();
  CkReferenceMsg(msg_msg);
  __dep->pushBuffer(1, new SDAG::MsgClosure(msg_msg));
  SDAG::Continuation* c = __dep->tryFindContinuation(1);
  if (c) {
    _TRACE_END_EXECUTE(); 
    _when_1(
      static_cast<PmePencilInitMsg*>(static_cast<SDAG::MsgClosure*>(c->closure[0])->msg)
    );
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, this->ckGetArrayIndex().getProjectionID(), this); 
    delete c;
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void PmeZPencil::recvUntrans(PmeUntransMsg* msg_msg){
  if (!__dep.get()) _sdag_init();
  CkReferenceMsg(msg_msg);
  __dep->pushBuffer(2, new SDAG::MsgClosure(msg_msg));
  SDAG::Continuation* c = __dep->tryFindContinuation(2);
  if (c) {
    _TRACE_END_EXECUTE(); 
    _when_2(
      static_cast<PmePencilInitMsg*>(static_cast<SDAG::MsgClosure*>(c->closure[0])->msg)
    );
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, this->ckGetArrayIndex().getProjectionID(), this); 
    delete c;
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void PmeZPencil::recvAck(PmeAckMsg* msg_msg){
  if (!__dep.get()) _sdag_init();
  CkReferenceMsg(msg_msg);
  __dep->pushBuffer(3, new SDAG::MsgClosure(msg_msg));
  SDAG::Continuation* c = __dep->tryFindContinuation(3);
  if (c) {
    _TRACE_END_EXECUTE(); 
    _when_3(
      static_cast<PmePencilInitMsg*>(static_cast<SDAG::MsgClosure*>(c->closure[0])->msg)
    );
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, this->ckGetArrayIndex().getProjectionID(), this); 
    delete c;
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void PmeZPencil::_sdag_init() { // Potentially missing PmeZPencil_SDAG_CODE in your class definition?
  __dep.reset(new SDAG::Dependency(4,4));
  __dep->addDepends(0,0);
  __dep->addDepends(1,1);
  __dep->addDepends(2,2);
  __dep->addDepends(3,3);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeZPencil::__sdag_init() { // Potentially missing PmeZPencil_SDAG_CODE in your class definition?
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeZPencil::_sdag_pup(PUP::er &p) {  // Potentially missing PmeZPencil_SDAG_CODE in your class definition?
  p|__dep;
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void PmeZPencil::__sdag_register() { // Potentially missing PmeZPencil_SDAG_CODE in your class definition?
  (void)_sdag_idx_PmeZPencil_serial_0();
  (void)_sdag_idx_PmeZPencil_serial_1();
  (void)_sdag_idx_PmeZPencil_serial_2();
  (void)_sdag_idx_PmeZPencil_recv_grid();
  (void)_sdag_idx_PmeZPencil_forward_fft();
  (void)_sdag_idx_PmeZPencil_send_trans();
  (void)_sdag_idx_PmeZPencil_recv_untrans();
  (void)_sdag_idx_PmeZPencil_backward_fft();
  (void)_sdag_idx_PmeZPencil_send_ungrid();
  (void)_sdag_idx_PmeZPencil_serial_9();
  PUPable_reg(SINGLE_ARG(Closure_PmeZPencil::dummyRecvGrid_6_closure));
  PUPable_reg(SINGLE_ARG(Closure_PmeZPencil::dummyRecvGrid_6_closure));
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int PmeZPencil::_sdag_idx_PmeZPencil_serial_0() { // Potentially missing PmeZPencil_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_PmeZPencil_serial_0();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int PmeZPencil::_sdag_reg_PmeZPencil_serial_0() { // Potentially missing PmeZPencil_SDAG_CODE in your class definition?
  return CkRegisterEp("PmeZPencil_serial_0", NULL, 0, CkIndex_PmeZPencil::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int PmeZPencil::_sdag_idx_PmeZPencil_serial_1() { // Potentially missing PmeZPencil_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_PmeZPencil_serial_1();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int PmeZPencil::_sdag_reg_PmeZPencil_serial_1() { // Potentially missing PmeZPencil_SDAG_CODE in your class definition?
  return CkRegisterEp("PmeZPencil_serial_1", NULL, 0, CkIndex_PmeZPencil::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int PmeZPencil::_sdag_idx_PmeZPencil_serial_2() { // Potentially missing PmeZPencil_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_PmeZPencil_serial_2();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int PmeZPencil::_sdag_reg_PmeZPencil_serial_2() { // Potentially missing PmeZPencil_SDAG_CODE in your class definition?
  return CkRegisterEp("PmeZPencil_serial_2", NULL, 0, CkIndex_PmeZPencil::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int PmeZPencil::_sdag_idx_PmeZPencil_recv_grid() { // Potentially missing PmeZPencil_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_PmeZPencil_recv_grid();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int PmeZPencil::_sdag_reg_PmeZPencil_recv_grid() { // Potentially missing PmeZPencil_SDAG_CODE in your class definition?
  return CkRegisterEp("PmeZPencil_recv_grid", NULL, 0, CkIndex_PmeZPencil::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int PmeZPencil::_sdag_idx_PmeZPencil_forward_fft() { // Potentially missing PmeZPencil_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_PmeZPencil_forward_fft();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int PmeZPencil::_sdag_reg_PmeZPencil_forward_fft() { // Potentially missing PmeZPencil_SDAG_CODE in your class definition?
  return CkRegisterEp("PmeZPencil_forward_fft", NULL, 0, CkIndex_PmeZPencil::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int PmeZPencil::_sdag_idx_PmeZPencil_send_trans() { // Potentially missing PmeZPencil_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_PmeZPencil_send_trans();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int PmeZPencil::_sdag_reg_PmeZPencil_send_trans() { // Potentially missing PmeZPencil_SDAG_CODE in your class definition?
  return CkRegisterEp("PmeZPencil_send_trans", NULL, 0, CkIndex_PmeZPencil::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int PmeZPencil::_sdag_idx_PmeZPencil_recv_untrans() { // Potentially missing PmeZPencil_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_PmeZPencil_recv_untrans();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int PmeZPencil::_sdag_reg_PmeZPencil_recv_untrans() { // Potentially missing PmeZPencil_SDAG_CODE in your class definition?
  return CkRegisterEp("PmeZPencil_recv_untrans", NULL, 0, CkIndex_PmeZPencil::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int PmeZPencil::_sdag_idx_PmeZPencil_backward_fft() { // Potentially missing PmeZPencil_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_PmeZPencil_backward_fft();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int PmeZPencil::_sdag_reg_PmeZPencil_backward_fft() { // Potentially missing PmeZPencil_SDAG_CODE in your class definition?
  return CkRegisterEp("PmeZPencil_backward_fft", NULL, 0, CkIndex_PmeZPencil::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int PmeZPencil::_sdag_idx_PmeZPencil_send_ungrid() { // Potentially missing PmeZPencil_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_PmeZPencil_send_ungrid();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int PmeZPencil::_sdag_reg_PmeZPencil_send_ungrid() { // Potentially missing PmeZPencil_SDAG_CODE in your class definition?
  return CkRegisterEp("PmeZPencil_send_ungrid", NULL, 0, CkIndex_PmeZPencil::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int PmeZPencil::_sdag_idx_PmeZPencil_serial_9() { // Potentially missing PmeZPencil_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_PmeZPencil_serial_9();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int PmeZPencil::_sdag_reg_PmeZPencil_serial_9() { // Potentially missing PmeZPencil_SDAG_CODE in your class definition?
  return CkRegisterEp("PmeZPencil_serial_9", NULL, 0, CkIndex_PmeZPencil::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */



/* DEFS: array PmeYPencil: ArrayElement{
PmeYPencil();
void recvTrans(PmeTransMsg* impl_msg);
void recvUntrans(PmeUntransMsg* impl_msg);
void recvAck(PmeAckMsg* impl_msg);
void recvNodeAck(PmeAckMsg* impl_msg);
void init(PmePencilInitMsg* impl_msg);
PmeYPencil(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_PmeYPencil::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CProxySection_PmeYPencil::contribute(CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, userData, fragSize);
}

void CProxySection_PmeYPencil::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, userData, fragSize);
}

template <typename T>
void CProxySection_PmeYPencil::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, userData, fragSize);
}

void CProxySection_PmeYPencil::contribute(CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, cb, userData, fragSize);
}

void CProxySection_PmeYPencil::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, cb, userData, fragSize);
}

template <typename T>
void CProxySection_PmeYPencil::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, cb, userData, fragSize);
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: PmeYPencil();
 */
void CProxyElement_PmeYPencil::insert(int onPE, const CkEntryOptions *impl_e_opts)
{ 
   void *impl_msg = CkAllocSysMsg(impl_e_opts);
   UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_PmeYPencil::idx_PmeYPencil_void(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvTrans(PmeTransMsg* impl_msg);
 */
void CProxyElement_PmeYPencil::recvTrans(PmeTransMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_PmeYPencil::idx_recvTrans_PmeTransMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvUntrans(PmeUntransMsg* impl_msg);
 */
void CProxyElement_PmeYPencil::recvUntrans(PmeUntransMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_PmeYPencil::idx_recvUntrans_PmeUntransMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvAck(PmeAckMsg* impl_msg);
 */
void CProxyElement_PmeYPencil::recvAck(PmeAckMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_PmeYPencil::idx_recvAck_PmeAckMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvNodeAck(PmeAckMsg* impl_msg);
 */
void CProxyElement_PmeYPencil::recvNodeAck(PmeAckMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_PmeYPencil::idx_recvNodeAck_PmeAckMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void init(PmePencilInitMsg* impl_msg);
 */
void CProxyElement_PmeYPencil::init(PmePencilInitMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_PmeYPencil::idx_init_PmePencilInitMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: PmeYPencil(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: PmeYPencil();
 */
CkArrayID CProxy_PmeYPencil::ckNew(const CkArrayOptions &opts, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_PmeYPencil::idx_PmeYPencil_void(), opts);
  return gId;
}
void CProxy_PmeYPencil::ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_PmeYPencil::idx_PmeYPencil_void(), _ck_array_creation_cb, opts, impl_msg);
}
CkArrayID CProxy_PmeYPencil::ckNew(const int s1, const int s2, const int s3, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkArrayOptions opts(s1, s2, s3);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_PmeYPencil::idx_PmeYPencil_void(), opts);
  return gId;
}
void CProxy_PmeYPencil::ckNew(const int s1, const int s2, const int s3, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkArrayOptions opts(s1, s2, s3);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_PmeYPencil::idx_PmeYPencil_void(), _ck_array_creation_cb, opts, impl_msg);
}

// Entry point registration function
int CkIndex_PmeYPencil::reg_PmeYPencil_void() {
  int epidx = CkRegisterEp("PmeYPencil()",
      reinterpret_cast<CkCallFnPtr>(_call_PmeYPencil_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_PmeYPencil::_call_PmeYPencil_void(void* impl_msg, void* impl_obj_void)
{
  PmeYPencil* impl_obj = static_cast<PmeYPencil*>(impl_obj_void);
  new (impl_obj_void) PmeYPencil();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvTrans(PmeTransMsg* impl_msg);
 */
void CProxy_PmeYPencil::recvTrans(PmeTransMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_PmeYPencil::idx_recvTrans_PmeTransMsg(),0);
}

// Entry point registration function
int CkIndex_PmeYPencil::reg_recvTrans_PmeTransMsg() {
  int epidx = CkRegisterEp("recvTrans(PmeTransMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvTrans_PmeTransMsg), CMessage_PmeTransMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)PmeTransMsg::ckDebugPup);
  return epidx;
}

void CkIndex_PmeYPencil::_call_recvTrans_PmeTransMsg(void* impl_msg, void* impl_obj_void)
{
  PmeYPencil* impl_obj = static_cast<PmeYPencil*>(impl_obj_void);
  impl_obj->recvTrans((PmeTransMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvUntrans(PmeUntransMsg* impl_msg);
 */
void CProxy_PmeYPencil::recvUntrans(PmeUntransMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_PmeYPencil::idx_recvUntrans_PmeUntransMsg(),0);
}

// Entry point registration function
int CkIndex_PmeYPencil::reg_recvUntrans_PmeUntransMsg() {
  int epidx = CkRegisterEp("recvUntrans(PmeUntransMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvUntrans_PmeUntransMsg), CMessage_PmeUntransMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)PmeUntransMsg::ckDebugPup);
  return epidx;
}

void CkIndex_PmeYPencil::_call_recvUntrans_PmeUntransMsg(void* impl_msg, void* impl_obj_void)
{
  PmeYPencil* impl_obj = static_cast<PmeYPencil*>(impl_obj_void);
  impl_obj->recvUntrans((PmeUntransMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvAck(PmeAckMsg* impl_msg);
 */
void CProxy_PmeYPencil::recvAck(PmeAckMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_PmeYPencil::idx_recvAck_PmeAckMsg(),0);
}

// Entry point registration function
int CkIndex_PmeYPencil::reg_recvAck_PmeAckMsg() {
  int epidx = CkRegisterEp("recvAck(PmeAckMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvAck_PmeAckMsg), CMessage_PmeAckMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)PmeAckMsg::ckDebugPup);
  return epidx;
}

void CkIndex_PmeYPencil::_call_recvAck_PmeAckMsg(void* impl_msg, void* impl_obj_void)
{
  PmeYPencil* impl_obj = static_cast<PmeYPencil*>(impl_obj_void);
  impl_obj->recvAck((PmeAckMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvNodeAck(PmeAckMsg* impl_msg);
 */
void CProxy_PmeYPencil::recvNodeAck(PmeAckMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_PmeYPencil::idx_recvNodeAck_PmeAckMsg(),0);
}

// Entry point registration function
int CkIndex_PmeYPencil::reg_recvNodeAck_PmeAckMsg() {
  int epidx = CkRegisterEp("recvNodeAck(PmeAckMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvNodeAck_PmeAckMsg), CMessage_PmeAckMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)PmeAckMsg::ckDebugPup);
  return epidx;
}

void CkIndex_PmeYPencil::_call_recvNodeAck_PmeAckMsg(void* impl_msg, void* impl_obj_void)
{
  PmeYPencil* impl_obj = static_cast<PmeYPencil*>(impl_obj_void);
  impl_obj->recvNodeAck((PmeAckMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void init(PmePencilInitMsg* impl_msg);
 */
void CProxy_PmeYPencil::init(PmePencilInitMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_PmeYPencil::idx_init_PmePencilInitMsg(),0);
}

// Entry point registration function
int CkIndex_PmeYPencil::reg_init_PmePencilInitMsg() {
  int epidx = CkRegisterEp("init(PmePencilInitMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_init_PmePencilInitMsg), CMessage_PmePencilInitMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)PmePencilInitMsg::ckDebugPup);
  return epidx;
}

void CkIndex_PmeYPencil::_call_init_PmePencilInitMsg(void* impl_msg, void* impl_obj_void)
{
  PmeYPencil* impl_obj = static_cast<PmeYPencil*>(impl_obj_void);
  impl_obj->_sdag_fnc_init((PmePencilInitMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: PmeYPencil(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_PmeYPencil::reg_PmeYPencil_CkMigrateMessage() {
  int epidx = CkRegisterEp("PmeYPencil(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_PmeYPencil_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_PmeYPencil::_call_PmeYPencil_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  call_migration_constructor<PmeYPencil> c = impl_obj_void;
  c((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: PmeYPencil();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvTrans(PmeTransMsg* impl_msg);
 */
void CProxySection_PmeYPencil::recvTrans(PmeTransMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_PmeYPencil::idx_recvTrans_PmeTransMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvUntrans(PmeUntransMsg* impl_msg);
 */
void CProxySection_PmeYPencil::recvUntrans(PmeUntransMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_PmeYPencil::idx_recvUntrans_PmeUntransMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvAck(PmeAckMsg* impl_msg);
 */
void CProxySection_PmeYPencil::recvAck(PmeAckMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_PmeYPencil::idx_recvAck_PmeAckMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvNodeAck(PmeAckMsg* impl_msg);
 */
void CProxySection_PmeYPencil::recvNodeAck(PmeAckMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_PmeYPencil::idx_recvNodeAck_PmeAckMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void init(PmePencilInitMsg* impl_msg);
 */
void CProxySection_PmeYPencil::init(PmePencilInitMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_PmeYPencil::idx_init_PmePencilInitMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: PmeYPencil(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_PmeYPencil::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterArrayDimensions(__idx, 3);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
  // REG: PmeYPencil();
  idx_PmeYPencil_void();
  CkRegisterDefaultCtor(__idx, idx_PmeYPencil_void());

  // REG: void recvTrans(PmeTransMsg* impl_msg);
  idx_recvTrans_PmeTransMsg();

  // REG: void recvUntrans(PmeUntransMsg* impl_msg);
  idx_recvUntrans_PmeUntransMsg();

  // REG: void recvAck(PmeAckMsg* impl_msg);
  idx_recvAck_PmeAckMsg();

  // REG: void recvNodeAck(PmeAckMsg* impl_msg);
  idx_recvNodeAck_PmeAckMsg();

  // REG: void init(PmePencilInitMsg* impl_msg);
  idx_init_PmePencilInitMsg();

  // REG: PmeYPencil(CkMigrateMessage* impl_msg);
  idx_PmeYPencil_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_PmeYPencil_CkMigrateMessage());

  PmeYPencil::__sdag_register(); // Potentially missing PmeYPencil_SDAG_CODE in your class definition?
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void PmeYPencil::init(PmePencilInitMsg initmsg){
  CkPrintf("Error> Direct call to SDAG entry method \'%s::%s\'!\n", "PmeYPencil", "init(PmePencilInitMsg initmsg)"); 
  CkAbort("Direct SDAG call is not allowed for SDAG entry methods having when constructs. Call such SDAG methods using a proxy"); 
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void PmeYPencil::_sdag_fnc_init(PmePencilInitMsg* gen0) {
  _TRACE_END_EXECUTE(); 
  if (!__dep.get()) _sdag_init();
  CkReferenceMsg(gen0);
  _slist_0(gen0);
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, this->ckGetArrayIndex().getProjectionID(), this); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeYPencil::init_end(PmePencilInitMsg* gen0) {
  CmiFree(UsrToEnv(gen0));
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeYPencil::_slist_0(PmePencilInitMsg* gen0) {
  _serial_0(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeYPencil::_slist_0_end(PmePencilInitMsg* gen0) {
  init_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeYPencil::_serial_0(PmePencilInitMsg* gen0) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_PmeYPencil_serial_0()), CkMyPe(), 0, this->ckGetArrayIndex().getProjectionID(), this); 
  {
    PmePencilInitMsg*& initmsg = gen0;
    { // begin serial block
#line 84 "inc/ComputePmeMgr.ci"

      base_init(initmsg); delete initmsg;
      fft_init();
      
#line 3248 "ComputePmeMgr.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _while_0(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeYPencil::_while_0(PmePencilInitMsg* gen0) {
  {
    PmePencilInitMsg*& initmsg = gen0;
    if ( 1 ) {
      _slist_1(gen0);
    } else {
      _slist_0_end(gen0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeYPencil::_while_0_end(PmePencilInitMsg* gen0) {
  {
    PmePencilInitMsg*& initmsg = gen0;
    if ( 1 ) {
      _slist_1(gen0);
    } else {
      _slist_0_end(gen0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeYPencil::_slist_1(PmePencilInitMsg* gen0) {
  _serial_1(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeYPencil::_slist_1_end(PmePencilInitMsg* gen0) {
  _while_0_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeYPencil::_serial_1(PmePencilInitMsg* gen0) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_PmeYPencil_serial_1()), CkMyPe(), 0, this->ckGetArrayIndex().getProjectionID(), this); 
  {
    PmePencilInitMsg*& initmsg = gen0;
    { // begin serial block
#line 89 "inc/ComputePmeMgr.ci"
 hasData = 0; 
#line 3307 "ComputePmeMgr.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _for_0(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeYPencil::_for_0(PmePencilInitMsg* gen0) {
  {
    PmePencilInitMsg*& initmsg = gen0;
     imsg=0;
    if ( imsg < initdata.yBlocks) {
      _slist_2(gen0);
    } else {
      _if_0(gen0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeYPencil::_for_0_end(PmePencilInitMsg* gen0) {
  {
    PmePencilInitMsg*& initmsg = gen0;
     ++imsg ;
    if ( imsg < initdata.yBlocks) {
      _slist_2(gen0);
    } else {
      _if_0(gen0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeYPencil::_slist_2(PmePencilInitMsg* gen0) {
  _when_0(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeYPencil::_slist_2_end(PmePencilInitMsg* gen0) {
  _for_0_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* PmeYPencil::_when_0(PmePencilInitMsg* gen0) {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(0, false, 0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _serial_2(gen0, static_cast<PmeTransMsg*>(static_cast<SDAG::MsgClosure*>(buf0->cl)->msg));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(0);
    c->addClosure(new SDAG::MsgClosure(gen0));
    c->anyEntries.push_back(0);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeYPencil::_when_0_end(PmePencilInitMsg* gen0, PmeTransMsg* gen1) {
  {
    PmePencilInitMsg*& initmsg = gen0;
    {
      PmeTransMsg*& msg = gen1;
      CmiFree(UsrToEnv(msg));
    }
  }
  _slist_2_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeYPencil::_serial_2(PmePencilInitMsg* gen0, PmeTransMsg* gen1) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_PmeYPencil_recv_trans()), CkMyPe(), 0, this->ckGetArrayIndex().getProjectionID(), this); 
  {
    PmePencilInitMsg*& initmsg = gen0;
    {
      PmeTransMsg*& msg = gen1;
      { // begin serial block
#line 91 "inc/ComputePmeMgr.ci"

            if ( msg->hasData ) hasData = 1;
            needs_reply[msg->sourceNode] = msg->hasData;
            recv_trans(msg); delete msg;
          
#line 3407 "ComputePmeMgr.def.h"
      } // end serial block
    }
  }
  _TRACE_END_EXECUTE(); 
  _when_0_end(gen0, gen1);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeYPencil::_if_0(PmePencilInitMsg* gen0) {
  {
    PmePencilInitMsg*& initmsg = gen0;
    if ( hasData ) {
      _slist_3(gen0);
    } else {
      _if_0_end(gen0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeYPencil::_if_0_end(PmePencilInitMsg* gen0) {
  _serial_4(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeYPencil::_slist_3(PmePencilInitMsg* gen0) {
  _serial_3(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeYPencil::_slist_3_end(PmePencilInitMsg* gen0) {
  _if_0_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeYPencil::_serial_3(PmePencilInitMsg* gen0) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_PmeYPencil_forward_fft()), CkMyPe(), 0, this->ckGetArrayIndex().getProjectionID(), this); 
  {
    PmePencilInitMsg*& initmsg = gen0;
    { // begin serial block
#line 98 "inc/ComputePmeMgr.ci"
 forward_fft(); 
#line 3460 "ComputePmeMgr.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _slist_3_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeYPencil::_serial_4(PmePencilInitMsg* gen0) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_PmeYPencil_send_trans()), CkMyPe(), 0, this->ckGetArrayIndex().getProjectionID(), this); 
  {
    PmePencilInitMsg*& initmsg = gen0;
    { // begin serial block
#line 100 "inc/ComputePmeMgr.ci"
 send_trans(); 
#line 3477 "ComputePmeMgr.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _if_1(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeYPencil::_if_1(PmePencilInitMsg* gen0) {
  {
    PmePencilInitMsg*& initmsg = gen0;
    if ( hasData ) {
      _slist_6(gen0);
    } else {
      _else_0(gen0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeYPencil::_if_1_end(PmePencilInitMsg* gen0) {
  _slist_1_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeYPencil::_else_0(PmePencilInitMsg* gen0) {
  _slist_4(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeYPencil::_else_0_end(PmePencilInitMsg* gen0) {
  _slist_1_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeYPencil::_slist_4(PmePencilInitMsg* gen0) {
  _serial_5(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeYPencil::_slist_4_end(PmePencilInitMsg* gen0) {
  _else_0_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeYPencil::_serial_5(PmePencilInitMsg* gen0) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_PmeYPencil_send_untrans1()), CkMyPe(), 0, this->ckGetArrayIndex().getProjectionID(), this); 
  {
    PmePencilInitMsg*& initmsg = gen0;
    { // begin serial block
#line 110 "inc/ComputePmeMgr.ci"
 send_untrans(); 
#line 3543 "ComputePmeMgr.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _for_1(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeYPencil::_for_1(PmePencilInitMsg* gen0) {
  {
    PmePencilInitMsg*& initmsg = gen0;
     imsg=0;
    if ( imsg < initdata.yBlocks) {
      _slist_5(gen0);
    } else {
      _slist_4_end(gen0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeYPencil::_for_1_end(PmePencilInitMsg* gen0) {
  {
    PmePencilInitMsg*& initmsg = gen0;
     ++imsg ;
    if ( imsg < initdata.yBlocks) {
      _slist_5(gen0);
    } else {
      _slist_4_end(gen0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeYPencil::_slist_5(PmePencilInitMsg* gen0) {
  _when_1(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeYPencil::_slist_5_end(PmePencilInitMsg* gen0) {
  _for_1_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* PmeYPencil::_when_1(PmePencilInitMsg* gen0) {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(1, false, 0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _serial_6(gen0, static_cast<PmeAckMsg*>(static_cast<SDAG::MsgClosure*>(buf0->cl)->msg));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(1);
    c->addClosure(new SDAG::MsgClosure(gen0));
    c->anyEntries.push_back(1);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeYPencil::_when_1_end(PmePencilInitMsg* gen0, PmeAckMsg* gen1) {
  {
    PmePencilInitMsg*& initmsg = gen0;
    {
      PmeAckMsg*& msg = gen1;
      CmiFree(UsrToEnv(msg));
    }
  }
  _slist_5_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeYPencil::_serial_6(PmePencilInitMsg* gen0, PmeAckMsg* gen1) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_PmeYPencil_serial_6()), CkMyPe(), 0, this->ckGetArrayIndex().getProjectionID(), this); 
  {
    PmePencilInitMsg*& initmsg = gen0;
    {
      PmeAckMsg*& msg = gen1;
      { // begin serial block
#line 112 "inc/ComputePmeMgr.ci"
 delete msg; 
#line 3639 "ComputePmeMgr.def.h"
      } // end serial block
    }
  }
  _TRACE_END_EXECUTE(); 
  _when_1_end(gen0, gen1);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeYPencil::_slist_6(PmePencilInitMsg* gen0) {
  _for_2(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeYPencil::_slist_6_end(PmePencilInitMsg* gen0) {
  _if_1_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeYPencil::_for_2(PmePencilInitMsg* gen0) {
  {
    PmePencilInitMsg*& initmsg = gen0;
     imsg=0;
    if ( imsg < initdata.yBlocks) {
      _slist_7(gen0);
    } else {
      _serial_8(gen0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeYPencil::_for_2_end(PmePencilInitMsg* gen0) {
  {
    PmePencilInitMsg*& initmsg = gen0;
     ++imsg ;
    if ( imsg < initdata.yBlocks) {
      _slist_7(gen0);
    } else {
      _serial_8(gen0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeYPencil::_slist_7(PmePencilInitMsg* gen0) {
  _when_2(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeYPencil::_slist_7_end(PmePencilInitMsg* gen0) {
  _for_2_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* PmeYPencil::_when_2(PmePencilInitMsg* gen0) {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(2, false, 0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _serial_7(gen0, static_cast<PmeUntransMsg*>(static_cast<SDAG::MsgClosure*>(buf0->cl)->msg));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(2);
    c->addClosure(new SDAG::MsgClosure(gen0));
    c->anyEntries.push_back(2);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeYPencil::_when_2_end(PmePencilInitMsg* gen0, PmeUntransMsg* gen1) {
  {
    PmePencilInitMsg*& initmsg = gen0;
    {
      PmeUntransMsg*& msg = gen1;
      CmiFree(UsrToEnv(msg));
    }
  }
  _slist_7_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeYPencil::_serial_7(PmePencilInitMsg* gen0, PmeUntransMsg* gen1) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_PmeYPencil_recv_untrans()), CkMyPe(), 0, this->ckGetArrayIndex().getProjectionID(), this); 
  {
    PmePencilInitMsg*& initmsg = gen0;
    {
      PmeUntransMsg*& msg = gen1;
      { // begin serial block
#line 103 "inc/ComputePmeMgr.ci"

            recv_untrans(msg); delete msg;
          
#line 3752 "ComputePmeMgr.def.h"
      } // end serial block
    }
  }
  _TRACE_END_EXECUTE(); 
  _when_2_end(gen0, gen1);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeYPencil::_serial_8(PmePencilInitMsg* gen0) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_PmeYPencil_backward_fft()), CkMyPe(), 0, this->ckGetArrayIndex().getProjectionID(), this); 
  {
    PmePencilInitMsg*& initmsg = gen0;
    { // begin serial block
#line 107 "inc/ComputePmeMgr.ci"
 backward_fft(); 
#line 3770 "ComputePmeMgr.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _serial_9(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeYPencil::_serial_9(PmePencilInitMsg* gen0) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_PmeYPencil_send_untrans0()), CkMyPe(), 0, this->ckGetArrayIndex().getProjectionID(), this); 
  {
    PmePencilInitMsg*& initmsg = gen0;
    { // begin serial block
#line 108 "inc/ComputePmeMgr.ci"
 send_untrans(); 
#line 3787 "ComputePmeMgr.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _slist_6_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeYPencil::recvTrans(PmeTransMsg* msg_msg){
  if (!__dep.get()) _sdag_init();
  CkReferenceMsg(msg_msg);
  __dep->pushBuffer(0, new SDAG::MsgClosure(msg_msg));
  SDAG::Continuation* c = __dep->tryFindContinuation(0);
  if (c) {
    _TRACE_END_EXECUTE(); 
    _when_0(
      static_cast<PmePencilInitMsg*>(static_cast<SDAG::MsgClosure*>(c->closure[0])->msg)
    );
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, this->ckGetArrayIndex().getProjectionID(), this); 
    delete c;
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void PmeYPencil::recvAck(PmeAckMsg* msg_msg){
  if (!__dep.get()) _sdag_init();
  CkReferenceMsg(msg_msg);
  __dep->pushBuffer(1, new SDAG::MsgClosure(msg_msg));
  SDAG::Continuation* c = __dep->tryFindContinuation(1);
  if (c) {
    _TRACE_END_EXECUTE(); 
    _when_1(
      static_cast<PmePencilInitMsg*>(static_cast<SDAG::MsgClosure*>(c->closure[0])->msg)
    );
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, this->ckGetArrayIndex().getProjectionID(), this); 
    delete c;
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void PmeYPencil::recvUntrans(PmeUntransMsg* msg_msg){
  if (!__dep.get()) _sdag_init();
  CkReferenceMsg(msg_msg);
  __dep->pushBuffer(2, new SDAG::MsgClosure(msg_msg));
  SDAG::Continuation* c = __dep->tryFindContinuation(2);
  if (c) {
    _TRACE_END_EXECUTE(); 
    _when_2(
      static_cast<PmePencilInitMsg*>(static_cast<SDAG::MsgClosure*>(c->closure[0])->msg)
    );
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, this->ckGetArrayIndex().getProjectionID(), this); 
    delete c;
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void PmeYPencil::_sdag_init() { // Potentially missing PmeYPencil_SDAG_CODE in your class definition?
  __dep.reset(new SDAG::Dependency(3,3));
  __dep->addDepends(0,0);
  __dep->addDepends(1,1);
  __dep->addDepends(2,2);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeYPencil::__sdag_init() { // Potentially missing PmeYPencil_SDAG_CODE in your class definition?
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeYPencil::_sdag_pup(PUP::er &p) {  // Potentially missing PmeYPencil_SDAG_CODE in your class definition?
  p|__dep;
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void PmeYPencil::__sdag_register() { // Potentially missing PmeYPencil_SDAG_CODE in your class definition?
  (void)_sdag_idx_PmeYPencil_serial_0();
  (void)_sdag_idx_PmeYPencil_serial_1();
  (void)_sdag_idx_PmeYPencil_recv_trans();
  (void)_sdag_idx_PmeYPencil_forward_fft();
  (void)_sdag_idx_PmeYPencil_send_trans();
  (void)_sdag_idx_PmeYPencil_recv_untrans();
  (void)_sdag_idx_PmeYPencil_backward_fft();
  (void)_sdag_idx_PmeYPencil_send_untrans0();
  (void)_sdag_idx_PmeYPencil_send_untrans1();
  (void)_sdag_idx_PmeYPencil_serial_6();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int PmeYPencil::_sdag_idx_PmeYPencil_serial_0() { // Potentially missing PmeYPencil_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_PmeYPencil_serial_0();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int PmeYPencil::_sdag_reg_PmeYPencil_serial_0() { // Potentially missing PmeYPencil_SDAG_CODE in your class definition?
  return CkRegisterEp("PmeYPencil_serial_0", NULL, 0, CkIndex_PmeYPencil::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int PmeYPencil::_sdag_idx_PmeYPencil_serial_1() { // Potentially missing PmeYPencil_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_PmeYPencil_serial_1();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int PmeYPencil::_sdag_reg_PmeYPencil_serial_1() { // Potentially missing PmeYPencil_SDAG_CODE in your class definition?
  return CkRegisterEp("PmeYPencil_serial_1", NULL, 0, CkIndex_PmeYPencil::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int PmeYPencil::_sdag_idx_PmeYPencil_recv_trans() { // Potentially missing PmeYPencil_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_PmeYPencil_recv_trans();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int PmeYPencil::_sdag_reg_PmeYPencil_recv_trans() { // Potentially missing PmeYPencil_SDAG_CODE in your class definition?
  return CkRegisterEp("PmeYPencil_recv_trans", NULL, 0, CkIndex_PmeYPencil::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int PmeYPencil::_sdag_idx_PmeYPencil_forward_fft() { // Potentially missing PmeYPencil_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_PmeYPencil_forward_fft();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int PmeYPencil::_sdag_reg_PmeYPencil_forward_fft() { // Potentially missing PmeYPencil_SDAG_CODE in your class definition?
  return CkRegisterEp("PmeYPencil_forward_fft", NULL, 0, CkIndex_PmeYPencil::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int PmeYPencil::_sdag_idx_PmeYPencil_send_trans() { // Potentially missing PmeYPencil_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_PmeYPencil_send_trans();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int PmeYPencil::_sdag_reg_PmeYPencil_send_trans() { // Potentially missing PmeYPencil_SDAG_CODE in your class definition?
  return CkRegisterEp("PmeYPencil_send_trans", NULL, 0, CkIndex_PmeYPencil::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int PmeYPencil::_sdag_idx_PmeYPencil_recv_untrans() { // Potentially missing PmeYPencil_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_PmeYPencil_recv_untrans();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int PmeYPencil::_sdag_reg_PmeYPencil_recv_untrans() { // Potentially missing PmeYPencil_SDAG_CODE in your class definition?
  return CkRegisterEp("PmeYPencil_recv_untrans", NULL, 0, CkIndex_PmeYPencil::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int PmeYPencil::_sdag_idx_PmeYPencil_backward_fft() { // Potentially missing PmeYPencil_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_PmeYPencil_backward_fft();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int PmeYPencil::_sdag_reg_PmeYPencil_backward_fft() { // Potentially missing PmeYPencil_SDAG_CODE in your class definition?
  return CkRegisterEp("PmeYPencil_backward_fft", NULL, 0, CkIndex_PmeYPencil::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int PmeYPencil::_sdag_idx_PmeYPencil_send_untrans0() { // Potentially missing PmeYPencil_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_PmeYPencil_send_untrans0();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int PmeYPencil::_sdag_reg_PmeYPencil_send_untrans0() { // Potentially missing PmeYPencil_SDAG_CODE in your class definition?
  return CkRegisterEp("PmeYPencil_send_untrans0", NULL, 0, CkIndex_PmeYPencil::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int PmeYPencil::_sdag_idx_PmeYPencil_send_untrans1() { // Potentially missing PmeYPencil_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_PmeYPencil_send_untrans1();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int PmeYPencil::_sdag_reg_PmeYPencil_send_untrans1() { // Potentially missing PmeYPencil_SDAG_CODE in your class definition?
  return CkRegisterEp("PmeYPencil_send_untrans1", NULL, 0, CkIndex_PmeYPencil::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int PmeYPencil::_sdag_idx_PmeYPencil_serial_6() { // Potentially missing PmeYPencil_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_PmeYPencil_serial_6();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int PmeYPencil::_sdag_reg_PmeYPencil_serial_6() { // Potentially missing PmeYPencil_SDAG_CODE in your class definition?
  return CkRegisterEp("PmeYPencil_serial_6", NULL, 0, CkIndex_PmeYPencil::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */



/* DEFS: array PmeXPencil: ArrayElement{
PmeXPencil();
void recvTrans(PmeTransMsg* impl_msg);
void init(PmePencilInitMsg* impl_msg);
PmeXPencil(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_PmeXPencil::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CProxySection_PmeXPencil::contribute(CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, userData, fragSize);
}

void CProxySection_PmeXPencil::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, userData, fragSize);
}

template <typename T>
void CProxySection_PmeXPencil::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, userData, fragSize);
}

void CProxySection_PmeXPencil::contribute(CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, cb, userData, fragSize);
}

void CProxySection_PmeXPencil::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, cb, userData, fragSize);
}

template <typename T>
void CProxySection_PmeXPencil::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, cb, userData, fragSize);
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: PmeXPencil();
 */
void CProxyElement_PmeXPencil::insert(int onPE, const CkEntryOptions *impl_e_opts)
{ 
   void *impl_msg = CkAllocSysMsg(impl_e_opts);
   UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_PmeXPencil::idx_PmeXPencil_void(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvTrans(PmeTransMsg* impl_msg);
 */
void CProxyElement_PmeXPencil::recvTrans(PmeTransMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_PmeXPencil::idx_recvTrans_PmeTransMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void init(PmePencilInitMsg* impl_msg);
 */
void CProxyElement_PmeXPencil::init(PmePencilInitMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_PmeXPencil::idx_init_PmePencilInitMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: PmeXPencil(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: PmeXPencil();
 */
CkArrayID CProxy_PmeXPencil::ckNew(const CkArrayOptions &opts, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_PmeXPencil::idx_PmeXPencil_void(), opts);
  return gId;
}
void CProxy_PmeXPencil::ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_PmeXPencil::idx_PmeXPencil_void(), _ck_array_creation_cb, opts, impl_msg);
}
CkArrayID CProxy_PmeXPencil::ckNew(const int s1, const int s2, const int s3, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkArrayOptions opts(s1, s2, s3);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_PmeXPencil::idx_PmeXPencil_void(), opts);
  return gId;
}
void CProxy_PmeXPencil::ckNew(const int s1, const int s2, const int s3, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkArrayOptions opts(s1, s2, s3);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_PmeXPencil::idx_PmeXPencil_void(), _ck_array_creation_cb, opts, impl_msg);
}

// Entry point registration function
int CkIndex_PmeXPencil::reg_PmeXPencil_void() {
  int epidx = CkRegisterEp("PmeXPencil()",
      reinterpret_cast<CkCallFnPtr>(_call_PmeXPencil_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_PmeXPencil::_call_PmeXPencil_void(void* impl_msg, void* impl_obj_void)
{
  PmeXPencil* impl_obj = static_cast<PmeXPencil*>(impl_obj_void);
  new (impl_obj_void) PmeXPencil();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvTrans(PmeTransMsg* impl_msg);
 */
void CProxy_PmeXPencil::recvTrans(PmeTransMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_PmeXPencil::idx_recvTrans_PmeTransMsg(),0);
}

// Entry point registration function
int CkIndex_PmeXPencil::reg_recvTrans_PmeTransMsg() {
  int epidx = CkRegisterEp("recvTrans(PmeTransMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvTrans_PmeTransMsg), CMessage_PmeTransMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)PmeTransMsg::ckDebugPup);
  return epidx;
}

void CkIndex_PmeXPencil::_call_recvTrans_PmeTransMsg(void* impl_msg, void* impl_obj_void)
{
  PmeXPencil* impl_obj = static_cast<PmeXPencil*>(impl_obj_void);
  impl_obj->recvTrans((PmeTransMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void init(PmePencilInitMsg* impl_msg);
 */
void CProxy_PmeXPencil::init(PmePencilInitMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_PmeXPencil::idx_init_PmePencilInitMsg(),0);
}

// Entry point registration function
int CkIndex_PmeXPencil::reg_init_PmePencilInitMsg() {
  int epidx = CkRegisterEp("init(PmePencilInitMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_init_PmePencilInitMsg), CMessage_PmePencilInitMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)PmePencilInitMsg::ckDebugPup);
  return epidx;
}

void CkIndex_PmeXPencil::_call_init_PmePencilInitMsg(void* impl_msg, void* impl_obj_void)
{
  PmeXPencil* impl_obj = static_cast<PmeXPencil*>(impl_obj_void);
  impl_obj->_sdag_fnc_init((PmePencilInitMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: PmeXPencil(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_PmeXPencil::reg_PmeXPencil_CkMigrateMessage() {
  int epidx = CkRegisterEp("PmeXPencil(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_PmeXPencil_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_PmeXPencil::_call_PmeXPencil_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  call_migration_constructor<PmeXPencil> c = impl_obj_void;
  c((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: PmeXPencil();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvTrans(PmeTransMsg* impl_msg);
 */
void CProxySection_PmeXPencil::recvTrans(PmeTransMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_PmeXPencil::idx_recvTrans_PmeTransMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void init(PmePencilInitMsg* impl_msg);
 */
void CProxySection_PmeXPencil::init(PmePencilInitMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_PmeXPencil::idx_init_PmePencilInitMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: PmeXPencil(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_PmeXPencil::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterArrayDimensions(__idx, 3);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
  // REG: PmeXPencil();
  idx_PmeXPencil_void();
  CkRegisterDefaultCtor(__idx, idx_PmeXPencil_void());

  // REG: void recvTrans(PmeTransMsg* impl_msg);
  idx_recvTrans_PmeTransMsg();

  // REG: void init(PmePencilInitMsg* impl_msg);
  idx_init_PmePencilInitMsg();

  // REG: PmeXPencil(CkMigrateMessage* impl_msg);
  idx_PmeXPencil_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_PmeXPencil_CkMigrateMessage());

  PmeXPencil::__sdag_register(); // Potentially missing PmeXPencil_SDAG_CODE in your class definition?
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void PmeXPencil::init(PmePencilInitMsg initmsg){
  CkPrintf("Error> Direct call to SDAG entry method \'%s::%s\'!\n", "PmeXPencil", "init(PmePencilInitMsg initmsg)"); 
  CkAbort("Direct SDAG call is not allowed for SDAG entry methods having when constructs. Call such SDAG methods using a proxy"); 
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void PmeXPencil::_sdag_fnc_init(PmePencilInitMsg* gen0) {
  _TRACE_END_EXECUTE(); 
  if (!__dep.get()) _sdag_init();
  CkReferenceMsg(gen0);
  _slist_0(gen0);
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, this->ckGetArrayIndex().getProjectionID(), this); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeXPencil::init_end(PmePencilInitMsg* gen0) {
  CmiFree(UsrToEnv(gen0));
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeXPencil::_slist_0(PmePencilInitMsg* gen0) {
  _serial_0(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeXPencil::_slist_0_end(PmePencilInitMsg* gen0) {
  init_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeXPencil::_serial_0(PmePencilInitMsg* gen0) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_PmeXPencil_serial_0()), CkMyPe(), 0, this->ckGetArrayIndex().getProjectionID(), this); 
  {
    PmePencilInitMsg*& initmsg = gen0;
    { // begin serial block
#line 122 "inc/ComputePmeMgr.ci"

      base_init(initmsg); delete initmsg;
      fft_init();
      evir_init();
      
#line 4365 "ComputePmeMgr.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _while_0(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeXPencil::_while_0(PmePencilInitMsg* gen0) {
  {
    PmePencilInitMsg*& initmsg = gen0;
    if ( 1 ) {
      _slist_1(gen0);
    } else {
      _slist_0_end(gen0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeXPencil::_while_0_end(PmePencilInitMsg* gen0) {
  {
    PmePencilInitMsg*& initmsg = gen0;
    if ( 1 ) {
      _slist_1(gen0);
    } else {
      _slist_0_end(gen0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeXPencil::_slist_1(PmePencilInitMsg* gen0) {
  _serial_1(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeXPencil::_slist_1_end(PmePencilInitMsg* gen0) {
  _while_0_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeXPencil::_serial_1(PmePencilInitMsg* gen0) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_PmeXPencil_serial_1()), CkMyPe(), 0, this->ckGetArrayIndex().getProjectionID(), this); 
  {
    PmePencilInitMsg*& initmsg = gen0;
    { // begin serial block
#line 128 "inc/ComputePmeMgr.ci"
 hasData = 0; 
#line 4424 "ComputePmeMgr.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _for_0(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeXPencil::_for_0(PmePencilInitMsg* gen0) {
  {
    PmePencilInitMsg*& initmsg = gen0;
     imsg=0;
    if ( imsg < initdata.xBlocks) {
      _slist_2(gen0);
    } else {
      _if_0(gen0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeXPencil::_for_0_end(PmePencilInitMsg* gen0) {
  {
    PmePencilInitMsg*& initmsg = gen0;
     ++imsg ;
    if ( imsg < initdata.xBlocks) {
      _slist_2(gen0);
    } else {
      _if_0(gen0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeXPencil::_slist_2(PmePencilInitMsg* gen0) {
  _when_0(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeXPencil::_slist_2_end(PmePencilInitMsg* gen0) {
  _for_0_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* PmeXPencil::_when_0(PmePencilInitMsg* gen0) {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(0, false, 0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _serial_2(gen0, static_cast<PmeTransMsg*>(static_cast<SDAG::MsgClosure*>(buf0->cl)->msg));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(0);
    c->addClosure(new SDAG::MsgClosure(gen0));
    c->anyEntries.push_back(0);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeXPencil::_when_0_end(PmePencilInitMsg* gen0, PmeTransMsg* gen1) {
  {
    PmePencilInitMsg*& initmsg = gen0;
    {
      PmeTransMsg*& msg = gen1;
      CmiFree(UsrToEnv(msg));
    }
  }
  _slist_2_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeXPencil::_serial_2(PmePencilInitMsg* gen0, PmeTransMsg* gen1) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_PmeXPencil_recv_trans()), CkMyPe(), 0, this->ckGetArrayIndex().getProjectionID(), this); 
  {
    PmePencilInitMsg*& initmsg = gen0;
    {
      PmeTransMsg*& msg = gen1;
      { // begin serial block
#line 130 "inc/ComputePmeMgr.ci"

            if ( msg->hasData ) hasData = 1;
            needs_reply[msg->sourceNode] = msg->hasData;
            recv_trans(msg); delete msg;
          
#line 4524 "ComputePmeMgr.def.h"
      } // end serial block
    }
  }
  _TRACE_END_EXECUTE(); 
  _when_0_end(gen0, gen1);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeXPencil::_if_0(PmePencilInitMsg* gen0) {
  {
    PmePencilInitMsg*& initmsg = gen0;
    if ( hasData ) {
      _slist_3(gen0);
    } else {
      _if_0_end(gen0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeXPencil::_if_0_end(PmePencilInitMsg* gen0) {
  _serial_6(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeXPencil::_slist_3(PmePencilInitMsg* gen0) {
  _serial_3(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeXPencil::_slist_3_end(PmePencilInitMsg* gen0) {
  _if_0_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeXPencil::_serial_3(PmePencilInitMsg* gen0) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_PmeXPencil_forward_fft()), CkMyPe(), 0, this->ckGetArrayIndex().getProjectionID(), this); 
  {
    PmePencilInitMsg*& initmsg = gen0;
    { // begin serial block
#line 137 "inc/ComputePmeMgr.ci"
 forward_fft(); 
#line 4577 "ComputePmeMgr.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _serial_4(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeXPencil::_serial_4(PmePencilInitMsg* gen0) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_PmeXPencil_pme_kspace()), CkMyPe(), 0, this->ckGetArrayIndex().getProjectionID(), this); 
  {
    PmePencilInitMsg*& initmsg = gen0;
    { // begin serial block
#line 138 "inc/ComputePmeMgr.ci"
 pme_kspace(); 
#line 4594 "ComputePmeMgr.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _serial_5(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeXPencil::_serial_5(PmePencilInitMsg* gen0) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_PmeXPencil_backward_fft()), CkMyPe(), 0, this->ckGetArrayIndex().getProjectionID(), this); 
  {
    PmePencilInitMsg*& initmsg = gen0;
    { // begin serial block
#line 139 "inc/ComputePmeMgr.ci"
 backward_fft(); 
#line 4611 "ComputePmeMgr.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _slist_3_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeXPencil::_serial_6(PmePencilInitMsg* gen0) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_PmeXPencil_send_untrans()), CkMyPe(), 0, this->ckGetArrayIndex().getProjectionID(), this); 
  {
    PmePencilInitMsg*& initmsg = gen0;
    { // begin serial block
#line 141 "inc/ComputePmeMgr.ci"
 send_untrans(); 
#line 4628 "ComputePmeMgr.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _slist_1_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeXPencil::recvTrans(PmeTransMsg* msg_msg){
  if (!__dep.get()) _sdag_init();
  CkReferenceMsg(msg_msg);
  __dep->pushBuffer(0, new SDAG::MsgClosure(msg_msg));
  SDAG::Continuation* c = __dep->tryFindContinuation(0);
  if (c) {
    _TRACE_END_EXECUTE(); 
    _when_0(
      static_cast<PmePencilInitMsg*>(static_cast<SDAG::MsgClosure*>(c->closure[0])->msg)
    );
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, this->ckGetArrayIndex().getProjectionID(), this); 
    delete c;
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void PmeXPencil::_sdag_init() { // Potentially missing PmeXPencil_SDAG_CODE in your class definition?
  __dep.reset(new SDAG::Dependency(1,1));
  __dep->addDepends(0,0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeXPencil::__sdag_init() { // Potentially missing PmeXPencil_SDAG_CODE in your class definition?
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void PmeXPencil::_sdag_pup(PUP::er &p) {  // Potentially missing PmeXPencil_SDAG_CODE in your class definition?
  p|__dep;
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void PmeXPencil::__sdag_register() { // Potentially missing PmeXPencil_SDAG_CODE in your class definition?
  (void)_sdag_idx_PmeXPencil_serial_0();
  (void)_sdag_idx_PmeXPencil_serial_1();
  (void)_sdag_idx_PmeXPencil_recv_trans();
  (void)_sdag_idx_PmeXPencil_forward_fft();
  (void)_sdag_idx_PmeXPencil_pme_kspace();
  (void)_sdag_idx_PmeXPencil_backward_fft();
  (void)_sdag_idx_PmeXPencil_send_untrans();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int PmeXPencil::_sdag_idx_PmeXPencil_serial_0() { // Potentially missing PmeXPencil_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_PmeXPencil_serial_0();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int PmeXPencil::_sdag_reg_PmeXPencil_serial_0() { // Potentially missing PmeXPencil_SDAG_CODE in your class definition?
  return CkRegisterEp("PmeXPencil_serial_0", NULL, 0, CkIndex_PmeXPencil::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int PmeXPencil::_sdag_idx_PmeXPencil_serial_1() { // Potentially missing PmeXPencil_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_PmeXPencil_serial_1();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int PmeXPencil::_sdag_reg_PmeXPencil_serial_1() { // Potentially missing PmeXPencil_SDAG_CODE in your class definition?
  return CkRegisterEp("PmeXPencil_serial_1", NULL, 0, CkIndex_PmeXPencil::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int PmeXPencil::_sdag_idx_PmeXPencil_recv_trans() { // Potentially missing PmeXPencil_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_PmeXPencil_recv_trans();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int PmeXPencil::_sdag_reg_PmeXPencil_recv_trans() { // Potentially missing PmeXPencil_SDAG_CODE in your class definition?
  return CkRegisterEp("PmeXPencil_recv_trans", NULL, 0, CkIndex_PmeXPencil::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int PmeXPencil::_sdag_idx_PmeXPencil_forward_fft() { // Potentially missing PmeXPencil_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_PmeXPencil_forward_fft();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int PmeXPencil::_sdag_reg_PmeXPencil_forward_fft() { // Potentially missing PmeXPencil_SDAG_CODE in your class definition?
  return CkRegisterEp("PmeXPencil_forward_fft", NULL, 0, CkIndex_PmeXPencil::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int PmeXPencil::_sdag_idx_PmeXPencil_pme_kspace() { // Potentially missing PmeXPencil_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_PmeXPencil_pme_kspace();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int PmeXPencil::_sdag_reg_PmeXPencil_pme_kspace() { // Potentially missing PmeXPencil_SDAG_CODE in your class definition?
  return CkRegisterEp("PmeXPencil_pme_kspace", NULL, 0, CkIndex_PmeXPencil::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int PmeXPencil::_sdag_idx_PmeXPencil_backward_fft() { // Potentially missing PmeXPencil_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_PmeXPencil_backward_fft();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int PmeXPencil::_sdag_reg_PmeXPencil_backward_fft() { // Potentially missing PmeXPencil_SDAG_CODE in your class definition?
  return CkRegisterEp("PmeXPencil_backward_fft", NULL, 0, CkIndex_PmeXPencil::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int PmeXPencil::_sdag_idx_PmeXPencil_send_untrans() { // Potentially missing PmeXPencil_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_PmeXPencil_send_untrans();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int PmeXPencil::_sdag_reg_PmeXPencil_send_untrans() { // Potentially missing PmeXPencil_SDAG_CODE in your class definition?
  return CkRegisterEp("PmeXPencil_send_untrans", NULL, 0, CkIndex_PmeXPencil::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */



/* DEFS: nodegroup NodePmeMgr: NodeGroup{
NodePmeMgr();
void recvPencilMapProxies(const CProxy_PmePencilMap &xm, const CProxy_PmePencilMap &ym, const CProxy_PmePencilMap &zm);
void recvTrans(PmeTransMsg* impl_msg);
void recvUntrans(PmeUntransMsg* impl_msg);
void sendDataHelper(int impl_noname_0);
void sendPencilsHelper(int impl_noname_1);
void recvUngrid(PmeGridMsg* impl_msg);
void recvZGrid(PmeGridMsg* impl_msg);
void recvXTrans(PmeTransMsg* impl_msg);
void recvYTrans(PmeTransMsg* impl_msg);
void recvYUntrans(PmeUntransMsg* impl_msg);
void recvZUntrans(PmeUntransMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_NodePmeMgr::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: NodePmeMgr();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvPencilMapProxies(const CProxy_PmePencilMap &xm, const CProxy_PmePencilMap &ym, const CProxy_PmePencilMap &zm);
 */
void CProxyElement_NodePmeMgr::recvPencilMapProxies(const CProxy_PmePencilMap &xm, const CProxy_PmePencilMap &ym, const CProxy_PmePencilMap &zm, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CProxy_PmePencilMap &xm, const CProxy_PmePencilMap &ym, const CProxy_PmePencilMap &zm
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_PmePencilMap>::type>::type &)xm;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_PmePencilMap>::type>::type &)ym;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_PmePencilMap>::type>::type &)zm;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_PmePencilMap>::type>::type &)xm;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_PmePencilMap>::type>::type &)ym;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_PmePencilMap>::type>::type &)zm;
  }
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_NodePmeMgr::idx_recvPencilMapProxies_marshall2(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_NodePmeMgr::idx_recvPencilMapProxies_marshall2(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgNodeBranch(CkIndex_NodePmeMgr::idx_recvPencilMapProxies_marshall2(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvTrans(PmeTransMsg* impl_msg);
 */
void CProxyElement_NodePmeMgr::recvTrans(PmeTransMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_NodePmeMgr::idx_recvTrans_PmeTransMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_NodePmeMgr::idx_recvTrans_PmeTransMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgNodeBranch(CkIndex_NodePmeMgr::idx_recvTrans_PmeTransMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_EXPEDITED);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvUntrans(PmeUntransMsg* impl_msg);
 */
void CProxyElement_NodePmeMgr::recvUntrans(PmeUntransMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_NodePmeMgr::idx_recvUntrans_PmeUntransMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_NodePmeMgr::idx_recvUntrans_PmeUntransMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgNodeBranch(CkIndex_NodePmeMgr::idx_recvUntrans_PmeUntransMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_EXPEDITED);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendDataHelper(int impl_noname_0);
 */
void CProxyElement_NodePmeMgr::sendDataHelper(int impl_noname_0, const CkEntryOptions *impl_e_opts)
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
     CkNodeGroupMsgPrep(CkIndex_NodePmeMgr::idx_sendDataHelper_marshall5(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_NodePmeMgr::idx_sendDataHelper_marshall5(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgNodeBranch(CkIndex_NodePmeMgr::idx_sendDataHelper_marshall5(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendPencilsHelper(int impl_noname_1);
 */
void CProxyElement_NodePmeMgr::sendPencilsHelper(int impl_noname_1, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_1
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_1;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_1;
  }
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_NodePmeMgr::idx_sendPencilsHelper_marshall6(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_NodePmeMgr::idx_sendPencilsHelper_marshall6(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgNodeBranch(CkIndex_NodePmeMgr::idx_sendPencilsHelper_marshall6(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvUngrid(PmeGridMsg* impl_msg);
 */
void CProxyElement_NodePmeMgr::recvUngrid(PmeGridMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_NodePmeMgr::idx_recvUngrid_PmeGridMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_NodePmeMgr::idx_recvUngrid_PmeGridMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgNodeBranch(CkIndex_NodePmeMgr::idx_recvUngrid_PmeGridMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvZGrid(PmeGridMsg* impl_msg);
 */
void CProxyElement_NodePmeMgr::recvZGrid(PmeGridMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_NodePmeMgr::idx_recvZGrid_PmeGridMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_NodePmeMgr::idx_recvZGrid_PmeGridMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgNodeBranch(CkIndex_NodePmeMgr::idx_recvZGrid_PmeGridMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvXTrans(PmeTransMsg* impl_msg);
 */
void CProxyElement_NodePmeMgr::recvXTrans(PmeTransMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_NodePmeMgr::idx_recvXTrans_PmeTransMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_NodePmeMgr::idx_recvXTrans_PmeTransMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgNodeBranch(CkIndex_NodePmeMgr::idx_recvXTrans_PmeTransMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvYTrans(PmeTransMsg* impl_msg);
 */
void CProxyElement_NodePmeMgr::recvYTrans(PmeTransMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_NodePmeMgr::idx_recvYTrans_PmeTransMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_NodePmeMgr::idx_recvYTrans_PmeTransMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgNodeBranch(CkIndex_NodePmeMgr::idx_recvYTrans_PmeTransMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvYUntrans(PmeUntransMsg* impl_msg);
 */
void CProxyElement_NodePmeMgr::recvYUntrans(PmeUntransMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_NodePmeMgr::idx_recvYUntrans_PmeUntransMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_NodePmeMgr::idx_recvYUntrans_PmeUntransMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgNodeBranch(CkIndex_NodePmeMgr::idx_recvYUntrans_PmeUntransMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvZUntrans(PmeUntransMsg* impl_msg);
 */
void CProxyElement_NodePmeMgr::recvZUntrans(PmeUntransMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_NodePmeMgr::idx_recvZUntrans_PmeUntransMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_NodePmeMgr::idx_recvZUntrans_PmeUntransMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgNodeBranch(CkIndex_NodePmeMgr::idx_recvZUntrans_PmeUntransMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: NodePmeMgr();
 */
CkGroupID CProxy_NodePmeMgr::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(NodeBocInitMsg);
  CkGroupID gId = CkCreateNodeGroup(CkIndex_NodePmeMgr::__idx, CkIndex_NodePmeMgr::idx_NodePmeMgr_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_NodePmeMgr::reg_NodePmeMgr_void() {
  int epidx = CkRegisterEp("NodePmeMgr()",
      reinterpret_cast<CkCallFnPtr>(_call_NodePmeMgr_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_NodePmeMgr::_call_NodePmeMgr_void(void* impl_msg, void* impl_obj_void)
{
  NodePmeMgr* impl_obj = static_cast<NodePmeMgr*>(impl_obj_void);
  new (impl_obj_void) NodePmeMgr();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvPencilMapProxies(const CProxy_PmePencilMap &xm, const CProxy_PmePencilMap &ym, const CProxy_PmePencilMap &zm);
 */
void CProxy_NodePmeMgr::recvPencilMapProxies(const CProxy_PmePencilMap &xm, const CProxy_PmePencilMap &ym, const CProxy_PmePencilMap &zm, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CProxy_PmePencilMap &xm, const CProxy_PmePencilMap &ym, const CProxy_PmePencilMap &zm
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_PmePencilMap>::type>::type &)xm;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_PmePencilMap>::type>::type &)ym;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_PmePencilMap>::type>::type &)zm;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_PmePencilMap>::type>::type &)xm;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_PmePencilMap>::type>::type &)ym;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_PmePencilMap>::type>::type &)zm;
  }
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_NodePmeMgr::idx_recvPencilMapProxies_marshall2(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_NodePmeMgr::idx_recvPencilMapProxies_marshall2(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_NodePmeMgr::idx_recvPencilMapProxies_marshall2(), impl_msg, ckGetGroupID(),0);
}

// Entry point registration function
int CkIndex_NodePmeMgr::reg_recvPencilMapProxies_marshall2() {
  int epidx = CkRegisterEp("recvPencilMapProxies(const CProxy_PmePencilMap &xm, const CProxy_PmePencilMap &ym, const CProxy_PmePencilMap &zm)",
      reinterpret_cast<CkCallFnPtr>(_call_recvPencilMapProxies_marshall2), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_recvPencilMapProxies_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_recvPencilMapProxies_marshall2);

  return epidx;
}

void CkIndex_NodePmeMgr::_call_recvPencilMapProxies_marshall2(void* impl_msg, void* impl_obj_void)
{
  NodePmeMgr* impl_obj = static_cast<NodePmeMgr*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CProxy_PmePencilMap &xm, const CProxy_PmePencilMap &ym, const CProxy_PmePencilMap &zm*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CProxy_PmePencilMap> xm;
  implP|xm;
  PUP::detail::TemporaryObjectHolder<CProxy_PmePencilMap> ym;
  implP|ym;
  PUP::detail::TemporaryObjectHolder<CProxy_PmePencilMap> zm;
  implP|zm;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->recvPencilMapProxies(std::move(xm.t), std::move(ym.t), std::move(zm.t));
}
int CkIndex_NodePmeMgr::_callmarshall_recvPencilMapProxies_marshall2(char* impl_buf, void* impl_obj_void) {
  NodePmeMgr* impl_obj = static_cast<NodePmeMgr*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CProxy_PmePencilMap &xm, const CProxy_PmePencilMap &ym, const CProxy_PmePencilMap &zm*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CProxy_PmePencilMap> xm;
  implP|xm;
  PUP::detail::TemporaryObjectHolder<CProxy_PmePencilMap> ym;
  implP|ym;
  PUP::detail::TemporaryObjectHolder<CProxy_PmePencilMap> zm;
  implP|zm;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->recvPencilMapProxies(std::move(xm.t), std::move(ym.t), std::move(zm.t));
  return implP.size();
}
void CkIndex_NodePmeMgr::_marshallmessagepup_recvPencilMapProxies_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CProxy_PmePencilMap &xm, const CProxy_PmePencilMap &ym, const CProxy_PmePencilMap &zm*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CProxy_PmePencilMap> xm;
  implP|xm;
  PUP::detail::TemporaryObjectHolder<CProxy_PmePencilMap> ym;
  implP|ym;
  PUP::detail::TemporaryObjectHolder<CProxy_PmePencilMap> zm;
  implP|zm;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("xm");
  implDestP|xm;
  if (implDestP.hasComments()) implDestP.comment("ym");
  implDestP|ym;
  if (implDestP.hasComments()) implDestP.comment("zm");
  implDestP|zm;
}
PUPable_def(SINGLE_ARG(Closure_NodePmeMgr::recvPencilMapProxies_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvTrans(PmeTransMsg* impl_msg);
 */
void CProxy_NodePmeMgr::recvTrans(PmeTransMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_NodePmeMgr::idx_recvTrans_PmeTransMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_NodePmeMgr::idx_recvTrans_PmeTransMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_NodePmeMgr::idx_recvTrans_PmeTransMsg(), impl_msg, ckGetGroupID(),0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_NodePmeMgr::reg_recvTrans_PmeTransMsg() {
  int epidx = CkRegisterEp("recvTrans(PmeTransMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvTrans_PmeTransMsg), CMessage_PmeTransMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)PmeTransMsg::ckDebugPup);
  return epidx;
}

void CkIndex_NodePmeMgr::_call_recvTrans_PmeTransMsg(void* impl_msg, void* impl_obj_void)
{
  NodePmeMgr* impl_obj = static_cast<NodePmeMgr*>(impl_obj_void);
  impl_obj->recvTrans((PmeTransMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvUntrans(PmeUntransMsg* impl_msg);
 */
void CProxy_NodePmeMgr::recvUntrans(PmeUntransMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_NodePmeMgr::idx_recvUntrans_PmeUntransMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_NodePmeMgr::idx_recvUntrans_PmeUntransMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_NodePmeMgr::idx_recvUntrans_PmeUntransMsg(), impl_msg, ckGetGroupID(),0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_NodePmeMgr::reg_recvUntrans_PmeUntransMsg() {
  int epidx = CkRegisterEp("recvUntrans(PmeUntransMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvUntrans_PmeUntransMsg), CMessage_PmeUntransMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)PmeUntransMsg::ckDebugPup);
  return epidx;
}

void CkIndex_NodePmeMgr::_call_recvUntrans_PmeUntransMsg(void* impl_msg, void* impl_obj_void)
{
  NodePmeMgr* impl_obj = static_cast<NodePmeMgr*>(impl_obj_void);
  impl_obj->recvUntrans((PmeUntransMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendDataHelper(int impl_noname_0);
 */
void CProxy_NodePmeMgr::sendDataHelper(int impl_noname_0, const CkEntryOptions *impl_e_opts)
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
     CkNodeGroupMsgPrep(CkIndex_NodePmeMgr::idx_sendDataHelper_marshall5(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_NodePmeMgr::idx_sendDataHelper_marshall5(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_NodePmeMgr::idx_sendDataHelper_marshall5(), impl_msg, ckGetGroupID(),0);
}

// Entry point registration function
int CkIndex_NodePmeMgr::reg_sendDataHelper_marshall5() {
  int epidx = CkRegisterEp("sendDataHelper(int impl_noname_0)",
      reinterpret_cast<CkCallFnPtr>(_call_sendDataHelper_marshall5), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_sendDataHelper_marshall5);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_sendDataHelper_marshall5);

  return epidx;
}

void CkIndex_NodePmeMgr::_call_sendDataHelper_marshall5(void* impl_msg, void* impl_obj_void)
{
  NodePmeMgr* impl_obj = static_cast<NodePmeMgr*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_0;
  implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->sendDataHelper(std::move(impl_noname_0.t));
}
int CkIndex_NodePmeMgr::_callmarshall_sendDataHelper_marshall5(char* impl_buf, void* impl_obj_void) {
  NodePmeMgr* impl_obj = static_cast<NodePmeMgr*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_0;
  implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->sendDataHelper(std::move(impl_noname_0.t));
  return implP.size();
}
void CkIndex_NodePmeMgr::_marshallmessagepup_sendDataHelper_marshall5(PUP::er &implDestP,void *impl_msg) {
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
PUPable_def(SINGLE_ARG(Closure_NodePmeMgr::sendDataHelper_5_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendPencilsHelper(int impl_noname_1);
 */
void CProxy_NodePmeMgr::sendPencilsHelper(int impl_noname_1, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_1
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_1;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_1;
  }
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_NodePmeMgr::idx_sendPencilsHelper_marshall6(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_NodePmeMgr::idx_sendPencilsHelper_marshall6(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_NodePmeMgr::idx_sendPencilsHelper_marshall6(), impl_msg, ckGetGroupID(),0);
}

// Entry point registration function
int CkIndex_NodePmeMgr::reg_sendPencilsHelper_marshall6() {
  int epidx = CkRegisterEp("sendPencilsHelper(int impl_noname_1)",
      reinterpret_cast<CkCallFnPtr>(_call_sendPencilsHelper_marshall6), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_sendPencilsHelper_marshall6);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_sendPencilsHelper_marshall6);

  return epidx;
}

void CkIndex_NodePmeMgr::_call_sendPencilsHelper_marshall6(void* impl_msg, void* impl_obj_void)
{
  NodePmeMgr* impl_obj = static_cast<NodePmeMgr*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int impl_noname_1*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_1;
  implP|impl_noname_1;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->sendPencilsHelper(std::move(impl_noname_1.t));
}
int CkIndex_NodePmeMgr::_callmarshall_sendPencilsHelper_marshall6(char* impl_buf, void* impl_obj_void) {
  NodePmeMgr* impl_obj = static_cast<NodePmeMgr*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int impl_noname_1*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_1;
  implP|impl_noname_1;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->sendPencilsHelper(std::move(impl_noname_1.t));
  return implP.size();
}
void CkIndex_NodePmeMgr::_marshallmessagepup_sendPencilsHelper_marshall6(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int impl_noname_1*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_1;
  implP|impl_noname_1;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_1");
  implDestP|impl_noname_1;
}
PUPable_def(SINGLE_ARG(Closure_NodePmeMgr::sendPencilsHelper_6_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvUngrid(PmeGridMsg* impl_msg);
 */
void CProxy_NodePmeMgr::recvUngrid(PmeGridMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_NodePmeMgr::idx_recvUngrid_PmeGridMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_NodePmeMgr::idx_recvUngrid_PmeGridMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_NodePmeMgr::idx_recvUngrid_PmeGridMsg(), impl_msg, ckGetGroupID(),0);
}

// Entry point registration function
int CkIndex_NodePmeMgr::reg_recvUngrid_PmeGridMsg() {
  int epidx = CkRegisterEp("recvUngrid(PmeGridMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvUngrid_PmeGridMsg), CMessage_PmeGridMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)PmeGridMsg::ckDebugPup);
  return epidx;
}

void CkIndex_NodePmeMgr::_call_recvUngrid_PmeGridMsg(void* impl_msg, void* impl_obj_void)
{
  NodePmeMgr* impl_obj = static_cast<NodePmeMgr*>(impl_obj_void);
  impl_obj->recvUngrid((PmeGridMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvZGrid(PmeGridMsg* impl_msg);
 */
void CProxy_NodePmeMgr::recvZGrid(PmeGridMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_NodePmeMgr::idx_recvZGrid_PmeGridMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_NodePmeMgr::idx_recvZGrid_PmeGridMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_NodePmeMgr::idx_recvZGrid_PmeGridMsg(), impl_msg, ckGetGroupID(),0);
}

// Entry point registration function
int CkIndex_NodePmeMgr::reg_recvZGrid_PmeGridMsg() {
  int epidx = CkRegisterEp("recvZGrid(PmeGridMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvZGrid_PmeGridMsg), CMessage_PmeGridMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)PmeGridMsg::ckDebugPup);
  return epidx;
}

void CkIndex_NodePmeMgr::_call_recvZGrid_PmeGridMsg(void* impl_msg, void* impl_obj_void)
{
  NodePmeMgr* impl_obj = static_cast<NodePmeMgr*>(impl_obj_void);
  impl_obj->recvZGrid((PmeGridMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvXTrans(PmeTransMsg* impl_msg);
 */
void CProxy_NodePmeMgr::recvXTrans(PmeTransMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_NodePmeMgr::idx_recvXTrans_PmeTransMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_NodePmeMgr::idx_recvXTrans_PmeTransMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_NodePmeMgr::idx_recvXTrans_PmeTransMsg(), impl_msg, ckGetGroupID(),0);
}

// Entry point registration function
int CkIndex_NodePmeMgr::reg_recvXTrans_PmeTransMsg() {
  int epidx = CkRegisterEp("recvXTrans(PmeTransMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvXTrans_PmeTransMsg), CMessage_PmeTransMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)PmeTransMsg::ckDebugPup);
  return epidx;
}

void CkIndex_NodePmeMgr::_call_recvXTrans_PmeTransMsg(void* impl_msg, void* impl_obj_void)
{
  NodePmeMgr* impl_obj = static_cast<NodePmeMgr*>(impl_obj_void);
  impl_obj->recvXTrans((PmeTransMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvYTrans(PmeTransMsg* impl_msg);
 */
void CProxy_NodePmeMgr::recvYTrans(PmeTransMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_NodePmeMgr::idx_recvYTrans_PmeTransMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_NodePmeMgr::idx_recvYTrans_PmeTransMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_NodePmeMgr::idx_recvYTrans_PmeTransMsg(), impl_msg, ckGetGroupID(),0);
}

// Entry point registration function
int CkIndex_NodePmeMgr::reg_recvYTrans_PmeTransMsg() {
  int epidx = CkRegisterEp("recvYTrans(PmeTransMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvYTrans_PmeTransMsg), CMessage_PmeTransMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)PmeTransMsg::ckDebugPup);
  return epidx;
}

void CkIndex_NodePmeMgr::_call_recvYTrans_PmeTransMsg(void* impl_msg, void* impl_obj_void)
{
  NodePmeMgr* impl_obj = static_cast<NodePmeMgr*>(impl_obj_void);
  impl_obj->recvYTrans((PmeTransMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvYUntrans(PmeUntransMsg* impl_msg);
 */
void CProxy_NodePmeMgr::recvYUntrans(PmeUntransMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_NodePmeMgr::idx_recvYUntrans_PmeUntransMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_NodePmeMgr::idx_recvYUntrans_PmeUntransMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_NodePmeMgr::idx_recvYUntrans_PmeUntransMsg(), impl_msg, ckGetGroupID(),0);
}

// Entry point registration function
int CkIndex_NodePmeMgr::reg_recvYUntrans_PmeUntransMsg() {
  int epidx = CkRegisterEp("recvYUntrans(PmeUntransMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvYUntrans_PmeUntransMsg), CMessage_PmeUntransMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)PmeUntransMsg::ckDebugPup);
  return epidx;
}

void CkIndex_NodePmeMgr::_call_recvYUntrans_PmeUntransMsg(void* impl_msg, void* impl_obj_void)
{
  NodePmeMgr* impl_obj = static_cast<NodePmeMgr*>(impl_obj_void);
  impl_obj->recvYUntrans((PmeUntransMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvZUntrans(PmeUntransMsg* impl_msg);
 */
void CProxy_NodePmeMgr::recvZUntrans(PmeUntransMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_NodePmeMgr::idx_recvZUntrans_PmeUntransMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_NodePmeMgr::idx_recvZUntrans_PmeUntransMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_NodePmeMgr::idx_recvZUntrans_PmeUntransMsg(), impl_msg, ckGetGroupID(),0);
}

// Entry point registration function
int CkIndex_NodePmeMgr::reg_recvZUntrans_PmeUntransMsg() {
  int epidx = CkRegisterEp("recvZUntrans(PmeUntransMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvZUntrans_PmeUntransMsg), CMessage_PmeUntransMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)PmeUntransMsg::ckDebugPup);
  return epidx;
}

void CkIndex_NodePmeMgr::_call_recvZUntrans_PmeUntransMsg(void* impl_msg, void* impl_obj_void)
{
  NodePmeMgr* impl_obj = static_cast<NodePmeMgr*>(impl_obj_void);
  impl_obj->recvZUntrans((PmeUntransMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: NodePmeMgr();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvPencilMapProxies(const CProxy_PmePencilMap &xm, const CProxy_PmePencilMap &ym, const CProxy_PmePencilMap &zm);
 */
void CProxySection_NodePmeMgr::recvPencilMapProxies(const CProxy_PmePencilMap &xm, const CProxy_PmePencilMap &ym, const CProxy_PmePencilMap &zm, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CProxy_PmePencilMap &xm, const CProxy_PmePencilMap &ym, const CProxy_PmePencilMap &zm
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_PmePencilMap>::type>::type &)xm;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_PmePencilMap>::type>::type &)ym;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_PmePencilMap>::type>::type &)zm;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_PmePencilMap>::type>::type &)xm;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_PmePencilMap>::type>::type &)ym;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_PmePencilMap>::type>::type &)zm;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_NodePmeMgr::idx_recvPencilMapProxies_marshall2(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_NodePmeMgr::idx_recvPencilMapProxies_marshall2(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvTrans(PmeTransMsg* impl_msg);
 */
void CProxySection_NodePmeMgr::recvTrans(PmeTransMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_NodePmeMgr::idx_recvTrans_PmeTransMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_NodePmeMgr::idx_recvTrans_PmeTransMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvUntrans(PmeUntransMsg* impl_msg);
 */
void CProxySection_NodePmeMgr::recvUntrans(PmeUntransMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_NodePmeMgr::idx_recvUntrans_PmeUntransMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_NodePmeMgr::idx_recvUntrans_PmeUntransMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendDataHelper(int impl_noname_0);
 */
void CProxySection_NodePmeMgr::sendDataHelper(int impl_noname_0, const CkEntryOptions *impl_e_opts)
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
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_NodePmeMgr::idx_sendDataHelper_marshall5(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_NodePmeMgr::idx_sendDataHelper_marshall5(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendPencilsHelper(int impl_noname_1);
 */
void CProxySection_NodePmeMgr::sendPencilsHelper(int impl_noname_1, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_1
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_1;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_1;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_NodePmeMgr::idx_sendPencilsHelper_marshall6(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_NodePmeMgr::idx_sendPencilsHelper_marshall6(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvUngrid(PmeGridMsg* impl_msg);
 */
void CProxySection_NodePmeMgr::recvUngrid(PmeGridMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_NodePmeMgr::idx_recvUngrid_PmeGridMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_NodePmeMgr::idx_recvUngrid_PmeGridMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvZGrid(PmeGridMsg* impl_msg);
 */
void CProxySection_NodePmeMgr::recvZGrid(PmeGridMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_NodePmeMgr::idx_recvZGrid_PmeGridMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_NodePmeMgr::idx_recvZGrid_PmeGridMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvXTrans(PmeTransMsg* impl_msg);
 */
void CProxySection_NodePmeMgr::recvXTrans(PmeTransMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_NodePmeMgr::idx_recvXTrans_PmeTransMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_NodePmeMgr::idx_recvXTrans_PmeTransMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvYTrans(PmeTransMsg* impl_msg);
 */
void CProxySection_NodePmeMgr::recvYTrans(PmeTransMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_NodePmeMgr::idx_recvYTrans_PmeTransMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_NodePmeMgr::idx_recvYTrans_PmeTransMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvYUntrans(PmeUntransMsg* impl_msg);
 */
void CProxySection_NodePmeMgr::recvYUntrans(PmeUntransMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_NodePmeMgr::idx_recvYUntrans_PmeUntransMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_NodePmeMgr::idx_recvYUntrans_PmeUntransMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvZUntrans(PmeUntransMsg* impl_msg);
 */
void CProxySection_NodePmeMgr::recvZUntrans(PmeUntransMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_NodePmeMgr::idx_recvZUntrans_PmeUntransMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_NodePmeMgr::idx_recvZUntrans_PmeUntransMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_NodePmeMgr::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_NodeGroup::__idx);
   CkRegisterGroupIrr(__idx,NodePmeMgr::isIrreducible());
  // REG: NodePmeMgr();
  idx_NodePmeMgr_void();
  CkRegisterDefaultCtor(__idx, idx_NodePmeMgr_void());

  // REG: void recvPencilMapProxies(const CProxy_PmePencilMap &xm, const CProxy_PmePencilMap &ym, const CProxy_PmePencilMap &zm);
  idx_recvPencilMapProxies_marshall2();

  // REG: void recvTrans(PmeTransMsg* impl_msg);
  idx_recvTrans_PmeTransMsg();

  // REG: void recvUntrans(PmeUntransMsg* impl_msg);
  idx_recvUntrans_PmeUntransMsg();

  // REG: void sendDataHelper(int impl_noname_0);
  idx_sendDataHelper_marshall5();

  // REG: void sendPencilsHelper(int impl_noname_1);
  idx_sendPencilsHelper_marshall6();

  // REG: void recvUngrid(PmeGridMsg* impl_msg);
  idx_recvUngrid_PmeGridMsg();

  // REG: void recvZGrid(PmeGridMsg* impl_msg);
  idx_recvZGrid_PmeGridMsg();

  // REG: void recvXTrans(PmeTransMsg* impl_msg);
  idx_recvXTrans_PmeTransMsg();

  // REG: void recvYTrans(PmeTransMsg* impl_msg);
  idx_recvYTrans_PmeTransMsg();

  // REG: void recvYUntrans(PmeUntransMsg* impl_msg);
  idx_recvYUntrans_PmeUntransMsg();

  // REG: void recvZUntrans(PmeUntransMsg* impl_msg);
  idx_recvZUntrans_PmeUntransMsg();

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group ComputePmeMgr: IrrGroup{
ComputePmeMgr();
void initialize(CkQdMsg* impl_msg);
void initialize_pencils(CkQdMsg* impl_msg);
void activate_pencils(CkQdMsg* impl_msg);
void pollChargeGridReady();
void recvChargeGridReady();
void sendDataHelper(int impl_noname_2);
void sendPencilsHelper(int impl_noname_3);
void recvGrid(PmeGridMsg* impl_msg);
void gridCalc1();
void sendTransBarrier();
void sendTrans();
void recvSharedTrans(PmeSharedTransMsg* impl_msg);
void recvTrans(PmeTransMsg* impl_msg);
void gridCalc2();
void gridCalc2R();
void sendUntrans();
void recvSharedUntrans(PmeSharedUntransMsg* impl_msg);
void recvUntrans(PmeUntransMsg* impl_msg);
void gridCalc3();
void sendUngrid();
void recvUngrid(PmeGridMsg* impl_msg);
void recvAck(PmeAckMsg* impl_msg);
void ungridCalc();
void pollForcesReady();
void recvRecipEvir(PmeEvirMsg* impl_msg);
void addRecipEvirClient();
void recvArrays(const CProxy_PmeXPencil &impl_noname_4, const CProxy_PmeYPencil &impl_noname_5, const CProxy_PmeZPencil &impl_noname_6);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_ComputePmeMgr::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: ComputePmeMgr();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initialize(CkQdMsg* impl_msg);
 */
void CProxyElement_ComputePmeMgr::initialize(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::idx_initialize_CkQdMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_initialize_CkQdMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputePmeMgr::idx_initialize_CkQdMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initialize_pencils(CkQdMsg* impl_msg);
 */
void CProxyElement_ComputePmeMgr::initialize_pencils(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::idx_initialize_pencils_CkQdMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_initialize_pencils_CkQdMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputePmeMgr::idx_initialize_pencils_CkQdMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void activate_pencils(CkQdMsg* impl_msg);
 */
void CProxyElement_ComputePmeMgr::activate_pencils(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::idx_activate_pencils_CkQdMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_activate_pencils_CkQdMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputePmeMgr::idx_activate_pencils_CkQdMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void pollChargeGridReady();
 */
void CProxyElement_ComputePmeMgr::pollChargeGridReady(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::idx_pollChargeGridReady_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_pollChargeGridReady_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputePmeMgr::idx_pollChargeGridReady_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvChargeGridReady();
 */
void CProxyElement_ComputePmeMgr::recvChargeGridReady(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::idx_recvChargeGridReady_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_recvChargeGridReady_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputePmeMgr::idx_recvChargeGridReady_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendDataHelper(int impl_noname_2);
 */
void CProxyElement_ComputePmeMgr::sendDataHelper(int impl_noname_2, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_2;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::idx_sendDataHelper_marshall7(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_sendDataHelper_marshall7(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputePmeMgr::idx_sendDataHelper_marshall7(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendPencilsHelper(int impl_noname_3);
 */
void CProxyElement_ComputePmeMgr::sendPencilsHelper(int impl_noname_3, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_3
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_3;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_3;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::idx_sendPencilsHelper_marshall8(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_sendPencilsHelper_marshall8(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputePmeMgr::idx_sendPencilsHelper_marshall8(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvGrid(PmeGridMsg* impl_msg);
 */
void CProxyElement_ComputePmeMgr::recvGrid(PmeGridMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::idx_recvGrid_PmeGridMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_recvGrid_PmeGridMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputePmeMgr::idx_recvGrid_PmeGridMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void gridCalc1();
 */
void CProxyElement_ComputePmeMgr::gridCalc1(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::idx_gridCalc1_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_gridCalc1_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputePmeMgr::idx_gridCalc1_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendTransBarrier();
 */
void CProxyElement_ComputePmeMgr::sendTransBarrier(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::idx_sendTransBarrier_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_sendTransBarrier_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputePmeMgr::idx_sendTransBarrier_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendTrans();
 */
void CProxyElement_ComputePmeMgr::sendTrans(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::idx_sendTrans_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_sendTrans_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputePmeMgr::idx_sendTrans_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvSharedTrans(PmeSharedTransMsg* impl_msg);
 */
void CProxyElement_ComputePmeMgr::recvSharedTrans(PmeSharedTransMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::idx_recvSharedTrans_PmeSharedTransMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_recvSharedTrans_PmeSharedTransMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputePmeMgr::idx_recvSharedTrans_PmeSharedTransMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvTrans(PmeTransMsg* impl_msg);
 */
void CProxyElement_ComputePmeMgr::recvTrans(PmeTransMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::idx_recvTrans_PmeTransMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_recvTrans_PmeTransMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputePmeMgr::idx_recvTrans_PmeTransMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void gridCalc2();
 */
void CProxyElement_ComputePmeMgr::gridCalc2(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::idx_gridCalc2_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_gridCalc2_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputePmeMgr::idx_gridCalc2_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void gridCalc2R();
 */
void CProxyElement_ComputePmeMgr::gridCalc2R(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::idx_gridCalc2R_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_gridCalc2R_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputePmeMgr::idx_gridCalc2R_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendUntrans();
 */
void CProxyElement_ComputePmeMgr::sendUntrans(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::idx_sendUntrans_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_sendUntrans_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputePmeMgr::idx_sendUntrans_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvSharedUntrans(PmeSharedUntransMsg* impl_msg);
 */
void CProxyElement_ComputePmeMgr::recvSharedUntrans(PmeSharedUntransMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::idx_recvSharedUntrans_PmeSharedUntransMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_recvSharedUntrans_PmeSharedUntransMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputePmeMgr::idx_recvSharedUntrans_PmeSharedUntransMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvUntrans(PmeUntransMsg* impl_msg);
 */
void CProxyElement_ComputePmeMgr::recvUntrans(PmeUntransMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::idx_recvUntrans_PmeUntransMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_recvUntrans_PmeUntransMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputePmeMgr::idx_recvUntrans_PmeUntransMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void gridCalc3();
 */
void CProxyElement_ComputePmeMgr::gridCalc3(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::idx_gridCalc3_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_gridCalc3_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputePmeMgr::idx_gridCalc3_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendUngrid();
 */
void CProxyElement_ComputePmeMgr::sendUngrid(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::idx_sendUngrid_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_sendUngrid_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputePmeMgr::idx_sendUngrid_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvUngrid(PmeGridMsg* impl_msg);
 */
void CProxyElement_ComputePmeMgr::recvUngrid(PmeGridMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::idx_recvUngrid_PmeGridMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_recvUngrid_PmeGridMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputePmeMgr::idx_recvUngrid_PmeGridMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvAck(PmeAckMsg* impl_msg);
 */
void CProxyElement_ComputePmeMgr::recvAck(PmeAckMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::idx_recvAck_PmeAckMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_recvAck_PmeAckMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputePmeMgr::idx_recvAck_PmeAckMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ungridCalc();
 */
void CProxyElement_ComputePmeMgr::ungridCalc(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::idx_ungridCalc_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_ungridCalc_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputePmeMgr::idx_ungridCalc_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void pollForcesReady();
 */
void CProxyElement_ComputePmeMgr::pollForcesReady(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::idx_pollForcesReady_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_pollForcesReady_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputePmeMgr::idx_pollForcesReady_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvRecipEvir(PmeEvirMsg* impl_msg);
 */
void CProxyElement_ComputePmeMgr::recvRecipEvir(PmeEvirMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::idx_recvRecipEvir_PmeEvirMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_recvRecipEvir_PmeEvirMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputePmeMgr::idx_recvRecipEvir_PmeEvirMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void addRecipEvirClient();
 */
void CProxyElement_ComputePmeMgr::addRecipEvirClient(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::idx_addRecipEvirClient_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_addRecipEvirClient_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputePmeMgr::idx_addRecipEvirClient_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvArrays(const CProxy_PmeXPencil &impl_noname_4, const CProxy_PmeYPencil &impl_noname_5, const CProxy_PmeZPencil &impl_noname_6);
 */
void CProxyElement_ComputePmeMgr::recvArrays(const CProxy_PmeXPencil &impl_noname_4, const CProxy_PmeYPencil &impl_noname_5, const CProxy_PmeZPencil &impl_noname_6, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CProxy_PmeXPencil &impl_noname_4, const CProxy_PmeYPencil &impl_noname_5, const CProxy_PmeZPencil &impl_noname_6
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_PmeXPencil>::type>::type &)impl_noname_4;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_PmeYPencil>::type>::type &)impl_noname_5;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_PmeZPencil>::type>::type &)impl_noname_6;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_PmeXPencil>::type>::type &)impl_noname_4;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_PmeYPencil>::type>::type &)impl_noname_5;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_PmeZPencil>::type>::type &)impl_noname_6;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::idx_recvArrays_marshall28(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_recvArrays_marshall28(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputePmeMgr::idx_recvArrays_marshall28(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ComputePmeMgr();
 */
CkGroupID CProxy_ComputePmeMgr::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_ComputePmeMgr::__idx, CkIndex_ComputePmeMgr::idx_ComputePmeMgr_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_ComputePmeMgr::reg_ComputePmeMgr_void() {
  int epidx = CkRegisterEp("ComputePmeMgr()",
      reinterpret_cast<CkCallFnPtr>(_call_ComputePmeMgr_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_ComputePmeMgr::_call_ComputePmeMgr_void(void* impl_msg, void* impl_obj_void)
{
  ComputePmeMgr* impl_obj = static_cast<ComputePmeMgr*>(impl_obj_void);
  new (impl_obj_void) ComputePmeMgr();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initialize(CkQdMsg* impl_msg);
 */
void CProxy_ComputePmeMgr::initialize(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::idx_initialize_CkQdMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_initialize_CkQdMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputePmeMgr::idx_initialize_CkQdMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputePmeMgr::initialize(CkQdMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::idx_initialize_CkQdMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputePmeMgr::initialize(CkQdMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputePmeMgr::idx_initialize_CkQdMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputePmeMgr::reg_initialize_CkQdMsg() {
  int epidx = CkRegisterEp("initialize(CkQdMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_initialize_CkQdMsg), CMessage_CkQdMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkQdMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ComputePmeMgr::_call_initialize_CkQdMsg(void* impl_msg, void* impl_obj_void)
{
  ComputePmeMgr* impl_obj = static_cast<ComputePmeMgr*>(impl_obj_void);
  impl_obj->initialize((CkQdMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initialize_pencils(CkQdMsg* impl_msg);
 */
void CProxy_ComputePmeMgr::initialize_pencils(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::idx_initialize_pencils_CkQdMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_initialize_pencils_CkQdMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputePmeMgr::idx_initialize_pencils_CkQdMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputePmeMgr::initialize_pencils(CkQdMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::idx_initialize_pencils_CkQdMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputePmeMgr::initialize_pencils(CkQdMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputePmeMgr::idx_initialize_pencils_CkQdMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputePmeMgr::reg_initialize_pencils_CkQdMsg() {
  int epidx = CkRegisterEp("initialize_pencils(CkQdMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_initialize_pencils_CkQdMsg), CMessage_CkQdMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkQdMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ComputePmeMgr::_call_initialize_pencils_CkQdMsg(void* impl_msg, void* impl_obj_void)
{
  ComputePmeMgr* impl_obj = static_cast<ComputePmeMgr*>(impl_obj_void);
  impl_obj->initialize_pencils((CkQdMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void activate_pencils(CkQdMsg* impl_msg);
 */
void CProxy_ComputePmeMgr::activate_pencils(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::idx_activate_pencils_CkQdMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_activate_pencils_CkQdMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputePmeMgr::idx_activate_pencils_CkQdMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputePmeMgr::activate_pencils(CkQdMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::idx_activate_pencils_CkQdMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputePmeMgr::activate_pencils(CkQdMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputePmeMgr::idx_activate_pencils_CkQdMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputePmeMgr::reg_activate_pencils_CkQdMsg() {
  int epidx = CkRegisterEp("activate_pencils(CkQdMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_activate_pencils_CkQdMsg), CMessage_CkQdMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkQdMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ComputePmeMgr::_call_activate_pencils_CkQdMsg(void* impl_msg, void* impl_obj_void)
{
  ComputePmeMgr* impl_obj = static_cast<ComputePmeMgr*>(impl_obj_void);
  impl_obj->activate_pencils((CkQdMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void pollChargeGridReady();
 */
void CProxy_ComputePmeMgr::pollChargeGridReady(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::idx_pollChargeGridReady_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_pollChargeGridReady_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputePmeMgr::idx_pollChargeGridReady_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputePmeMgr::pollChargeGridReady(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::idx_pollChargeGridReady_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputePmeMgr::pollChargeGridReady(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_ComputePmeMgr::idx_pollChargeGridReady_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputePmeMgr::reg_pollChargeGridReady_void() {
  int epidx = CkRegisterEp("pollChargeGridReady()",
      reinterpret_cast<CkCallFnPtr>(_call_pollChargeGridReady_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_ComputePmeMgr::_call_pollChargeGridReady_void(void* impl_msg, void* impl_obj_void)
{
  ComputePmeMgr* impl_obj = static_cast<ComputePmeMgr*>(impl_obj_void);
  impl_obj->pollChargeGridReady();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_ComputePmeMgr::pollChargeGridReady_5_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvChargeGridReady();
 */
void CProxy_ComputePmeMgr::recvChargeGridReady(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::idx_recvChargeGridReady_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_recvChargeGridReady_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputePmeMgr::idx_recvChargeGridReady_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputePmeMgr::recvChargeGridReady(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::idx_recvChargeGridReady_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputePmeMgr::recvChargeGridReady(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_ComputePmeMgr::idx_recvChargeGridReady_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputePmeMgr::reg_recvChargeGridReady_void() {
  int epidx = CkRegisterEp("recvChargeGridReady()",
      reinterpret_cast<CkCallFnPtr>(_call_recvChargeGridReady_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_ComputePmeMgr::_call_recvChargeGridReady_void(void* impl_msg, void* impl_obj_void)
{
  ComputePmeMgr* impl_obj = static_cast<ComputePmeMgr*>(impl_obj_void);
  impl_obj->recvChargeGridReady();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_ComputePmeMgr::recvChargeGridReady_6_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendDataHelper(int impl_noname_2);
 */
void CProxy_ComputePmeMgr::sendDataHelper(int impl_noname_2, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_2;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::idx_sendDataHelper_marshall7(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_sendDataHelper_marshall7(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputePmeMgr::idx_sendDataHelper_marshall7(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputePmeMgr::sendDataHelper(int impl_noname_2, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int impl_noname_2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_2;
  }
  CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::idx_sendDataHelper_marshall7(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputePmeMgr::sendDataHelper(int impl_noname_2, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int impl_noname_2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_2;
  }
  CkSendMsgBranchGroup(CkIndex_ComputePmeMgr::idx_sendDataHelper_marshall7(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputePmeMgr::reg_sendDataHelper_marshall7() {
  int epidx = CkRegisterEp("sendDataHelper(int impl_noname_2)",
      reinterpret_cast<CkCallFnPtr>(_call_sendDataHelper_marshall7), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_sendDataHelper_marshall7);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_sendDataHelper_marshall7);

  return epidx;
}

void CkIndex_ComputePmeMgr::_call_sendDataHelper_marshall7(void* impl_msg, void* impl_obj_void)
{
  ComputePmeMgr* impl_obj = static_cast<ComputePmeMgr*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int impl_noname_2*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_2;
  implP|impl_noname_2;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->sendDataHelper(std::move(impl_noname_2.t));
}
int CkIndex_ComputePmeMgr::_callmarshall_sendDataHelper_marshall7(char* impl_buf, void* impl_obj_void) {
  ComputePmeMgr* impl_obj = static_cast<ComputePmeMgr*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int impl_noname_2*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_2;
  implP|impl_noname_2;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->sendDataHelper(std::move(impl_noname_2.t));
  return implP.size();
}
void CkIndex_ComputePmeMgr::_marshallmessagepup_sendDataHelper_marshall7(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int impl_noname_2*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_2;
  implP|impl_noname_2;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_2");
  implDestP|impl_noname_2;
}
PUPable_def(SINGLE_ARG(Closure_ComputePmeMgr::sendDataHelper_7_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendPencilsHelper(int impl_noname_3);
 */
void CProxy_ComputePmeMgr::sendPencilsHelper(int impl_noname_3, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_3
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_3;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_3;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::idx_sendPencilsHelper_marshall8(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_sendPencilsHelper_marshall8(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputePmeMgr::idx_sendPencilsHelper_marshall8(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputePmeMgr::sendPencilsHelper(int impl_noname_3, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int impl_noname_3
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_3;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_3;
  }
  CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::idx_sendPencilsHelper_marshall8(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputePmeMgr::sendPencilsHelper(int impl_noname_3, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int impl_noname_3
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_3;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_3;
  }
  CkSendMsgBranchGroup(CkIndex_ComputePmeMgr::idx_sendPencilsHelper_marshall8(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputePmeMgr::reg_sendPencilsHelper_marshall8() {
  int epidx = CkRegisterEp("sendPencilsHelper(int impl_noname_3)",
      reinterpret_cast<CkCallFnPtr>(_call_sendPencilsHelper_marshall8), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_sendPencilsHelper_marshall8);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_sendPencilsHelper_marshall8);

  return epidx;
}

void CkIndex_ComputePmeMgr::_call_sendPencilsHelper_marshall8(void* impl_msg, void* impl_obj_void)
{
  ComputePmeMgr* impl_obj = static_cast<ComputePmeMgr*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int impl_noname_3*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_3;
  implP|impl_noname_3;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->sendPencilsHelper(std::move(impl_noname_3.t));
}
int CkIndex_ComputePmeMgr::_callmarshall_sendPencilsHelper_marshall8(char* impl_buf, void* impl_obj_void) {
  ComputePmeMgr* impl_obj = static_cast<ComputePmeMgr*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int impl_noname_3*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_3;
  implP|impl_noname_3;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->sendPencilsHelper(std::move(impl_noname_3.t));
  return implP.size();
}
void CkIndex_ComputePmeMgr::_marshallmessagepup_sendPencilsHelper_marshall8(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int impl_noname_3*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_3;
  implP|impl_noname_3;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_3");
  implDestP|impl_noname_3;
}
PUPable_def(SINGLE_ARG(Closure_ComputePmeMgr::sendPencilsHelper_8_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvGrid(PmeGridMsg* impl_msg);
 */
void CProxy_ComputePmeMgr::recvGrid(PmeGridMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::idx_recvGrid_PmeGridMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_recvGrid_PmeGridMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputePmeMgr::idx_recvGrid_PmeGridMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputePmeMgr::recvGrid(PmeGridMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::idx_recvGrid_PmeGridMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputePmeMgr::recvGrid(PmeGridMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputePmeMgr::idx_recvGrid_PmeGridMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputePmeMgr::reg_recvGrid_PmeGridMsg() {
  int epidx = CkRegisterEp("recvGrid(PmeGridMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvGrid_PmeGridMsg), CMessage_PmeGridMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)PmeGridMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ComputePmeMgr::_call_recvGrid_PmeGridMsg(void* impl_msg, void* impl_obj_void)
{
  ComputePmeMgr* impl_obj = static_cast<ComputePmeMgr*>(impl_obj_void);
  impl_obj->recvGrid((PmeGridMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void gridCalc1();
 */
void CProxy_ComputePmeMgr::gridCalc1(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::idx_gridCalc1_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_gridCalc1_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputePmeMgr::idx_gridCalc1_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputePmeMgr::gridCalc1(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::idx_gridCalc1_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputePmeMgr::gridCalc1(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_ComputePmeMgr::idx_gridCalc1_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputePmeMgr::reg_gridCalc1_void() {
  int epidx = CkRegisterEp("gridCalc1()",
      reinterpret_cast<CkCallFnPtr>(_call_gridCalc1_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_ComputePmeMgr::_call_gridCalc1_void(void* impl_msg, void* impl_obj_void)
{
  ComputePmeMgr* impl_obj = static_cast<ComputePmeMgr*>(impl_obj_void);
  impl_obj->gridCalc1();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_ComputePmeMgr::gridCalc1_10_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendTransBarrier();
 */
void CProxy_ComputePmeMgr::sendTransBarrier(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::idx_sendTransBarrier_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_sendTransBarrier_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputePmeMgr::idx_sendTransBarrier_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputePmeMgr::sendTransBarrier(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::idx_sendTransBarrier_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputePmeMgr::sendTransBarrier(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_ComputePmeMgr::idx_sendTransBarrier_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputePmeMgr::reg_sendTransBarrier_void() {
  int epidx = CkRegisterEp("sendTransBarrier()",
      reinterpret_cast<CkCallFnPtr>(_call_sendTransBarrier_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_ComputePmeMgr::_call_sendTransBarrier_void(void* impl_msg, void* impl_obj_void)
{
  ComputePmeMgr* impl_obj = static_cast<ComputePmeMgr*>(impl_obj_void);
  impl_obj->sendTransBarrier();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_ComputePmeMgr::sendTransBarrier_11_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendTrans();
 */
void CProxy_ComputePmeMgr::sendTrans(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::idx_sendTrans_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_sendTrans_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputePmeMgr::idx_sendTrans_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputePmeMgr::sendTrans(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::idx_sendTrans_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputePmeMgr::sendTrans(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_ComputePmeMgr::idx_sendTrans_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputePmeMgr::reg_sendTrans_void() {
  int epidx = CkRegisterEp("sendTrans()",
      reinterpret_cast<CkCallFnPtr>(_call_sendTrans_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_ComputePmeMgr::_call_sendTrans_void(void* impl_msg, void* impl_obj_void)
{
  ComputePmeMgr* impl_obj = static_cast<ComputePmeMgr*>(impl_obj_void);
  impl_obj->sendTrans();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_ComputePmeMgr::sendTrans_12_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvSharedTrans(PmeSharedTransMsg* impl_msg);
 */
void CProxy_ComputePmeMgr::recvSharedTrans(PmeSharedTransMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::idx_recvSharedTrans_PmeSharedTransMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_recvSharedTrans_PmeSharedTransMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputePmeMgr::idx_recvSharedTrans_PmeSharedTransMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputePmeMgr::recvSharedTrans(PmeSharedTransMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::idx_recvSharedTrans_PmeSharedTransMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputePmeMgr::recvSharedTrans(PmeSharedTransMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputePmeMgr::idx_recvSharedTrans_PmeSharedTransMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputePmeMgr::reg_recvSharedTrans_PmeSharedTransMsg() {
  int epidx = CkRegisterEp("recvSharedTrans(PmeSharedTransMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvSharedTrans_PmeSharedTransMsg), CMessage_PmeSharedTransMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)PmeSharedTransMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ComputePmeMgr::_call_recvSharedTrans_PmeSharedTransMsg(void* impl_msg, void* impl_obj_void)
{
  ComputePmeMgr* impl_obj = static_cast<ComputePmeMgr*>(impl_obj_void);
  impl_obj->recvSharedTrans((PmeSharedTransMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvTrans(PmeTransMsg* impl_msg);
 */
void CProxy_ComputePmeMgr::recvTrans(PmeTransMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::idx_recvTrans_PmeTransMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_recvTrans_PmeTransMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputePmeMgr::idx_recvTrans_PmeTransMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputePmeMgr::recvTrans(PmeTransMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::idx_recvTrans_PmeTransMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputePmeMgr::recvTrans(PmeTransMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputePmeMgr::idx_recvTrans_PmeTransMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputePmeMgr::reg_recvTrans_PmeTransMsg() {
  int epidx = CkRegisterEp("recvTrans(PmeTransMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvTrans_PmeTransMsg), CMessage_PmeTransMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)PmeTransMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ComputePmeMgr::_call_recvTrans_PmeTransMsg(void* impl_msg, void* impl_obj_void)
{
  ComputePmeMgr* impl_obj = static_cast<ComputePmeMgr*>(impl_obj_void);
  impl_obj->recvTrans((PmeTransMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void gridCalc2();
 */
void CProxy_ComputePmeMgr::gridCalc2(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::idx_gridCalc2_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_gridCalc2_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputePmeMgr::idx_gridCalc2_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputePmeMgr::gridCalc2(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::idx_gridCalc2_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputePmeMgr::gridCalc2(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_ComputePmeMgr::idx_gridCalc2_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputePmeMgr::reg_gridCalc2_void() {
  int epidx = CkRegisterEp("gridCalc2()",
      reinterpret_cast<CkCallFnPtr>(_call_gridCalc2_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_ComputePmeMgr::_call_gridCalc2_void(void* impl_msg, void* impl_obj_void)
{
  ComputePmeMgr* impl_obj = static_cast<ComputePmeMgr*>(impl_obj_void);
  impl_obj->gridCalc2();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_ComputePmeMgr::gridCalc2_15_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void gridCalc2R();
 */
void CProxy_ComputePmeMgr::gridCalc2R(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::idx_gridCalc2R_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_gridCalc2R_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputePmeMgr::idx_gridCalc2R_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputePmeMgr::gridCalc2R(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::idx_gridCalc2R_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputePmeMgr::gridCalc2R(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_ComputePmeMgr::idx_gridCalc2R_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputePmeMgr::reg_gridCalc2R_void() {
  int epidx = CkRegisterEp("gridCalc2R()",
      reinterpret_cast<CkCallFnPtr>(_call_gridCalc2R_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_ComputePmeMgr::_call_gridCalc2R_void(void* impl_msg, void* impl_obj_void)
{
  ComputePmeMgr* impl_obj = static_cast<ComputePmeMgr*>(impl_obj_void);
  impl_obj->gridCalc2R();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_ComputePmeMgr::gridCalc2R_16_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendUntrans();
 */
void CProxy_ComputePmeMgr::sendUntrans(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::idx_sendUntrans_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_sendUntrans_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputePmeMgr::idx_sendUntrans_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputePmeMgr::sendUntrans(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::idx_sendUntrans_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputePmeMgr::sendUntrans(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_ComputePmeMgr::idx_sendUntrans_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputePmeMgr::reg_sendUntrans_void() {
  int epidx = CkRegisterEp("sendUntrans()",
      reinterpret_cast<CkCallFnPtr>(_call_sendUntrans_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_ComputePmeMgr::_call_sendUntrans_void(void* impl_msg, void* impl_obj_void)
{
  ComputePmeMgr* impl_obj = static_cast<ComputePmeMgr*>(impl_obj_void);
  impl_obj->sendUntrans();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_ComputePmeMgr::sendUntrans_17_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvSharedUntrans(PmeSharedUntransMsg* impl_msg);
 */
void CProxy_ComputePmeMgr::recvSharedUntrans(PmeSharedUntransMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::idx_recvSharedUntrans_PmeSharedUntransMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_recvSharedUntrans_PmeSharedUntransMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputePmeMgr::idx_recvSharedUntrans_PmeSharedUntransMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputePmeMgr::recvSharedUntrans(PmeSharedUntransMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::idx_recvSharedUntrans_PmeSharedUntransMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputePmeMgr::recvSharedUntrans(PmeSharedUntransMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputePmeMgr::idx_recvSharedUntrans_PmeSharedUntransMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputePmeMgr::reg_recvSharedUntrans_PmeSharedUntransMsg() {
  int epidx = CkRegisterEp("recvSharedUntrans(PmeSharedUntransMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvSharedUntrans_PmeSharedUntransMsg), CMessage_PmeSharedUntransMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)PmeSharedUntransMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ComputePmeMgr::_call_recvSharedUntrans_PmeSharedUntransMsg(void* impl_msg, void* impl_obj_void)
{
  ComputePmeMgr* impl_obj = static_cast<ComputePmeMgr*>(impl_obj_void);
  impl_obj->recvSharedUntrans((PmeSharedUntransMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvUntrans(PmeUntransMsg* impl_msg);
 */
void CProxy_ComputePmeMgr::recvUntrans(PmeUntransMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::idx_recvUntrans_PmeUntransMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_recvUntrans_PmeUntransMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputePmeMgr::idx_recvUntrans_PmeUntransMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputePmeMgr::recvUntrans(PmeUntransMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::idx_recvUntrans_PmeUntransMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputePmeMgr::recvUntrans(PmeUntransMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputePmeMgr::idx_recvUntrans_PmeUntransMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputePmeMgr::reg_recvUntrans_PmeUntransMsg() {
  int epidx = CkRegisterEp("recvUntrans(PmeUntransMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvUntrans_PmeUntransMsg), CMessage_PmeUntransMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)PmeUntransMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ComputePmeMgr::_call_recvUntrans_PmeUntransMsg(void* impl_msg, void* impl_obj_void)
{
  ComputePmeMgr* impl_obj = static_cast<ComputePmeMgr*>(impl_obj_void);
  impl_obj->recvUntrans((PmeUntransMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void gridCalc3();
 */
void CProxy_ComputePmeMgr::gridCalc3(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::idx_gridCalc3_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_gridCalc3_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputePmeMgr::idx_gridCalc3_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputePmeMgr::gridCalc3(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::idx_gridCalc3_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputePmeMgr::gridCalc3(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_ComputePmeMgr::idx_gridCalc3_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputePmeMgr::reg_gridCalc3_void() {
  int epidx = CkRegisterEp("gridCalc3()",
      reinterpret_cast<CkCallFnPtr>(_call_gridCalc3_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_ComputePmeMgr::_call_gridCalc3_void(void* impl_msg, void* impl_obj_void)
{
  ComputePmeMgr* impl_obj = static_cast<ComputePmeMgr*>(impl_obj_void);
  impl_obj->gridCalc3();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_ComputePmeMgr::gridCalc3_20_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendUngrid();
 */
void CProxy_ComputePmeMgr::sendUngrid(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::idx_sendUngrid_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_sendUngrid_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputePmeMgr::idx_sendUngrid_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputePmeMgr::sendUngrid(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::idx_sendUngrid_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputePmeMgr::sendUngrid(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_ComputePmeMgr::idx_sendUngrid_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputePmeMgr::reg_sendUngrid_void() {
  int epidx = CkRegisterEp("sendUngrid()",
      reinterpret_cast<CkCallFnPtr>(_call_sendUngrid_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_ComputePmeMgr::_call_sendUngrid_void(void* impl_msg, void* impl_obj_void)
{
  ComputePmeMgr* impl_obj = static_cast<ComputePmeMgr*>(impl_obj_void);
  impl_obj->sendUngrid();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_ComputePmeMgr::sendUngrid_21_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvUngrid(PmeGridMsg* impl_msg);
 */
void CProxy_ComputePmeMgr::recvUngrid(PmeGridMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::idx_recvUngrid_PmeGridMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_recvUngrid_PmeGridMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputePmeMgr::idx_recvUngrid_PmeGridMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputePmeMgr::recvUngrid(PmeGridMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::idx_recvUngrid_PmeGridMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputePmeMgr::recvUngrid(PmeGridMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputePmeMgr::idx_recvUngrid_PmeGridMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputePmeMgr::reg_recvUngrid_PmeGridMsg() {
  int epidx = CkRegisterEp("recvUngrid(PmeGridMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvUngrid_PmeGridMsg), CMessage_PmeGridMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)PmeGridMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ComputePmeMgr::_call_recvUngrid_PmeGridMsg(void* impl_msg, void* impl_obj_void)
{
  ComputePmeMgr* impl_obj = static_cast<ComputePmeMgr*>(impl_obj_void);
  impl_obj->recvUngrid((PmeGridMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvAck(PmeAckMsg* impl_msg);
 */
void CProxy_ComputePmeMgr::recvAck(PmeAckMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::idx_recvAck_PmeAckMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_recvAck_PmeAckMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputePmeMgr::idx_recvAck_PmeAckMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputePmeMgr::recvAck(PmeAckMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::idx_recvAck_PmeAckMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputePmeMgr::recvAck(PmeAckMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputePmeMgr::idx_recvAck_PmeAckMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputePmeMgr::reg_recvAck_PmeAckMsg() {
  int epidx = CkRegisterEp("recvAck(PmeAckMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvAck_PmeAckMsg), CMessage_PmeAckMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)PmeAckMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ComputePmeMgr::_call_recvAck_PmeAckMsg(void* impl_msg, void* impl_obj_void)
{
  ComputePmeMgr* impl_obj = static_cast<ComputePmeMgr*>(impl_obj_void);
  impl_obj->recvAck((PmeAckMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ungridCalc();
 */
void CProxy_ComputePmeMgr::ungridCalc(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::idx_ungridCalc_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_ungridCalc_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputePmeMgr::idx_ungridCalc_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputePmeMgr::ungridCalc(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::idx_ungridCalc_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputePmeMgr::ungridCalc(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_ComputePmeMgr::idx_ungridCalc_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputePmeMgr::reg_ungridCalc_void() {
  int epidx = CkRegisterEp("ungridCalc()",
      reinterpret_cast<CkCallFnPtr>(_call_ungridCalc_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_ComputePmeMgr::_call_ungridCalc_void(void* impl_msg, void* impl_obj_void)
{
  ComputePmeMgr* impl_obj = static_cast<ComputePmeMgr*>(impl_obj_void);
  impl_obj->ungridCalc();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_ComputePmeMgr::ungridCalc_24_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void pollForcesReady();
 */
void CProxy_ComputePmeMgr::pollForcesReady(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::idx_pollForcesReady_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_pollForcesReady_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputePmeMgr::idx_pollForcesReady_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputePmeMgr::pollForcesReady(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::idx_pollForcesReady_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputePmeMgr::pollForcesReady(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_ComputePmeMgr::idx_pollForcesReady_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputePmeMgr::reg_pollForcesReady_void() {
  int epidx = CkRegisterEp("pollForcesReady()",
      reinterpret_cast<CkCallFnPtr>(_call_pollForcesReady_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_ComputePmeMgr::_call_pollForcesReady_void(void* impl_msg, void* impl_obj_void)
{
  ComputePmeMgr* impl_obj = static_cast<ComputePmeMgr*>(impl_obj_void);
  impl_obj->pollForcesReady();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_ComputePmeMgr::pollForcesReady_25_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvRecipEvir(PmeEvirMsg* impl_msg);
 */
void CProxy_ComputePmeMgr::recvRecipEvir(PmeEvirMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::idx_recvRecipEvir_PmeEvirMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_recvRecipEvir_PmeEvirMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputePmeMgr::idx_recvRecipEvir_PmeEvirMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputePmeMgr::recvRecipEvir(PmeEvirMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::idx_recvRecipEvir_PmeEvirMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputePmeMgr::recvRecipEvir(PmeEvirMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputePmeMgr::idx_recvRecipEvir_PmeEvirMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputePmeMgr::reg_recvRecipEvir_PmeEvirMsg() {
  int epidx = CkRegisterEp("recvRecipEvir(PmeEvirMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvRecipEvir_PmeEvirMsg), CMessage_PmeEvirMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)PmeEvirMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ComputePmeMgr::_call_recvRecipEvir_PmeEvirMsg(void* impl_msg, void* impl_obj_void)
{
  ComputePmeMgr* impl_obj = static_cast<ComputePmeMgr*>(impl_obj_void);
  impl_obj->recvRecipEvir((PmeEvirMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void addRecipEvirClient();
 */
void CProxy_ComputePmeMgr::addRecipEvirClient(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::idx_addRecipEvirClient_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_addRecipEvirClient_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputePmeMgr::idx_addRecipEvirClient_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputePmeMgr::addRecipEvirClient(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::idx_addRecipEvirClient_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputePmeMgr::addRecipEvirClient(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_ComputePmeMgr::idx_addRecipEvirClient_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputePmeMgr::reg_addRecipEvirClient_void() {
  int epidx = CkRegisterEp("addRecipEvirClient()",
      reinterpret_cast<CkCallFnPtr>(_call_addRecipEvirClient_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_ComputePmeMgr::_call_addRecipEvirClient_void(void* impl_msg, void* impl_obj_void)
{
  ComputePmeMgr* impl_obj = static_cast<ComputePmeMgr*>(impl_obj_void);
  impl_obj->addRecipEvirClient();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_ComputePmeMgr::addRecipEvirClient_27_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvArrays(const CProxy_PmeXPencil &impl_noname_4, const CProxy_PmeYPencil &impl_noname_5, const CProxy_PmeZPencil &impl_noname_6);
 */
void CProxy_ComputePmeMgr::recvArrays(const CProxy_PmeXPencil &impl_noname_4, const CProxy_PmeYPencil &impl_noname_5, const CProxy_PmeZPencil &impl_noname_6, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CProxy_PmeXPencil &impl_noname_4, const CProxy_PmeYPencil &impl_noname_5, const CProxy_PmeZPencil &impl_noname_6
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_PmeXPencil>::type>::type &)impl_noname_4;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_PmeYPencil>::type>::type &)impl_noname_5;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_PmeZPencil>::type>::type &)impl_noname_6;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_PmeXPencil>::type>::type &)impl_noname_4;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_PmeYPencil>::type>::type &)impl_noname_5;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_PmeZPencil>::type>::type &)impl_noname_6;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputePmeMgr::idx_recvArrays_marshall28(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_recvArrays_marshall28(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputePmeMgr::idx_recvArrays_marshall28(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputePmeMgr::recvArrays(const CProxy_PmeXPencil &impl_noname_4, const CProxy_PmeYPencil &impl_noname_5, const CProxy_PmeZPencil &impl_noname_6, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CProxy_PmeXPencil &impl_noname_4, const CProxy_PmeYPencil &impl_noname_5, const CProxy_PmeZPencil &impl_noname_6
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_PmeXPencil>::type>::type &)impl_noname_4;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_PmeYPencil>::type>::type &)impl_noname_5;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_PmeZPencil>::type>::type &)impl_noname_6;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_PmeXPencil>::type>::type &)impl_noname_4;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_PmeYPencil>::type>::type &)impl_noname_5;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_PmeZPencil>::type>::type &)impl_noname_6;
  }
  CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::idx_recvArrays_marshall28(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputePmeMgr::recvArrays(const CProxy_PmeXPencil &impl_noname_4, const CProxy_PmeYPencil &impl_noname_5, const CProxy_PmeZPencil &impl_noname_6, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CProxy_PmeXPencil &impl_noname_4, const CProxy_PmeYPencil &impl_noname_5, const CProxy_PmeZPencil &impl_noname_6
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_PmeXPencil>::type>::type &)impl_noname_4;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_PmeYPencil>::type>::type &)impl_noname_5;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_PmeZPencil>::type>::type &)impl_noname_6;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_PmeXPencil>::type>::type &)impl_noname_4;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_PmeYPencil>::type>::type &)impl_noname_5;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_PmeZPencil>::type>::type &)impl_noname_6;
  }
  CkSendMsgBranchGroup(CkIndex_ComputePmeMgr::idx_recvArrays_marshall28(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputePmeMgr::reg_recvArrays_marshall28() {
  int epidx = CkRegisterEp("recvArrays(const CProxy_PmeXPencil &impl_noname_4, const CProxy_PmeYPencil &impl_noname_5, const CProxy_PmeZPencil &impl_noname_6)",
      reinterpret_cast<CkCallFnPtr>(_call_recvArrays_marshall28), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_recvArrays_marshall28);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_recvArrays_marshall28);

  return epidx;
}

void CkIndex_ComputePmeMgr::_call_recvArrays_marshall28(void* impl_msg, void* impl_obj_void)
{
  ComputePmeMgr* impl_obj = static_cast<ComputePmeMgr*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CProxy_PmeXPencil &impl_noname_4, const CProxy_PmeYPencil &impl_noname_5, const CProxy_PmeZPencil &impl_noname_6*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CProxy_PmeXPencil> impl_noname_4;
  implP|impl_noname_4;
  PUP::detail::TemporaryObjectHolder<CProxy_PmeYPencil> impl_noname_5;
  implP|impl_noname_5;
  PUP::detail::TemporaryObjectHolder<CProxy_PmeZPencil> impl_noname_6;
  implP|impl_noname_6;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->recvArrays(std::move(impl_noname_4.t), std::move(impl_noname_5.t), std::move(impl_noname_6.t));
}
int CkIndex_ComputePmeMgr::_callmarshall_recvArrays_marshall28(char* impl_buf, void* impl_obj_void) {
  ComputePmeMgr* impl_obj = static_cast<ComputePmeMgr*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CProxy_PmeXPencil &impl_noname_4, const CProxy_PmeYPencil &impl_noname_5, const CProxy_PmeZPencil &impl_noname_6*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CProxy_PmeXPencil> impl_noname_4;
  implP|impl_noname_4;
  PUP::detail::TemporaryObjectHolder<CProxy_PmeYPencil> impl_noname_5;
  implP|impl_noname_5;
  PUP::detail::TemporaryObjectHolder<CProxy_PmeZPencil> impl_noname_6;
  implP|impl_noname_6;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->recvArrays(std::move(impl_noname_4.t), std::move(impl_noname_5.t), std::move(impl_noname_6.t));
  return implP.size();
}
void CkIndex_ComputePmeMgr::_marshallmessagepup_recvArrays_marshall28(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CProxy_PmeXPencil &impl_noname_4, const CProxy_PmeYPencil &impl_noname_5, const CProxy_PmeZPencil &impl_noname_6*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CProxy_PmeXPencil> impl_noname_4;
  implP|impl_noname_4;
  PUP::detail::TemporaryObjectHolder<CProxy_PmeYPencil> impl_noname_5;
  implP|impl_noname_5;
  PUP::detail::TemporaryObjectHolder<CProxy_PmeZPencil> impl_noname_6;
  implP|impl_noname_6;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_4");
  implDestP|impl_noname_4;
  if (implDestP.hasComments()) implDestP.comment("impl_noname_5");
  implDestP|impl_noname_5;
  if (implDestP.hasComments()) implDestP.comment("impl_noname_6");
  implDestP|impl_noname_6;
}
PUPable_def(SINGLE_ARG(Closure_ComputePmeMgr::recvArrays_28_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ComputePmeMgr();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initialize(CkQdMsg* impl_msg);
 */
void CProxySection_ComputePmeMgr::initialize(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_initialize_CkQdMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::idx_initialize_CkQdMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initialize_pencils(CkQdMsg* impl_msg);
 */
void CProxySection_ComputePmeMgr::initialize_pencils(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_initialize_pencils_CkQdMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::idx_initialize_pencils_CkQdMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void activate_pencils(CkQdMsg* impl_msg);
 */
void CProxySection_ComputePmeMgr::activate_pencils(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_activate_pencils_CkQdMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::idx_activate_pencils_CkQdMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void pollChargeGridReady();
 */
void CProxySection_ComputePmeMgr::pollChargeGridReady(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_pollChargeGridReady_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::idx_pollChargeGridReady_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvChargeGridReady();
 */
void CProxySection_ComputePmeMgr::recvChargeGridReady(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_recvChargeGridReady_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::idx_recvChargeGridReady_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendDataHelper(int impl_noname_2);
 */
void CProxySection_ComputePmeMgr::sendDataHelper(int impl_noname_2, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_2;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_sendDataHelper_marshall7(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::idx_sendDataHelper_marshall7(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendPencilsHelper(int impl_noname_3);
 */
void CProxySection_ComputePmeMgr::sendPencilsHelper(int impl_noname_3, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_3
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_3;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_3;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_sendPencilsHelper_marshall8(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::idx_sendPencilsHelper_marshall8(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvGrid(PmeGridMsg* impl_msg);
 */
void CProxySection_ComputePmeMgr::recvGrid(PmeGridMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_recvGrid_PmeGridMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::idx_recvGrid_PmeGridMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void gridCalc1();
 */
void CProxySection_ComputePmeMgr::gridCalc1(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_gridCalc1_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::idx_gridCalc1_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendTransBarrier();
 */
void CProxySection_ComputePmeMgr::sendTransBarrier(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_sendTransBarrier_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::idx_sendTransBarrier_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendTrans();
 */
void CProxySection_ComputePmeMgr::sendTrans(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_sendTrans_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::idx_sendTrans_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvSharedTrans(PmeSharedTransMsg* impl_msg);
 */
void CProxySection_ComputePmeMgr::recvSharedTrans(PmeSharedTransMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_recvSharedTrans_PmeSharedTransMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::idx_recvSharedTrans_PmeSharedTransMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvTrans(PmeTransMsg* impl_msg);
 */
void CProxySection_ComputePmeMgr::recvTrans(PmeTransMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_recvTrans_PmeTransMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::idx_recvTrans_PmeTransMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void gridCalc2();
 */
void CProxySection_ComputePmeMgr::gridCalc2(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_gridCalc2_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::idx_gridCalc2_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void gridCalc2R();
 */
void CProxySection_ComputePmeMgr::gridCalc2R(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_gridCalc2R_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::idx_gridCalc2R_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendUntrans();
 */
void CProxySection_ComputePmeMgr::sendUntrans(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_sendUntrans_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::idx_sendUntrans_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvSharedUntrans(PmeSharedUntransMsg* impl_msg);
 */
void CProxySection_ComputePmeMgr::recvSharedUntrans(PmeSharedUntransMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_recvSharedUntrans_PmeSharedUntransMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::idx_recvSharedUntrans_PmeSharedUntransMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvUntrans(PmeUntransMsg* impl_msg);
 */
void CProxySection_ComputePmeMgr::recvUntrans(PmeUntransMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_recvUntrans_PmeUntransMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::idx_recvUntrans_PmeUntransMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void gridCalc3();
 */
void CProxySection_ComputePmeMgr::gridCalc3(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_gridCalc3_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::idx_gridCalc3_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendUngrid();
 */
void CProxySection_ComputePmeMgr::sendUngrid(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_sendUngrid_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::idx_sendUngrid_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvUngrid(PmeGridMsg* impl_msg);
 */
void CProxySection_ComputePmeMgr::recvUngrid(PmeGridMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_recvUngrid_PmeGridMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::idx_recvUngrid_PmeGridMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvAck(PmeAckMsg* impl_msg);
 */
void CProxySection_ComputePmeMgr::recvAck(PmeAckMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_recvAck_PmeAckMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::idx_recvAck_PmeAckMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ungridCalc();
 */
void CProxySection_ComputePmeMgr::ungridCalc(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_ungridCalc_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::idx_ungridCalc_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void pollForcesReady();
 */
void CProxySection_ComputePmeMgr::pollForcesReady(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_pollForcesReady_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::idx_pollForcesReady_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvRecipEvir(PmeEvirMsg* impl_msg);
 */
void CProxySection_ComputePmeMgr::recvRecipEvir(PmeEvirMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_recvRecipEvir_PmeEvirMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::idx_recvRecipEvir_PmeEvirMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void addRecipEvirClient();
 */
void CProxySection_ComputePmeMgr::addRecipEvirClient(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_addRecipEvirClient_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::idx_addRecipEvirClient_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvArrays(const CProxy_PmeXPencil &impl_noname_4, const CProxy_PmeYPencil &impl_noname_5, const CProxy_PmeZPencil &impl_noname_6);
 */
void CProxySection_ComputePmeMgr::recvArrays(const CProxy_PmeXPencil &impl_noname_4, const CProxy_PmeYPencil &impl_noname_5, const CProxy_PmeZPencil &impl_noname_6, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CProxy_PmeXPencil &impl_noname_4, const CProxy_PmeYPencil &impl_noname_5, const CProxy_PmeZPencil &impl_noname_6
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_PmeXPencil>::type>::type &)impl_noname_4;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_PmeYPencil>::type>::type &)impl_noname_5;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_PmeZPencil>::type>::type &)impl_noname_6;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_PmeXPencil>::type>::type &)impl_noname_4;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_PmeYPencil>::type>::type &)impl_noname_5;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_PmeZPencil>::type>::type &)impl_noname_6;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputePmeMgr::idx_recvArrays_marshall28(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputePmeMgr::idx_recvArrays_marshall28(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_ComputePmeMgr::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,ComputePmeMgr::isIrreducible());
  // REG: ComputePmeMgr();
  idx_ComputePmeMgr_void();
  CkRegisterDefaultCtor(__idx, idx_ComputePmeMgr_void());

  // REG: void initialize(CkQdMsg* impl_msg);
  idx_initialize_CkQdMsg();

  // REG: void initialize_pencils(CkQdMsg* impl_msg);
  idx_initialize_pencils_CkQdMsg();

  // REG: void activate_pencils(CkQdMsg* impl_msg);
  idx_activate_pencils_CkQdMsg();

  // REG: void pollChargeGridReady();
  idx_pollChargeGridReady_void();

  // REG: void recvChargeGridReady();
  idx_recvChargeGridReady_void();

  // REG: void sendDataHelper(int impl_noname_2);
  idx_sendDataHelper_marshall7();

  // REG: void sendPencilsHelper(int impl_noname_3);
  idx_sendPencilsHelper_marshall8();

  // REG: void recvGrid(PmeGridMsg* impl_msg);
  idx_recvGrid_PmeGridMsg();

  // REG: void gridCalc1();
  idx_gridCalc1_void();

  // REG: void sendTransBarrier();
  idx_sendTransBarrier_void();

  // REG: void sendTrans();
  idx_sendTrans_void();

  // REG: void recvSharedTrans(PmeSharedTransMsg* impl_msg);
  idx_recvSharedTrans_PmeSharedTransMsg();

  // REG: void recvTrans(PmeTransMsg* impl_msg);
  idx_recvTrans_PmeTransMsg();

  // REG: void gridCalc2();
  idx_gridCalc2_void();

  // REG: void gridCalc2R();
  idx_gridCalc2R_void();

  // REG: void sendUntrans();
  idx_sendUntrans_void();

  // REG: void recvSharedUntrans(PmeSharedUntransMsg* impl_msg);
  idx_recvSharedUntrans_PmeSharedUntransMsg();

  // REG: void recvUntrans(PmeUntransMsg* impl_msg);
  idx_recvUntrans_PmeUntransMsg();

  // REG: void gridCalc3();
  idx_gridCalc3_void();

  // REG: void sendUngrid();
  idx_sendUngrid_void();

  // REG: void recvUngrid(PmeGridMsg* impl_msg);
  idx_recvUngrid_PmeGridMsg();

  // REG: void recvAck(PmeAckMsg* impl_msg);
  idx_recvAck_PmeAckMsg();

  // REG: void ungridCalc();
  idx_ungridCalc_void();

  // REG: void pollForcesReady();
  idx_pollForcesReady_void();

  // REG: void recvRecipEvir(PmeEvirMsg* impl_msg);
  idx_recvRecipEvir_PmeEvirMsg();

  // REG: void addRecipEvirClient();
  idx_addRecipEvirClient_void();

  // REG: void recvArrays(const CProxy_PmeXPencil &impl_noname_4, const CProxy_PmeYPencil &impl_noname_5, const CProxy_PmeZPencil &impl_noname_6);
  idx_recvArrays_marshall28();

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerComputePmeMgr(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: message PmeGridMsg{
int zlist[];
char fgrid[];
float qgrid[];
}
;
*/
CMessage_PmeGridMsg::__register("PmeGridMsg", sizeof(PmeGridMsg),(CkPackFnPtr) PmeGridMsg::pack,(CkUnpackFnPtr) PmeGridMsg::unpack);

/* REG: message PmeTransMsg{
float qgrid[];
}
;
*/
CMessage_PmeTransMsg::__register("PmeTransMsg", sizeof(PmeTransMsg),(CkPackFnPtr) PmeTransMsg::pack,(CkUnpackFnPtr) PmeTransMsg::unpack);

/* REG: message PmeSharedTransMsg;
*/
CMessage_PmeSharedTransMsg::__register("PmeSharedTransMsg", sizeof(PmeSharedTransMsg),(CkPackFnPtr) PmeSharedTransMsg::pack,(CkUnpackFnPtr) PmeSharedTransMsg::unpack);

/* REG: message PmeUntransMsg{
float qgrid[];
}
;
*/
CMessage_PmeUntransMsg::__register("PmeUntransMsg", sizeof(PmeUntransMsg),(CkPackFnPtr) PmeUntransMsg::pack,(CkUnpackFnPtr) PmeUntransMsg::unpack);

/* REG: message PmeSharedUntransMsg;
*/
CMessage_PmeSharedUntransMsg::__register("PmeSharedUntransMsg", sizeof(PmeSharedUntransMsg),(CkPackFnPtr) PmeSharedUntransMsg::pack,(CkUnpackFnPtr) PmeSharedUntransMsg::unpack);

/* REG: group PmePencilMap: CkArrayMap{
PmePencilMap(int i_a, int i_b, int n_b, int n, const int *d);
};
*/
  CkIndex_PmePencilMap::__register("PmePencilMap", sizeof(PmePencilMap));

/* REG: message PmePencilInitMsg;
*/
CMessage_PmePencilInitMsg::__register("PmePencilInitMsg", sizeof(PmePencilInitMsg),(CkPackFnPtr) PmePencilInitMsg::pack,(CkUnpackFnPtr) PmePencilInitMsg::unpack);

/* REG: message PmeAckMsg;
*/
CMessage_PmeAckMsg::__register("PmeAckMsg", sizeof(PmeAckMsg),(CkPackFnPtr) PmeAckMsg::pack,(CkUnpackFnPtr) PmeAckMsg::unpack);

/* REG: message PmeEvirMsg{
PmeReduction evir[];
}
;
*/
CMessage_PmeEvirMsg::__register("PmeEvirMsg", sizeof(PmeEvirMsg),(CkPackFnPtr) PmeEvirMsg::pack,(CkUnpackFnPtr) PmeEvirMsg::unpack);

  _registerInitCall(Pme_init,0);

/* REG: array PmeZPencil: ArrayElement{
PmeZPencil();
void recvGrid(PmeGridMsg* impl_msg);
void recvUntrans(PmeUntransMsg* impl_msg);
void recvAck(PmeAckMsg* impl_msg);
void recvNodeAck(PmeAckMsg* impl_msg);
void dummyRecvGrid(int pe, int done);
void init(PmePencilInitMsg* impl_msg);
PmeZPencil(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_PmeZPencil::__register("PmeZPencil", sizeof(PmeZPencil));

/* REG: array PmeYPencil: ArrayElement{
PmeYPencil();
void recvTrans(PmeTransMsg* impl_msg);
void recvUntrans(PmeUntransMsg* impl_msg);
void recvAck(PmeAckMsg* impl_msg);
void recvNodeAck(PmeAckMsg* impl_msg);
void init(PmePencilInitMsg* impl_msg);
PmeYPencil(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_PmeYPencil::__register("PmeYPencil", sizeof(PmeYPencil));

/* REG: array PmeXPencil: ArrayElement{
PmeXPencil();
void recvTrans(PmeTransMsg* impl_msg);
void init(PmePencilInitMsg* impl_msg);
PmeXPencil(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_PmeXPencil::__register("PmeXPencil", sizeof(PmeXPencil));

/* REG: nodegroup NodePmeMgr: NodeGroup{
NodePmeMgr();
void recvPencilMapProxies(const CProxy_PmePencilMap &xm, const CProxy_PmePencilMap &ym, const CProxy_PmePencilMap &zm);
void recvTrans(PmeTransMsg* impl_msg);
void recvUntrans(PmeUntransMsg* impl_msg);
void sendDataHelper(int impl_noname_0);
void sendPencilsHelper(int impl_noname_1);
void recvUngrid(PmeGridMsg* impl_msg);
void recvZGrid(PmeGridMsg* impl_msg);
void recvXTrans(PmeTransMsg* impl_msg);
void recvYTrans(PmeTransMsg* impl_msg);
void recvYUntrans(PmeUntransMsg* impl_msg);
void recvZUntrans(PmeUntransMsg* impl_msg);
};
*/
  CkIndex_NodePmeMgr::__register("NodePmeMgr", sizeof(NodePmeMgr));

/* REG: group ComputePmeMgr: IrrGroup{
ComputePmeMgr();
void initialize(CkQdMsg* impl_msg);
void initialize_pencils(CkQdMsg* impl_msg);
void activate_pencils(CkQdMsg* impl_msg);
void pollChargeGridReady();
void recvChargeGridReady();
void sendDataHelper(int impl_noname_2);
void sendPencilsHelper(int impl_noname_3);
void recvGrid(PmeGridMsg* impl_msg);
void gridCalc1();
void sendTransBarrier();
void sendTrans();
void recvSharedTrans(PmeSharedTransMsg* impl_msg);
void recvTrans(PmeTransMsg* impl_msg);
void gridCalc2();
void gridCalc2R();
void sendUntrans();
void recvSharedUntrans(PmeSharedUntransMsg* impl_msg);
void recvUntrans(PmeUntransMsg* impl_msg);
void gridCalc3();
void sendUngrid();
void recvUngrid(PmeGridMsg* impl_msg);
void recvAck(PmeAckMsg* impl_msg);
void ungridCalc();
void pollForcesReady();
void recvRecipEvir(PmeEvirMsg* impl_msg);
void addRecipEvirClient();
void recvArrays(const CProxy_PmeXPencil &impl_noname_4, const CProxy_PmeYPencil &impl_noname_5, const CProxy_PmeZPencil &impl_noname_6);
};
*/
  CkIndex_ComputePmeMgr::__register("ComputePmeMgr", sizeof(ComputePmeMgr));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_PmePencilMap::virtual_pup(PUP::er &p) {
    recursive_pup<PmePencilMap>(dynamic_cast<PmePencilMap*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_PmeZPencil::virtual_pup(PUP::er &p) {
    recursive_pup<PmeZPencil>(dynamic_cast<PmeZPencil*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_PmeYPencil::virtual_pup(PUP::er &p) {
    recursive_pup<PmeYPencil>(dynamic_cast<PmeYPencil*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_PmeXPencil::virtual_pup(PUP::er &p) {
    recursive_pup<PmeXPencil>(dynamic_cast<PmeXPencil*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_NodePmeMgr::virtual_pup(PUP::er &p) {
    recursive_pup<NodePmeMgr>(dynamic_cast<NodePmeMgr*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_ComputePmeMgr::virtual_pup(PUP::er &p) {
    recursive_pup<ComputePmeMgr>(dynamic_cast<ComputePmeMgr*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
