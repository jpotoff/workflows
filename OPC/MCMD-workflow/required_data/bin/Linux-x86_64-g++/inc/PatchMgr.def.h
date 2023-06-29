









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
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: message MovePatchesMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_MovePatchesMsg::operator new(size_t s){
  return MovePatchesMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_MovePatchesMsg::operator new(size_t s, int* sz){
  return MovePatchesMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_MovePatchesMsg::operator new(size_t s, int* sz,const int pb){
  return MovePatchesMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_MovePatchesMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return MovePatchesMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_MovePatchesMsg::operator new(size_t s, const int p) {
  return MovePatchesMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_MovePatchesMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return MovePatchesMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_MovePatchesMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_MovePatchesMsg::CMessage_MovePatchesMsg() {
MovePatchesMsg *newmsg = (MovePatchesMsg *)this;
}
void CMessage_MovePatchesMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_MovePatchesMsg::pack(MovePatchesMsg *msg) {
  return (void *) msg;
}
MovePatchesMsg* CMessage_MovePatchesMsg::unpack(void* buf) {
  MovePatchesMsg *msg = (MovePatchesMsg *) buf;
  return msg;
}
int CMessage_MovePatchesMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message MigrateAtomsMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_MigrateAtomsMsg::operator new(size_t s){
  return MigrateAtomsMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_MigrateAtomsMsg::operator new(size_t s, int* sz){
  return MigrateAtomsMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_MigrateAtomsMsg::operator new(size_t s, int* sz,const int pb){
  return MigrateAtomsMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_MigrateAtomsMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return MigrateAtomsMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_MigrateAtomsMsg::operator new(size_t s, const int p) {
  return MigrateAtomsMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_MigrateAtomsMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return MigrateAtomsMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_MigrateAtomsMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_MigrateAtomsMsg::CMessage_MigrateAtomsMsg() {
MigrateAtomsMsg *newmsg = (MigrateAtomsMsg *)this;
}
void CMessage_MigrateAtomsMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_MigrateAtomsMsg::pack(MigrateAtomsMsg *msg) {
  return (void *) msg;
}
MigrateAtomsMsg* CMessage_MigrateAtomsMsg::unpack(void* buf) {
  MigrateAtomsMsg *msg = (MigrateAtomsMsg *) buf;
  return msg;
}
int CMessage_MigrateAtomsMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message MigrateAtomsCombinedMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_MigrateAtomsCombinedMsg::operator new(size_t s){
  return MigrateAtomsCombinedMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_MigrateAtomsCombinedMsg::operator new(size_t s, int* sz){
  return MigrateAtomsCombinedMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_MigrateAtomsCombinedMsg::operator new(size_t s, int* sz,const int pb){
  return MigrateAtomsCombinedMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_MigrateAtomsCombinedMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return MigrateAtomsCombinedMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_MigrateAtomsCombinedMsg::operator new(size_t s, const int p) {
  return MigrateAtomsCombinedMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_MigrateAtomsCombinedMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return MigrateAtomsCombinedMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_MigrateAtomsCombinedMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_MigrateAtomsCombinedMsg::CMessage_MigrateAtomsCombinedMsg() {
MigrateAtomsCombinedMsg *newmsg = (MigrateAtomsCombinedMsg *)this;
}
void CMessage_MigrateAtomsCombinedMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_MigrateAtomsCombinedMsg::pack(MigrateAtomsCombinedMsg *msg) {
  return (void *) msg;
}
MigrateAtomsCombinedMsg* CMessage_MigrateAtomsCombinedMsg::unpack(void* buf) {
  MigrateAtomsCombinedMsg *msg = (MigrateAtomsCombinedMsg *) buf;
  return msg;
}
int CMessage_MigrateAtomsCombinedMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message MoveAtomMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_MoveAtomMsg::operator new(size_t s){
  return MoveAtomMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_MoveAtomMsg::operator new(size_t s, int* sz){
  return MoveAtomMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_MoveAtomMsg::operator new(size_t s, int* sz,const int pb){
  return MoveAtomMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_MoveAtomMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return MoveAtomMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_MoveAtomMsg::operator new(size_t s, const int p) {
  return MoveAtomMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_MoveAtomMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return MoveAtomMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_MoveAtomMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_MoveAtomMsg::CMessage_MoveAtomMsg() {
MoveAtomMsg *newmsg = (MoveAtomMsg *)this;
}
void CMessage_MoveAtomMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_MoveAtomMsg::pack(MoveAtomMsg *msg) {
  return (void *) msg;
}
MoveAtomMsg* CMessage_MoveAtomMsg::unpack(void* buf) {
  MoveAtomMsg *msg = (MoveAtomMsg *) buf;
  return msg;
}
int CMessage_MoveAtomMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message MoveAllByMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_MoveAllByMsg::operator new(size_t s){
  return MoveAllByMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_MoveAllByMsg::operator new(size_t s, int* sz){
  return MoveAllByMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_MoveAllByMsg::operator new(size_t s, int* sz,const int pb){
  return MoveAllByMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_MoveAllByMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return MoveAllByMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_MoveAllByMsg::operator new(size_t s, const int p) {
  return MoveAllByMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_MoveAllByMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return MoveAllByMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_MoveAllByMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_MoveAllByMsg::CMessage_MoveAllByMsg() {
MoveAllByMsg *newmsg = (MoveAllByMsg *)this;
}
void CMessage_MoveAllByMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_MoveAllByMsg::pack(MoveAllByMsg *msg) {
  return (void *) msg;
}
MoveAllByMsg* CMessage_MoveAllByMsg::unpack(void* buf) {
  MoveAllByMsg *msg = (MoveAllByMsg *) buf;
  return msg;
}
int CMessage_MoveAllByMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message SetLatticeMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_SetLatticeMsg::operator new(size_t s){
  return SetLatticeMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_SetLatticeMsg::operator new(size_t s, int* sz){
  return SetLatticeMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_SetLatticeMsg::operator new(size_t s, int* sz,const int pb){
  return SetLatticeMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_SetLatticeMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return SetLatticeMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_SetLatticeMsg::operator new(size_t s, const int p) {
  return SetLatticeMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_SetLatticeMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return SetLatticeMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_SetLatticeMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_SetLatticeMsg::CMessage_SetLatticeMsg() {
SetLatticeMsg *newmsg = (SetLatticeMsg *)this;
}
void CMessage_SetLatticeMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_SetLatticeMsg::pack(SetLatticeMsg *msg) {
  return (void *) msg;
}
SetLatticeMsg* CMessage_SetLatticeMsg::unpack(void* buf) {
  SetLatticeMsg *msg = (SetLatticeMsg *) buf;
  return msg;
}
int CMessage_SetLatticeMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message CheckpointAtomsReqMsg{
char key[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_CheckpointAtomsReqMsg::operator new(size_t s){
  return CheckpointAtomsReqMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_CheckpointAtomsReqMsg::operator new(size_t s, int* sz){
  return CheckpointAtomsReqMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_CheckpointAtomsReqMsg::operator new(size_t s, int* sz,const int pb){
  return CheckpointAtomsReqMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_CheckpointAtomsReqMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return CheckpointAtomsReqMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_CheckpointAtomsReqMsg::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return CheckpointAtomsReqMsg::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_CheckpointAtomsReqMsg::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return CheckpointAtomsReqMsg::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_CheckpointAtomsReqMsg::operator new(size_t s, int sz0, const int p, const GroupDepNum groupDepNum) {
  int sizes[1];
  sizes[0] = sz0;
  return CheckpointAtomsReqMsg::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_CheckpointAtomsReqMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(char)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb, groupDepNum);
}
CMessage_CheckpointAtomsReqMsg::CMessage_CheckpointAtomsReqMsg() {
CheckpointAtomsReqMsg *newmsg = (CheckpointAtomsReqMsg *)this;
  newmsg->key = (char *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
void CMessage_CheckpointAtomsReqMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_CheckpointAtomsReqMsg::pack(CheckpointAtomsReqMsg *msg) {
  msg->key = (char *) ((char *)msg->key - (char *)msg);
  return (void *) msg;
}
CheckpointAtomsReqMsg* CMessage_CheckpointAtomsReqMsg::unpack(void* buf) {
  CheckpointAtomsReqMsg *msg = (CheckpointAtomsReqMsg *) buf;
  msg->key = (char *) ((size_t)msg->key + (char *)msg);
  return msg;
}
int CMessage_CheckpointAtomsReqMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message CheckpointAtomsMsg{
FullAtom atoms[];
char key[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_CheckpointAtomsMsg::operator new(size_t s){
  return CheckpointAtomsMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_CheckpointAtomsMsg::operator new(size_t s, int* sz){
  return CheckpointAtomsMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_CheckpointAtomsMsg::operator new(size_t s, int* sz,const int pb){
  return CheckpointAtomsMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_CheckpointAtomsMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return CheckpointAtomsMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_CheckpointAtomsMsg::operator new(size_t s, int sz0, int sz1) {
  int sizes[2];
  sizes[0] = sz0;
  sizes[1] = sz1;
  return CheckpointAtomsMsg::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_CheckpointAtomsMsg::operator new(size_t s, int sz0, int sz1, const int p) {
  int sizes[2];
  sizes[0] = sz0;
  sizes[1] = sz1;
  return CheckpointAtomsMsg::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_CheckpointAtomsMsg::operator new(size_t s, int sz0, int sz1, const int p, const GroupDepNum groupDepNum) {
  int sizes[2];
  sizes[0] = sz0;
  sizes[1] = sz1;
  return CheckpointAtomsMsg::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_CheckpointAtomsMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(FullAtom)*sizes[0]);
  if(sizes==0)
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[1] + ALIGN_DEFAULT(sizeof(char)*sizes[1]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[2], pb, groupDepNum);
}
CMessage_CheckpointAtomsMsg::CMessage_CheckpointAtomsMsg() {
CheckpointAtomsMsg *newmsg = (CheckpointAtomsMsg *)this;
  newmsg->atoms = (FullAtom *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
  newmsg->key = (char *) ((char *)newmsg + CkpvAccess(_offsets)[1]);
}
void CMessage_CheckpointAtomsMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_CheckpointAtomsMsg::pack(CheckpointAtomsMsg *msg) {
  msg->atoms = (FullAtom *) ((char *)msg->atoms - (char *)msg);
  msg->key = (char *) ((char *)msg->key - (char *)msg);
  return (void *) msg;
}
CheckpointAtomsMsg* CMessage_CheckpointAtomsMsg::unpack(void* buf) {
  CheckpointAtomsMsg *msg = (CheckpointAtomsMsg *) buf;
  msg->atoms = (FullAtom *) ((size_t)msg->atoms + (char *)msg);
  msg->key = (char *) ((size_t)msg->key + (char *)msg);
  return msg;
}
int CMessage_CheckpointAtomsMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message ExchangeAtomsReqMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_ExchangeAtomsReqMsg::operator new(size_t s){
  return ExchangeAtomsReqMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_ExchangeAtomsReqMsg::operator new(size_t s, int* sz){
  return ExchangeAtomsReqMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_ExchangeAtomsReqMsg::operator new(size_t s, int* sz,const int pb){
  return ExchangeAtomsReqMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_ExchangeAtomsReqMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return ExchangeAtomsReqMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_ExchangeAtomsReqMsg::operator new(size_t s, const int p) {
  return ExchangeAtomsReqMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_ExchangeAtomsReqMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return ExchangeAtomsReqMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_ExchangeAtomsReqMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_ExchangeAtomsReqMsg::CMessage_ExchangeAtomsReqMsg() {
ExchangeAtomsReqMsg *newmsg = (ExchangeAtomsReqMsg *)this;
}
void CMessage_ExchangeAtomsReqMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_ExchangeAtomsReqMsg::pack(ExchangeAtomsReqMsg *msg) {
  return (void *) msg;
}
ExchangeAtomsReqMsg* CMessage_ExchangeAtomsReqMsg::unpack(void* buf) {
  ExchangeAtomsReqMsg *msg = (ExchangeAtomsReqMsg *) buf;
  return msg;
}
int CMessage_ExchangeAtomsReqMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message ExchangeAtomsMsg{
FullAtom atoms[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_ExchangeAtomsMsg::operator new(size_t s){
  return ExchangeAtomsMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_ExchangeAtomsMsg::operator new(size_t s, int* sz){
  return ExchangeAtomsMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_ExchangeAtomsMsg::operator new(size_t s, int* sz,const int pb){
  return ExchangeAtomsMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_ExchangeAtomsMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return ExchangeAtomsMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_ExchangeAtomsMsg::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return ExchangeAtomsMsg::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_ExchangeAtomsMsg::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return ExchangeAtomsMsg::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_ExchangeAtomsMsg::operator new(size_t s, int sz0, const int p, const GroupDepNum groupDepNum) {
  int sizes[1];
  sizes[0] = sz0;
  return ExchangeAtomsMsg::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_ExchangeAtomsMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(FullAtom)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb, groupDepNum);
}
CMessage_ExchangeAtomsMsg::CMessage_ExchangeAtomsMsg() {
ExchangeAtomsMsg *newmsg = (ExchangeAtomsMsg *)this;
  newmsg->atoms = (FullAtom *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
void CMessage_ExchangeAtomsMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_ExchangeAtomsMsg::pack(ExchangeAtomsMsg *msg) {
  msg->atoms = (FullAtom *) ((char *)msg->atoms - (char *)msg);
  return (void *) msg;
}
ExchangeAtomsMsg* CMessage_ExchangeAtomsMsg::unpack(void* buf) {
  ExchangeAtomsMsg *msg = (ExchangeAtomsMsg *) buf;
  msg->atoms = (FullAtom *) ((size_t)msg->atoms + (char *)msg);
  return msg;
}
int CMessage_ExchangeAtomsMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group PatchMgr: IrrGroup{
PatchMgr();
void recvMovePatches(MovePatchesMsg* impl_msg);
void recvAtoms(MovePatchesMsg* impl_msg);
void recvMigrateAtomsCombined(MigrateAtomsCombinedMsg* impl_msg);
void moveAtom(MoveAtomMsg* impl_msg);
void moveAllBy(MoveAllByMsg* impl_msg);
void setLattice(SetLatticeMsg* impl_msg);
void recvCheckpointReq(CheckpointAtomsReqMsg* impl_msg);
void recvCheckpointLoad(CheckpointAtomsMsg* impl_msg);
void recvCheckpointStore(CheckpointAtomsMsg* impl_msg);
void recvCheckpointAck(CheckpointAtomsReqMsg* impl_msg);
void recvExchangeReq(ExchangeAtomsReqMsg* impl_msg);
void recvExchangeMsg(ExchangeAtomsMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_PatchMgr::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: PatchMgr();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvMovePatches(MovePatchesMsg* impl_msg);
 */
void CProxyElement_PatchMgr::recvMovePatches(MovePatchesMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PatchMgr::idx_recvMovePatches_MovePatchesMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_PatchMgr::idx_recvMovePatches_MovePatchesMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_PatchMgr::idx_recvMovePatches_MovePatchesMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvAtoms(MovePatchesMsg* impl_msg);
 */
void CProxyElement_PatchMgr::recvAtoms(MovePatchesMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PatchMgr::idx_recvAtoms_MovePatchesMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_PatchMgr::idx_recvAtoms_MovePatchesMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_PatchMgr::idx_recvAtoms_MovePatchesMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvMigrateAtomsCombined(MigrateAtomsCombinedMsg* impl_msg);
 */
void CProxyElement_PatchMgr::recvMigrateAtomsCombined(MigrateAtomsCombinedMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PatchMgr::idx_recvMigrateAtomsCombined_MigrateAtomsCombinedMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_PatchMgr::idx_recvMigrateAtomsCombined_MigrateAtomsCombinedMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_PatchMgr::idx_recvMigrateAtomsCombined_MigrateAtomsCombinedMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void moveAtom(MoveAtomMsg* impl_msg);
 */
void CProxyElement_PatchMgr::moveAtom(MoveAtomMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PatchMgr::idx_moveAtom_MoveAtomMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_PatchMgr::idx_moveAtom_MoveAtomMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_PatchMgr::idx_moveAtom_MoveAtomMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void moveAllBy(MoveAllByMsg* impl_msg);
 */
void CProxyElement_PatchMgr::moveAllBy(MoveAllByMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PatchMgr::idx_moveAllBy_MoveAllByMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_PatchMgr::idx_moveAllBy_MoveAllByMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_PatchMgr::idx_moveAllBy_MoveAllByMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setLattice(SetLatticeMsg* impl_msg);
 */
void CProxyElement_PatchMgr::setLattice(SetLatticeMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PatchMgr::idx_setLattice_SetLatticeMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_PatchMgr::idx_setLattice_SetLatticeMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_PatchMgr::idx_setLattice_SetLatticeMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvCheckpointReq(CheckpointAtomsReqMsg* impl_msg);
 */
void CProxyElement_PatchMgr::recvCheckpointReq(CheckpointAtomsReqMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PatchMgr::idx_recvCheckpointReq_CheckpointAtomsReqMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_PatchMgr::idx_recvCheckpointReq_CheckpointAtomsReqMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_PatchMgr::idx_recvCheckpointReq_CheckpointAtomsReqMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvCheckpointLoad(CheckpointAtomsMsg* impl_msg);
 */
void CProxyElement_PatchMgr::recvCheckpointLoad(CheckpointAtomsMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PatchMgr::idx_recvCheckpointLoad_CheckpointAtomsMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_PatchMgr::idx_recvCheckpointLoad_CheckpointAtomsMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_PatchMgr::idx_recvCheckpointLoad_CheckpointAtomsMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvCheckpointStore(CheckpointAtomsMsg* impl_msg);
 */
void CProxyElement_PatchMgr::recvCheckpointStore(CheckpointAtomsMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PatchMgr::idx_recvCheckpointStore_CheckpointAtomsMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_PatchMgr::idx_recvCheckpointStore_CheckpointAtomsMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_PatchMgr::idx_recvCheckpointStore_CheckpointAtomsMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvCheckpointAck(CheckpointAtomsReqMsg* impl_msg);
 */
void CProxyElement_PatchMgr::recvCheckpointAck(CheckpointAtomsReqMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PatchMgr::idx_recvCheckpointAck_CheckpointAtomsReqMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_PatchMgr::idx_recvCheckpointAck_CheckpointAtomsReqMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_PatchMgr::idx_recvCheckpointAck_CheckpointAtomsReqMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvExchangeReq(ExchangeAtomsReqMsg* impl_msg);
 */
void CProxyElement_PatchMgr::recvExchangeReq(ExchangeAtomsReqMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PatchMgr::idx_recvExchangeReq_ExchangeAtomsReqMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_PatchMgr::idx_recvExchangeReq_ExchangeAtomsReqMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_PatchMgr::idx_recvExchangeReq_ExchangeAtomsReqMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvExchangeMsg(ExchangeAtomsMsg* impl_msg);
 */
void CProxyElement_PatchMgr::recvExchangeMsg(ExchangeAtomsMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PatchMgr::idx_recvExchangeMsg_ExchangeAtomsMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_PatchMgr::idx_recvExchangeMsg_ExchangeAtomsMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_PatchMgr::idx_recvExchangeMsg_ExchangeAtomsMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: PatchMgr();
 */
CkGroupID CProxy_PatchMgr::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_PatchMgr::__idx, CkIndex_PatchMgr::idx_PatchMgr_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_PatchMgr::reg_PatchMgr_void() {
  int epidx = CkRegisterEp("PatchMgr()",
      reinterpret_cast<CkCallFnPtr>(_call_PatchMgr_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_PatchMgr::_call_PatchMgr_void(void* impl_msg, void* impl_obj_void)
{
  PatchMgr* impl_obj = static_cast<PatchMgr*>(impl_obj_void);
  new (impl_obj_void) PatchMgr();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvMovePatches(MovePatchesMsg* impl_msg);
 */
void CProxy_PatchMgr::recvMovePatches(MovePatchesMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PatchMgr::idx_recvMovePatches_MovePatchesMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_PatchMgr::idx_recvMovePatches_MovePatchesMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_PatchMgr::idx_recvMovePatches_MovePatchesMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_PatchMgr::recvMovePatches(MovePatchesMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_PatchMgr::idx_recvMovePatches_MovePatchesMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_PatchMgr::recvMovePatches(MovePatchesMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_PatchMgr::idx_recvMovePatches_MovePatchesMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_PatchMgr::reg_recvMovePatches_MovePatchesMsg() {
  int epidx = CkRegisterEp("recvMovePatches(MovePatchesMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvMovePatches_MovePatchesMsg), CMessage_MovePatchesMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)MovePatchesMsg::ckDebugPup);
  return epidx;
}

void CkIndex_PatchMgr::_call_recvMovePatches_MovePatchesMsg(void* impl_msg, void* impl_obj_void)
{
  PatchMgr* impl_obj = static_cast<PatchMgr*>(impl_obj_void);
  impl_obj->recvMovePatches((MovePatchesMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvAtoms(MovePatchesMsg* impl_msg);
 */
void CProxy_PatchMgr::recvAtoms(MovePatchesMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PatchMgr::idx_recvAtoms_MovePatchesMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_PatchMgr::idx_recvAtoms_MovePatchesMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_PatchMgr::idx_recvAtoms_MovePatchesMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_PatchMgr::recvAtoms(MovePatchesMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_PatchMgr::idx_recvAtoms_MovePatchesMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_PatchMgr::recvAtoms(MovePatchesMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_PatchMgr::idx_recvAtoms_MovePatchesMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_PatchMgr::reg_recvAtoms_MovePatchesMsg() {
  int epidx = CkRegisterEp("recvAtoms(MovePatchesMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvAtoms_MovePatchesMsg), CMessage_MovePatchesMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)MovePatchesMsg::ckDebugPup);
  return epidx;
}

void CkIndex_PatchMgr::_call_recvAtoms_MovePatchesMsg(void* impl_msg, void* impl_obj_void)
{
  PatchMgr* impl_obj = static_cast<PatchMgr*>(impl_obj_void);
  impl_obj->recvAtoms((MovePatchesMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvMigrateAtomsCombined(MigrateAtomsCombinedMsg* impl_msg);
 */
void CProxy_PatchMgr::recvMigrateAtomsCombined(MigrateAtomsCombinedMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PatchMgr::idx_recvMigrateAtomsCombined_MigrateAtomsCombinedMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_PatchMgr::idx_recvMigrateAtomsCombined_MigrateAtomsCombinedMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_PatchMgr::idx_recvMigrateAtomsCombined_MigrateAtomsCombinedMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_PatchMgr::recvMigrateAtomsCombined(MigrateAtomsCombinedMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_PatchMgr::idx_recvMigrateAtomsCombined_MigrateAtomsCombinedMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_PatchMgr::recvMigrateAtomsCombined(MigrateAtomsCombinedMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_PatchMgr::idx_recvMigrateAtomsCombined_MigrateAtomsCombinedMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_PatchMgr::reg_recvMigrateAtomsCombined_MigrateAtomsCombinedMsg() {
  int epidx = CkRegisterEp("recvMigrateAtomsCombined(MigrateAtomsCombinedMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvMigrateAtomsCombined_MigrateAtomsCombinedMsg), CMessage_MigrateAtomsCombinedMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)MigrateAtomsCombinedMsg::ckDebugPup);
  return epidx;
}

void CkIndex_PatchMgr::_call_recvMigrateAtomsCombined_MigrateAtomsCombinedMsg(void* impl_msg, void* impl_obj_void)
{
  PatchMgr* impl_obj = static_cast<PatchMgr*>(impl_obj_void);
  impl_obj->recvMigrateAtomsCombined((MigrateAtomsCombinedMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void moveAtom(MoveAtomMsg* impl_msg);
 */
void CProxy_PatchMgr::moveAtom(MoveAtomMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PatchMgr::idx_moveAtom_MoveAtomMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_PatchMgr::idx_moveAtom_MoveAtomMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_PatchMgr::idx_moveAtom_MoveAtomMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_PatchMgr::moveAtom(MoveAtomMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_PatchMgr::idx_moveAtom_MoveAtomMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_PatchMgr::moveAtom(MoveAtomMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_PatchMgr::idx_moveAtom_MoveAtomMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_PatchMgr::reg_moveAtom_MoveAtomMsg() {
  int epidx = CkRegisterEp("moveAtom(MoveAtomMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_moveAtom_MoveAtomMsg), CMessage_MoveAtomMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)MoveAtomMsg::ckDebugPup);
  return epidx;
}

void CkIndex_PatchMgr::_call_moveAtom_MoveAtomMsg(void* impl_msg, void* impl_obj_void)
{
  PatchMgr* impl_obj = static_cast<PatchMgr*>(impl_obj_void);
  impl_obj->moveAtom((MoveAtomMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void moveAllBy(MoveAllByMsg* impl_msg);
 */
void CProxy_PatchMgr::moveAllBy(MoveAllByMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PatchMgr::idx_moveAllBy_MoveAllByMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_PatchMgr::idx_moveAllBy_MoveAllByMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_PatchMgr::idx_moveAllBy_MoveAllByMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_PatchMgr::moveAllBy(MoveAllByMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_PatchMgr::idx_moveAllBy_MoveAllByMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_PatchMgr::moveAllBy(MoveAllByMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_PatchMgr::idx_moveAllBy_MoveAllByMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_PatchMgr::reg_moveAllBy_MoveAllByMsg() {
  int epidx = CkRegisterEp("moveAllBy(MoveAllByMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_moveAllBy_MoveAllByMsg), CMessage_MoveAllByMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)MoveAllByMsg::ckDebugPup);
  return epidx;
}

void CkIndex_PatchMgr::_call_moveAllBy_MoveAllByMsg(void* impl_msg, void* impl_obj_void)
{
  PatchMgr* impl_obj = static_cast<PatchMgr*>(impl_obj_void);
  impl_obj->moveAllBy((MoveAllByMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setLattice(SetLatticeMsg* impl_msg);
 */
void CProxy_PatchMgr::setLattice(SetLatticeMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PatchMgr::idx_setLattice_SetLatticeMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_PatchMgr::idx_setLattice_SetLatticeMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_PatchMgr::idx_setLattice_SetLatticeMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_PatchMgr::setLattice(SetLatticeMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_PatchMgr::idx_setLattice_SetLatticeMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_PatchMgr::setLattice(SetLatticeMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_PatchMgr::idx_setLattice_SetLatticeMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_PatchMgr::reg_setLattice_SetLatticeMsg() {
  int epidx = CkRegisterEp("setLattice(SetLatticeMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_setLattice_SetLatticeMsg), CMessage_SetLatticeMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)SetLatticeMsg::ckDebugPup);
  return epidx;
}

void CkIndex_PatchMgr::_call_setLattice_SetLatticeMsg(void* impl_msg, void* impl_obj_void)
{
  PatchMgr* impl_obj = static_cast<PatchMgr*>(impl_obj_void);
  impl_obj->setLattice((SetLatticeMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvCheckpointReq(CheckpointAtomsReqMsg* impl_msg);
 */
void CProxy_PatchMgr::recvCheckpointReq(CheckpointAtomsReqMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PatchMgr::idx_recvCheckpointReq_CheckpointAtomsReqMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_PatchMgr::idx_recvCheckpointReq_CheckpointAtomsReqMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_PatchMgr::idx_recvCheckpointReq_CheckpointAtomsReqMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_PatchMgr::recvCheckpointReq(CheckpointAtomsReqMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_PatchMgr::idx_recvCheckpointReq_CheckpointAtomsReqMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_PatchMgr::recvCheckpointReq(CheckpointAtomsReqMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_PatchMgr::idx_recvCheckpointReq_CheckpointAtomsReqMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_PatchMgr::reg_recvCheckpointReq_CheckpointAtomsReqMsg() {
  int epidx = CkRegisterEp("recvCheckpointReq(CheckpointAtomsReqMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvCheckpointReq_CheckpointAtomsReqMsg), CMessage_CheckpointAtomsReqMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CheckpointAtomsReqMsg::ckDebugPup);
  return epidx;
}

void CkIndex_PatchMgr::_call_recvCheckpointReq_CheckpointAtomsReqMsg(void* impl_msg, void* impl_obj_void)
{
  PatchMgr* impl_obj = static_cast<PatchMgr*>(impl_obj_void);
  impl_obj->recvCheckpointReq((CheckpointAtomsReqMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvCheckpointLoad(CheckpointAtomsMsg* impl_msg);
 */
void CProxy_PatchMgr::recvCheckpointLoad(CheckpointAtomsMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PatchMgr::idx_recvCheckpointLoad_CheckpointAtomsMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_PatchMgr::idx_recvCheckpointLoad_CheckpointAtomsMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_PatchMgr::idx_recvCheckpointLoad_CheckpointAtomsMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_PatchMgr::recvCheckpointLoad(CheckpointAtomsMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_PatchMgr::idx_recvCheckpointLoad_CheckpointAtomsMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_PatchMgr::recvCheckpointLoad(CheckpointAtomsMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_PatchMgr::idx_recvCheckpointLoad_CheckpointAtomsMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_PatchMgr::reg_recvCheckpointLoad_CheckpointAtomsMsg() {
  int epidx = CkRegisterEp("recvCheckpointLoad(CheckpointAtomsMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvCheckpointLoad_CheckpointAtomsMsg), CMessage_CheckpointAtomsMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CheckpointAtomsMsg::ckDebugPup);
  return epidx;
}

void CkIndex_PatchMgr::_call_recvCheckpointLoad_CheckpointAtomsMsg(void* impl_msg, void* impl_obj_void)
{
  PatchMgr* impl_obj = static_cast<PatchMgr*>(impl_obj_void);
  impl_obj->recvCheckpointLoad((CheckpointAtomsMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvCheckpointStore(CheckpointAtomsMsg* impl_msg);
 */
void CProxy_PatchMgr::recvCheckpointStore(CheckpointAtomsMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PatchMgr::idx_recvCheckpointStore_CheckpointAtomsMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_PatchMgr::idx_recvCheckpointStore_CheckpointAtomsMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_PatchMgr::idx_recvCheckpointStore_CheckpointAtomsMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_PatchMgr::recvCheckpointStore(CheckpointAtomsMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_PatchMgr::idx_recvCheckpointStore_CheckpointAtomsMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_PatchMgr::recvCheckpointStore(CheckpointAtomsMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_PatchMgr::idx_recvCheckpointStore_CheckpointAtomsMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_PatchMgr::reg_recvCheckpointStore_CheckpointAtomsMsg() {
  int epidx = CkRegisterEp("recvCheckpointStore(CheckpointAtomsMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvCheckpointStore_CheckpointAtomsMsg), CMessage_CheckpointAtomsMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CheckpointAtomsMsg::ckDebugPup);
  return epidx;
}

void CkIndex_PatchMgr::_call_recvCheckpointStore_CheckpointAtomsMsg(void* impl_msg, void* impl_obj_void)
{
  PatchMgr* impl_obj = static_cast<PatchMgr*>(impl_obj_void);
  impl_obj->recvCheckpointStore((CheckpointAtomsMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvCheckpointAck(CheckpointAtomsReqMsg* impl_msg);
 */
void CProxy_PatchMgr::recvCheckpointAck(CheckpointAtomsReqMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PatchMgr::idx_recvCheckpointAck_CheckpointAtomsReqMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_PatchMgr::idx_recvCheckpointAck_CheckpointAtomsReqMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_PatchMgr::idx_recvCheckpointAck_CheckpointAtomsReqMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_PatchMgr::recvCheckpointAck(CheckpointAtomsReqMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_PatchMgr::idx_recvCheckpointAck_CheckpointAtomsReqMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_PatchMgr::recvCheckpointAck(CheckpointAtomsReqMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_PatchMgr::idx_recvCheckpointAck_CheckpointAtomsReqMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_PatchMgr::reg_recvCheckpointAck_CheckpointAtomsReqMsg() {
  int epidx = CkRegisterEp("recvCheckpointAck(CheckpointAtomsReqMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvCheckpointAck_CheckpointAtomsReqMsg), CMessage_CheckpointAtomsReqMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CheckpointAtomsReqMsg::ckDebugPup);
  return epidx;
}

void CkIndex_PatchMgr::_call_recvCheckpointAck_CheckpointAtomsReqMsg(void* impl_msg, void* impl_obj_void)
{
  PatchMgr* impl_obj = static_cast<PatchMgr*>(impl_obj_void);
  impl_obj->recvCheckpointAck((CheckpointAtomsReqMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvExchangeReq(ExchangeAtomsReqMsg* impl_msg);
 */
void CProxy_PatchMgr::recvExchangeReq(ExchangeAtomsReqMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PatchMgr::idx_recvExchangeReq_ExchangeAtomsReqMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_PatchMgr::idx_recvExchangeReq_ExchangeAtomsReqMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_PatchMgr::idx_recvExchangeReq_ExchangeAtomsReqMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_PatchMgr::recvExchangeReq(ExchangeAtomsReqMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_PatchMgr::idx_recvExchangeReq_ExchangeAtomsReqMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_PatchMgr::recvExchangeReq(ExchangeAtomsReqMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_PatchMgr::idx_recvExchangeReq_ExchangeAtomsReqMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_PatchMgr::reg_recvExchangeReq_ExchangeAtomsReqMsg() {
  int epidx = CkRegisterEp("recvExchangeReq(ExchangeAtomsReqMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvExchangeReq_ExchangeAtomsReqMsg), CMessage_ExchangeAtomsReqMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)ExchangeAtomsReqMsg::ckDebugPup);
  return epidx;
}

void CkIndex_PatchMgr::_call_recvExchangeReq_ExchangeAtomsReqMsg(void* impl_msg, void* impl_obj_void)
{
  PatchMgr* impl_obj = static_cast<PatchMgr*>(impl_obj_void);
  impl_obj->recvExchangeReq((ExchangeAtomsReqMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvExchangeMsg(ExchangeAtomsMsg* impl_msg);
 */
void CProxy_PatchMgr::recvExchangeMsg(ExchangeAtomsMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_PatchMgr::idx_recvExchangeMsg_ExchangeAtomsMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_PatchMgr::idx_recvExchangeMsg_ExchangeAtomsMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_PatchMgr::idx_recvExchangeMsg_ExchangeAtomsMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_PatchMgr::recvExchangeMsg(ExchangeAtomsMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_PatchMgr::idx_recvExchangeMsg_ExchangeAtomsMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_PatchMgr::recvExchangeMsg(ExchangeAtomsMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_PatchMgr::idx_recvExchangeMsg_ExchangeAtomsMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_PatchMgr::reg_recvExchangeMsg_ExchangeAtomsMsg() {
  int epidx = CkRegisterEp("recvExchangeMsg(ExchangeAtomsMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvExchangeMsg_ExchangeAtomsMsg), CMessage_ExchangeAtomsMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)ExchangeAtomsMsg::ckDebugPup);
  return epidx;
}

void CkIndex_PatchMgr::_call_recvExchangeMsg_ExchangeAtomsMsg(void* impl_msg, void* impl_obj_void)
{
  PatchMgr* impl_obj = static_cast<PatchMgr*>(impl_obj_void);
  impl_obj->recvExchangeMsg((ExchangeAtomsMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: PatchMgr();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvMovePatches(MovePatchesMsg* impl_msg);
 */
void CProxySection_PatchMgr::recvMovePatches(MovePatchesMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_PatchMgr::idx_recvMovePatches_MovePatchesMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_PatchMgr::idx_recvMovePatches_MovePatchesMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvAtoms(MovePatchesMsg* impl_msg);
 */
void CProxySection_PatchMgr::recvAtoms(MovePatchesMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_PatchMgr::idx_recvAtoms_MovePatchesMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_PatchMgr::idx_recvAtoms_MovePatchesMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvMigrateAtomsCombined(MigrateAtomsCombinedMsg* impl_msg);
 */
void CProxySection_PatchMgr::recvMigrateAtomsCombined(MigrateAtomsCombinedMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_PatchMgr::idx_recvMigrateAtomsCombined_MigrateAtomsCombinedMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_PatchMgr::idx_recvMigrateAtomsCombined_MigrateAtomsCombinedMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void moveAtom(MoveAtomMsg* impl_msg);
 */
void CProxySection_PatchMgr::moveAtom(MoveAtomMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_PatchMgr::idx_moveAtom_MoveAtomMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_PatchMgr::idx_moveAtom_MoveAtomMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void moveAllBy(MoveAllByMsg* impl_msg);
 */
void CProxySection_PatchMgr::moveAllBy(MoveAllByMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_PatchMgr::idx_moveAllBy_MoveAllByMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_PatchMgr::idx_moveAllBy_MoveAllByMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setLattice(SetLatticeMsg* impl_msg);
 */
void CProxySection_PatchMgr::setLattice(SetLatticeMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_PatchMgr::idx_setLattice_SetLatticeMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_PatchMgr::idx_setLattice_SetLatticeMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvCheckpointReq(CheckpointAtomsReqMsg* impl_msg);
 */
void CProxySection_PatchMgr::recvCheckpointReq(CheckpointAtomsReqMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_PatchMgr::idx_recvCheckpointReq_CheckpointAtomsReqMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_PatchMgr::idx_recvCheckpointReq_CheckpointAtomsReqMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvCheckpointLoad(CheckpointAtomsMsg* impl_msg);
 */
void CProxySection_PatchMgr::recvCheckpointLoad(CheckpointAtomsMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_PatchMgr::idx_recvCheckpointLoad_CheckpointAtomsMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_PatchMgr::idx_recvCheckpointLoad_CheckpointAtomsMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvCheckpointStore(CheckpointAtomsMsg* impl_msg);
 */
void CProxySection_PatchMgr::recvCheckpointStore(CheckpointAtomsMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_PatchMgr::idx_recvCheckpointStore_CheckpointAtomsMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_PatchMgr::idx_recvCheckpointStore_CheckpointAtomsMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvCheckpointAck(CheckpointAtomsReqMsg* impl_msg);
 */
void CProxySection_PatchMgr::recvCheckpointAck(CheckpointAtomsReqMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_PatchMgr::idx_recvCheckpointAck_CheckpointAtomsReqMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_PatchMgr::idx_recvCheckpointAck_CheckpointAtomsReqMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvExchangeReq(ExchangeAtomsReqMsg* impl_msg);
 */
void CProxySection_PatchMgr::recvExchangeReq(ExchangeAtomsReqMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_PatchMgr::idx_recvExchangeReq_ExchangeAtomsReqMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_PatchMgr::idx_recvExchangeReq_ExchangeAtomsReqMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvExchangeMsg(ExchangeAtomsMsg* impl_msg);
 */
void CProxySection_PatchMgr::recvExchangeMsg(ExchangeAtomsMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_PatchMgr::idx_recvExchangeMsg_ExchangeAtomsMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_PatchMgr::idx_recvExchangeMsg_ExchangeAtomsMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_PatchMgr::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,PatchMgr::isIrreducible());
  // REG: PatchMgr();
  idx_PatchMgr_void();
  CkRegisterDefaultCtor(__idx, idx_PatchMgr_void());

  // REG: void recvMovePatches(MovePatchesMsg* impl_msg);
  idx_recvMovePatches_MovePatchesMsg();

  // REG: void recvAtoms(MovePatchesMsg* impl_msg);
  idx_recvAtoms_MovePatchesMsg();

  // REG: void recvMigrateAtomsCombined(MigrateAtomsCombinedMsg* impl_msg);
  idx_recvMigrateAtomsCombined_MigrateAtomsCombinedMsg();

  // REG: void moveAtom(MoveAtomMsg* impl_msg);
  idx_moveAtom_MoveAtomMsg();

  // REG: void moveAllBy(MoveAllByMsg* impl_msg);
  idx_moveAllBy_MoveAllByMsg();

  // REG: void setLattice(SetLatticeMsg* impl_msg);
  idx_setLattice_SetLatticeMsg();

  // REG: void recvCheckpointReq(CheckpointAtomsReqMsg* impl_msg);
  idx_recvCheckpointReq_CheckpointAtomsReqMsg();

  // REG: void recvCheckpointLoad(CheckpointAtomsMsg* impl_msg);
  idx_recvCheckpointLoad_CheckpointAtomsMsg();

  // REG: void recvCheckpointStore(CheckpointAtomsMsg* impl_msg);
  idx_recvCheckpointStore_CheckpointAtomsMsg();

  // REG: void recvCheckpointAck(CheckpointAtomsReqMsg* impl_msg);
  idx_recvCheckpointAck_CheckpointAtomsReqMsg();

  // REG: void recvExchangeReq(ExchangeAtomsReqMsg* impl_msg);
  idx_recvExchangeReq_ExchangeAtomsReqMsg();

  // REG: void recvExchangeMsg(ExchangeAtomsMsg* impl_msg);
  idx_recvExchangeMsg_ExchangeAtomsMsg();

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerPatchMgr(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: message MovePatchesMsg;
*/
CMessage_MovePatchesMsg::__register("MovePatchesMsg", sizeof(MovePatchesMsg),(CkPackFnPtr) MovePatchesMsg::pack,(CkUnpackFnPtr) MovePatchesMsg::unpack);

/* REG: message MigrateAtomsMsg;
*/
CMessage_MigrateAtomsMsg::__register("MigrateAtomsMsg", sizeof(MigrateAtomsMsg),(CkPackFnPtr) MigrateAtomsMsg::pack,(CkUnpackFnPtr) MigrateAtomsMsg::unpack);

/* REG: message MigrateAtomsCombinedMsg;
*/
CMessage_MigrateAtomsCombinedMsg::__register("MigrateAtomsCombinedMsg", sizeof(MigrateAtomsCombinedMsg),(CkPackFnPtr) MigrateAtomsCombinedMsg::pack,(CkUnpackFnPtr) MigrateAtomsCombinedMsg::unpack);

/* REG: message MoveAtomMsg;
*/
CMessage_MoveAtomMsg::__register("MoveAtomMsg", sizeof(MoveAtomMsg),(CkPackFnPtr) MoveAtomMsg::pack,(CkUnpackFnPtr) MoveAtomMsg::unpack);

/* REG: message MoveAllByMsg;
*/
CMessage_MoveAllByMsg::__register("MoveAllByMsg", sizeof(MoveAllByMsg),(CkPackFnPtr) MoveAllByMsg::pack,(CkUnpackFnPtr) MoveAllByMsg::unpack);

/* REG: message SetLatticeMsg;
*/
CMessage_SetLatticeMsg::__register("SetLatticeMsg", sizeof(SetLatticeMsg),(CkPackFnPtr) SetLatticeMsg::pack,(CkUnpackFnPtr) SetLatticeMsg::unpack);

/* REG: message CheckpointAtomsReqMsg{
char key[];
}
;
*/
CMessage_CheckpointAtomsReqMsg::__register("CheckpointAtomsReqMsg", sizeof(CheckpointAtomsReqMsg),(CkPackFnPtr) CheckpointAtomsReqMsg::pack,(CkUnpackFnPtr) CheckpointAtomsReqMsg::unpack);

/* REG: message CheckpointAtomsMsg{
FullAtom atoms[];
char key[];
}
;
*/
CMessage_CheckpointAtomsMsg::__register("CheckpointAtomsMsg", sizeof(CheckpointAtomsMsg),(CkPackFnPtr) CheckpointAtomsMsg::pack,(CkUnpackFnPtr) CheckpointAtomsMsg::unpack);

/* REG: message ExchangeAtomsReqMsg;
*/
CMessage_ExchangeAtomsReqMsg::__register("ExchangeAtomsReqMsg", sizeof(ExchangeAtomsReqMsg),(CkPackFnPtr) ExchangeAtomsReqMsg::pack,(CkUnpackFnPtr) ExchangeAtomsReqMsg::unpack);

/* REG: message ExchangeAtomsMsg{
FullAtom atoms[];
}
;
*/
CMessage_ExchangeAtomsMsg::__register("ExchangeAtomsMsg", sizeof(ExchangeAtomsMsg),(CkPackFnPtr) ExchangeAtomsMsg::pack,(CkUnpackFnPtr) ExchangeAtomsMsg::unpack);

/* REG: group PatchMgr: IrrGroup{
PatchMgr();
void recvMovePatches(MovePatchesMsg* impl_msg);
void recvAtoms(MovePatchesMsg* impl_msg);
void recvMigrateAtomsCombined(MigrateAtomsCombinedMsg* impl_msg);
void moveAtom(MoveAtomMsg* impl_msg);
void moveAllBy(MoveAllByMsg* impl_msg);
void setLattice(SetLatticeMsg* impl_msg);
void recvCheckpointReq(CheckpointAtomsReqMsg* impl_msg);
void recvCheckpointLoad(CheckpointAtomsMsg* impl_msg);
void recvCheckpointStore(CheckpointAtomsMsg* impl_msg);
void recvCheckpointAck(CheckpointAtomsReqMsg* impl_msg);
void recvExchangeReq(ExchangeAtomsReqMsg* impl_msg);
void recvExchangeMsg(ExchangeAtomsMsg* impl_msg);
};
*/
  CkIndex_PatchMgr::__register("PatchMgr", sizeof(PatchMgr));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_PatchMgr::virtual_pup(PUP::er &p) {
    recursive_pup<PatchMgr>(dynamic_cast<PatchMgr*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
