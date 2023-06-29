




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

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ComputeQMMgr::procQMRes_10_closure : public SDAG::Closure {
      

      procQMRes_10_closure() {
        init();
      }
      procQMRes_10_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~procQMRes_10_closure() {
      }
      PUPable_decl(SINGLE_ARG(procQMRes_10_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ComputeQMMgr::recvQMResLoop_12_closure : public SDAG::Closure {
      

      recvQMResLoop_12_closure() {
        init();
      }
      recvQMResLoop_12_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~recvQMResLoop_12_closure() {
      }
      PUPable_decl(SINGLE_ARG(recvQMResLoop_12_closure));
    };
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: message QMCoordMsg{
ComputeQMAtom coord[];
int pcIndxs[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_QMCoordMsg::operator new(size_t s){
  return QMCoordMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_QMCoordMsg::operator new(size_t s, int* sz){
  return QMCoordMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_QMCoordMsg::operator new(size_t s, int* sz,const int pb){
  return QMCoordMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_QMCoordMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return QMCoordMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_QMCoordMsg::operator new(size_t s, int sz0, int sz1) {
  int sizes[2];
  sizes[0] = sz0;
  sizes[1] = sz1;
  return QMCoordMsg::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_QMCoordMsg::operator new(size_t s, int sz0, int sz1, const int p) {
  int sizes[2];
  sizes[0] = sz0;
  sizes[1] = sz1;
  return QMCoordMsg::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_QMCoordMsg::operator new(size_t s, int sz0, int sz1, const int p, const GroupDepNum groupDepNum) {
  int sizes[2];
  sizes[0] = sz0;
  sizes[1] = sz1;
  return QMCoordMsg::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_QMCoordMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(ComputeQMAtom)*sizes[0]);
  if(sizes==0)
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[1] + ALIGN_DEFAULT(sizeof(int)*sizes[1]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[2], pb, groupDepNum);
}
CMessage_QMCoordMsg::CMessage_QMCoordMsg() {
QMCoordMsg *newmsg = (QMCoordMsg *)this;
  newmsg->coord = (ComputeQMAtom *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
  newmsg->pcIndxs = (int *) ((char *)newmsg + CkpvAccess(_offsets)[1]);
}
void CMessage_QMCoordMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_QMCoordMsg::pack(QMCoordMsg *msg) {
  msg->coord = (ComputeQMAtom *) ((char *)msg->coord - (char *)msg);
  msg->pcIndxs = (int *) ((char *)msg->pcIndxs - (char *)msg);
  return (void *) msg;
}
QMCoordMsg* CMessage_QMCoordMsg::unpack(void* buf) {
  QMCoordMsg *msg = (QMCoordMsg *) buf;
  msg->coord = (ComputeQMAtom *) ((size_t)msg->coord + (char *)msg);
  msg->pcIndxs = (int *) ((size_t)msg->pcIndxs + (char *)msg);
  return msg;
}
int CMessage_QMCoordMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message QMPntChrgMsg{
ComputeQMPntChrg coord[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_QMPntChrgMsg::operator new(size_t s){
  return QMPntChrgMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_QMPntChrgMsg::operator new(size_t s, int* sz){
  return QMPntChrgMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_QMPntChrgMsg::operator new(size_t s, int* sz,const int pb){
  return QMPntChrgMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_QMPntChrgMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return QMPntChrgMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_QMPntChrgMsg::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return QMPntChrgMsg::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_QMPntChrgMsg::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return QMPntChrgMsg::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_QMPntChrgMsg::operator new(size_t s, int sz0, const int p, const GroupDepNum groupDepNum) {
  int sizes[1];
  sizes[0] = sz0;
  return QMPntChrgMsg::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_QMPntChrgMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(ComputeQMPntChrg)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb, groupDepNum);
}
CMessage_QMPntChrgMsg::CMessage_QMPntChrgMsg() {
QMPntChrgMsg *newmsg = (QMPntChrgMsg *)this;
  newmsg->coord = (ComputeQMPntChrg *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
void CMessage_QMPntChrgMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_QMPntChrgMsg::pack(QMPntChrgMsg *msg) {
  msg->coord = (ComputeQMPntChrg *) ((char *)msg->coord - (char *)msg);
  return (void *) msg;
}
QMPntChrgMsg* CMessage_QMPntChrgMsg::unpack(void* buf) {
  QMPntChrgMsg *msg = (QMPntChrgMsg *) buf;
  msg->coord = (ComputeQMPntChrg *) ((size_t)msg->coord + (char *)msg);
  return msg;
}
int CMessage_QMPntChrgMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message QMForceMsg{
QMForce force[];
LSSSubsDat lssDat[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_QMForceMsg::operator new(size_t s){
  return QMForceMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_QMForceMsg::operator new(size_t s, int* sz){
  return QMForceMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_QMForceMsg::operator new(size_t s, int* sz,const int pb){
  return QMForceMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_QMForceMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return QMForceMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_QMForceMsg::operator new(size_t s, int sz0, int sz1) {
  int sizes[2];
  sizes[0] = sz0;
  sizes[1] = sz1;
  return QMForceMsg::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_QMForceMsg::operator new(size_t s, int sz0, int sz1, const int p) {
  int sizes[2];
  sizes[0] = sz0;
  sizes[1] = sz1;
  return QMForceMsg::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_QMForceMsg::operator new(size_t s, int sz0, int sz1, const int p, const GroupDepNum groupDepNum) {
  int sizes[2];
  sizes[0] = sz0;
  sizes[1] = sz1;
  return QMForceMsg::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_QMForceMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(QMForce)*sizes[0]);
  if(sizes==0)
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[1] + ALIGN_DEFAULT(sizeof(LSSSubsDat)*sizes[1]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[2], pb, groupDepNum);
}
CMessage_QMForceMsg::CMessage_QMForceMsg() {
QMForceMsg *newmsg = (QMForceMsg *)this;
  newmsg->force = (QMForce *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
  newmsg->lssDat = (LSSSubsDat *) ((char *)newmsg + CkpvAccess(_offsets)[1]);
}
void CMessage_QMForceMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_QMForceMsg::pack(QMForceMsg *msg) {
  msg->force = (QMForce *) ((char *)msg->force - (char *)msg);
  msg->lssDat = (LSSSubsDat *) ((char *)msg->lssDat - (char *)msg);
  return (void *) msg;
}
QMForceMsg* CMessage_QMForceMsg::unpack(void* buf) {
  QMForceMsg *msg = (QMForceMsg *) buf;
  msg->force = (QMForce *) ((size_t)msg->force + (char *)msg);
  msg->lssDat = (LSSSubsDat *) ((size_t)msg->lssDat + (char *)msg);
  return msg;
}
int CMessage_QMForceMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message QMGrpResMsg{
QMForce force[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_QMGrpResMsg::operator new(size_t s){
  return QMGrpResMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_QMGrpResMsg::operator new(size_t s, int* sz){
  return QMGrpResMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_QMGrpResMsg::operator new(size_t s, int* sz,const int pb){
  return QMGrpResMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_QMGrpResMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return QMGrpResMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_QMGrpResMsg::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return QMGrpResMsg::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_QMGrpResMsg::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return QMGrpResMsg::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_QMGrpResMsg::operator new(size_t s, int sz0, const int p, const GroupDepNum groupDepNum) {
  int sizes[1];
  sizes[0] = sz0;
  return QMGrpResMsg::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_QMGrpResMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(QMForce)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb, groupDepNum);
}
CMessage_QMGrpResMsg::CMessage_QMGrpResMsg() {
QMGrpResMsg *newmsg = (QMGrpResMsg *)this;
  newmsg->force = (QMForce *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
void CMessage_QMGrpResMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_QMGrpResMsg::pack(QMGrpResMsg *msg) {
  msg->force = (QMForce *) ((char *)msg->force - (char *)msg);
  return (void *) msg;
}
QMGrpResMsg* CMessage_QMGrpResMsg::unpack(void* buf) {
  QMGrpResMsg *msg = (QMGrpResMsg *) buf;
  msg->force = (QMForce *) ((size_t)msg->force + (char *)msg);
  return msg;
}
int CMessage_QMGrpResMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message QMGrpCalcMsg{
QMAtomData data[];
char configLines[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_QMGrpCalcMsg::operator new(size_t s){
  return QMGrpCalcMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_QMGrpCalcMsg::operator new(size_t s, int* sz){
  return QMGrpCalcMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_QMGrpCalcMsg::operator new(size_t s, int* sz,const int pb){
  return QMGrpCalcMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_QMGrpCalcMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return QMGrpCalcMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_QMGrpCalcMsg::operator new(size_t s, int sz0, int sz1) {
  int sizes[2];
  sizes[0] = sz0;
  sizes[1] = sz1;
  return QMGrpCalcMsg::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_QMGrpCalcMsg::operator new(size_t s, int sz0, int sz1, const int p) {
  int sizes[2];
  sizes[0] = sz0;
  sizes[1] = sz1;
  return QMGrpCalcMsg::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_QMGrpCalcMsg::operator new(size_t s, int sz0, int sz1, const int p, const GroupDepNum groupDepNum) {
  int sizes[2];
  sizes[0] = sz0;
  sizes[1] = sz1;
  return QMGrpCalcMsg::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_QMGrpCalcMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(QMAtomData)*sizes[0]);
  if(sizes==0)
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[1] + ALIGN_DEFAULT(sizeof(char)*sizes[1]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[2], pb, groupDepNum);
}
CMessage_QMGrpCalcMsg::CMessage_QMGrpCalcMsg() {
QMGrpCalcMsg *newmsg = (QMGrpCalcMsg *)this;
  newmsg->data = (QMAtomData *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
  newmsg->configLines = (char *) ((char *)newmsg + CkpvAccess(_offsets)[1]);
}
void CMessage_QMGrpCalcMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_QMGrpCalcMsg::pack(QMGrpCalcMsg *msg) {
  msg->data = (QMAtomData *) ((char *)msg->data - (char *)msg);
  msg->configLines = (char *) ((char *)msg->configLines - (char *)msg);
  return (void *) msg;
}
QMGrpCalcMsg* CMessage_QMGrpCalcMsg::unpack(void* buf) {
  QMGrpCalcMsg *msg = (QMGrpCalcMsg *) buf;
  msg->data = (QMAtomData *) ((size_t)msg->data + (char *)msg);
  msg->configLines = (char *) ((size_t)msg->configLines + (char *)msg);
  return msg;
}
int CMessage_QMGrpCalcMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group ComputeQMMgr: IrrGroup{
ComputeQMMgr();
void recvPartQM(QMCoordMsg* impl_msg);
void recvFullQM(QMCoordMsg* impl_msg);
void recvPntChrg(QMPntChrgMsg* impl_msg);
void calcMOPAC(QMGrpCalcMsg* impl_msg);
void calcORCA(QMGrpCalcMsg* impl_msg);
void calcUSR(QMGrpCalcMsg* impl_msg);
void recvQMRes(QMGrpResMsg* impl_msg);
void storeQMRes(QMGrpResMsg* impl_msg);
void procQMRes();
void recvForce(QMForceMsg* impl_msg);
void recvQMResLoop();
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_ComputeQMMgr::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: ComputeQMMgr();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvPartQM(QMCoordMsg* impl_msg);
 */
void CProxyElement_ComputeQMMgr::recvPartQM(QMCoordMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeQMMgr::idx_recvPartQM_QMCoordMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeQMMgr::idx_recvPartQM_QMCoordMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputeQMMgr::idx_recvPartQM_QMCoordMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvFullQM(QMCoordMsg* impl_msg);
 */
void CProxyElement_ComputeQMMgr::recvFullQM(QMCoordMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeQMMgr::idx_recvFullQM_QMCoordMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeQMMgr::idx_recvFullQM_QMCoordMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputeQMMgr::idx_recvFullQM_QMCoordMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvPntChrg(QMPntChrgMsg* impl_msg);
 */
void CProxyElement_ComputeQMMgr::recvPntChrg(QMPntChrgMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeQMMgr::idx_recvPntChrg_QMPntChrgMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeQMMgr::idx_recvPntChrg_QMPntChrgMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputeQMMgr::idx_recvPntChrg_QMPntChrgMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void calcMOPAC(QMGrpCalcMsg* impl_msg);
 */
void CProxyElement_ComputeQMMgr::calcMOPAC(QMGrpCalcMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeQMMgr::idx_calcMOPAC_QMGrpCalcMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeQMMgr::idx_calcMOPAC_QMGrpCalcMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputeQMMgr::idx_calcMOPAC_QMGrpCalcMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void calcORCA(QMGrpCalcMsg* impl_msg);
 */
void CProxyElement_ComputeQMMgr::calcORCA(QMGrpCalcMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeQMMgr::idx_calcORCA_QMGrpCalcMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeQMMgr::idx_calcORCA_QMGrpCalcMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputeQMMgr::idx_calcORCA_QMGrpCalcMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void calcUSR(QMGrpCalcMsg* impl_msg);
 */
void CProxyElement_ComputeQMMgr::calcUSR(QMGrpCalcMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeQMMgr::idx_calcUSR_QMGrpCalcMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeQMMgr::idx_calcUSR_QMGrpCalcMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputeQMMgr::idx_calcUSR_QMGrpCalcMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvQMRes(QMGrpResMsg* impl_msg);
 */
void CProxyElement_ComputeQMMgr::recvQMRes(QMGrpResMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeQMMgr::idx_recvQMRes_QMGrpResMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeQMMgr::idx_recvQMRes_QMGrpResMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputeQMMgr::idx_recvQMRes_QMGrpResMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void storeQMRes(QMGrpResMsg* impl_msg);
 */
void CProxyElement_ComputeQMMgr::storeQMRes(QMGrpResMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeQMMgr::idx_storeQMRes_QMGrpResMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeQMMgr::idx_storeQMRes_QMGrpResMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputeQMMgr::idx_storeQMRes_QMGrpResMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void procQMRes();
 */
void CProxyElement_ComputeQMMgr::procQMRes(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeQMMgr::idx_procQMRes_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeQMMgr::idx_procQMRes_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputeQMMgr::idx_procQMRes_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvForce(QMForceMsg* impl_msg);
 */
void CProxyElement_ComputeQMMgr::recvForce(QMForceMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeQMMgr::idx_recvForce_QMForceMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeQMMgr::idx_recvForce_QMForceMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputeQMMgr::idx_recvForce_QMForceMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvQMResLoop();
 */
void CProxyElement_ComputeQMMgr::recvQMResLoop(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeQMMgr::idx_recvQMResLoop_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ComputeQMMgr::idx_recvQMResLoop_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ComputeQMMgr::idx_recvQMResLoop_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ComputeQMMgr();
 */
CkGroupID CProxy_ComputeQMMgr::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_ComputeQMMgr::__idx, CkIndex_ComputeQMMgr::idx_ComputeQMMgr_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_ComputeQMMgr::reg_ComputeQMMgr_void() {
  int epidx = CkRegisterEp("ComputeQMMgr()",
      reinterpret_cast<CkCallFnPtr>(_call_ComputeQMMgr_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_ComputeQMMgr::_call_ComputeQMMgr_void(void* impl_msg, void* impl_obj_void)
{
  ComputeQMMgr* impl_obj = static_cast<ComputeQMMgr*>(impl_obj_void);
  new (impl_obj_void) ComputeQMMgr();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvPartQM(QMCoordMsg* impl_msg);
 */
void CProxy_ComputeQMMgr::recvPartQM(QMCoordMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeQMMgr::idx_recvPartQM_QMCoordMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeQMMgr::idx_recvPartQM_QMCoordMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeQMMgr::idx_recvPartQM_QMCoordMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeQMMgr::recvPartQM(QMCoordMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputeQMMgr::idx_recvPartQM_QMCoordMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeQMMgr::recvPartQM(QMCoordMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputeQMMgr::idx_recvPartQM_QMCoordMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputeQMMgr::reg_recvPartQM_QMCoordMsg() {
  int epidx = CkRegisterEp("recvPartQM(QMCoordMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvPartQM_QMCoordMsg), CMessage_QMCoordMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)QMCoordMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ComputeQMMgr::_call_recvPartQM_QMCoordMsg(void* impl_msg, void* impl_obj_void)
{
  ComputeQMMgr* impl_obj = static_cast<ComputeQMMgr*>(impl_obj_void);
  impl_obj->recvPartQM((QMCoordMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvFullQM(QMCoordMsg* impl_msg);
 */
void CProxy_ComputeQMMgr::recvFullQM(QMCoordMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeQMMgr::idx_recvFullQM_QMCoordMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeQMMgr::idx_recvFullQM_QMCoordMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeQMMgr::idx_recvFullQM_QMCoordMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeQMMgr::recvFullQM(QMCoordMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputeQMMgr::idx_recvFullQM_QMCoordMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeQMMgr::recvFullQM(QMCoordMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputeQMMgr::idx_recvFullQM_QMCoordMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputeQMMgr::reg_recvFullQM_QMCoordMsg() {
  int epidx = CkRegisterEp("recvFullQM(QMCoordMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvFullQM_QMCoordMsg), CMessage_QMCoordMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)QMCoordMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ComputeQMMgr::_call_recvFullQM_QMCoordMsg(void* impl_msg, void* impl_obj_void)
{
  ComputeQMMgr* impl_obj = static_cast<ComputeQMMgr*>(impl_obj_void);
  impl_obj->recvFullQM((QMCoordMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvPntChrg(QMPntChrgMsg* impl_msg);
 */
void CProxy_ComputeQMMgr::recvPntChrg(QMPntChrgMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeQMMgr::idx_recvPntChrg_QMPntChrgMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeQMMgr::idx_recvPntChrg_QMPntChrgMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeQMMgr::idx_recvPntChrg_QMPntChrgMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeQMMgr::recvPntChrg(QMPntChrgMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputeQMMgr::idx_recvPntChrg_QMPntChrgMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeQMMgr::recvPntChrg(QMPntChrgMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputeQMMgr::idx_recvPntChrg_QMPntChrgMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputeQMMgr::reg_recvPntChrg_QMPntChrgMsg() {
  int epidx = CkRegisterEp("recvPntChrg(QMPntChrgMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvPntChrg_QMPntChrgMsg), CMessage_QMPntChrgMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)QMPntChrgMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ComputeQMMgr::_call_recvPntChrg_QMPntChrgMsg(void* impl_msg, void* impl_obj_void)
{
  ComputeQMMgr* impl_obj = static_cast<ComputeQMMgr*>(impl_obj_void);
  impl_obj->recvPntChrg((QMPntChrgMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void calcMOPAC(QMGrpCalcMsg* impl_msg);
 */
void CProxy_ComputeQMMgr::calcMOPAC(QMGrpCalcMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeQMMgr::idx_calcMOPAC_QMGrpCalcMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeQMMgr::idx_calcMOPAC_QMGrpCalcMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeQMMgr::idx_calcMOPAC_QMGrpCalcMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeQMMgr::calcMOPAC(QMGrpCalcMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputeQMMgr::idx_calcMOPAC_QMGrpCalcMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeQMMgr::calcMOPAC(QMGrpCalcMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputeQMMgr::idx_calcMOPAC_QMGrpCalcMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputeQMMgr::reg_calcMOPAC_QMGrpCalcMsg() {
  int epidx = CkRegisterEp("calcMOPAC(QMGrpCalcMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_calcMOPAC_QMGrpCalcMsg), CMessage_QMGrpCalcMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)QMGrpCalcMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ComputeQMMgr::_call_calcMOPAC_QMGrpCalcMsg(void* impl_msg, void* impl_obj_void)
{
  ComputeQMMgr* impl_obj = static_cast<ComputeQMMgr*>(impl_obj_void);
  impl_obj->calcMOPAC((QMGrpCalcMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void calcORCA(QMGrpCalcMsg* impl_msg);
 */
void CProxy_ComputeQMMgr::calcORCA(QMGrpCalcMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeQMMgr::idx_calcORCA_QMGrpCalcMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeQMMgr::idx_calcORCA_QMGrpCalcMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeQMMgr::idx_calcORCA_QMGrpCalcMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeQMMgr::calcORCA(QMGrpCalcMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputeQMMgr::idx_calcORCA_QMGrpCalcMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeQMMgr::calcORCA(QMGrpCalcMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputeQMMgr::idx_calcORCA_QMGrpCalcMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputeQMMgr::reg_calcORCA_QMGrpCalcMsg() {
  int epidx = CkRegisterEp("calcORCA(QMGrpCalcMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_calcORCA_QMGrpCalcMsg), CMessage_QMGrpCalcMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)QMGrpCalcMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ComputeQMMgr::_call_calcORCA_QMGrpCalcMsg(void* impl_msg, void* impl_obj_void)
{
  ComputeQMMgr* impl_obj = static_cast<ComputeQMMgr*>(impl_obj_void);
  impl_obj->calcORCA((QMGrpCalcMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void calcUSR(QMGrpCalcMsg* impl_msg);
 */
void CProxy_ComputeQMMgr::calcUSR(QMGrpCalcMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeQMMgr::idx_calcUSR_QMGrpCalcMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeQMMgr::idx_calcUSR_QMGrpCalcMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeQMMgr::idx_calcUSR_QMGrpCalcMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeQMMgr::calcUSR(QMGrpCalcMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputeQMMgr::idx_calcUSR_QMGrpCalcMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeQMMgr::calcUSR(QMGrpCalcMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputeQMMgr::idx_calcUSR_QMGrpCalcMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputeQMMgr::reg_calcUSR_QMGrpCalcMsg() {
  int epidx = CkRegisterEp("calcUSR(QMGrpCalcMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_calcUSR_QMGrpCalcMsg), CMessage_QMGrpCalcMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)QMGrpCalcMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ComputeQMMgr::_call_calcUSR_QMGrpCalcMsg(void* impl_msg, void* impl_obj_void)
{
  ComputeQMMgr* impl_obj = static_cast<ComputeQMMgr*>(impl_obj_void);
  impl_obj->calcUSR((QMGrpCalcMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvQMRes(QMGrpResMsg* impl_msg);
 */
void CProxy_ComputeQMMgr::recvQMRes(QMGrpResMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeQMMgr::idx_recvQMRes_QMGrpResMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeQMMgr::idx_recvQMRes_QMGrpResMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeQMMgr::idx_recvQMRes_QMGrpResMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeQMMgr::recvQMRes(QMGrpResMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputeQMMgr::idx_recvQMRes_QMGrpResMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeQMMgr::recvQMRes(QMGrpResMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputeQMMgr::idx_recvQMRes_QMGrpResMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputeQMMgr::reg_recvQMRes_QMGrpResMsg() {
  int epidx = CkRegisterEp("recvQMRes(QMGrpResMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvQMRes_QMGrpResMsg), CMessage_QMGrpResMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)QMGrpResMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ComputeQMMgr::_call_recvQMRes_QMGrpResMsg(void* impl_msg, void* impl_obj_void)
{
  ComputeQMMgr* impl_obj = static_cast<ComputeQMMgr*>(impl_obj_void);
  impl_obj->recvQMRes((QMGrpResMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void storeQMRes(QMGrpResMsg* impl_msg);
 */
void CProxy_ComputeQMMgr::storeQMRes(QMGrpResMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeQMMgr::idx_storeQMRes_QMGrpResMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeQMMgr::idx_storeQMRes_QMGrpResMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeQMMgr::idx_storeQMRes_QMGrpResMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeQMMgr::storeQMRes(QMGrpResMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputeQMMgr::idx_storeQMRes_QMGrpResMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeQMMgr::storeQMRes(QMGrpResMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputeQMMgr::idx_storeQMRes_QMGrpResMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputeQMMgr::reg_storeQMRes_QMGrpResMsg() {
  int epidx = CkRegisterEp("storeQMRes(QMGrpResMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_storeQMRes_QMGrpResMsg), CMessage_QMGrpResMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)QMGrpResMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ComputeQMMgr::_call_storeQMRes_QMGrpResMsg(void* impl_msg, void* impl_obj_void)
{
  ComputeQMMgr* impl_obj = static_cast<ComputeQMMgr*>(impl_obj_void);
  impl_obj->storeQMRes((QMGrpResMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void procQMRes();
 */
void CProxy_ComputeQMMgr::procQMRes(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeQMMgr::idx_procQMRes_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeQMMgr::idx_procQMRes_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeQMMgr::idx_procQMRes_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeQMMgr::procQMRes(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_ComputeQMMgr::idx_procQMRes_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeQMMgr::procQMRes(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_ComputeQMMgr::idx_procQMRes_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputeQMMgr::reg_procQMRes_void() {
  int epidx = CkRegisterEp("procQMRes()",
      reinterpret_cast<CkCallFnPtr>(_call_procQMRes_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_ComputeQMMgr::_call_procQMRes_void(void* impl_msg, void* impl_obj_void)
{
  ComputeQMMgr* impl_obj = static_cast<ComputeQMMgr*>(impl_obj_void);
  impl_obj->procQMRes();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_ComputeQMMgr::procQMRes_10_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvForce(QMForceMsg* impl_msg);
 */
void CProxy_ComputeQMMgr::recvForce(QMForceMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeQMMgr::idx_recvForce_QMForceMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeQMMgr::idx_recvForce_QMForceMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeQMMgr::idx_recvForce_QMForceMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeQMMgr::recvForce(QMForceMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ComputeQMMgr::idx_recvForce_QMForceMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeQMMgr::recvForce(QMForceMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ComputeQMMgr::idx_recvForce_QMForceMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputeQMMgr::reg_recvForce_QMForceMsg() {
  int epidx = CkRegisterEp("recvForce(QMForceMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvForce_QMForceMsg), CMessage_QMForceMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)QMForceMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ComputeQMMgr::_call_recvForce_QMForceMsg(void* impl_msg, void* impl_obj_void)
{
  ComputeQMMgr* impl_obj = static_cast<ComputeQMMgr*>(impl_obj_void);
  impl_obj->recvForce((QMForceMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvQMResLoop();
 */
void CProxy_ComputeQMMgr::recvQMResLoop(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ComputeQMMgr::idx_recvQMResLoop_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ComputeQMMgr::idx_recvQMResLoop_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ComputeQMMgr::idx_recvQMResLoop_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ComputeQMMgr::recvQMResLoop(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_ComputeQMMgr::idx_recvQMResLoop_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ComputeQMMgr::recvQMResLoop(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_ComputeQMMgr::idx_recvQMResLoop_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ComputeQMMgr::reg_recvQMResLoop_void() {
  int epidx = CkRegisterEp("recvQMResLoop()",
      reinterpret_cast<CkCallFnPtr>(_call_recvQMResLoop_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_ComputeQMMgr::_call_recvQMResLoop_void(void* impl_msg, void* impl_obj_void)
{
  ComputeQMMgr* impl_obj = static_cast<ComputeQMMgr*>(impl_obj_void);
  impl_obj->_sdag_fnc_recvQMResLoop();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_ComputeQMMgr::recvQMResLoop_12_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ComputeQMMgr();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvPartQM(QMCoordMsg* impl_msg);
 */
void CProxySection_ComputeQMMgr::recvPartQM(QMCoordMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeQMMgr::idx_recvPartQM_QMCoordMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeQMMgr::idx_recvPartQM_QMCoordMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvFullQM(QMCoordMsg* impl_msg);
 */
void CProxySection_ComputeQMMgr::recvFullQM(QMCoordMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeQMMgr::idx_recvFullQM_QMCoordMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeQMMgr::idx_recvFullQM_QMCoordMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvPntChrg(QMPntChrgMsg* impl_msg);
 */
void CProxySection_ComputeQMMgr::recvPntChrg(QMPntChrgMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeQMMgr::idx_recvPntChrg_QMPntChrgMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeQMMgr::idx_recvPntChrg_QMPntChrgMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void calcMOPAC(QMGrpCalcMsg* impl_msg);
 */
void CProxySection_ComputeQMMgr::calcMOPAC(QMGrpCalcMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeQMMgr::idx_calcMOPAC_QMGrpCalcMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeQMMgr::idx_calcMOPAC_QMGrpCalcMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void calcORCA(QMGrpCalcMsg* impl_msg);
 */
void CProxySection_ComputeQMMgr::calcORCA(QMGrpCalcMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeQMMgr::idx_calcORCA_QMGrpCalcMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeQMMgr::idx_calcORCA_QMGrpCalcMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void calcUSR(QMGrpCalcMsg* impl_msg);
 */
void CProxySection_ComputeQMMgr::calcUSR(QMGrpCalcMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeQMMgr::idx_calcUSR_QMGrpCalcMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeQMMgr::idx_calcUSR_QMGrpCalcMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvQMRes(QMGrpResMsg* impl_msg);
 */
void CProxySection_ComputeQMMgr::recvQMRes(QMGrpResMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeQMMgr::idx_recvQMRes_QMGrpResMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeQMMgr::idx_recvQMRes_QMGrpResMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void storeQMRes(QMGrpResMsg* impl_msg);
 */
void CProxySection_ComputeQMMgr::storeQMRes(QMGrpResMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeQMMgr::idx_storeQMRes_QMGrpResMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeQMMgr::idx_storeQMRes_QMGrpResMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void procQMRes();
 */
void CProxySection_ComputeQMMgr::procQMRes(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeQMMgr::idx_procQMRes_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeQMMgr::idx_procQMRes_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvForce(QMForceMsg* impl_msg);
 */
void CProxySection_ComputeQMMgr::recvForce(QMForceMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeQMMgr::idx_recvForce_QMForceMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeQMMgr::idx_recvForce_QMForceMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvQMResLoop();
 */
void CProxySection_ComputeQMMgr::recvQMResLoop(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ComputeQMMgr::idx_recvQMResLoop_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ComputeQMMgr::idx_recvQMResLoop_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_ComputeQMMgr::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,ComputeQMMgr::isIrreducible());
  // REG: ComputeQMMgr();
  idx_ComputeQMMgr_void();
  CkRegisterDefaultCtor(__idx, idx_ComputeQMMgr_void());

  // REG: void recvPartQM(QMCoordMsg* impl_msg);
  idx_recvPartQM_QMCoordMsg();

  // REG: void recvFullQM(QMCoordMsg* impl_msg);
  idx_recvFullQM_QMCoordMsg();

  // REG: void recvPntChrg(QMPntChrgMsg* impl_msg);
  idx_recvPntChrg_QMPntChrgMsg();

  // REG: void calcMOPAC(QMGrpCalcMsg* impl_msg);
  idx_calcMOPAC_QMGrpCalcMsg();

  // REG: void calcORCA(QMGrpCalcMsg* impl_msg);
  idx_calcORCA_QMGrpCalcMsg();

  // REG: void calcUSR(QMGrpCalcMsg* impl_msg);
  idx_calcUSR_QMGrpCalcMsg();

  // REG: void recvQMRes(QMGrpResMsg* impl_msg);
  idx_recvQMRes_QMGrpResMsg();

  // REG: void storeQMRes(QMGrpResMsg* impl_msg);
  idx_storeQMRes_QMGrpResMsg();

  // REG: void procQMRes();
  idx_procQMRes_void();

  // REG: void recvForce(QMForceMsg* impl_msg);
  idx_recvForce_QMForceMsg();

  // REG: void recvQMResLoop();
  idx_recvQMResLoop_void();

  ComputeQMMgr::__sdag_register(); // Potentially missing ComputeQMMgr_SDAG_CODE in your class definition?
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void ComputeQMMgr::recvQMResLoop(){
  CkPrintf("Error> Direct call to SDAG entry method \'%s::%s\'!\n", "ComputeQMMgr", "recvQMResLoop()"); 
  CkAbort("Direct SDAG call is not allowed for SDAG entry methods having when constructs. Call such SDAG methods using a proxy"); 
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void ComputeQMMgr::_sdag_fnc_recvQMResLoop() {
  _TRACE_END_EXECUTE(); 
  if (!__dep.get()) _sdag_init();
  _slist_0();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, NULL, this); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeQMMgr::recvQMResLoop_end() {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeQMMgr::_slist_0() {
  _while_0();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeQMMgr::_slist_0_end() {
  recvQMResLoop_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeQMMgr::_while_0() {
  if ( numRecQMRes < numQMGrps ) {
    _slist_1();
  } else {
    _serial_1();
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeQMMgr::_while_0_end() {
  if ( numRecQMRes < numQMGrps ) {
    _slist_1();
  } else {
    _serial_1();
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeQMMgr::_slist_1() {
  _when_0();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeQMMgr::_slist_1_end() {
  _while_0_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* ComputeQMMgr::_when_0() {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(0, false, 0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _serial_0(static_cast<QMGrpResMsg*>(static_cast<SDAG::MsgClosure*>(buf0->cl)->msg));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(0);
    c->anyEntries.push_back(0);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeQMMgr::_when_0_end(QMGrpResMsg* gen0) {
  {
    QMGrpResMsg*& fmsg = gen0;
    CmiFree(UsrToEnv(fmsg));
  }
  _slist_1_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeQMMgr::_serial_0(QMGrpResMsg* gen0) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_ComputeQMMgr_serial_0()), CkMyPe(), 0, NULL, this); 
  {
    QMGrpResMsg*& fmsg = gen0;
    { // begin serial block
#line 34 "inc/ComputeQMMgr.ci"

                storeQMRes(fmsg) ;
            
#line 1369 "ComputeQMMgr.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _when_0_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeQMMgr::_serial_1() {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_ComputeQMMgr_serial_1()), CkMyPe(), 0, NULL, this); 
  { // begin serial block
#line 38 "inc/ComputeQMMgr.ci"

            procQMRes() ;
        
#line 1386 "ComputeQMMgr.def.h"
  } // end serial block
  _TRACE_END_EXECUTE(); 
  _slist_0_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeQMMgr::recvQMRes(QMGrpResMsg* fmsg_msg){
  if (!__dep.get()) _sdag_init();
  CkReferenceMsg(fmsg_msg);
  __dep->pushBuffer(0, new SDAG::MsgClosure(fmsg_msg));
  SDAG::Continuation* c = __dep->tryFindContinuation(0);
  if (c) {
    _TRACE_END_EXECUTE(); 
    _when_0(
    );
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, NULL, this); 
    delete c;
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void ComputeQMMgr::_sdag_init() { // Potentially missing ComputeQMMgr_SDAG_CODE in your class definition?
  __dep.reset(new SDAG::Dependency(1,1));
  __dep->addDepends(0,0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeQMMgr::__sdag_init() { // Potentially missing ComputeQMMgr_SDAG_CODE in your class definition?
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void ComputeQMMgr::_sdag_pup(PUP::er &p) {  // Potentially missing ComputeQMMgr_SDAG_CODE in your class definition?
  p|__dep;
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void ComputeQMMgr::__sdag_register() { // Potentially missing ComputeQMMgr_SDAG_CODE in your class definition?
  (void)_sdag_idx_ComputeQMMgr_serial_0();
  (void)_sdag_idx_ComputeQMMgr_serial_1();
  PUPable_reg(SINGLE_ARG(Closure_ComputeQMMgr::procQMRes_10_closure));
  PUPable_reg(SINGLE_ARG(Closure_ComputeQMMgr::recvQMResLoop_12_closure));
  PUPable_reg(SINGLE_ARG(Closure_ComputeQMMgr::procQMRes_10_closure));
  PUPable_reg(SINGLE_ARG(Closure_ComputeQMMgr::recvQMResLoop_12_closure));
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int ComputeQMMgr::_sdag_idx_ComputeQMMgr_serial_0() { // Potentially missing ComputeQMMgr_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_ComputeQMMgr_serial_0();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int ComputeQMMgr::_sdag_reg_ComputeQMMgr_serial_0() { // Potentially missing ComputeQMMgr_SDAG_CODE in your class definition?
  return CkRegisterEp("ComputeQMMgr_serial_0", NULL, 0, CkIndex_ComputeQMMgr::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int ComputeQMMgr::_sdag_idx_ComputeQMMgr_serial_1() { // Potentially missing ComputeQMMgr_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_ComputeQMMgr_serial_1();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int ComputeQMMgr::_sdag_reg_ComputeQMMgr_serial_1() { // Potentially missing ComputeQMMgr_SDAG_CODE in your class definition?
  return CkRegisterEp("ComputeQMMgr_serial_1", NULL, 0, CkIndex_ComputeQMMgr::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */



#ifndef CK_TEMPLATES_ONLY
void _registerComputeQMMgr(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: message QMCoordMsg{
ComputeQMAtom coord[];
int pcIndxs[];
}
;
*/
CMessage_QMCoordMsg::__register("QMCoordMsg", sizeof(QMCoordMsg),(CkPackFnPtr) QMCoordMsg::pack,(CkUnpackFnPtr) QMCoordMsg::unpack);

/* REG: message QMPntChrgMsg{
ComputeQMPntChrg coord[];
}
;
*/
CMessage_QMPntChrgMsg::__register("QMPntChrgMsg", sizeof(QMPntChrgMsg),(CkPackFnPtr) QMPntChrgMsg::pack,(CkUnpackFnPtr) QMPntChrgMsg::unpack);

/* REG: message QMForceMsg{
QMForce force[];
LSSSubsDat lssDat[];
}
;
*/
CMessage_QMForceMsg::__register("QMForceMsg", sizeof(QMForceMsg),(CkPackFnPtr) QMForceMsg::pack,(CkUnpackFnPtr) QMForceMsg::unpack);

/* REG: message QMGrpResMsg{
QMForce force[];
}
;
*/
CMessage_QMGrpResMsg::__register("QMGrpResMsg", sizeof(QMGrpResMsg),(CkPackFnPtr) QMGrpResMsg::pack,(CkUnpackFnPtr) QMGrpResMsg::unpack);

/* REG: message QMGrpCalcMsg{
QMAtomData data[];
char configLines[];
}
;
*/
CMessage_QMGrpCalcMsg::__register("QMGrpCalcMsg", sizeof(QMGrpCalcMsg),(CkPackFnPtr) QMGrpCalcMsg::pack,(CkUnpackFnPtr) QMGrpCalcMsg::unpack);

/* REG: group ComputeQMMgr: IrrGroup{
ComputeQMMgr();
void recvPartQM(QMCoordMsg* impl_msg);
void recvFullQM(QMCoordMsg* impl_msg);
void recvPntChrg(QMPntChrgMsg* impl_msg);
void calcMOPAC(QMGrpCalcMsg* impl_msg);
void calcORCA(QMGrpCalcMsg* impl_msg);
void calcUSR(QMGrpCalcMsg* impl_msg);
void recvQMRes(QMGrpResMsg* impl_msg);
void storeQMRes(QMGrpResMsg* impl_msg);
void procQMRes();
void recvForce(QMForceMsg* impl_msg);
void recvQMResLoop();
};
*/
  CkIndex_ComputeQMMgr::__register("ComputeQMMgr", sizeof(ComputeQMMgr));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_ComputeQMMgr::virtual_pup(PUP::er &p) {
    recursive_pup<ComputeQMMgr>(dynamic_cast<ComputeQMMgr*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
