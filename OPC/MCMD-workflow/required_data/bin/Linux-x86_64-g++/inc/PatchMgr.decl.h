#ifndef _DECL_PatchMgr_H_
#define _DECL_PatchMgr_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
#ifndef GROUPDEPNUM_DECLARED
# define GROUPDEPNUM_DECLARED
struct GroupDepNum
{
  int groupDepNum;
  explicit GroupDepNum(int g = 0) : groupDepNum{g} { }
  operator int() const { return groupDepNum; }
};
#endif
/* DECLS: message MovePatchesMsg;
 */
class MovePatchesMsg;
class CMessage_MovePatchesMsg:public CkMessage{
  public:
    static int __idx;
    void* operator new(size_t, void*p) { return p; }
    void* operator new(size_t);
    void* operator new(size_t, int*, const int);
    void* operator new(size_t, int*, const int, const GroupDepNum);
    void* operator new(size_t, int*);
#if CMK_MULTIPLE_DELETE
    void operator delete(void*p, void*){dealloc(p);}
    void operator delete(void*p){dealloc(p);}
    void operator delete(void*p, int*, const int){dealloc(p);}
    void operator delete(void*p, int*, const int, const GroupDepNum){dealloc(p);}
    void operator delete(void*p, int*){dealloc(p);}
#endif
    void operator delete(void*p, size_t){dealloc(p);}
    static void* alloc(int,size_t, int*, int, GroupDepNum);
    static void dealloc(void *p);
    CMessage_MovePatchesMsg();
    static void *pack(MovePatchesMsg *p);
    static MovePatchesMsg* unpack(void* p);
    void *operator new(size_t, const int);
    void *operator new(size_t, const int, const GroupDepNum);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
    void operator delete(void *p, const int, const GroupDepNum){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

#ifndef GROUPDEPNUM_DECLARED
# define GROUPDEPNUM_DECLARED
struct GroupDepNum
{
  int groupDepNum;
  explicit GroupDepNum(int g = 0) : groupDepNum{g} { }
  operator int() const { return groupDepNum; }
};
#endif
/* DECLS: message MigrateAtomsMsg;
 */
class MigrateAtomsMsg;
class CMessage_MigrateAtomsMsg:public CkMessage{
  public:
    static int __idx;
    void* operator new(size_t, void*p) { return p; }
    void* operator new(size_t);
    void* operator new(size_t, int*, const int);
    void* operator new(size_t, int*, const int, const GroupDepNum);
    void* operator new(size_t, int*);
#if CMK_MULTIPLE_DELETE
    void operator delete(void*p, void*){dealloc(p);}
    void operator delete(void*p){dealloc(p);}
    void operator delete(void*p, int*, const int){dealloc(p);}
    void operator delete(void*p, int*, const int, const GroupDepNum){dealloc(p);}
    void operator delete(void*p, int*){dealloc(p);}
#endif
    void operator delete(void*p, size_t){dealloc(p);}
    static void* alloc(int,size_t, int*, int, GroupDepNum);
    static void dealloc(void *p);
    CMessage_MigrateAtomsMsg();
    static void *pack(MigrateAtomsMsg *p);
    static MigrateAtomsMsg* unpack(void* p);
    void *operator new(size_t, const int);
    void *operator new(size_t, const int, const GroupDepNum);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
    void operator delete(void *p, const int, const GroupDepNum){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

#ifndef GROUPDEPNUM_DECLARED
# define GROUPDEPNUM_DECLARED
struct GroupDepNum
{
  int groupDepNum;
  explicit GroupDepNum(int g = 0) : groupDepNum{g} { }
  operator int() const { return groupDepNum; }
};
#endif
/* DECLS: message MigrateAtomsCombinedMsg;
 */
class MigrateAtomsCombinedMsg;
class CMessage_MigrateAtomsCombinedMsg:public CkMessage{
  public:
    static int __idx;
    void* operator new(size_t, void*p) { return p; }
    void* operator new(size_t);
    void* operator new(size_t, int*, const int);
    void* operator new(size_t, int*, const int, const GroupDepNum);
    void* operator new(size_t, int*);
#if CMK_MULTIPLE_DELETE
    void operator delete(void*p, void*){dealloc(p);}
    void operator delete(void*p){dealloc(p);}
    void operator delete(void*p, int*, const int){dealloc(p);}
    void operator delete(void*p, int*, const int, const GroupDepNum){dealloc(p);}
    void operator delete(void*p, int*){dealloc(p);}
#endif
    void operator delete(void*p, size_t){dealloc(p);}
    static void* alloc(int,size_t, int*, int, GroupDepNum);
    static void dealloc(void *p);
    CMessage_MigrateAtomsCombinedMsg();
    static void *pack(MigrateAtomsCombinedMsg *p);
    static MigrateAtomsCombinedMsg* unpack(void* p);
    void *operator new(size_t, const int);
    void *operator new(size_t, const int, const GroupDepNum);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
    void operator delete(void *p, const int, const GroupDepNum){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

#ifndef GROUPDEPNUM_DECLARED
# define GROUPDEPNUM_DECLARED
struct GroupDepNum
{
  int groupDepNum;
  explicit GroupDepNum(int g = 0) : groupDepNum{g} { }
  operator int() const { return groupDepNum; }
};
#endif
/* DECLS: message MoveAtomMsg;
 */
class MoveAtomMsg;
class CMessage_MoveAtomMsg:public CkMessage{
  public:
    static int __idx;
    void* operator new(size_t, void*p) { return p; }
    void* operator new(size_t);
    void* operator new(size_t, int*, const int);
    void* operator new(size_t, int*, const int, const GroupDepNum);
    void* operator new(size_t, int*);
#if CMK_MULTIPLE_DELETE
    void operator delete(void*p, void*){dealloc(p);}
    void operator delete(void*p){dealloc(p);}
    void operator delete(void*p, int*, const int){dealloc(p);}
    void operator delete(void*p, int*, const int, const GroupDepNum){dealloc(p);}
    void operator delete(void*p, int*){dealloc(p);}
#endif
    void operator delete(void*p, size_t){dealloc(p);}
    static void* alloc(int,size_t, int*, int, GroupDepNum);
    static void dealloc(void *p);
    CMessage_MoveAtomMsg();
    static void *pack(MoveAtomMsg *p);
    static MoveAtomMsg* unpack(void* p);
    void *operator new(size_t, const int);
    void *operator new(size_t, const int, const GroupDepNum);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
    void operator delete(void *p, const int, const GroupDepNum){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

#ifndef GROUPDEPNUM_DECLARED
# define GROUPDEPNUM_DECLARED
struct GroupDepNum
{
  int groupDepNum;
  explicit GroupDepNum(int g = 0) : groupDepNum{g} { }
  operator int() const { return groupDepNum; }
};
#endif
/* DECLS: message MoveAllByMsg;
 */
class MoveAllByMsg;
class CMessage_MoveAllByMsg:public CkMessage{
  public:
    static int __idx;
    void* operator new(size_t, void*p) { return p; }
    void* operator new(size_t);
    void* operator new(size_t, int*, const int);
    void* operator new(size_t, int*, const int, const GroupDepNum);
    void* operator new(size_t, int*);
#if CMK_MULTIPLE_DELETE
    void operator delete(void*p, void*){dealloc(p);}
    void operator delete(void*p){dealloc(p);}
    void operator delete(void*p, int*, const int){dealloc(p);}
    void operator delete(void*p, int*, const int, const GroupDepNum){dealloc(p);}
    void operator delete(void*p, int*){dealloc(p);}
#endif
    void operator delete(void*p, size_t){dealloc(p);}
    static void* alloc(int,size_t, int*, int, GroupDepNum);
    static void dealloc(void *p);
    CMessage_MoveAllByMsg();
    static void *pack(MoveAllByMsg *p);
    static MoveAllByMsg* unpack(void* p);
    void *operator new(size_t, const int);
    void *operator new(size_t, const int, const GroupDepNum);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
    void operator delete(void *p, const int, const GroupDepNum){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

#ifndef GROUPDEPNUM_DECLARED
# define GROUPDEPNUM_DECLARED
struct GroupDepNum
{
  int groupDepNum;
  explicit GroupDepNum(int g = 0) : groupDepNum{g} { }
  operator int() const { return groupDepNum; }
};
#endif
/* DECLS: message SetLatticeMsg;
 */
class SetLatticeMsg;
class CMessage_SetLatticeMsg:public CkMessage{
  public:
    static int __idx;
    void* operator new(size_t, void*p) { return p; }
    void* operator new(size_t);
    void* operator new(size_t, int*, const int);
    void* operator new(size_t, int*, const int, const GroupDepNum);
    void* operator new(size_t, int*);
#if CMK_MULTIPLE_DELETE
    void operator delete(void*p, void*){dealloc(p);}
    void operator delete(void*p){dealloc(p);}
    void operator delete(void*p, int*, const int){dealloc(p);}
    void operator delete(void*p, int*, const int, const GroupDepNum){dealloc(p);}
    void operator delete(void*p, int*){dealloc(p);}
#endif
    void operator delete(void*p, size_t){dealloc(p);}
    static void* alloc(int,size_t, int*, int, GroupDepNum);
    static void dealloc(void *p);
    CMessage_SetLatticeMsg();
    static void *pack(SetLatticeMsg *p);
    static SetLatticeMsg* unpack(void* p);
    void *operator new(size_t, const int);
    void *operator new(size_t, const int, const GroupDepNum);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
    void operator delete(void *p, const int, const GroupDepNum){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

#ifndef GROUPDEPNUM_DECLARED
# define GROUPDEPNUM_DECLARED
struct GroupDepNum
{
  int groupDepNum;
  explicit GroupDepNum(int g = 0) : groupDepNum{g} { }
  operator int() const { return groupDepNum; }
};
#endif
/* DECLS: message CheckpointAtomsReqMsg{
char key[];
}
;
 */
class CheckpointAtomsReqMsg;
class CMessage_CheckpointAtomsReqMsg:public CkMessage{
  public:
    static int __idx;
    void* operator new(size_t, void*p) { return p; }
    void* operator new(size_t);
    void* operator new(size_t, int*, const int);
    void* operator new(size_t, int*, const int, const GroupDepNum);
    void* operator new(size_t, int*);
#if CMK_MULTIPLE_DELETE
    void operator delete(void*p, void*){dealloc(p);}
    void operator delete(void*p){dealloc(p);}
    void operator delete(void*p, int*, const int){dealloc(p);}
    void operator delete(void*p, int*, const int, const GroupDepNum){dealloc(p);}
    void operator delete(void*p, int*){dealloc(p);}
#endif
    void operator delete(void*p, size_t){dealloc(p);}
    static void* alloc(int,size_t, int*, int, GroupDepNum);
    static void dealloc(void *p);
    CMessage_CheckpointAtomsReqMsg();
    static void *pack(CheckpointAtomsReqMsg *p);
    static CheckpointAtomsReqMsg* unpack(void* p);
    void *operator new(size_t, int);
    void *operator new(size_t, int, const int);
    void *operator new(size_t, int, const int, const GroupDepNum);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, int){dealloc(p);}
    void operator delete(void *p, int, const int){dealloc(p);}
    void operator delete(void *p, int, const int, const GroupDepNum){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

#ifndef GROUPDEPNUM_DECLARED
# define GROUPDEPNUM_DECLARED
struct GroupDepNum
{
  int groupDepNum;
  explicit GroupDepNum(int g = 0) : groupDepNum{g} { }
  operator int() const { return groupDepNum; }
};
#endif
/* DECLS: message CheckpointAtomsMsg{
FullAtom atoms[];
char key[];
}
;
 */
class CheckpointAtomsMsg;
class CMessage_CheckpointAtomsMsg:public CkMessage{
  public:
    static int __idx;
    void* operator new(size_t, void*p) { return p; }
    void* operator new(size_t);
    void* operator new(size_t, int*, const int);
    void* operator new(size_t, int*, const int, const GroupDepNum);
    void* operator new(size_t, int*);
#if CMK_MULTIPLE_DELETE
    void operator delete(void*p, void*){dealloc(p);}
    void operator delete(void*p){dealloc(p);}
    void operator delete(void*p, int*, const int){dealloc(p);}
    void operator delete(void*p, int*, const int, const GroupDepNum){dealloc(p);}
    void operator delete(void*p, int*){dealloc(p);}
#endif
    void operator delete(void*p, size_t){dealloc(p);}
    static void* alloc(int,size_t, int*, int, GroupDepNum);
    static void dealloc(void *p);
    CMessage_CheckpointAtomsMsg();
    static void *pack(CheckpointAtomsMsg *p);
    static CheckpointAtomsMsg* unpack(void* p);
    void *operator new(size_t, int, int);
    void *operator new(size_t, int, int, const int);
    void *operator new(size_t, int, int, const int, const GroupDepNum);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, int, int){dealloc(p);}
    void operator delete(void *p, int, int, const int){dealloc(p);}
    void operator delete(void *p, int, int, const int, const GroupDepNum){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

#ifndef GROUPDEPNUM_DECLARED
# define GROUPDEPNUM_DECLARED
struct GroupDepNum
{
  int groupDepNum;
  explicit GroupDepNum(int g = 0) : groupDepNum{g} { }
  operator int() const { return groupDepNum; }
};
#endif
/* DECLS: message ExchangeAtomsReqMsg;
 */
class ExchangeAtomsReqMsg;
class CMessage_ExchangeAtomsReqMsg:public CkMessage{
  public:
    static int __idx;
    void* operator new(size_t, void*p) { return p; }
    void* operator new(size_t);
    void* operator new(size_t, int*, const int);
    void* operator new(size_t, int*, const int, const GroupDepNum);
    void* operator new(size_t, int*);
#if CMK_MULTIPLE_DELETE
    void operator delete(void*p, void*){dealloc(p);}
    void operator delete(void*p){dealloc(p);}
    void operator delete(void*p, int*, const int){dealloc(p);}
    void operator delete(void*p, int*, const int, const GroupDepNum){dealloc(p);}
    void operator delete(void*p, int*){dealloc(p);}
#endif
    void operator delete(void*p, size_t){dealloc(p);}
    static void* alloc(int,size_t, int*, int, GroupDepNum);
    static void dealloc(void *p);
    CMessage_ExchangeAtomsReqMsg();
    static void *pack(ExchangeAtomsReqMsg *p);
    static ExchangeAtomsReqMsg* unpack(void* p);
    void *operator new(size_t, const int);
    void *operator new(size_t, const int, const GroupDepNum);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
    void operator delete(void *p, const int, const GroupDepNum){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

#ifndef GROUPDEPNUM_DECLARED
# define GROUPDEPNUM_DECLARED
struct GroupDepNum
{
  int groupDepNum;
  explicit GroupDepNum(int g = 0) : groupDepNum{g} { }
  operator int() const { return groupDepNum; }
};
#endif
/* DECLS: message ExchangeAtomsMsg{
FullAtom atoms[];
}
;
 */
class ExchangeAtomsMsg;
class CMessage_ExchangeAtomsMsg:public CkMessage{
  public:
    static int __idx;
    void* operator new(size_t, void*p) { return p; }
    void* operator new(size_t);
    void* operator new(size_t, int*, const int);
    void* operator new(size_t, int*, const int, const GroupDepNum);
    void* operator new(size_t, int*);
#if CMK_MULTIPLE_DELETE
    void operator delete(void*p, void*){dealloc(p);}
    void operator delete(void*p){dealloc(p);}
    void operator delete(void*p, int*, const int){dealloc(p);}
    void operator delete(void*p, int*, const int, const GroupDepNum){dealloc(p);}
    void operator delete(void*p, int*){dealloc(p);}
#endif
    void operator delete(void*p, size_t){dealloc(p);}
    static void* alloc(int,size_t, int*, int, GroupDepNum);
    static void dealloc(void *p);
    CMessage_ExchangeAtomsMsg();
    static void *pack(ExchangeAtomsMsg *p);
    static ExchangeAtomsMsg* unpack(void* p);
    void *operator new(size_t, int);
    void *operator new(size_t, int, const int);
    void *operator new(size_t, int, const int, const GroupDepNum);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, int){dealloc(p);}
    void operator delete(void *p, int, const int){dealloc(p);}
    void operator delete(void *p, int, const int, const GroupDepNum){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: group PatchMgr: IrrGroup{
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
 class PatchMgr;
 class CkIndex_PatchMgr;
 class CProxy_PatchMgr;
 class CProxyElement_PatchMgr;
 class CProxySection_PatchMgr;
/* --------------- index object ------------------ */
class CkIndex_PatchMgr:public CkIndex_IrrGroup{
  public:
    typedef PatchMgr local_t;
    typedef CkIndex_PatchMgr index_t;
    typedef CProxy_PatchMgr proxy_t;
    typedef CProxyElement_PatchMgr element_t;
    typedef CProxySection_PatchMgr section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: PatchMgr();
     */
    // Entry point registration at startup
    
    static int reg_PatchMgr_void();
    // Entry point index lookup
    
    inline static int idx_PatchMgr_void() {
      static int epidx = reg_PatchMgr_void();
      return epidx;
    }

    
    static int ckNew() { return idx_PatchMgr_void(); }
    
    static void _call_PatchMgr_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_PatchMgr_void(void* impl_msg, void* impl_obj);
    /* DECLS: void recvMovePatches(MovePatchesMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvMovePatches_MovePatchesMsg();
    // Entry point index lookup
    
    inline static int idx_recvMovePatches_MovePatchesMsg() {
      static int epidx = reg_recvMovePatches_MovePatchesMsg();
      return epidx;
    }

    
    inline static int idx_recvMovePatches(void (PatchMgr::*)(MovePatchesMsg* impl_msg) ) {
      return idx_recvMovePatches_MovePatchesMsg();
    }


    
    static int recvMovePatches(MovePatchesMsg* impl_msg) { return idx_recvMovePatches_MovePatchesMsg(); }
    
    static void _call_recvMovePatches_MovePatchesMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvMovePatches_MovePatchesMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvAtoms(MovePatchesMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvAtoms_MovePatchesMsg();
    // Entry point index lookup
    
    inline static int idx_recvAtoms_MovePatchesMsg() {
      static int epidx = reg_recvAtoms_MovePatchesMsg();
      return epidx;
    }

    
    inline static int idx_recvAtoms(void (PatchMgr::*)(MovePatchesMsg* impl_msg) ) {
      return idx_recvAtoms_MovePatchesMsg();
    }


    
    static int recvAtoms(MovePatchesMsg* impl_msg) { return idx_recvAtoms_MovePatchesMsg(); }
    
    static void _call_recvAtoms_MovePatchesMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvAtoms_MovePatchesMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvMigrateAtomsCombined(MigrateAtomsCombinedMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvMigrateAtomsCombined_MigrateAtomsCombinedMsg();
    // Entry point index lookup
    
    inline static int idx_recvMigrateAtomsCombined_MigrateAtomsCombinedMsg() {
      static int epidx = reg_recvMigrateAtomsCombined_MigrateAtomsCombinedMsg();
      return epidx;
    }

    
    inline static int idx_recvMigrateAtomsCombined(void (PatchMgr::*)(MigrateAtomsCombinedMsg* impl_msg) ) {
      return idx_recvMigrateAtomsCombined_MigrateAtomsCombinedMsg();
    }


    
    static int recvMigrateAtomsCombined(MigrateAtomsCombinedMsg* impl_msg) { return idx_recvMigrateAtomsCombined_MigrateAtomsCombinedMsg(); }
    
    static void _call_recvMigrateAtomsCombined_MigrateAtomsCombinedMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvMigrateAtomsCombined_MigrateAtomsCombinedMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void moveAtom(MoveAtomMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_moveAtom_MoveAtomMsg();
    // Entry point index lookup
    
    inline static int idx_moveAtom_MoveAtomMsg() {
      static int epidx = reg_moveAtom_MoveAtomMsg();
      return epidx;
    }

    
    inline static int idx_moveAtom(void (PatchMgr::*)(MoveAtomMsg* impl_msg) ) {
      return idx_moveAtom_MoveAtomMsg();
    }


    
    static int moveAtom(MoveAtomMsg* impl_msg) { return idx_moveAtom_MoveAtomMsg(); }
    
    static void _call_moveAtom_MoveAtomMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_moveAtom_MoveAtomMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void moveAllBy(MoveAllByMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_moveAllBy_MoveAllByMsg();
    // Entry point index lookup
    
    inline static int idx_moveAllBy_MoveAllByMsg() {
      static int epidx = reg_moveAllBy_MoveAllByMsg();
      return epidx;
    }

    
    inline static int idx_moveAllBy(void (PatchMgr::*)(MoveAllByMsg* impl_msg) ) {
      return idx_moveAllBy_MoveAllByMsg();
    }


    
    static int moveAllBy(MoveAllByMsg* impl_msg) { return idx_moveAllBy_MoveAllByMsg(); }
    
    static void _call_moveAllBy_MoveAllByMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_moveAllBy_MoveAllByMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void setLattice(SetLatticeMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_setLattice_SetLatticeMsg();
    // Entry point index lookup
    
    inline static int idx_setLattice_SetLatticeMsg() {
      static int epidx = reg_setLattice_SetLatticeMsg();
      return epidx;
    }

    
    inline static int idx_setLattice(void (PatchMgr::*)(SetLatticeMsg* impl_msg) ) {
      return idx_setLattice_SetLatticeMsg();
    }


    
    static int setLattice(SetLatticeMsg* impl_msg) { return idx_setLattice_SetLatticeMsg(); }
    
    static void _call_setLattice_SetLatticeMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_setLattice_SetLatticeMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvCheckpointReq(CheckpointAtomsReqMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvCheckpointReq_CheckpointAtomsReqMsg();
    // Entry point index lookup
    
    inline static int idx_recvCheckpointReq_CheckpointAtomsReqMsg() {
      static int epidx = reg_recvCheckpointReq_CheckpointAtomsReqMsg();
      return epidx;
    }

    
    inline static int idx_recvCheckpointReq(void (PatchMgr::*)(CheckpointAtomsReqMsg* impl_msg) ) {
      return idx_recvCheckpointReq_CheckpointAtomsReqMsg();
    }


    
    static int recvCheckpointReq(CheckpointAtomsReqMsg* impl_msg) { return idx_recvCheckpointReq_CheckpointAtomsReqMsg(); }
    
    static void _call_recvCheckpointReq_CheckpointAtomsReqMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvCheckpointReq_CheckpointAtomsReqMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvCheckpointLoad(CheckpointAtomsMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvCheckpointLoad_CheckpointAtomsMsg();
    // Entry point index lookup
    
    inline static int idx_recvCheckpointLoad_CheckpointAtomsMsg() {
      static int epidx = reg_recvCheckpointLoad_CheckpointAtomsMsg();
      return epidx;
    }

    
    inline static int idx_recvCheckpointLoad(void (PatchMgr::*)(CheckpointAtomsMsg* impl_msg) ) {
      return idx_recvCheckpointLoad_CheckpointAtomsMsg();
    }


    
    static int recvCheckpointLoad(CheckpointAtomsMsg* impl_msg) { return idx_recvCheckpointLoad_CheckpointAtomsMsg(); }
    
    static void _call_recvCheckpointLoad_CheckpointAtomsMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvCheckpointLoad_CheckpointAtomsMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvCheckpointStore(CheckpointAtomsMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvCheckpointStore_CheckpointAtomsMsg();
    // Entry point index lookup
    
    inline static int idx_recvCheckpointStore_CheckpointAtomsMsg() {
      static int epidx = reg_recvCheckpointStore_CheckpointAtomsMsg();
      return epidx;
    }

    
    inline static int idx_recvCheckpointStore(void (PatchMgr::*)(CheckpointAtomsMsg* impl_msg) ) {
      return idx_recvCheckpointStore_CheckpointAtomsMsg();
    }


    
    static int recvCheckpointStore(CheckpointAtomsMsg* impl_msg) { return idx_recvCheckpointStore_CheckpointAtomsMsg(); }
    
    static void _call_recvCheckpointStore_CheckpointAtomsMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvCheckpointStore_CheckpointAtomsMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvCheckpointAck(CheckpointAtomsReqMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvCheckpointAck_CheckpointAtomsReqMsg();
    // Entry point index lookup
    
    inline static int idx_recvCheckpointAck_CheckpointAtomsReqMsg() {
      static int epidx = reg_recvCheckpointAck_CheckpointAtomsReqMsg();
      return epidx;
    }

    
    inline static int idx_recvCheckpointAck(void (PatchMgr::*)(CheckpointAtomsReqMsg* impl_msg) ) {
      return idx_recvCheckpointAck_CheckpointAtomsReqMsg();
    }


    
    static int recvCheckpointAck(CheckpointAtomsReqMsg* impl_msg) { return idx_recvCheckpointAck_CheckpointAtomsReqMsg(); }
    
    static void _call_recvCheckpointAck_CheckpointAtomsReqMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvCheckpointAck_CheckpointAtomsReqMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvExchangeReq(ExchangeAtomsReqMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvExchangeReq_ExchangeAtomsReqMsg();
    // Entry point index lookup
    
    inline static int idx_recvExchangeReq_ExchangeAtomsReqMsg() {
      static int epidx = reg_recvExchangeReq_ExchangeAtomsReqMsg();
      return epidx;
    }

    
    inline static int idx_recvExchangeReq(void (PatchMgr::*)(ExchangeAtomsReqMsg* impl_msg) ) {
      return idx_recvExchangeReq_ExchangeAtomsReqMsg();
    }


    
    static int recvExchangeReq(ExchangeAtomsReqMsg* impl_msg) { return idx_recvExchangeReq_ExchangeAtomsReqMsg(); }
    
    static void _call_recvExchangeReq_ExchangeAtomsReqMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvExchangeReq_ExchangeAtomsReqMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvExchangeMsg(ExchangeAtomsMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvExchangeMsg_ExchangeAtomsMsg();
    // Entry point index lookup
    
    inline static int idx_recvExchangeMsg_ExchangeAtomsMsg() {
      static int epidx = reg_recvExchangeMsg_ExchangeAtomsMsg();
      return epidx;
    }

    
    inline static int idx_recvExchangeMsg(void (PatchMgr::*)(ExchangeAtomsMsg* impl_msg) ) {
      return idx_recvExchangeMsg_ExchangeAtomsMsg();
    }


    
    static int recvExchangeMsg(ExchangeAtomsMsg* impl_msg) { return idx_recvExchangeMsg_ExchangeAtomsMsg(); }
    
    static void _call_recvExchangeMsg_ExchangeAtomsMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvExchangeMsg_ExchangeAtomsMsg(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_PatchMgr: public CProxyElement_IrrGroup{
  public:
    typedef PatchMgr local_t;
    typedef CkIndex_PatchMgr index_t;
    typedef CProxy_PatchMgr proxy_t;
    typedef CProxyElement_PatchMgr element_t;
    typedef CProxySection_PatchMgr section_t;


    /* TRAM aggregators */

    CProxyElement_PatchMgr(void) {
    }
    CProxyElement_PatchMgr(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_PatchMgr(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_PatchMgr(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
    }

    int ckIsDelegated(void) const
    { return CProxyElement_IrrGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_IrrGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_IrrGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_IrrGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxyElement_IrrGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxyElement_IrrGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxyElement_IrrGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_IrrGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_IrrGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_IrrGroup::ckSetReductionClient(cb); }
int ckGetGroupPe(void) const
{return CProxyElement_IrrGroup::ckGetGroupPe();}

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_IrrGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_IrrGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_IrrGroup::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxyElement_IrrGroup::ckSetGroupID(g);
    }
    PatchMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static PatchMgr* ckLocalBranch(CkGroupID gID) {
      return (PatchMgr*)CkLocalBranch(gID);
    }
/* DECLS: PatchMgr();
 */
    

/* DECLS: void recvMovePatches(MovePatchesMsg* impl_msg);
 */
    
    void recvMovePatches(MovePatchesMsg* impl_msg);

/* DECLS: void recvAtoms(MovePatchesMsg* impl_msg);
 */
    
    void recvAtoms(MovePatchesMsg* impl_msg);

/* DECLS: void recvMigrateAtomsCombined(MigrateAtomsCombinedMsg* impl_msg);
 */
    
    void recvMigrateAtomsCombined(MigrateAtomsCombinedMsg* impl_msg);

/* DECLS: void moveAtom(MoveAtomMsg* impl_msg);
 */
    
    void moveAtom(MoveAtomMsg* impl_msg);

/* DECLS: void moveAllBy(MoveAllByMsg* impl_msg);
 */
    
    void moveAllBy(MoveAllByMsg* impl_msg);

/* DECLS: void setLattice(SetLatticeMsg* impl_msg);
 */
    
    void setLattice(SetLatticeMsg* impl_msg);

/* DECLS: void recvCheckpointReq(CheckpointAtomsReqMsg* impl_msg);
 */
    
    void recvCheckpointReq(CheckpointAtomsReqMsg* impl_msg);

/* DECLS: void recvCheckpointLoad(CheckpointAtomsMsg* impl_msg);
 */
    
    void recvCheckpointLoad(CheckpointAtomsMsg* impl_msg);

/* DECLS: void recvCheckpointStore(CheckpointAtomsMsg* impl_msg);
 */
    
    void recvCheckpointStore(CheckpointAtomsMsg* impl_msg);

/* DECLS: void recvCheckpointAck(CheckpointAtomsReqMsg* impl_msg);
 */
    
    void recvCheckpointAck(CheckpointAtomsReqMsg* impl_msg);

/* DECLS: void recvExchangeReq(ExchangeAtomsReqMsg* impl_msg);
 */
    
    void recvExchangeReq(ExchangeAtomsReqMsg* impl_msg);

/* DECLS: void recvExchangeMsg(ExchangeAtomsMsg* impl_msg);
 */
    
    void recvExchangeMsg(ExchangeAtomsMsg* impl_msg);

};
/* ---------------- collective proxy -------------- */
class CProxy_PatchMgr: public CProxy_IrrGroup{
  public:
    typedef PatchMgr local_t;
    typedef CkIndex_PatchMgr index_t;
    typedef CProxy_PatchMgr proxy_t;
    typedef CProxyElement_PatchMgr element_t;
    typedef CProxySection_PatchMgr section_t;

    CProxy_PatchMgr(void) {
    }
    CProxy_PatchMgr(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_PatchMgr(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_PatchMgr(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_PatchMgr operator[](int onPE) const
      {return CProxyElement_PatchMgr(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

    int ckIsDelegated(void) const
    { return CProxy_IrrGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_IrrGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_IrrGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_IrrGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxy_IrrGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxy_IrrGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxy_IrrGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_IrrGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_IrrGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_IrrGroup::ckSetReductionClient(cb); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_IrrGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_IrrGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_IrrGroup::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxy_IrrGroup::ckSetGroupID(g);
    }
    PatchMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static PatchMgr* ckLocalBranch(CkGroupID gID) {
      return (PatchMgr*)CkLocalBranch(gID);
    }
/* DECLS: PatchMgr();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvMovePatches(MovePatchesMsg* impl_msg);
 */
    
    void recvMovePatches(MovePatchesMsg* impl_msg);
    
    void recvMovePatches(MovePatchesMsg* impl_msg, int npes, int *pes);
    
    void recvMovePatches(MovePatchesMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvAtoms(MovePatchesMsg* impl_msg);
 */
    
    void recvAtoms(MovePatchesMsg* impl_msg);
    
    void recvAtoms(MovePatchesMsg* impl_msg, int npes, int *pes);
    
    void recvAtoms(MovePatchesMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvMigrateAtomsCombined(MigrateAtomsCombinedMsg* impl_msg);
 */
    
    void recvMigrateAtomsCombined(MigrateAtomsCombinedMsg* impl_msg);
    
    void recvMigrateAtomsCombined(MigrateAtomsCombinedMsg* impl_msg, int npes, int *pes);
    
    void recvMigrateAtomsCombined(MigrateAtomsCombinedMsg* impl_msg, CmiGroup &grp);

/* DECLS: void moveAtom(MoveAtomMsg* impl_msg);
 */
    
    void moveAtom(MoveAtomMsg* impl_msg);
    
    void moveAtom(MoveAtomMsg* impl_msg, int npes, int *pes);
    
    void moveAtom(MoveAtomMsg* impl_msg, CmiGroup &grp);

/* DECLS: void moveAllBy(MoveAllByMsg* impl_msg);
 */
    
    void moveAllBy(MoveAllByMsg* impl_msg);
    
    void moveAllBy(MoveAllByMsg* impl_msg, int npes, int *pes);
    
    void moveAllBy(MoveAllByMsg* impl_msg, CmiGroup &grp);

/* DECLS: void setLattice(SetLatticeMsg* impl_msg);
 */
    
    void setLattice(SetLatticeMsg* impl_msg);
    
    void setLattice(SetLatticeMsg* impl_msg, int npes, int *pes);
    
    void setLattice(SetLatticeMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvCheckpointReq(CheckpointAtomsReqMsg* impl_msg);
 */
    
    void recvCheckpointReq(CheckpointAtomsReqMsg* impl_msg);
    
    void recvCheckpointReq(CheckpointAtomsReqMsg* impl_msg, int npes, int *pes);
    
    void recvCheckpointReq(CheckpointAtomsReqMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvCheckpointLoad(CheckpointAtomsMsg* impl_msg);
 */
    
    void recvCheckpointLoad(CheckpointAtomsMsg* impl_msg);
    
    void recvCheckpointLoad(CheckpointAtomsMsg* impl_msg, int npes, int *pes);
    
    void recvCheckpointLoad(CheckpointAtomsMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvCheckpointStore(CheckpointAtomsMsg* impl_msg);
 */
    
    void recvCheckpointStore(CheckpointAtomsMsg* impl_msg);
    
    void recvCheckpointStore(CheckpointAtomsMsg* impl_msg, int npes, int *pes);
    
    void recvCheckpointStore(CheckpointAtomsMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvCheckpointAck(CheckpointAtomsReqMsg* impl_msg);
 */
    
    void recvCheckpointAck(CheckpointAtomsReqMsg* impl_msg);
    
    void recvCheckpointAck(CheckpointAtomsReqMsg* impl_msg, int npes, int *pes);
    
    void recvCheckpointAck(CheckpointAtomsReqMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvExchangeReq(ExchangeAtomsReqMsg* impl_msg);
 */
    
    void recvExchangeReq(ExchangeAtomsReqMsg* impl_msg);
    
    void recvExchangeReq(ExchangeAtomsReqMsg* impl_msg, int npes, int *pes);
    
    void recvExchangeReq(ExchangeAtomsReqMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvExchangeMsg(ExchangeAtomsMsg* impl_msg);
 */
    
    void recvExchangeMsg(ExchangeAtomsMsg* impl_msg);
    
    void recvExchangeMsg(ExchangeAtomsMsg* impl_msg, int npes, int *pes);
    
    void recvExchangeMsg(ExchangeAtomsMsg* impl_msg, CmiGroup &grp);

};
/* ---------------- section proxy -------------- */
class CProxySection_PatchMgr: public CProxySection_IrrGroup{
  public:
    typedef PatchMgr local_t;
    typedef CkIndex_PatchMgr index_t;
    typedef CProxy_PatchMgr proxy_t;
    typedef CProxyElement_PatchMgr element_t;
    typedef CProxySection_PatchMgr section_t;

    CProxySection_PatchMgr(void) {
    }
    CProxySection_PatchMgr(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_PatchMgr(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_PatchMgr(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_PatchMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_PatchMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

    int ckIsDelegated(void) const
    { return CProxySection_IrrGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_IrrGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_IrrGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_IrrGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxySection_IrrGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxySection_IrrGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxySection_IrrGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_IrrGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_IrrGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_IrrGroup::ckSetReductionClient(cb); }
inline int ckGetNumSections() const
{ return CProxySection_IrrGroup::ckGetNumSections(); }
inline CkSectionInfo &ckGetSectionInfo()
{ return CProxySection_IrrGroup::ckGetSectionInfo(); }
inline CkSectionID *ckGetSectionIDs()
{ return CProxySection_IrrGroup::ckGetSectionIDs(); }
inline CkSectionID &ckGetSectionID()
{ return CProxySection_IrrGroup::ckGetSectionID(); }
inline CkSectionID &ckGetSectionID(int i)
{ return CProxySection_IrrGroup::ckGetSectionID(i); }
inline CkGroupID ckGetGroupIDn(int i) const
{ return CProxySection_IrrGroup::ckGetGroupIDn(i); }
inline const int *ckGetElements() const
{ return CProxySection_IrrGroup::ckGetElements(); }
inline const int *ckGetElements(int i) const
{ return CProxySection_IrrGroup::ckGetElements(i); }
inline int ckGetNumElements() const
{ return CProxySection_IrrGroup::ckGetNumElements(); } 
inline int ckGetNumElements(int i) const
{ return CProxySection_IrrGroup::ckGetNumElements(i); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_IrrGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_IrrGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_IrrGroup::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxySection_IrrGroup::ckSetGroupID(g);
    }
    PatchMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static PatchMgr* ckLocalBranch(CkGroupID gID) {
      return (PatchMgr*)CkLocalBranch(gID);
    }
/* DECLS: PatchMgr();
 */
    

/* DECLS: void recvMovePatches(MovePatchesMsg* impl_msg);
 */
    
    void recvMovePatches(MovePatchesMsg* impl_msg);

/* DECLS: void recvAtoms(MovePatchesMsg* impl_msg);
 */
    
    void recvAtoms(MovePatchesMsg* impl_msg);

/* DECLS: void recvMigrateAtomsCombined(MigrateAtomsCombinedMsg* impl_msg);
 */
    
    void recvMigrateAtomsCombined(MigrateAtomsCombinedMsg* impl_msg);

/* DECLS: void moveAtom(MoveAtomMsg* impl_msg);
 */
    
    void moveAtom(MoveAtomMsg* impl_msg);

/* DECLS: void moveAllBy(MoveAllByMsg* impl_msg);
 */
    
    void moveAllBy(MoveAllByMsg* impl_msg);

/* DECLS: void setLattice(SetLatticeMsg* impl_msg);
 */
    
    void setLattice(SetLatticeMsg* impl_msg);

/* DECLS: void recvCheckpointReq(CheckpointAtomsReqMsg* impl_msg);
 */
    
    void recvCheckpointReq(CheckpointAtomsReqMsg* impl_msg);

/* DECLS: void recvCheckpointLoad(CheckpointAtomsMsg* impl_msg);
 */
    
    void recvCheckpointLoad(CheckpointAtomsMsg* impl_msg);

/* DECLS: void recvCheckpointStore(CheckpointAtomsMsg* impl_msg);
 */
    
    void recvCheckpointStore(CheckpointAtomsMsg* impl_msg);

/* DECLS: void recvCheckpointAck(CheckpointAtomsReqMsg* impl_msg);
 */
    
    void recvCheckpointAck(CheckpointAtomsReqMsg* impl_msg);

/* DECLS: void recvExchangeReq(ExchangeAtomsReqMsg* impl_msg);
 */
    
    void recvExchangeReq(ExchangeAtomsReqMsg* impl_msg);

/* DECLS: void recvExchangeMsg(ExchangeAtomsMsg* impl_msg);
 */
    
    void recvExchangeMsg(ExchangeAtomsMsg* impl_msg);

};
#define PatchMgr_SDAG_CODE 
typedef CBaseT1<Group, CProxy_PatchMgr>CBase_PatchMgr;











/* ---------------- method closures -------------- */
class Closure_PatchMgr {
  public:













};

extern void _registerPatchMgr(void);
#endif
