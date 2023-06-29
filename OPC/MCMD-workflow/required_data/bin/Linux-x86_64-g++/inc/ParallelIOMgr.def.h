






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

    struct Closure_ParallelIOMgr::ackAtomsToHomePatchProcs_8_closure : public SDAG::Closure {
      

      ackAtomsToHomePatchProcs_8_closure() {
        init();
      }
      ackAtomsToHomePatchProcs_8_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~ackAtomsToHomePatchProcs_8_closure() {
      }
      PUPable_decl(SINGLE_ARG(ackAtomsToHomePatchProcs_8_closure));
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

    struct Closure_ParallelIOMgr::disposePositions_15_closure : public SDAG::Closure {
            int seq;
            double prevT;


      disposePositions_15_closure() {
        init();
      }
      disposePositions_15_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return seq;}
            double & getP1() { return prevT;}
      void pup(PUP::er& __p) {
        __p | seq;
        __p | prevT;
        packClosure(__p);
      }
      virtual ~disposePositions_15_closure() {
      }
      PUPable_decl(SINGLE_ARG(disposePositions_15_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ParallelIOMgr::disposeVelocities_16_closure : public SDAG::Closure {
            int seq;
            double prevT;


      disposeVelocities_16_closure() {
        init();
      }
      disposeVelocities_16_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return seq;}
            double & getP1() { return prevT;}
      void pup(PUP::er& __p) {
        __p | seq;
        __p | prevT;
        packClosure(__p);
      }
      virtual ~disposeVelocities_16_closure() {
      }
      PUPable_decl(SINGLE_ARG(disposeVelocities_16_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ParallelIOMgr::disposeForces_17_closure : public SDAG::Closure {
            int seq;
            double prevT;


      disposeForces_17_closure() {
        init();
      }
      disposeForces_17_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return seq;}
            double & getP1() { return prevT;}
      void pup(PUP::er& __p) {
        __p | seq;
        __p | prevT;
        packClosure(__p);
      }
      virtual ~disposeForces_17_closure() {
      }
      PUPable_decl(SINGLE_ARG(disposeForces_17_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ParallelIOMgr::wrapCoor_18_closure : public SDAG::Closure {
            int seq;
            Lattice lat;


      wrapCoor_18_closure() {
        init();
      }
      wrapCoor_18_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return seq;}
            Lattice & getP1() { return lat;}
      void pup(PUP::er& __p) {
        __p | seq;
        __p | lat;
        packClosure(__p);
      }
      virtual ~wrapCoor_18_closure() {
      }
      PUPable_decl(SINGLE_ARG(wrapCoor_18_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: message MolInfoMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_MolInfoMsg::operator new(size_t s){
  return MolInfoMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_MolInfoMsg::operator new(size_t s, int* sz){
  return MolInfoMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_MolInfoMsg::operator new(size_t s, int* sz,const int pb){
  return MolInfoMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_MolInfoMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return MolInfoMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_MolInfoMsg::operator new(size_t s, const int p) {
  return MolInfoMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_MolInfoMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return MolInfoMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_MolInfoMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_MolInfoMsg::CMessage_MolInfoMsg() {
MolInfoMsg *newmsg = (MolInfoMsg *)this;
}
void CMessage_MolInfoMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_MolInfoMsg::pack(MolInfoMsg *msg) {
  return (void *) msg;
}
MolInfoMsg* CMessage_MolInfoMsg::unpack(void* buf) {
  MolInfoMsg *msg = (MolInfoMsg *) buf;
  return msg;
}
int CMessage_MolInfoMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message HydroBasedMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_HydroBasedMsg::operator new(size_t s){
  return HydroBasedMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_HydroBasedMsg::operator new(size_t s, int* sz){
  return HydroBasedMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_HydroBasedMsg::operator new(size_t s, int* sz,const int pb){
  return HydroBasedMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_HydroBasedMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return HydroBasedMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_HydroBasedMsg::operator new(size_t s, const int p) {
  return HydroBasedMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_HydroBasedMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return HydroBasedMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_HydroBasedMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_HydroBasedMsg::CMessage_HydroBasedMsg() {
HydroBasedMsg *newmsg = (HydroBasedMsg *)this;
}
void CMessage_HydroBasedMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_HydroBasedMsg::pack(HydroBasedMsg *msg) {
  return (void *) msg;
}
HydroBasedMsg* CMessage_HydroBasedMsg::unpack(void* buf) {
  HydroBasedMsg *msg = (HydroBasedMsg *) buf;
  return msg;
}
int CMessage_HydroBasedMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message MoveInputAtomsMsg{
InputAtom atomList[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_MoveInputAtomsMsg::operator new(size_t s){
  return MoveInputAtomsMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_MoveInputAtomsMsg::operator new(size_t s, int* sz){
  return MoveInputAtomsMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_MoveInputAtomsMsg::operator new(size_t s, int* sz,const int pb){
  return MoveInputAtomsMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_MoveInputAtomsMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return MoveInputAtomsMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_MoveInputAtomsMsg::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return MoveInputAtomsMsg::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_MoveInputAtomsMsg::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return MoveInputAtomsMsg::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_MoveInputAtomsMsg::operator new(size_t s, int sz0, const int p, const GroupDepNum groupDepNum) {
  int sizes[1];
  sizes[0] = sz0;
  return MoveInputAtomsMsg::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_MoveInputAtomsMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(InputAtom)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb, groupDepNum);
}
CMessage_MoveInputAtomsMsg::CMessage_MoveInputAtomsMsg() {
MoveInputAtomsMsg *newmsg = (MoveInputAtomsMsg *)this;
  newmsg->atomList = (InputAtom *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
void CMessage_MoveInputAtomsMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_MoveInputAtomsMsg::pack(MoveInputAtomsMsg *msg) {
  msg->atomList = (InputAtom *) ((char *)msg->atomList - (char *)msg);
  return (void *) msg;
}
MoveInputAtomsMsg* CMessage_MoveInputAtomsMsg::unpack(void* buf) {
  MoveInputAtomsMsg *msg = (MoveInputAtomsMsg *) buf;
  msg->atomList = (InputAtom *) ((size_t)msg->atomList + (char *)msg);
  return msg;
}
int CMessage_MoveInputAtomsMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message AtomsCntPerPatchMsg{
PatchID pidList[];
unsigned short atomsCntList[];
unsigned short fixedAtomsCntList[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_AtomsCntPerPatchMsg::operator new(size_t s){
  return AtomsCntPerPatchMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_AtomsCntPerPatchMsg::operator new(size_t s, int* sz){
  return AtomsCntPerPatchMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_AtomsCntPerPatchMsg::operator new(size_t s, int* sz,const int pb){
  return AtomsCntPerPatchMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_AtomsCntPerPatchMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return AtomsCntPerPatchMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_AtomsCntPerPatchMsg::operator new(size_t s, int sz0, int sz1, int sz2) {
  int sizes[3];
  sizes[0] = sz0;
  sizes[1] = sz1;
  sizes[2] = sz2;
  return AtomsCntPerPatchMsg::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_AtomsCntPerPatchMsg::operator new(size_t s, int sz0, int sz1, int sz2, const int p) {
  int sizes[3];
  sizes[0] = sz0;
  sizes[1] = sz1;
  sizes[2] = sz2;
  return AtomsCntPerPatchMsg::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_AtomsCntPerPatchMsg::operator new(size_t s, int sz0, int sz1, int sz2, const int p, const GroupDepNum groupDepNum) {
  int sizes[3];
  sizes[0] = sz0;
  sizes[1] = sz1;
  sizes[2] = sz2;
  return AtomsCntPerPatchMsg::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_AtomsCntPerPatchMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(PatchID)*sizes[0]);
  if(sizes==0)
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[1] + ALIGN_DEFAULT(sizeof(unsigned short)*sizes[1]);
  if(sizes==0)
    CkpvAccess(_offsets)[3] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[3] = CkpvAccess(_offsets)[2] + ALIGN_DEFAULT(sizeof(unsigned short)*sizes[2]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[3], pb, groupDepNum);
}
CMessage_AtomsCntPerPatchMsg::CMessage_AtomsCntPerPatchMsg() {
AtomsCntPerPatchMsg *newmsg = (AtomsCntPerPatchMsg *)this;
  newmsg->pidList = (PatchID *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
  newmsg->atomsCntList = (unsigned short *) ((char *)newmsg + CkpvAccess(_offsets)[1]);
  newmsg->fixedAtomsCntList = (unsigned short *) ((char *)newmsg + CkpvAccess(_offsets)[2]);
}
void CMessage_AtomsCntPerPatchMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_AtomsCntPerPatchMsg::pack(AtomsCntPerPatchMsg *msg) {
  msg->pidList = (PatchID *) ((char *)msg->pidList - (char *)msg);
  msg->atomsCntList = (unsigned short *) ((char *)msg->atomsCntList - (char *)msg);
  msg->fixedAtomsCntList = (unsigned short *) ((char *)msg->fixedAtomsCntList - (char *)msg);
  return (void *) msg;
}
AtomsCntPerPatchMsg* CMessage_AtomsCntPerPatchMsg::unpack(void* buf) {
  AtomsCntPerPatchMsg *msg = (AtomsCntPerPatchMsg *) buf;
  msg->pidList = (PatchID *) ((size_t)msg->pidList + (char *)msg);
  msg->atomsCntList = (unsigned short *) ((size_t)msg->atomsCntList + (char *)msg);
  msg->fixedAtomsCntList = (unsigned short *) ((size_t)msg->fixedAtomsCntList + (char *)msg);
  return msg;
}
int CMessage_AtomsCntPerPatchMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message MovePatchAtomsMsg{
PatchID pidList[];
int sizeList[];
FullAtom allAtoms[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_MovePatchAtomsMsg::operator new(size_t s){
  return MovePatchAtomsMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_MovePatchAtomsMsg::operator new(size_t s, int* sz){
  return MovePatchAtomsMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_MovePatchAtomsMsg::operator new(size_t s, int* sz,const int pb){
  return MovePatchAtomsMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_MovePatchAtomsMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return MovePatchAtomsMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_MovePatchAtomsMsg::operator new(size_t s, int sz0, int sz1, int sz2) {
  int sizes[3];
  sizes[0] = sz0;
  sizes[1] = sz1;
  sizes[2] = sz2;
  return MovePatchAtomsMsg::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_MovePatchAtomsMsg::operator new(size_t s, int sz0, int sz1, int sz2, const int p) {
  int sizes[3];
  sizes[0] = sz0;
  sizes[1] = sz1;
  sizes[2] = sz2;
  return MovePatchAtomsMsg::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_MovePatchAtomsMsg::operator new(size_t s, int sz0, int sz1, int sz2, const int p, const GroupDepNum groupDepNum) {
  int sizes[3];
  sizes[0] = sz0;
  sizes[1] = sz1;
  sizes[2] = sz2;
  return MovePatchAtomsMsg::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_MovePatchAtomsMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(PatchID)*sizes[0]);
  if(sizes==0)
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[1] + ALIGN_DEFAULT(sizeof(int)*sizes[1]);
  if(sizes==0)
    CkpvAccess(_offsets)[3] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[3] = CkpvAccess(_offsets)[2] + ALIGN_DEFAULT(sizeof(FullAtom)*sizes[2]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[3], pb, groupDepNum);
}
CMessage_MovePatchAtomsMsg::CMessage_MovePatchAtomsMsg() {
MovePatchAtomsMsg *newmsg = (MovePatchAtomsMsg *)this;
  newmsg->pidList = (PatchID *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
  newmsg->sizeList = (int *) ((char *)newmsg + CkpvAccess(_offsets)[1]);
  newmsg->allAtoms = (FullAtom *) ((char *)newmsg + CkpvAccess(_offsets)[2]);
}
void CMessage_MovePatchAtomsMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_MovePatchAtomsMsg::pack(MovePatchAtomsMsg *msg) {
  msg->pidList = (PatchID *) ((char *)msg->pidList - (char *)msg);
  msg->sizeList = (int *) ((char *)msg->sizeList - (char *)msg);
  msg->allAtoms = (FullAtom *) ((char *)msg->allAtoms - (char *)msg);
  return (void *) msg;
}
MovePatchAtomsMsg* CMessage_MovePatchAtomsMsg::unpack(void* buf) {
  MovePatchAtomsMsg *msg = (MovePatchAtomsMsg *) buf;
  msg->pidList = (PatchID *) ((size_t)msg->pidList + (char *)msg);
  msg->sizeList = (int *) ((size_t)msg->sizeList + (char *)msg);
  msg->allAtoms = (FullAtom *) ((size_t)msg->allAtoms + (char *)msg);
  return msg;
}
int CMessage_MovePatchAtomsMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message ClusterSizeMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_ClusterSizeMsg::operator new(size_t s){
  return ClusterSizeMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_ClusterSizeMsg::operator new(size_t s, int* sz){
  return ClusterSizeMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_ClusterSizeMsg::operator new(size_t s, int* sz,const int pb){
  return ClusterSizeMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_ClusterSizeMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return ClusterSizeMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_ClusterSizeMsg::operator new(size_t s, const int p) {
  return ClusterSizeMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_ClusterSizeMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return ClusterSizeMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_ClusterSizeMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_ClusterSizeMsg::CMessage_ClusterSizeMsg() {
ClusterSizeMsg *newmsg = (ClusterSizeMsg *)this;
}
void CMessage_ClusterSizeMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_ClusterSizeMsg::pack(ClusterSizeMsg *msg) {
  return (void *) msg;
}
ClusterSizeMsg* CMessage_ClusterSizeMsg::unpack(void* buf) {
  ClusterSizeMsg *msg = (ClusterSizeMsg *) buf;
  return msg;
}
int CMessage_ClusterSizeMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message ClusterCoorMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_ClusterCoorMsg::operator new(size_t s){
  return ClusterCoorMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_ClusterCoorMsg::operator new(size_t s, int* sz){
  return ClusterCoorMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_ClusterCoorMsg::operator new(size_t s, int* sz,const int pb){
  return ClusterCoorMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_ClusterCoorMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return ClusterCoorMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_ClusterCoorMsg::operator new(size_t s, const int p) {
  return ClusterCoorMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_ClusterCoorMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return ClusterCoorMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_ClusterCoorMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_ClusterCoorMsg::CMessage_ClusterCoorMsg() {
ClusterCoorMsg *newmsg = (ClusterCoorMsg *)this;
}
void CMessage_ClusterCoorMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_ClusterCoorMsg::pack(ClusterCoorMsg *msg) {
  return (void *) msg;
}
ClusterCoorMsg* CMessage_ClusterCoorMsg::unpack(void* buf) {
  ClusterCoorMsg *msg = (ClusterCoorMsg *) buf;
  return msg;
}
int CMessage_ClusterCoorMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group ParallelIOMgr: IrrGroup{
ParallelIOMgr();
void recvAtomsMGrp(MoveInputAtomsMsg* impl_msg);
void recvMolInfo(MolInfoMsg* impl_msg);
void bcastMolInfo(MolInfoMsg* impl_msg);
void recvHydroBasedCounter(HydroBasedMsg* impl_msg);
void bcastHydroBasedCounter(HydroBasedMsg* impl_msg);
void recvAtomsCntPerPatch(AtomsCntPerPatchMsg* impl_msg);
void ackAtomsToHomePatchProcs();
void recvAtomsToHomePatchProcs(MovePatchAtomsMsg* impl_msg);
void recvClusterSize(ClusterSizeMsg* impl_msg);
void recvFinalClusterSize(ClusterSizeMsg* impl_msg);
void receivePositions(CollectVectorVarMsg* impl_msg);
void receiveVelocities(CollectVectorVarMsg* impl_msg);
void receiveForces(CollectVectorVarMsg* impl_msg);
void disposePositions(int seq, double prevT);
void disposeVelocities(int seq, double prevT);
void disposeForces(int seq, double prevT);
void wrapCoor(int seq, const Lattice &lat);
void recvClusterCoor(ClusterCoorMsg* impl_msg);
void recvFinalClusterCoor(ClusterCoorMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_ParallelIOMgr::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: ParallelIOMgr();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvAtomsMGrp(MoveInputAtomsMsg* impl_msg);
 */
void CProxyElement_ParallelIOMgr::recvAtomsMGrp(MoveInputAtomsMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::idx_recvAtomsMGrp_MoveInputAtomsMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::idx_recvAtomsMGrp_MoveInputAtomsMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ParallelIOMgr::idx_recvAtomsMGrp_MoveInputAtomsMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvMolInfo(MolInfoMsg* impl_msg);
 */
void CProxyElement_ParallelIOMgr::recvMolInfo(MolInfoMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::idx_recvMolInfo_MolInfoMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::idx_recvMolInfo_MolInfoMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ParallelIOMgr::idx_recvMolInfo_MolInfoMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void bcastMolInfo(MolInfoMsg* impl_msg);
 */
void CProxyElement_ParallelIOMgr::bcastMolInfo(MolInfoMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::idx_bcastMolInfo_MolInfoMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::idx_bcastMolInfo_MolInfoMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ParallelIOMgr::idx_bcastMolInfo_MolInfoMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvHydroBasedCounter(HydroBasedMsg* impl_msg);
 */
void CProxyElement_ParallelIOMgr::recvHydroBasedCounter(HydroBasedMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::idx_recvHydroBasedCounter_HydroBasedMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::idx_recvHydroBasedCounter_HydroBasedMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ParallelIOMgr::idx_recvHydroBasedCounter_HydroBasedMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void bcastHydroBasedCounter(HydroBasedMsg* impl_msg);
 */
void CProxyElement_ParallelIOMgr::bcastHydroBasedCounter(HydroBasedMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::idx_bcastHydroBasedCounter_HydroBasedMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::idx_bcastHydroBasedCounter_HydroBasedMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ParallelIOMgr::idx_bcastHydroBasedCounter_HydroBasedMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvAtomsCntPerPatch(AtomsCntPerPatchMsg* impl_msg);
 */
void CProxyElement_ParallelIOMgr::recvAtomsCntPerPatch(AtomsCntPerPatchMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::idx_recvAtomsCntPerPatch_AtomsCntPerPatchMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::idx_recvAtomsCntPerPatch_AtomsCntPerPatchMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ParallelIOMgr::idx_recvAtomsCntPerPatch_AtomsCntPerPatchMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ackAtomsToHomePatchProcs();
 */
void CProxyElement_ParallelIOMgr::ackAtomsToHomePatchProcs(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::idx_ackAtomsToHomePatchProcs_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::idx_ackAtomsToHomePatchProcs_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ParallelIOMgr::idx_ackAtomsToHomePatchProcs_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvAtomsToHomePatchProcs(MovePatchAtomsMsg* impl_msg);
 */
void CProxyElement_ParallelIOMgr::recvAtomsToHomePatchProcs(MovePatchAtomsMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::idx_recvAtomsToHomePatchProcs_MovePatchAtomsMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::idx_recvAtomsToHomePatchProcs_MovePatchAtomsMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ParallelIOMgr::idx_recvAtomsToHomePatchProcs_MovePatchAtomsMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvClusterSize(ClusterSizeMsg* impl_msg);
 */
void CProxyElement_ParallelIOMgr::recvClusterSize(ClusterSizeMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::idx_recvClusterSize_ClusterSizeMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::idx_recvClusterSize_ClusterSizeMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ParallelIOMgr::idx_recvClusterSize_ClusterSizeMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvFinalClusterSize(ClusterSizeMsg* impl_msg);
 */
void CProxyElement_ParallelIOMgr::recvFinalClusterSize(ClusterSizeMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::idx_recvFinalClusterSize_ClusterSizeMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::idx_recvFinalClusterSize_ClusterSizeMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ParallelIOMgr::idx_recvFinalClusterSize_ClusterSizeMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receivePositions(CollectVectorVarMsg* impl_msg);
 */
void CProxyElement_ParallelIOMgr::receivePositions(CollectVectorVarMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::idx_receivePositions_CollectVectorVarMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::idx_receivePositions_CollectVectorVarMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ParallelIOMgr::idx_receivePositions_CollectVectorVarMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receiveVelocities(CollectVectorVarMsg* impl_msg);
 */
void CProxyElement_ParallelIOMgr::receiveVelocities(CollectVectorVarMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::idx_receiveVelocities_CollectVectorVarMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::idx_receiveVelocities_CollectVectorVarMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ParallelIOMgr::idx_receiveVelocities_CollectVectorVarMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receiveForces(CollectVectorVarMsg* impl_msg);
 */
void CProxyElement_ParallelIOMgr::receiveForces(CollectVectorVarMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::idx_receiveForces_CollectVectorVarMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::idx_receiveForces_CollectVectorVarMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ParallelIOMgr::idx_receiveForces_CollectVectorVarMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void disposePositions(int seq, double prevT);
 */
void CProxyElement_ParallelIOMgr::disposePositions(int seq, double prevT, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int seq, double prevT
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|seq;
    implP|prevT;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|seq;
    implP|prevT;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::idx_disposePositions_marshall15(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::idx_disposePositions_marshall15(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ParallelIOMgr::idx_disposePositions_marshall15(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void disposeVelocities(int seq, double prevT);
 */
void CProxyElement_ParallelIOMgr::disposeVelocities(int seq, double prevT, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int seq, double prevT
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|seq;
    implP|prevT;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|seq;
    implP|prevT;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::idx_disposeVelocities_marshall16(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::idx_disposeVelocities_marshall16(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ParallelIOMgr::idx_disposeVelocities_marshall16(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void disposeForces(int seq, double prevT);
 */
void CProxyElement_ParallelIOMgr::disposeForces(int seq, double prevT, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int seq, double prevT
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|seq;
    implP|prevT;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|seq;
    implP|prevT;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::idx_disposeForces_marshall17(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::idx_disposeForces_marshall17(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ParallelIOMgr::idx_disposeForces_marshall17(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void wrapCoor(int seq, const Lattice &lat);
 */
void CProxyElement_ParallelIOMgr::wrapCoor(int seq, const Lattice &lat, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int seq, const Lattice &lat
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|seq;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Lattice>::type>::type &)lat;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|seq;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Lattice>::type>::type &)lat;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::idx_wrapCoor_marshall18(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::idx_wrapCoor_marshall18(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ParallelIOMgr::idx_wrapCoor_marshall18(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvClusterCoor(ClusterCoorMsg* impl_msg);
 */
void CProxyElement_ParallelIOMgr::recvClusterCoor(ClusterCoorMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::idx_recvClusterCoor_ClusterCoorMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::idx_recvClusterCoor_ClusterCoorMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ParallelIOMgr::idx_recvClusterCoor_ClusterCoorMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvFinalClusterCoor(ClusterCoorMsg* impl_msg);
 */
void CProxyElement_ParallelIOMgr::recvFinalClusterCoor(ClusterCoorMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::idx_recvFinalClusterCoor_ClusterCoorMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::idx_recvFinalClusterCoor_ClusterCoorMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ParallelIOMgr::idx_recvFinalClusterCoor_ClusterCoorMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ParallelIOMgr();
 */
CkGroupID CProxy_ParallelIOMgr::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_ParallelIOMgr::__idx, CkIndex_ParallelIOMgr::idx_ParallelIOMgr_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_ParallelIOMgr::reg_ParallelIOMgr_void() {
  int epidx = CkRegisterEp("ParallelIOMgr()",
      reinterpret_cast<CkCallFnPtr>(_call_ParallelIOMgr_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_ParallelIOMgr::_call_ParallelIOMgr_void(void* impl_msg, void* impl_obj_void)
{
  ParallelIOMgr* impl_obj = static_cast<ParallelIOMgr*>(impl_obj_void);
  new (impl_obj_void) ParallelIOMgr();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvAtomsMGrp(MoveInputAtomsMsg* impl_msg);
 */
void CProxy_ParallelIOMgr::recvAtomsMGrp(MoveInputAtomsMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::idx_recvAtomsMGrp_MoveInputAtomsMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ParallelIOMgr::idx_recvAtomsMGrp_MoveInputAtomsMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ParallelIOMgr::idx_recvAtomsMGrp_MoveInputAtomsMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ParallelIOMgr::recvAtomsMGrp(MoveInputAtomsMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::idx_recvAtomsMGrp_MoveInputAtomsMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ParallelIOMgr::recvAtomsMGrp(MoveInputAtomsMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ParallelIOMgr::idx_recvAtomsMGrp_MoveInputAtomsMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ParallelIOMgr::reg_recvAtomsMGrp_MoveInputAtomsMsg() {
  int epidx = CkRegisterEp("recvAtomsMGrp(MoveInputAtomsMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvAtomsMGrp_MoveInputAtomsMsg), CMessage_MoveInputAtomsMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)MoveInputAtomsMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ParallelIOMgr::_call_recvAtomsMGrp_MoveInputAtomsMsg(void* impl_msg, void* impl_obj_void)
{
  ParallelIOMgr* impl_obj = static_cast<ParallelIOMgr*>(impl_obj_void);
  impl_obj->recvAtomsMGrp((MoveInputAtomsMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvMolInfo(MolInfoMsg* impl_msg);
 */
void CProxy_ParallelIOMgr::recvMolInfo(MolInfoMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::idx_recvMolInfo_MolInfoMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ParallelIOMgr::idx_recvMolInfo_MolInfoMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ParallelIOMgr::idx_recvMolInfo_MolInfoMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ParallelIOMgr::recvMolInfo(MolInfoMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::idx_recvMolInfo_MolInfoMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ParallelIOMgr::recvMolInfo(MolInfoMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ParallelIOMgr::idx_recvMolInfo_MolInfoMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ParallelIOMgr::reg_recvMolInfo_MolInfoMsg() {
  int epidx = CkRegisterEp("recvMolInfo(MolInfoMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvMolInfo_MolInfoMsg), CMessage_MolInfoMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)MolInfoMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ParallelIOMgr::_call_recvMolInfo_MolInfoMsg(void* impl_msg, void* impl_obj_void)
{
  ParallelIOMgr* impl_obj = static_cast<ParallelIOMgr*>(impl_obj_void);
  impl_obj->recvMolInfo((MolInfoMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void bcastMolInfo(MolInfoMsg* impl_msg);
 */
void CProxy_ParallelIOMgr::bcastMolInfo(MolInfoMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::idx_bcastMolInfo_MolInfoMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ParallelIOMgr::idx_bcastMolInfo_MolInfoMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ParallelIOMgr::idx_bcastMolInfo_MolInfoMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ParallelIOMgr::bcastMolInfo(MolInfoMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::idx_bcastMolInfo_MolInfoMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ParallelIOMgr::bcastMolInfo(MolInfoMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ParallelIOMgr::idx_bcastMolInfo_MolInfoMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ParallelIOMgr::reg_bcastMolInfo_MolInfoMsg() {
  int epidx = CkRegisterEp("bcastMolInfo(MolInfoMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_bcastMolInfo_MolInfoMsg), CMessage_MolInfoMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)MolInfoMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ParallelIOMgr::_call_bcastMolInfo_MolInfoMsg(void* impl_msg, void* impl_obj_void)
{
  ParallelIOMgr* impl_obj = static_cast<ParallelIOMgr*>(impl_obj_void);
  impl_obj->bcastMolInfo((MolInfoMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvHydroBasedCounter(HydroBasedMsg* impl_msg);
 */
void CProxy_ParallelIOMgr::recvHydroBasedCounter(HydroBasedMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::idx_recvHydroBasedCounter_HydroBasedMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ParallelIOMgr::idx_recvHydroBasedCounter_HydroBasedMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ParallelIOMgr::idx_recvHydroBasedCounter_HydroBasedMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ParallelIOMgr::recvHydroBasedCounter(HydroBasedMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::idx_recvHydroBasedCounter_HydroBasedMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ParallelIOMgr::recvHydroBasedCounter(HydroBasedMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ParallelIOMgr::idx_recvHydroBasedCounter_HydroBasedMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ParallelIOMgr::reg_recvHydroBasedCounter_HydroBasedMsg() {
  int epidx = CkRegisterEp("recvHydroBasedCounter(HydroBasedMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvHydroBasedCounter_HydroBasedMsg), CMessage_HydroBasedMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)HydroBasedMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ParallelIOMgr::_call_recvHydroBasedCounter_HydroBasedMsg(void* impl_msg, void* impl_obj_void)
{
  ParallelIOMgr* impl_obj = static_cast<ParallelIOMgr*>(impl_obj_void);
  impl_obj->recvHydroBasedCounter((HydroBasedMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void bcastHydroBasedCounter(HydroBasedMsg* impl_msg);
 */
void CProxy_ParallelIOMgr::bcastHydroBasedCounter(HydroBasedMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::idx_bcastHydroBasedCounter_HydroBasedMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ParallelIOMgr::idx_bcastHydroBasedCounter_HydroBasedMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ParallelIOMgr::idx_bcastHydroBasedCounter_HydroBasedMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ParallelIOMgr::bcastHydroBasedCounter(HydroBasedMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::idx_bcastHydroBasedCounter_HydroBasedMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ParallelIOMgr::bcastHydroBasedCounter(HydroBasedMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ParallelIOMgr::idx_bcastHydroBasedCounter_HydroBasedMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ParallelIOMgr::reg_bcastHydroBasedCounter_HydroBasedMsg() {
  int epidx = CkRegisterEp("bcastHydroBasedCounter(HydroBasedMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_bcastHydroBasedCounter_HydroBasedMsg), CMessage_HydroBasedMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)HydroBasedMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ParallelIOMgr::_call_bcastHydroBasedCounter_HydroBasedMsg(void* impl_msg, void* impl_obj_void)
{
  ParallelIOMgr* impl_obj = static_cast<ParallelIOMgr*>(impl_obj_void);
  impl_obj->bcastHydroBasedCounter((HydroBasedMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvAtomsCntPerPatch(AtomsCntPerPatchMsg* impl_msg);
 */
void CProxy_ParallelIOMgr::recvAtomsCntPerPatch(AtomsCntPerPatchMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::idx_recvAtomsCntPerPatch_AtomsCntPerPatchMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ParallelIOMgr::idx_recvAtomsCntPerPatch_AtomsCntPerPatchMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ParallelIOMgr::idx_recvAtomsCntPerPatch_AtomsCntPerPatchMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ParallelIOMgr::recvAtomsCntPerPatch(AtomsCntPerPatchMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::idx_recvAtomsCntPerPatch_AtomsCntPerPatchMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ParallelIOMgr::recvAtomsCntPerPatch(AtomsCntPerPatchMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ParallelIOMgr::idx_recvAtomsCntPerPatch_AtomsCntPerPatchMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ParallelIOMgr::reg_recvAtomsCntPerPatch_AtomsCntPerPatchMsg() {
  int epidx = CkRegisterEp("recvAtomsCntPerPatch(AtomsCntPerPatchMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvAtomsCntPerPatch_AtomsCntPerPatchMsg), CMessage_AtomsCntPerPatchMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)AtomsCntPerPatchMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ParallelIOMgr::_call_recvAtomsCntPerPatch_AtomsCntPerPatchMsg(void* impl_msg, void* impl_obj_void)
{
  ParallelIOMgr* impl_obj = static_cast<ParallelIOMgr*>(impl_obj_void);
  impl_obj->recvAtomsCntPerPatch((AtomsCntPerPatchMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ackAtomsToHomePatchProcs();
 */
void CProxy_ParallelIOMgr::ackAtomsToHomePatchProcs(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::idx_ackAtomsToHomePatchProcs_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ParallelIOMgr::idx_ackAtomsToHomePatchProcs_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ParallelIOMgr::idx_ackAtomsToHomePatchProcs_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ParallelIOMgr::ackAtomsToHomePatchProcs(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::idx_ackAtomsToHomePatchProcs_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ParallelIOMgr::ackAtomsToHomePatchProcs(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_ParallelIOMgr::idx_ackAtomsToHomePatchProcs_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ParallelIOMgr::reg_ackAtomsToHomePatchProcs_void() {
  int epidx = CkRegisterEp("ackAtomsToHomePatchProcs()",
      reinterpret_cast<CkCallFnPtr>(_call_ackAtomsToHomePatchProcs_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_ParallelIOMgr::_call_ackAtomsToHomePatchProcs_void(void* impl_msg, void* impl_obj_void)
{
  ParallelIOMgr* impl_obj = static_cast<ParallelIOMgr*>(impl_obj_void);
  impl_obj->ackAtomsToHomePatchProcs();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_ParallelIOMgr::ackAtomsToHomePatchProcs_8_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvAtomsToHomePatchProcs(MovePatchAtomsMsg* impl_msg);
 */
void CProxy_ParallelIOMgr::recvAtomsToHomePatchProcs(MovePatchAtomsMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::idx_recvAtomsToHomePatchProcs_MovePatchAtomsMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ParallelIOMgr::idx_recvAtomsToHomePatchProcs_MovePatchAtomsMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ParallelIOMgr::idx_recvAtomsToHomePatchProcs_MovePatchAtomsMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ParallelIOMgr::recvAtomsToHomePatchProcs(MovePatchAtomsMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::idx_recvAtomsToHomePatchProcs_MovePatchAtomsMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ParallelIOMgr::recvAtomsToHomePatchProcs(MovePatchAtomsMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ParallelIOMgr::idx_recvAtomsToHomePatchProcs_MovePatchAtomsMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ParallelIOMgr::reg_recvAtomsToHomePatchProcs_MovePatchAtomsMsg() {
  int epidx = CkRegisterEp("recvAtomsToHomePatchProcs(MovePatchAtomsMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvAtomsToHomePatchProcs_MovePatchAtomsMsg), CMessage_MovePatchAtomsMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)MovePatchAtomsMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ParallelIOMgr::_call_recvAtomsToHomePatchProcs_MovePatchAtomsMsg(void* impl_msg, void* impl_obj_void)
{
  ParallelIOMgr* impl_obj = static_cast<ParallelIOMgr*>(impl_obj_void);
  impl_obj->recvAtomsToHomePatchProcs((MovePatchAtomsMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvClusterSize(ClusterSizeMsg* impl_msg);
 */
void CProxy_ParallelIOMgr::recvClusterSize(ClusterSizeMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::idx_recvClusterSize_ClusterSizeMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ParallelIOMgr::idx_recvClusterSize_ClusterSizeMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ParallelIOMgr::idx_recvClusterSize_ClusterSizeMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ParallelIOMgr::recvClusterSize(ClusterSizeMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::idx_recvClusterSize_ClusterSizeMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ParallelIOMgr::recvClusterSize(ClusterSizeMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ParallelIOMgr::idx_recvClusterSize_ClusterSizeMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ParallelIOMgr::reg_recvClusterSize_ClusterSizeMsg() {
  int epidx = CkRegisterEp("recvClusterSize(ClusterSizeMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvClusterSize_ClusterSizeMsg), CMessage_ClusterSizeMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)ClusterSizeMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ParallelIOMgr::_call_recvClusterSize_ClusterSizeMsg(void* impl_msg, void* impl_obj_void)
{
  ParallelIOMgr* impl_obj = static_cast<ParallelIOMgr*>(impl_obj_void);
  impl_obj->recvClusterSize((ClusterSizeMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvFinalClusterSize(ClusterSizeMsg* impl_msg);
 */
void CProxy_ParallelIOMgr::recvFinalClusterSize(ClusterSizeMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::idx_recvFinalClusterSize_ClusterSizeMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ParallelIOMgr::idx_recvFinalClusterSize_ClusterSizeMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ParallelIOMgr::idx_recvFinalClusterSize_ClusterSizeMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ParallelIOMgr::recvFinalClusterSize(ClusterSizeMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::idx_recvFinalClusterSize_ClusterSizeMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ParallelIOMgr::recvFinalClusterSize(ClusterSizeMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ParallelIOMgr::idx_recvFinalClusterSize_ClusterSizeMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ParallelIOMgr::reg_recvFinalClusterSize_ClusterSizeMsg() {
  int epidx = CkRegisterEp("recvFinalClusterSize(ClusterSizeMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvFinalClusterSize_ClusterSizeMsg), CMessage_ClusterSizeMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)ClusterSizeMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ParallelIOMgr::_call_recvFinalClusterSize_ClusterSizeMsg(void* impl_msg, void* impl_obj_void)
{
  ParallelIOMgr* impl_obj = static_cast<ParallelIOMgr*>(impl_obj_void);
  impl_obj->recvFinalClusterSize((ClusterSizeMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receivePositions(CollectVectorVarMsg* impl_msg);
 */
void CProxy_ParallelIOMgr::receivePositions(CollectVectorVarMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::idx_receivePositions_CollectVectorVarMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ParallelIOMgr::idx_receivePositions_CollectVectorVarMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ParallelIOMgr::idx_receivePositions_CollectVectorVarMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ParallelIOMgr::receivePositions(CollectVectorVarMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::idx_receivePositions_CollectVectorVarMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ParallelIOMgr::receivePositions(CollectVectorVarMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ParallelIOMgr::idx_receivePositions_CollectVectorVarMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ParallelIOMgr::reg_receivePositions_CollectVectorVarMsg() {
  int epidx = CkRegisterEp("receivePositions(CollectVectorVarMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_receivePositions_CollectVectorVarMsg), CMessage_CollectVectorVarMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CollectVectorVarMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ParallelIOMgr::_call_receivePositions_CollectVectorVarMsg(void* impl_msg, void* impl_obj_void)
{
  ParallelIOMgr* impl_obj = static_cast<ParallelIOMgr*>(impl_obj_void);
  impl_obj->receivePositions((CollectVectorVarMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receiveVelocities(CollectVectorVarMsg* impl_msg);
 */
void CProxy_ParallelIOMgr::receiveVelocities(CollectVectorVarMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::idx_receiveVelocities_CollectVectorVarMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ParallelIOMgr::idx_receiveVelocities_CollectVectorVarMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ParallelIOMgr::idx_receiveVelocities_CollectVectorVarMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ParallelIOMgr::receiveVelocities(CollectVectorVarMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::idx_receiveVelocities_CollectVectorVarMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ParallelIOMgr::receiveVelocities(CollectVectorVarMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ParallelIOMgr::idx_receiveVelocities_CollectVectorVarMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ParallelIOMgr::reg_receiveVelocities_CollectVectorVarMsg() {
  int epidx = CkRegisterEp("receiveVelocities(CollectVectorVarMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_receiveVelocities_CollectVectorVarMsg), CMessage_CollectVectorVarMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CollectVectorVarMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ParallelIOMgr::_call_receiveVelocities_CollectVectorVarMsg(void* impl_msg, void* impl_obj_void)
{
  ParallelIOMgr* impl_obj = static_cast<ParallelIOMgr*>(impl_obj_void);
  impl_obj->receiveVelocities((CollectVectorVarMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receiveForces(CollectVectorVarMsg* impl_msg);
 */
void CProxy_ParallelIOMgr::receiveForces(CollectVectorVarMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::idx_receiveForces_CollectVectorVarMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ParallelIOMgr::idx_receiveForces_CollectVectorVarMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ParallelIOMgr::idx_receiveForces_CollectVectorVarMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ParallelIOMgr::receiveForces(CollectVectorVarMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::idx_receiveForces_CollectVectorVarMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ParallelIOMgr::receiveForces(CollectVectorVarMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ParallelIOMgr::idx_receiveForces_CollectVectorVarMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ParallelIOMgr::reg_receiveForces_CollectVectorVarMsg() {
  int epidx = CkRegisterEp("receiveForces(CollectVectorVarMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_receiveForces_CollectVectorVarMsg), CMessage_CollectVectorVarMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CollectVectorVarMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ParallelIOMgr::_call_receiveForces_CollectVectorVarMsg(void* impl_msg, void* impl_obj_void)
{
  ParallelIOMgr* impl_obj = static_cast<ParallelIOMgr*>(impl_obj_void);
  impl_obj->receiveForces((CollectVectorVarMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void disposePositions(int seq, double prevT);
 */
void CProxy_ParallelIOMgr::disposePositions(int seq, double prevT, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int seq, double prevT
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|seq;
    implP|prevT;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|seq;
    implP|prevT;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::idx_disposePositions_marshall15(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ParallelIOMgr::idx_disposePositions_marshall15(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ParallelIOMgr::idx_disposePositions_marshall15(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ParallelIOMgr::disposePositions(int seq, double prevT, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int seq, double prevT
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|seq;
    implP|prevT;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|seq;
    implP|prevT;
  }
  CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::idx_disposePositions_marshall15(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ParallelIOMgr::disposePositions(int seq, double prevT, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int seq, double prevT
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|seq;
    implP|prevT;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|seq;
    implP|prevT;
  }
  CkSendMsgBranchGroup(CkIndex_ParallelIOMgr::idx_disposePositions_marshall15(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ParallelIOMgr::reg_disposePositions_marshall15() {
  int epidx = CkRegisterEp("disposePositions(int seq, double prevT)",
      reinterpret_cast<CkCallFnPtr>(_call_disposePositions_marshall15), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_disposePositions_marshall15);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_disposePositions_marshall15);

  return epidx;
}

void CkIndex_ParallelIOMgr::_call_disposePositions_marshall15(void* impl_msg, void* impl_obj_void)
{
  ParallelIOMgr* impl_obj = static_cast<ParallelIOMgr*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int seq, double prevT*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> seq;
  implP|seq;
  PUP::detail::TemporaryObjectHolder<double> prevT;
  implP|prevT;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->disposePositions(std::move(seq.t), std::move(prevT.t));
}
int CkIndex_ParallelIOMgr::_callmarshall_disposePositions_marshall15(char* impl_buf, void* impl_obj_void) {
  ParallelIOMgr* impl_obj = static_cast<ParallelIOMgr*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int seq, double prevT*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> seq;
  implP|seq;
  PUP::detail::TemporaryObjectHolder<double> prevT;
  implP|prevT;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->disposePositions(std::move(seq.t), std::move(prevT.t));
  return implP.size();
}
void CkIndex_ParallelIOMgr::_marshallmessagepup_disposePositions_marshall15(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int seq, double prevT*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> seq;
  implP|seq;
  PUP::detail::TemporaryObjectHolder<double> prevT;
  implP|prevT;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("seq");
  implDestP|seq;
  if (implDestP.hasComments()) implDestP.comment("prevT");
  implDestP|prevT;
}
PUPable_def(SINGLE_ARG(Closure_ParallelIOMgr::disposePositions_15_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void disposeVelocities(int seq, double prevT);
 */
void CProxy_ParallelIOMgr::disposeVelocities(int seq, double prevT, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int seq, double prevT
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|seq;
    implP|prevT;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|seq;
    implP|prevT;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::idx_disposeVelocities_marshall16(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ParallelIOMgr::idx_disposeVelocities_marshall16(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ParallelIOMgr::idx_disposeVelocities_marshall16(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ParallelIOMgr::disposeVelocities(int seq, double prevT, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int seq, double prevT
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|seq;
    implP|prevT;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|seq;
    implP|prevT;
  }
  CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::idx_disposeVelocities_marshall16(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ParallelIOMgr::disposeVelocities(int seq, double prevT, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int seq, double prevT
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|seq;
    implP|prevT;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|seq;
    implP|prevT;
  }
  CkSendMsgBranchGroup(CkIndex_ParallelIOMgr::idx_disposeVelocities_marshall16(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ParallelIOMgr::reg_disposeVelocities_marshall16() {
  int epidx = CkRegisterEp("disposeVelocities(int seq, double prevT)",
      reinterpret_cast<CkCallFnPtr>(_call_disposeVelocities_marshall16), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_disposeVelocities_marshall16);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_disposeVelocities_marshall16);

  return epidx;
}

void CkIndex_ParallelIOMgr::_call_disposeVelocities_marshall16(void* impl_msg, void* impl_obj_void)
{
  ParallelIOMgr* impl_obj = static_cast<ParallelIOMgr*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int seq, double prevT*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> seq;
  implP|seq;
  PUP::detail::TemporaryObjectHolder<double> prevT;
  implP|prevT;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->disposeVelocities(std::move(seq.t), std::move(prevT.t));
}
int CkIndex_ParallelIOMgr::_callmarshall_disposeVelocities_marshall16(char* impl_buf, void* impl_obj_void) {
  ParallelIOMgr* impl_obj = static_cast<ParallelIOMgr*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int seq, double prevT*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> seq;
  implP|seq;
  PUP::detail::TemporaryObjectHolder<double> prevT;
  implP|prevT;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->disposeVelocities(std::move(seq.t), std::move(prevT.t));
  return implP.size();
}
void CkIndex_ParallelIOMgr::_marshallmessagepup_disposeVelocities_marshall16(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int seq, double prevT*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> seq;
  implP|seq;
  PUP::detail::TemporaryObjectHolder<double> prevT;
  implP|prevT;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("seq");
  implDestP|seq;
  if (implDestP.hasComments()) implDestP.comment("prevT");
  implDestP|prevT;
}
PUPable_def(SINGLE_ARG(Closure_ParallelIOMgr::disposeVelocities_16_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void disposeForces(int seq, double prevT);
 */
void CProxy_ParallelIOMgr::disposeForces(int seq, double prevT, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int seq, double prevT
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|seq;
    implP|prevT;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|seq;
    implP|prevT;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::idx_disposeForces_marshall17(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ParallelIOMgr::idx_disposeForces_marshall17(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ParallelIOMgr::idx_disposeForces_marshall17(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ParallelIOMgr::disposeForces(int seq, double prevT, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int seq, double prevT
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|seq;
    implP|prevT;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|seq;
    implP|prevT;
  }
  CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::idx_disposeForces_marshall17(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ParallelIOMgr::disposeForces(int seq, double prevT, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int seq, double prevT
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|seq;
    implP|prevT;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|seq;
    implP|prevT;
  }
  CkSendMsgBranchGroup(CkIndex_ParallelIOMgr::idx_disposeForces_marshall17(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ParallelIOMgr::reg_disposeForces_marshall17() {
  int epidx = CkRegisterEp("disposeForces(int seq, double prevT)",
      reinterpret_cast<CkCallFnPtr>(_call_disposeForces_marshall17), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_disposeForces_marshall17);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_disposeForces_marshall17);

  return epidx;
}

void CkIndex_ParallelIOMgr::_call_disposeForces_marshall17(void* impl_msg, void* impl_obj_void)
{
  ParallelIOMgr* impl_obj = static_cast<ParallelIOMgr*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int seq, double prevT*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> seq;
  implP|seq;
  PUP::detail::TemporaryObjectHolder<double> prevT;
  implP|prevT;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->disposeForces(std::move(seq.t), std::move(prevT.t));
}
int CkIndex_ParallelIOMgr::_callmarshall_disposeForces_marshall17(char* impl_buf, void* impl_obj_void) {
  ParallelIOMgr* impl_obj = static_cast<ParallelIOMgr*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int seq, double prevT*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> seq;
  implP|seq;
  PUP::detail::TemporaryObjectHolder<double> prevT;
  implP|prevT;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->disposeForces(std::move(seq.t), std::move(prevT.t));
  return implP.size();
}
void CkIndex_ParallelIOMgr::_marshallmessagepup_disposeForces_marshall17(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int seq, double prevT*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> seq;
  implP|seq;
  PUP::detail::TemporaryObjectHolder<double> prevT;
  implP|prevT;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("seq");
  implDestP|seq;
  if (implDestP.hasComments()) implDestP.comment("prevT");
  implDestP|prevT;
}
PUPable_def(SINGLE_ARG(Closure_ParallelIOMgr::disposeForces_17_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void wrapCoor(int seq, const Lattice &lat);
 */
void CProxy_ParallelIOMgr::wrapCoor(int seq, const Lattice &lat, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int seq, const Lattice &lat
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|seq;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Lattice>::type>::type &)lat;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|seq;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Lattice>::type>::type &)lat;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::idx_wrapCoor_marshall18(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ParallelIOMgr::idx_wrapCoor_marshall18(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ParallelIOMgr::idx_wrapCoor_marshall18(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ParallelIOMgr::wrapCoor(int seq, const Lattice &lat, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int seq, const Lattice &lat
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|seq;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Lattice>::type>::type &)lat;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|seq;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Lattice>::type>::type &)lat;
  }
  CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::idx_wrapCoor_marshall18(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ParallelIOMgr::wrapCoor(int seq, const Lattice &lat, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int seq, const Lattice &lat
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|seq;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Lattice>::type>::type &)lat;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|seq;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Lattice>::type>::type &)lat;
  }
  CkSendMsgBranchGroup(CkIndex_ParallelIOMgr::idx_wrapCoor_marshall18(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ParallelIOMgr::reg_wrapCoor_marshall18() {
  int epidx = CkRegisterEp("wrapCoor(int seq, const Lattice &lat)",
      reinterpret_cast<CkCallFnPtr>(_call_wrapCoor_marshall18), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_wrapCoor_marshall18);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_wrapCoor_marshall18);

  return epidx;
}

void CkIndex_ParallelIOMgr::_call_wrapCoor_marshall18(void* impl_msg, void* impl_obj_void)
{
  ParallelIOMgr* impl_obj = static_cast<ParallelIOMgr*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int seq, const Lattice &lat*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> seq;
  implP|seq;
  PUP::detail::TemporaryObjectHolder<Lattice> lat;
  implP|lat;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->wrapCoor(std::move(seq.t), std::move(lat.t));
}
int CkIndex_ParallelIOMgr::_callmarshall_wrapCoor_marshall18(char* impl_buf, void* impl_obj_void) {
  ParallelIOMgr* impl_obj = static_cast<ParallelIOMgr*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int seq, const Lattice &lat*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> seq;
  implP|seq;
  PUP::detail::TemporaryObjectHolder<Lattice> lat;
  implP|lat;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->wrapCoor(std::move(seq.t), std::move(lat.t));
  return implP.size();
}
void CkIndex_ParallelIOMgr::_marshallmessagepup_wrapCoor_marshall18(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int seq, const Lattice &lat*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> seq;
  implP|seq;
  PUP::detail::TemporaryObjectHolder<Lattice> lat;
  implP|lat;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("seq");
  implDestP|seq;
  if (implDestP.hasComments()) implDestP.comment("lat");
  implDestP|lat;
}
PUPable_def(SINGLE_ARG(Closure_ParallelIOMgr::wrapCoor_18_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvClusterCoor(ClusterCoorMsg* impl_msg);
 */
void CProxy_ParallelIOMgr::recvClusterCoor(ClusterCoorMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::idx_recvClusterCoor_ClusterCoorMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ParallelIOMgr::idx_recvClusterCoor_ClusterCoorMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ParallelIOMgr::idx_recvClusterCoor_ClusterCoorMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ParallelIOMgr::recvClusterCoor(ClusterCoorMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::idx_recvClusterCoor_ClusterCoorMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ParallelIOMgr::recvClusterCoor(ClusterCoorMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ParallelIOMgr::idx_recvClusterCoor_ClusterCoorMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ParallelIOMgr::reg_recvClusterCoor_ClusterCoorMsg() {
  int epidx = CkRegisterEp("recvClusterCoor(ClusterCoorMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvClusterCoor_ClusterCoorMsg), CMessage_ClusterCoorMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)ClusterCoorMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ParallelIOMgr::_call_recvClusterCoor_ClusterCoorMsg(void* impl_msg, void* impl_obj_void)
{
  ParallelIOMgr* impl_obj = static_cast<ParallelIOMgr*>(impl_obj_void);
  impl_obj->recvClusterCoor((ClusterCoorMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvFinalClusterCoor(ClusterCoorMsg* impl_msg);
 */
void CProxy_ParallelIOMgr::recvFinalClusterCoor(ClusterCoorMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ParallelIOMgr::idx_recvFinalClusterCoor_ClusterCoorMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ParallelIOMgr::idx_recvFinalClusterCoor_ClusterCoorMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ParallelIOMgr::idx_recvFinalClusterCoor_ClusterCoorMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ParallelIOMgr::recvFinalClusterCoor(ClusterCoorMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::idx_recvFinalClusterCoor_ClusterCoorMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ParallelIOMgr::recvFinalClusterCoor(ClusterCoorMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_ParallelIOMgr::idx_recvFinalClusterCoor_ClusterCoorMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ParallelIOMgr::reg_recvFinalClusterCoor_ClusterCoorMsg() {
  int epidx = CkRegisterEp("recvFinalClusterCoor(ClusterCoorMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvFinalClusterCoor_ClusterCoorMsg), CMessage_ClusterCoorMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)ClusterCoorMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ParallelIOMgr::_call_recvFinalClusterCoor_ClusterCoorMsg(void* impl_msg, void* impl_obj_void)
{
  ParallelIOMgr* impl_obj = static_cast<ParallelIOMgr*>(impl_obj_void);
  impl_obj->recvFinalClusterCoor((ClusterCoorMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ParallelIOMgr();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvAtomsMGrp(MoveInputAtomsMsg* impl_msg);
 */
void CProxySection_ParallelIOMgr::recvAtomsMGrp(MoveInputAtomsMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::idx_recvAtomsMGrp_MoveInputAtomsMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::idx_recvAtomsMGrp_MoveInputAtomsMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvMolInfo(MolInfoMsg* impl_msg);
 */
void CProxySection_ParallelIOMgr::recvMolInfo(MolInfoMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::idx_recvMolInfo_MolInfoMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::idx_recvMolInfo_MolInfoMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void bcastMolInfo(MolInfoMsg* impl_msg);
 */
void CProxySection_ParallelIOMgr::bcastMolInfo(MolInfoMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::idx_bcastMolInfo_MolInfoMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::idx_bcastMolInfo_MolInfoMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvHydroBasedCounter(HydroBasedMsg* impl_msg);
 */
void CProxySection_ParallelIOMgr::recvHydroBasedCounter(HydroBasedMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::idx_recvHydroBasedCounter_HydroBasedMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::idx_recvHydroBasedCounter_HydroBasedMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void bcastHydroBasedCounter(HydroBasedMsg* impl_msg);
 */
void CProxySection_ParallelIOMgr::bcastHydroBasedCounter(HydroBasedMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::idx_bcastHydroBasedCounter_HydroBasedMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::idx_bcastHydroBasedCounter_HydroBasedMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvAtomsCntPerPatch(AtomsCntPerPatchMsg* impl_msg);
 */
void CProxySection_ParallelIOMgr::recvAtomsCntPerPatch(AtomsCntPerPatchMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::idx_recvAtomsCntPerPatch_AtomsCntPerPatchMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::idx_recvAtomsCntPerPatch_AtomsCntPerPatchMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ackAtomsToHomePatchProcs();
 */
void CProxySection_ParallelIOMgr::ackAtomsToHomePatchProcs(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::idx_ackAtomsToHomePatchProcs_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::idx_ackAtomsToHomePatchProcs_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvAtomsToHomePatchProcs(MovePatchAtomsMsg* impl_msg);
 */
void CProxySection_ParallelIOMgr::recvAtomsToHomePatchProcs(MovePatchAtomsMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::idx_recvAtomsToHomePatchProcs_MovePatchAtomsMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::idx_recvAtomsToHomePatchProcs_MovePatchAtomsMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvClusterSize(ClusterSizeMsg* impl_msg);
 */
void CProxySection_ParallelIOMgr::recvClusterSize(ClusterSizeMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::idx_recvClusterSize_ClusterSizeMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::idx_recvClusterSize_ClusterSizeMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvFinalClusterSize(ClusterSizeMsg* impl_msg);
 */
void CProxySection_ParallelIOMgr::recvFinalClusterSize(ClusterSizeMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::idx_recvFinalClusterSize_ClusterSizeMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::idx_recvFinalClusterSize_ClusterSizeMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receivePositions(CollectVectorVarMsg* impl_msg);
 */
void CProxySection_ParallelIOMgr::receivePositions(CollectVectorVarMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::idx_receivePositions_CollectVectorVarMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::idx_receivePositions_CollectVectorVarMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receiveVelocities(CollectVectorVarMsg* impl_msg);
 */
void CProxySection_ParallelIOMgr::receiveVelocities(CollectVectorVarMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::idx_receiveVelocities_CollectVectorVarMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::idx_receiveVelocities_CollectVectorVarMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receiveForces(CollectVectorVarMsg* impl_msg);
 */
void CProxySection_ParallelIOMgr::receiveForces(CollectVectorVarMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::idx_receiveForces_CollectVectorVarMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::idx_receiveForces_CollectVectorVarMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void disposePositions(int seq, double prevT);
 */
void CProxySection_ParallelIOMgr::disposePositions(int seq, double prevT, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int seq, double prevT
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|seq;
    implP|prevT;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|seq;
    implP|prevT;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::idx_disposePositions_marshall15(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::idx_disposePositions_marshall15(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void disposeVelocities(int seq, double prevT);
 */
void CProxySection_ParallelIOMgr::disposeVelocities(int seq, double prevT, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int seq, double prevT
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|seq;
    implP|prevT;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|seq;
    implP|prevT;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::idx_disposeVelocities_marshall16(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::idx_disposeVelocities_marshall16(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void disposeForces(int seq, double prevT);
 */
void CProxySection_ParallelIOMgr::disposeForces(int seq, double prevT, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int seq, double prevT
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|seq;
    implP|prevT;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|seq;
    implP|prevT;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::idx_disposeForces_marshall17(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::idx_disposeForces_marshall17(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void wrapCoor(int seq, const Lattice &lat);
 */
void CProxySection_ParallelIOMgr::wrapCoor(int seq, const Lattice &lat, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int seq, const Lattice &lat
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|seq;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Lattice>::type>::type &)lat;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|seq;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Lattice>::type>::type &)lat;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::idx_wrapCoor_marshall18(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::idx_wrapCoor_marshall18(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvClusterCoor(ClusterCoorMsg* impl_msg);
 */
void CProxySection_ParallelIOMgr::recvClusterCoor(ClusterCoorMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::idx_recvClusterCoor_ClusterCoorMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::idx_recvClusterCoor_ClusterCoorMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvFinalClusterCoor(ClusterCoorMsg* impl_msg);
 */
void CProxySection_ParallelIOMgr::recvFinalClusterCoor(ClusterCoorMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ParallelIOMgr::idx_recvFinalClusterCoor_ClusterCoorMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ParallelIOMgr::idx_recvFinalClusterCoor_ClusterCoorMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_ParallelIOMgr::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,ParallelIOMgr::isIrreducible());
  // REG: ParallelIOMgr();
  idx_ParallelIOMgr_void();
  CkRegisterDefaultCtor(__idx, idx_ParallelIOMgr_void());

  // REG: void recvAtomsMGrp(MoveInputAtomsMsg* impl_msg);
  idx_recvAtomsMGrp_MoveInputAtomsMsg();

  // REG: void recvMolInfo(MolInfoMsg* impl_msg);
  idx_recvMolInfo_MolInfoMsg();

  // REG: void bcastMolInfo(MolInfoMsg* impl_msg);
  idx_bcastMolInfo_MolInfoMsg();

  // REG: void recvHydroBasedCounter(HydroBasedMsg* impl_msg);
  idx_recvHydroBasedCounter_HydroBasedMsg();

  // REG: void bcastHydroBasedCounter(HydroBasedMsg* impl_msg);
  idx_bcastHydroBasedCounter_HydroBasedMsg();

  // REG: void recvAtomsCntPerPatch(AtomsCntPerPatchMsg* impl_msg);
  idx_recvAtomsCntPerPatch_AtomsCntPerPatchMsg();

  // REG: void ackAtomsToHomePatchProcs();
  idx_ackAtomsToHomePatchProcs_void();

  // REG: void recvAtomsToHomePatchProcs(MovePatchAtomsMsg* impl_msg);
  idx_recvAtomsToHomePatchProcs_MovePatchAtomsMsg();

  // REG: void recvClusterSize(ClusterSizeMsg* impl_msg);
  idx_recvClusterSize_ClusterSizeMsg();

  // REG: void recvFinalClusterSize(ClusterSizeMsg* impl_msg);
  idx_recvFinalClusterSize_ClusterSizeMsg();

  // REG: void receivePositions(CollectVectorVarMsg* impl_msg);
  idx_receivePositions_CollectVectorVarMsg();

  // REG: void receiveVelocities(CollectVectorVarMsg* impl_msg);
  idx_receiveVelocities_CollectVectorVarMsg();

  // REG: void receiveForces(CollectVectorVarMsg* impl_msg);
  idx_receiveForces_CollectVectorVarMsg();

  // REG: void disposePositions(int seq, double prevT);
  idx_disposePositions_marshall15();

  // REG: void disposeVelocities(int seq, double prevT);
  idx_disposeVelocities_marshall16();

  // REG: void disposeForces(int seq, double prevT);
  idx_disposeForces_marshall17();

  // REG: void wrapCoor(int seq, const Lattice &lat);
  idx_wrapCoor_marshall18();

  // REG: void recvClusterCoor(ClusterCoorMsg* impl_msg);
  idx_recvClusterCoor_ClusterCoorMsg();

  // REG: void recvFinalClusterCoor(ClusterCoorMsg* impl_msg);
  idx_recvFinalClusterCoor_ClusterCoorMsg();

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerParallelIOMgr(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: message MolInfoMsg;
*/
CMessage_MolInfoMsg::__register("MolInfoMsg", sizeof(MolInfoMsg),(CkPackFnPtr) MolInfoMsg::pack,(CkUnpackFnPtr) MolInfoMsg::unpack);

/* REG: message HydroBasedMsg;
*/
CMessage_HydroBasedMsg::__register("HydroBasedMsg", sizeof(HydroBasedMsg),(CkPackFnPtr) HydroBasedMsg::pack,(CkUnpackFnPtr) HydroBasedMsg::unpack);

/* REG: message MoveInputAtomsMsg{
InputAtom atomList[];
}
;
*/
CMessage_MoveInputAtomsMsg::__register("MoveInputAtomsMsg", sizeof(MoveInputAtomsMsg),(CkPackFnPtr) MoveInputAtomsMsg::pack,(CkUnpackFnPtr) MoveInputAtomsMsg::unpack);

/* REG: message AtomsCntPerPatchMsg{
PatchID pidList[];
unsigned short atomsCntList[];
unsigned short fixedAtomsCntList[];
}
;
*/
CMessage_AtomsCntPerPatchMsg::__register("AtomsCntPerPatchMsg", sizeof(AtomsCntPerPatchMsg),(CkPackFnPtr) AtomsCntPerPatchMsg::pack,(CkUnpackFnPtr) AtomsCntPerPatchMsg::unpack);

/* REG: message MovePatchAtomsMsg{
PatchID pidList[];
int sizeList[];
FullAtom allAtoms[];
}
;
*/
CMessage_MovePatchAtomsMsg::__register("MovePatchAtomsMsg", sizeof(MovePatchAtomsMsg),(CkPackFnPtr) MovePatchAtomsMsg::pack,(CkUnpackFnPtr) MovePatchAtomsMsg::unpack);

/* REG: message ClusterSizeMsg;
*/
CMessage_ClusterSizeMsg::__register("ClusterSizeMsg", sizeof(ClusterSizeMsg),(CkPackFnPtr) ClusterSizeMsg::pack,(CkUnpackFnPtr) ClusterSizeMsg::unpack);

/* REG: message ClusterCoorMsg;
*/
CMessage_ClusterCoorMsg::__register("ClusterCoorMsg", sizeof(ClusterCoorMsg),(CkPackFnPtr) ClusterCoorMsg::pack,(CkUnpackFnPtr) ClusterCoorMsg::unpack);

/* REG: group ParallelIOMgr: IrrGroup{
ParallelIOMgr();
void recvAtomsMGrp(MoveInputAtomsMsg* impl_msg);
void recvMolInfo(MolInfoMsg* impl_msg);
void bcastMolInfo(MolInfoMsg* impl_msg);
void recvHydroBasedCounter(HydroBasedMsg* impl_msg);
void bcastHydroBasedCounter(HydroBasedMsg* impl_msg);
void recvAtomsCntPerPatch(AtomsCntPerPatchMsg* impl_msg);
void ackAtomsToHomePatchProcs();
void recvAtomsToHomePatchProcs(MovePatchAtomsMsg* impl_msg);
void recvClusterSize(ClusterSizeMsg* impl_msg);
void recvFinalClusterSize(ClusterSizeMsg* impl_msg);
void receivePositions(CollectVectorVarMsg* impl_msg);
void receiveVelocities(CollectVectorVarMsg* impl_msg);
void receiveForces(CollectVectorVarMsg* impl_msg);
void disposePositions(int seq, double prevT);
void disposeVelocities(int seq, double prevT);
void disposeForces(int seq, double prevT);
void wrapCoor(int seq, const Lattice &lat);
void recvClusterCoor(ClusterCoorMsg* impl_msg);
void recvFinalClusterCoor(ClusterCoorMsg* impl_msg);
};
*/
  CkIndex_ParallelIOMgr::__register("ParallelIOMgr", sizeof(ParallelIOMgr));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_ParallelIOMgr::virtual_pup(PUP::er &p) {
    recursive_pup<ParallelIOMgr>(dynamic_cast<ParallelIOMgr*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
