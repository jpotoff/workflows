#ifndef _DECL_ComputeMsmMgr_H_
#define _DECL_ComputeMsmMgr_H_
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
/* DECLS: message MsmInitMsg;
 */
class MsmInitMsg;
class CMessage_MsmInitMsg:public CkMessage{
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
    CMessage_MsmInitMsg();
    static void *pack(MsmInitMsg *p);
    static MsmInitMsg* unpack(void* p);
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
/* DECLS: message GridMsg{
char gdata[];
}
;
 */
class GridMsg;
class CMessage_GridMsg:public CkMessage{
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
    CMessage_GridMsg();
    static void *pack(GridMsg *p);
    static GridMsg* unpack(void* p);
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
/* DECLS: message MsmBlockProxyMsg;
 */
class MsmBlockProxyMsg;
class CMessage_MsmBlockProxyMsg:public CkMessage{
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
    CMessage_MsmBlockProxyMsg();
    static void *pack(MsmBlockProxyMsg *p);
    static MsmBlockProxyMsg* unpack(void* p);
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
/* DECLS: message MsmC1HermiteBlockProxyMsg;
 */
class MsmC1HermiteBlockProxyMsg;
class CMessage_MsmC1HermiteBlockProxyMsg:public CkMessage{
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
    CMessage_MsmC1HermiteBlockProxyMsg();
    static void *pack(MsmC1HermiteBlockProxyMsg *p);
    static MsmC1HermiteBlockProxyMsg* unpack(void* p);
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
/* DECLS: message MsmGridCutoffProxyMsg;
 */
class MsmGridCutoffProxyMsg;
class CMessage_MsmGridCutoffProxyMsg:public CkMessage{
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
    CMessage_MsmGridCutoffProxyMsg();
    static void *pack(MsmGridCutoffProxyMsg *p);
    static MsmGridCutoffProxyMsg* unpack(void* p);
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
/* DECLS: message MsmC1HermiteGridCutoffProxyMsg;
 */
class MsmC1HermiteGridCutoffProxyMsg;
class CMessage_MsmC1HermiteGridCutoffProxyMsg:public CkMessage{
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
    CMessage_MsmC1HermiteGridCutoffProxyMsg();
    static void *pack(MsmC1HermiteGridCutoffProxyMsg *p);
    static MsmC1HermiteGridCutoffProxyMsg* unpack(void* p);
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
/* DECLS: message MsmGridCutoffInitMsg;
 */
class MsmGridCutoffInitMsg;
class CMessage_MsmGridCutoffInitMsg:public CkMessage{
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
    CMessage_MsmGridCutoffInitMsg();
    static void *pack(MsmGridCutoffInitMsg *p);
    static MsmGridCutoffInitMsg* unpack(void* p);
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
/* DECLS: message MsmGridCutoffSetupMsg;
 */
class MsmGridCutoffSetupMsg;
class CMessage_MsmGridCutoffSetupMsg:public CkMessage{
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
    CMessage_MsmGridCutoffSetupMsg();
    static void *pack(MsmGridCutoffSetupMsg *p);
    static MsmGridCutoffSetupMsg* unpack(void* p);
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
/* DECLS: message MsmC1HermiteGridCutoffSetupMsg;
 */
class MsmC1HermiteGridCutoffSetupMsg;
class CMessage_MsmC1HermiteGridCutoffSetupMsg:public CkMessage{
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
    CMessage_MsmC1HermiteGridCutoffSetupMsg();
    static void *pack(MsmC1HermiteGridCutoffSetupMsg *p);
    static MsmC1HermiteGridCutoffSetupMsg* unpack(void* p);
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

/* DECLS: group ComputeMsmMgr: IrrGroup{
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
 class ComputeMsmMgr;
 class CkIndex_ComputeMsmMgr;
 class CProxy_ComputeMsmMgr;
 class CProxyElement_ComputeMsmMgr;
 class CProxySection_ComputeMsmMgr;
/* --------------- index object ------------------ */
class CkIndex_ComputeMsmMgr:public CkIndex_IrrGroup{
  public:
    typedef ComputeMsmMgr local_t;
    typedef CkIndex_ComputeMsmMgr index_t;
    typedef CProxy_ComputeMsmMgr proxy_t;
    typedef CProxyElement_ComputeMsmMgr element_t;
    typedef CProxySection_ComputeMsmMgr section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: ComputeMsmMgr();
     */
    // Entry point registration at startup
    
    static int reg_ComputeMsmMgr_void();
    // Entry point index lookup
    
    inline static int idx_ComputeMsmMgr_void() {
      static int epidx = reg_ComputeMsmMgr_void();
      return epidx;
    }

    
    static int ckNew() { return idx_ComputeMsmMgr_void(); }
    
    static void _call_ComputeMsmMgr_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ComputeMsmMgr_void(void* impl_msg, void* impl_obj);
    /* DECLS: void initialize(MsmInitMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_initialize_MsmInitMsg();
    // Entry point index lookup
    
    inline static int idx_initialize_MsmInitMsg() {
      static int epidx = reg_initialize_MsmInitMsg();
      return epidx;
    }

    
    inline static int idx_initialize(void (ComputeMsmMgr::*)(MsmInitMsg* impl_msg) ) {
      return idx_initialize_MsmInitMsg();
    }


    
    static int initialize(MsmInitMsg* impl_msg) { return idx_initialize_MsmInitMsg(); }
    
    static void _call_initialize_MsmInitMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_initialize_MsmInitMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void initialize_create();
     */
    // Entry point registration at startup
    
    static int reg_initialize_create_void();
    // Entry point index lookup
    
    inline static int idx_initialize_create_void() {
      static int epidx = reg_initialize_create_void();
      return epidx;
    }

    
    inline static int idx_initialize_create(void (ComputeMsmMgr::*)() ) {
      return idx_initialize_create_void();
    }


    
    static int initialize_create() { return idx_initialize_create_void(); }
    
    static void _call_initialize_create_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_initialize_create_void(void* impl_msg, void* impl_obj);
    /* DECLS: void recvMsmBlockProxy(MsmBlockProxyMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvMsmBlockProxy_MsmBlockProxyMsg();
    // Entry point index lookup
    
    inline static int idx_recvMsmBlockProxy_MsmBlockProxyMsg() {
      static int epidx = reg_recvMsmBlockProxy_MsmBlockProxyMsg();
      return epidx;
    }

    
    inline static int idx_recvMsmBlockProxy(void (ComputeMsmMgr::*)(MsmBlockProxyMsg* impl_msg) ) {
      return idx_recvMsmBlockProxy_MsmBlockProxyMsg();
    }


    
    static int recvMsmBlockProxy(MsmBlockProxyMsg* impl_msg) { return idx_recvMsmBlockProxy_MsmBlockProxyMsg(); }
    
    static void _call_recvMsmBlockProxy_MsmBlockProxyMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvMsmBlockProxy_MsmBlockProxyMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvMsmGridCutoffProxy(MsmGridCutoffProxyMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvMsmGridCutoffProxy_MsmGridCutoffProxyMsg();
    // Entry point index lookup
    
    inline static int idx_recvMsmGridCutoffProxy_MsmGridCutoffProxyMsg() {
      static int epidx = reg_recvMsmGridCutoffProxy_MsmGridCutoffProxyMsg();
      return epidx;
    }

    
    inline static int idx_recvMsmGridCutoffProxy(void (ComputeMsmMgr::*)(MsmGridCutoffProxyMsg* impl_msg) ) {
      return idx_recvMsmGridCutoffProxy_MsmGridCutoffProxyMsg();
    }


    
    static int recvMsmGridCutoffProxy(MsmGridCutoffProxyMsg* impl_msg) { return idx_recvMsmGridCutoffProxy_MsmGridCutoffProxyMsg(); }
    
    static void _call_recvMsmGridCutoffProxy_MsmGridCutoffProxyMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvMsmGridCutoffProxy_MsmGridCutoffProxyMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvMsmC1HermiteBlockProxy(MsmC1HermiteBlockProxyMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvMsmC1HermiteBlockProxy_MsmC1HermiteBlockProxyMsg();
    // Entry point index lookup
    
    inline static int idx_recvMsmC1HermiteBlockProxy_MsmC1HermiteBlockProxyMsg() {
      static int epidx = reg_recvMsmC1HermiteBlockProxy_MsmC1HermiteBlockProxyMsg();
      return epidx;
    }

    
    inline static int idx_recvMsmC1HermiteBlockProxy(void (ComputeMsmMgr::*)(MsmC1HermiteBlockProxyMsg* impl_msg) ) {
      return idx_recvMsmC1HermiteBlockProxy_MsmC1HermiteBlockProxyMsg();
    }


    
    static int recvMsmC1HermiteBlockProxy(MsmC1HermiteBlockProxyMsg* impl_msg) { return idx_recvMsmC1HermiteBlockProxy_MsmC1HermiteBlockProxyMsg(); }
    
    static void _call_recvMsmC1HermiteBlockProxy_MsmC1HermiteBlockProxyMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvMsmC1HermiteBlockProxy_MsmC1HermiteBlockProxyMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvMsmC1HermiteGridCutoffProxy(MsmC1HermiteGridCutoffProxyMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvMsmC1HermiteGridCutoffProxy_MsmC1HermiteGridCutoffProxyMsg();
    // Entry point index lookup
    
    inline static int idx_recvMsmC1HermiteGridCutoffProxy_MsmC1HermiteGridCutoffProxyMsg() {
      static int epidx = reg_recvMsmC1HermiteGridCutoffProxy_MsmC1HermiteGridCutoffProxyMsg();
      return epidx;
    }

    
    inline static int idx_recvMsmC1HermiteGridCutoffProxy(void (ComputeMsmMgr::*)(MsmC1HermiteGridCutoffProxyMsg* impl_msg) ) {
      return idx_recvMsmC1HermiteGridCutoffProxy_MsmC1HermiteGridCutoffProxyMsg();
    }


    
    static int recvMsmC1HermiteGridCutoffProxy(MsmC1HermiteGridCutoffProxyMsg* impl_msg) { return idx_recvMsmC1HermiteGridCutoffProxy_MsmC1HermiteGridCutoffProxyMsg(); }
    
    static void _call_recvMsmC1HermiteGridCutoffProxy_MsmC1HermiteGridCutoffProxyMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvMsmC1HermiteGridCutoffProxy_MsmC1HermiteGridCutoffProxyMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void update(CkQdMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_update_CkQdMsg();
    // Entry point index lookup
    
    inline static int idx_update_CkQdMsg() {
      static int epidx = reg_update_CkQdMsg();
      return epidx;
    }

    
    inline static int idx_update(void (ComputeMsmMgr::*)(CkQdMsg* impl_msg) ) {
      return idx_update_CkQdMsg();
    }


    
    static int update(CkQdMsg* impl_msg) { return idx_update_CkQdMsg(); }
    
    static void _call_update_CkQdMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_update_CkQdMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void addPotential(GridMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_addPotential_GridMsg();
    // Entry point index lookup
    
    inline static int idx_addPotential_GridMsg() {
      static int epidx = reg_addPotential_GridMsg();
      return epidx;
    }

    
    inline static int idx_addPotential(void (ComputeMsmMgr::*)(GridMsg* impl_msg) ) {
      return idx_addPotential_GridMsg();
    }


    
    static int addPotential(GridMsg* impl_msg) { return idx_addPotential_GridMsg(); }
    
    static void _call_addPotential_GridMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_addPotential_GridMsg(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_ComputeMsmMgr: public CProxyElement_IrrGroup{
  public:
    typedef ComputeMsmMgr local_t;
    typedef CkIndex_ComputeMsmMgr index_t;
    typedef CProxy_ComputeMsmMgr proxy_t;
    typedef CProxyElement_ComputeMsmMgr element_t;
    typedef CProxySection_ComputeMsmMgr section_t;


    /* TRAM aggregators */

    CProxyElement_ComputeMsmMgr(void) {
    }
    CProxyElement_ComputeMsmMgr(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_ComputeMsmMgr(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_ComputeMsmMgr(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    ComputeMsmMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ComputeMsmMgr* ckLocalBranch(CkGroupID gID) {
      return (ComputeMsmMgr*)CkLocalBranch(gID);
    }
/* DECLS: ComputeMsmMgr();
 */
    

/* DECLS: void initialize(MsmInitMsg* impl_msg);
 */
    
    void initialize(MsmInitMsg* impl_msg);

/* DECLS: void initialize_create();
 */
    
    void initialize_create(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvMsmBlockProxy(MsmBlockProxyMsg* impl_msg);
 */
    
    void recvMsmBlockProxy(MsmBlockProxyMsg* impl_msg);

/* DECLS: void recvMsmGridCutoffProxy(MsmGridCutoffProxyMsg* impl_msg);
 */
    
    void recvMsmGridCutoffProxy(MsmGridCutoffProxyMsg* impl_msg);

/* DECLS: void recvMsmC1HermiteBlockProxy(MsmC1HermiteBlockProxyMsg* impl_msg);
 */
    
    void recvMsmC1HermiteBlockProxy(MsmC1HermiteBlockProxyMsg* impl_msg);

/* DECLS: void recvMsmC1HermiteGridCutoffProxy(MsmC1HermiteGridCutoffProxyMsg* impl_msg);
 */
    
    void recvMsmC1HermiteGridCutoffProxy(MsmC1HermiteGridCutoffProxyMsg* impl_msg);

/* DECLS: void update(CkQdMsg* impl_msg);
 */
    
    void update(CkQdMsg* impl_msg);

/* DECLS: void addPotential(GridMsg* impl_msg);
 */
    
    void addPotential(GridMsg* impl_msg);

};
/* ---------------- collective proxy -------------- */
class CProxy_ComputeMsmMgr: public CProxy_IrrGroup{
  public:
    typedef ComputeMsmMgr local_t;
    typedef CkIndex_ComputeMsmMgr index_t;
    typedef CProxy_ComputeMsmMgr proxy_t;
    typedef CProxyElement_ComputeMsmMgr element_t;
    typedef CProxySection_ComputeMsmMgr section_t;

    CProxy_ComputeMsmMgr(void) {
    }
    CProxy_ComputeMsmMgr(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_ComputeMsmMgr(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_ComputeMsmMgr(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_ComputeMsmMgr operator[](int onPE) const
      {return CProxyElement_ComputeMsmMgr(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    ComputeMsmMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ComputeMsmMgr* ckLocalBranch(CkGroupID gID) {
      return (ComputeMsmMgr*)CkLocalBranch(gID);
    }
/* DECLS: ComputeMsmMgr();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void initialize(MsmInitMsg* impl_msg);
 */
    
    void initialize(MsmInitMsg* impl_msg);
    
    void initialize(MsmInitMsg* impl_msg, int npes, int *pes);
    
    void initialize(MsmInitMsg* impl_msg, CmiGroup &grp);

/* DECLS: void initialize_create();
 */
    
    void initialize_create(const CkEntryOptions *impl_e_opts=NULL);
    
    void initialize_create(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void initialize_create(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvMsmBlockProxy(MsmBlockProxyMsg* impl_msg);
 */
    
    void recvMsmBlockProxy(MsmBlockProxyMsg* impl_msg);
    
    void recvMsmBlockProxy(MsmBlockProxyMsg* impl_msg, int npes, int *pes);
    
    void recvMsmBlockProxy(MsmBlockProxyMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvMsmGridCutoffProxy(MsmGridCutoffProxyMsg* impl_msg);
 */
    
    void recvMsmGridCutoffProxy(MsmGridCutoffProxyMsg* impl_msg);
    
    void recvMsmGridCutoffProxy(MsmGridCutoffProxyMsg* impl_msg, int npes, int *pes);
    
    void recvMsmGridCutoffProxy(MsmGridCutoffProxyMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvMsmC1HermiteBlockProxy(MsmC1HermiteBlockProxyMsg* impl_msg);
 */
    
    void recvMsmC1HermiteBlockProxy(MsmC1HermiteBlockProxyMsg* impl_msg);
    
    void recvMsmC1HermiteBlockProxy(MsmC1HermiteBlockProxyMsg* impl_msg, int npes, int *pes);
    
    void recvMsmC1HermiteBlockProxy(MsmC1HermiteBlockProxyMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvMsmC1HermiteGridCutoffProxy(MsmC1HermiteGridCutoffProxyMsg* impl_msg);
 */
    
    void recvMsmC1HermiteGridCutoffProxy(MsmC1HermiteGridCutoffProxyMsg* impl_msg);
    
    void recvMsmC1HermiteGridCutoffProxy(MsmC1HermiteGridCutoffProxyMsg* impl_msg, int npes, int *pes);
    
    void recvMsmC1HermiteGridCutoffProxy(MsmC1HermiteGridCutoffProxyMsg* impl_msg, CmiGroup &grp);

/* DECLS: void update(CkQdMsg* impl_msg);
 */
    
    void update(CkQdMsg* impl_msg);
    
    void update(CkQdMsg* impl_msg, int npes, int *pes);
    
    void update(CkQdMsg* impl_msg, CmiGroup &grp);

/* DECLS: void addPotential(GridMsg* impl_msg);
 */
    
    void addPotential(GridMsg* impl_msg);
    
    void addPotential(GridMsg* impl_msg, int npes, int *pes);
    
    void addPotential(GridMsg* impl_msg, CmiGroup &grp);

};
/* ---------------- section proxy -------------- */
class CProxySection_ComputeMsmMgr: public CProxySection_IrrGroup{
  public:
    typedef ComputeMsmMgr local_t;
    typedef CkIndex_ComputeMsmMgr index_t;
    typedef CProxy_ComputeMsmMgr proxy_t;
    typedef CProxyElement_ComputeMsmMgr element_t;
    typedef CProxySection_ComputeMsmMgr section_t;

    CProxySection_ComputeMsmMgr(void) {
    }
    CProxySection_ComputeMsmMgr(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_ComputeMsmMgr(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_ComputeMsmMgr(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_ComputeMsmMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_ComputeMsmMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    ComputeMsmMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ComputeMsmMgr* ckLocalBranch(CkGroupID gID) {
      return (ComputeMsmMgr*)CkLocalBranch(gID);
    }
/* DECLS: ComputeMsmMgr();
 */
    

/* DECLS: void initialize(MsmInitMsg* impl_msg);
 */
    
    void initialize(MsmInitMsg* impl_msg);

/* DECLS: void initialize_create();
 */
    
    void initialize_create(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvMsmBlockProxy(MsmBlockProxyMsg* impl_msg);
 */
    
    void recvMsmBlockProxy(MsmBlockProxyMsg* impl_msg);

/* DECLS: void recvMsmGridCutoffProxy(MsmGridCutoffProxyMsg* impl_msg);
 */
    
    void recvMsmGridCutoffProxy(MsmGridCutoffProxyMsg* impl_msg);

/* DECLS: void recvMsmC1HermiteBlockProxy(MsmC1HermiteBlockProxyMsg* impl_msg);
 */
    
    void recvMsmC1HermiteBlockProxy(MsmC1HermiteBlockProxyMsg* impl_msg);

/* DECLS: void recvMsmC1HermiteGridCutoffProxy(MsmC1HermiteGridCutoffProxyMsg* impl_msg);
 */
    
    void recvMsmC1HermiteGridCutoffProxy(MsmC1HermiteGridCutoffProxyMsg* impl_msg);

/* DECLS: void update(CkQdMsg* impl_msg);
 */
    
    void update(CkQdMsg* impl_msg);

/* DECLS: void addPotential(GridMsg* impl_msg);
 */
    
    void addPotential(GridMsg* impl_msg);

};
#define ComputeMsmMgr_SDAG_CODE 
typedef CBaseT1<Group, CProxy_ComputeMsmMgr>CBase_ComputeMsmMgr;

/* DECLS: group MsmBlockMap: CkArrayMap{
MsmBlockMap(int level);
};
 */
 class MsmBlockMap;
 class CkIndex_MsmBlockMap;
 class CProxy_MsmBlockMap;
 class CProxyElement_MsmBlockMap;
 class CProxySection_MsmBlockMap;
/* --------------- index object ------------------ */
class CkIndex_MsmBlockMap:public CkIndex_CkArrayMap{
  public:
    typedef MsmBlockMap local_t;
    typedef CkIndex_MsmBlockMap index_t;
    typedef CProxy_MsmBlockMap proxy_t;
    typedef CProxyElement_MsmBlockMap element_t;
    typedef CProxySection_MsmBlockMap section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: MsmBlockMap(int level);
     */
    // Entry point registration at startup
    
    static int reg_MsmBlockMap_marshall1();
    // Entry point index lookup
    
    inline static int idx_MsmBlockMap_marshall1() {
      static int epidx = reg_MsmBlockMap_marshall1();
      return epidx;
    }

    
    static int ckNew(int level) { return idx_MsmBlockMap_marshall1(); }
    
    static void _call_MsmBlockMap_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_MsmBlockMap_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_MsmBlockMap_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_MsmBlockMap_marshall1(PUP::er &p,void *msg);
};
/* --------------- element proxy ------------------ */
class CProxyElement_MsmBlockMap: public CProxyElement_CkArrayMap{
  public:
    typedef MsmBlockMap local_t;
    typedef CkIndex_MsmBlockMap index_t;
    typedef CProxy_MsmBlockMap proxy_t;
    typedef CProxyElement_MsmBlockMap element_t;
    typedef CProxySection_MsmBlockMap section_t;


    /* TRAM aggregators */

    CProxyElement_MsmBlockMap(void) {
    }
    CProxyElement_MsmBlockMap(const IrrGroup *g) : CProxyElement_CkArrayMap(g){
    }
    CProxyElement_MsmBlockMap(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_CkArrayMap(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_MsmBlockMap(CkGroupID _gid,int _onPE) : CProxyElement_CkArrayMap(_gid,_onPE){
    }

    int ckIsDelegated(void) const
    { return CProxyElement_CkArrayMap::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_CkArrayMap::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_CkArrayMap::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_CkArrayMap::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxyElement_CkArrayMap::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxyElement_CkArrayMap::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxyElement_CkArrayMap::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_CkArrayMap::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_CkArrayMap::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_CkArrayMap::ckSetReductionClient(cb); }
int ckGetGroupPe(void) const
{return CProxyElement_CkArrayMap::ckGetGroupPe();}

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_CkArrayMap::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_CkArrayMap::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_CkArrayMap::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxyElement_CkArrayMap::ckSetGroupID(g);
    }
    MsmBlockMap* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static MsmBlockMap* ckLocalBranch(CkGroupID gID) {
      return (MsmBlockMap*)CkLocalBranch(gID);
    }
/* DECLS: MsmBlockMap(int level);
 */
    

};
/* ---------------- collective proxy -------------- */
class CProxy_MsmBlockMap: public CProxy_CkArrayMap{
  public:
    typedef MsmBlockMap local_t;
    typedef CkIndex_MsmBlockMap index_t;
    typedef CProxy_MsmBlockMap proxy_t;
    typedef CProxyElement_MsmBlockMap element_t;
    typedef CProxySection_MsmBlockMap section_t;

    CProxy_MsmBlockMap(void) {
    }
    CProxy_MsmBlockMap(const IrrGroup *g) : CProxy_CkArrayMap(g){
    }
    CProxy_MsmBlockMap(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_CkArrayMap(_gid,CK_DELCTOR_ARGS){  }
    CProxy_MsmBlockMap(CkGroupID _gid) : CProxy_CkArrayMap(_gid){  }
    CProxyElement_MsmBlockMap operator[](int onPE) const
      {return CProxyElement_MsmBlockMap(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

    int ckIsDelegated(void) const
    { return CProxy_CkArrayMap::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_CkArrayMap::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_CkArrayMap::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_CkArrayMap::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxy_CkArrayMap::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxy_CkArrayMap::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxy_CkArrayMap::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_CkArrayMap::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_CkArrayMap::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_CkArrayMap::ckSetReductionClient(cb); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_CkArrayMap::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_CkArrayMap::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_CkArrayMap::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxy_CkArrayMap::ckSetGroupID(g);
    }
    MsmBlockMap* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static MsmBlockMap* ckLocalBranch(CkGroupID gID) {
      return (MsmBlockMap*)CkLocalBranch(gID);
    }
/* DECLS: MsmBlockMap(int level);
 */
    
    static CkGroupID ckNew(int level, const CkEntryOptions *impl_e_opts=NULL);
    CProxy_MsmBlockMap(int level, const CkEntryOptions *impl_e_opts=NULL);

};
/* ---------------- section proxy -------------- */
class CProxySection_MsmBlockMap: public CProxySection_CkArrayMap{
  public:
    typedef MsmBlockMap local_t;
    typedef CkIndex_MsmBlockMap index_t;
    typedef CProxy_MsmBlockMap proxy_t;
    typedef CProxyElement_MsmBlockMap element_t;
    typedef CProxySection_MsmBlockMap section_t;

    CProxySection_MsmBlockMap(void) {
    }
    CProxySection_MsmBlockMap(const IrrGroup *g) : CProxySection_CkArrayMap(g){
    }
    CProxySection_MsmBlockMap(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_CkArrayMap(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_MsmBlockMap(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_CkArrayMap(_gid,_pelist,_npes,factor){  }
    CProxySection_MsmBlockMap(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_CkArrayMap(n,_gid,_pelist,_npes,factor){  }
    CProxySection_MsmBlockMap(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_CkArrayMap(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

    int ckIsDelegated(void) const
    { return CProxySection_CkArrayMap::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_CkArrayMap::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_CkArrayMap::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_CkArrayMap::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxySection_CkArrayMap::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxySection_CkArrayMap::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxySection_CkArrayMap::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_CkArrayMap::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_CkArrayMap::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_CkArrayMap::ckSetReductionClient(cb); }
inline int ckGetNumSections() const
{ return CProxySection_CkArrayMap::ckGetNumSections(); }
inline CkSectionInfo &ckGetSectionInfo()
{ return CProxySection_CkArrayMap::ckGetSectionInfo(); }
inline CkSectionID *ckGetSectionIDs()
{ return CProxySection_CkArrayMap::ckGetSectionIDs(); }
inline CkSectionID &ckGetSectionID()
{ return CProxySection_CkArrayMap::ckGetSectionID(); }
inline CkSectionID &ckGetSectionID(int i)
{ return CProxySection_CkArrayMap::ckGetSectionID(i); }
inline CkGroupID ckGetGroupIDn(int i) const
{ return CProxySection_CkArrayMap::ckGetGroupIDn(i); }
inline const int *ckGetElements() const
{ return CProxySection_CkArrayMap::ckGetElements(); }
inline const int *ckGetElements(int i) const
{ return CProxySection_CkArrayMap::ckGetElements(i); }
inline int ckGetNumElements() const
{ return CProxySection_CkArrayMap::ckGetNumElements(); } 
inline int ckGetNumElements(int i) const
{ return CProxySection_CkArrayMap::ckGetNumElements(i); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_CkArrayMap::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_CkArrayMap::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_CkArrayMap::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxySection_CkArrayMap::ckSetGroupID(g);
    }
    MsmBlockMap* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static MsmBlockMap* ckLocalBranch(CkGroupID gID) {
      return (MsmBlockMap*)CkLocalBranch(gID);
    }
/* DECLS: MsmBlockMap(int level);
 */
    

};
#define MsmBlockMap_SDAG_CODE 
typedef CBaseT1<CkArrayMap, CProxy_MsmBlockMap>CBase_MsmBlockMap;

/* DECLS: array MsmBlock: ArrayElement{
MsmBlock(int level);
void addCharge(GridMsg* impl_msg);
void addPotential(GridMsg* impl_msg);
void sumReducedPotential(CkReductionMsg* impl_msg);
void setupSections();
MsmBlock(CkMigrateMessage* impl_msg);
};
 */
 class MsmBlock;
 class CkIndex_MsmBlock;
 class CProxy_MsmBlock;
 class CProxyElement_MsmBlock;
 class CProxySection_MsmBlock;
/* --------------- index object ------------------ */
class CkIndex_MsmBlock:public CkIndex_ArrayElement{
  public:
    typedef MsmBlock local_t;
    typedef CkIndex_MsmBlock index_t;
    typedef CProxy_MsmBlock proxy_t;
    typedef CProxyElement_MsmBlock element_t;
    typedef CProxySection_MsmBlock section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: MsmBlock(int level);
     */
    // Entry point registration at startup
    
    static int reg_MsmBlock_marshall1();
    // Entry point index lookup
    
    inline static int idx_MsmBlock_marshall1() {
      static int epidx = reg_MsmBlock_marshall1();
      return epidx;
    }

    
    static int ckNew(int level) { return idx_MsmBlock_marshall1(); }
    
    static void _call_MsmBlock_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_MsmBlock_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_MsmBlock_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_MsmBlock_marshall1(PUP::er &p,void *msg);
    /* DECLS: void addCharge(GridMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_addCharge_GridMsg();
    // Entry point index lookup
    
    inline static int idx_addCharge_GridMsg() {
      static int epidx = reg_addCharge_GridMsg();
      return epidx;
    }

    
    inline static int idx_addCharge(void (MsmBlock::*)(GridMsg* impl_msg) ) {
      return idx_addCharge_GridMsg();
    }


    
    static int addCharge(GridMsg* impl_msg) { return idx_addCharge_GridMsg(); }
    
    static void _call_addCharge_GridMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_addCharge_GridMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void addPotential(GridMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_addPotential_GridMsg();
    // Entry point index lookup
    
    inline static int idx_addPotential_GridMsg() {
      static int epidx = reg_addPotential_GridMsg();
      return epidx;
    }

    
    inline static int idx_addPotential(void (MsmBlock::*)(GridMsg* impl_msg) ) {
      return idx_addPotential_GridMsg();
    }


    
    static int addPotential(GridMsg* impl_msg) { return idx_addPotential_GridMsg(); }
    
    static void _call_addPotential_GridMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_addPotential_GridMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void sumReducedPotential(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_sumReducedPotential_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_sumReducedPotential_CkReductionMsg() {
      static int epidx = reg_sumReducedPotential_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_sumReducedPotential(void (MsmBlock::*)(CkReductionMsg* impl_msg) ) {
      return idx_sumReducedPotential_CkReductionMsg();
    }


    
    static int sumReducedPotential(CkReductionMsg* impl_msg) { return idx_sumReducedPotential_CkReductionMsg(); }
    
    static void _call_sumReducedPotential_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_sumReducedPotential_CkReductionMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void setupSections();
     */
    // Entry point registration at startup
    
    static int reg_setupSections_void();
    // Entry point index lookup
    
    inline static int idx_setupSections_void() {
      static int epidx = reg_setupSections_void();
      return epidx;
    }

    
    inline static int idx_setupSections(void (MsmBlock::*)() ) {
      return idx_setupSections_void();
    }


    
    static int setupSections() { return idx_setupSections_void(); }
    
    static void _call_setupSections_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_setupSections_void(void* impl_msg, void* impl_obj);
    /* DECLS: MsmBlock(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_MsmBlock_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_MsmBlock_CkMigrateMessage() {
      static int epidx = reg_MsmBlock_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_MsmBlock_CkMigrateMessage(); }
    
    static void _call_MsmBlock_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_MsmBlock_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_MsmBlock : public CProxyElement_ArrayElement{
  public:
    typedef MsmBlock local_t;
    typedef CkIndex_MsmBlock index_t;
    typedef CProxy_MsmBlock proxy_t;
    typedef CProxyElement_MsmBlock element_t;
    typedef CProxySection_MsmBlock section_t;

    using array_index_t = CkArrayIndex3D;

    /* TRAM aggregators */

    CProxyElement_MsmBlock(void) {
    }
    CProxyElement_MsmBlock(const ArrayElement *e) : CProxyElement_ArrayElement(e){
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_ArrayElement::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxyElement_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxyElement_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxyElement_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxyElement_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxyElement_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxyElement_ArrayElement::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxyElement_ArrayElement::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxyElement_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxyElement_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxyElement_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxyElement_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_ArrayElement::ckSetReductionClient(cb); }

    inline void ckInsert(CkArrayMessage *m,int ctor,int onPe)
    { CProxyElement_ArrayElement::ckInsert(m,ctor,onPe); }
    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0) const
    { CProxyElement_ArrayElement::ckSend(m,ep,opts); }
    inline void *ckSendSync(CkArrayMessage *m, int ep) const
    { return CProxyElement_ArrayElement::ckSendSync(m,ep); }
    inline const CkArrayIndex &ckGetIndex() const
    { return CProxyElement_ArrayElement::ckGetIndex(); }

    MsmBlock *ckLocal(void) const
    { return (MsmBlock *)CProxyElement_ArrayElement::ckLocal(); }

    CProxyElement_MsmBlock(const CkArrayID &aid,const CkArrayIndex3D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_MsmBlock(const CkArrayID &aid,const CkArrayIndex3D &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}

    CProxyElement_MsmBlock(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_MsmBlock(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}
/* DECLS: MsmBlock(int level);
 */
    
    void insert(int level, int onPE=-1, const CkEntryOptions *impl_e_opts=NULL);
/* DECLS: void addCharge(GridMsg* impl_msg);
 */
    
    void addCharge(GridMsg* impl_msg) ;

/* DECLS: void addPotential(GridMsg* impl_msg);
 */
    
    void addPotential(GridMsg* impl_msg) ;

/* DECLS: void sumReducedPotential(CkReductionMsg* impl_msg);
 */
    
    void sumReducedPotential(CkReductionMsg* impl_msg) ;

/* DECLS: void setupSections();
 */
    
    void setupSections(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: MsmBlock(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
 class CProxy_MsmBlock : public CProxy_ArrayElement{
  public:
    typedef MsmBlock local_t;
    typedef CkIndex_MsmBlock index_t;
    typedef CProxy_MsmBlock proxy_t;
    typedef CProxyElement_MsmBlock element_t;
    typedef CProxySection_MsmBlock section_t;

    using array_index_t = CkArrayIndex3D;
    CProxy_MsmBlock(void) {
    }
    CProxy_MsmBlock(const ArrayElement *e) : CProxy_ArrayElement(e){
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_ArrayElement::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxy_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxy_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxy_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxy_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxy_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxy_ArrayElement::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxy_ArrayElement::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxy_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxy_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxy_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxy_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_ArrayElement::ckSetReductionClient(cb); }

    // Empty array construction
    static CkArrayID ckNew(CkArrayOptions opts = CkArrayOptions()) { return ckCreateEmptyArray(opts); }
    static void      ckNew(CkCallback cb, CkArrayOptions opts = CkArrayOptions()) { ckCreateEmptyArrayAsync(cb, opts); }

    // Generalized array indexing:
    CProxyElement_MsmBlock operator [] (const CkArrayIndex3D &idx) const
    { return CProxyElement_MsmBlock(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_MsmBlock operator() (const CkArrayIndex3D &idx) const
    { return CProxyElement_MsmBlock(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_MsmBlock operator () (int i0,int i1,int i2) const 
        {return CProxyElement_MsmBlock(ckGetArrayID(), CkArrayIndex3D(i0,i1,i2), CK_DELCTOR_CALL);}
    CProxyElement_MsmBlock operator () (CkIndex3D idx) const 
        {return CProxyElement_MsmBlock(ckGetArrayID(), CkArrayIndex3D(idx), CK_DELCTOR_CALL);}
    CProxy_MsmBlock(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_MsmBlock(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: MsmBlock(int level);
 */
    
    static CkArrayID ckNew(int level, const CkArrayOptions &opts = CkArrayOptions(), const CkEntryOptions *impl_e_opts=NULL);
    static void      ckNew(int level, const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);
    static CkArrayID ckNew(int level, const int s1, const int s2, const int s3, const CkEntryOptions *impl_e_opts=NULL);
    static void ckNew(int level, const int s1, const int s2, const int s3, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void addCharge(GridMsg* impl_msg);
 */
    
    void addCharge(GridMsg* impl_msg) ;

/* DECLS: void addPotential(GridMsg* impl_msg);
 */
    
    void addPotential(GridMsg* impl_msg) ;

/* DECLS: void sumReducedPotential(CkReductionMsg* impl_msg);
 */
    
    void sumReducedPotential(CkReductionMsg* impl_msg) ;

/* DECLS: void setupSections();
 */
    
    void setupSections(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: MsmBlock(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
 class CProxySection_MsmBlock : public CProxySection_ArrayElement{
  public:
    typedef MsmBlock local_t;
    typedef CkIndex_MsmBlock index_t;
    typedef CProxy_MsmBlock proxy_t;
    typedef CProxyElement_MsmBlock element_t;
    typedef CProxySection_MsmBlock section_t;

    using array_index_t = CkArrayIndex3D;
    CProxySection_MsmBlock(void) {
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_ArrayElement::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxySection_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxySection_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxySection_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxySection_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxySection_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxySection_ArrayElement::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxySection_ArrayElement::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxySection_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxySection_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxySection_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxySection_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_ArrayElement::ckSetReductionClient(cb); }

    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0)
    { CProxySection_ArrayElement::ckSend(m,ep,opts); }
    inline CkSectionInfo &ckGetSectionInfo()
    { return CProxySection_ArrayElement::ckGetSectionInfo(); }
    inline CkSectionID *ckGetSectionIDs()
    { return CProxySection_ArrayElement::ckGetSectionIDs(); }
    inline CkSectionID &ckGetSectionID()
    { return CProxySection_ArrayElement::ckGetSectionID(); }
    inline CkSectionID &ckGetSectionID(int i)
    { return CProxySection_ArrayElement::ckGetSectionID(i); }
    inline CkArrayID ckGetArrayIDn(int i) const
    { return CProxySection_ArrayElement::ckGetArrayIDn(i); } 
    inline CkArrayIndex *ckGetArrayElements() const
    { return CProxySection_ArrayElement::ckGetArrayElements(); }
    inline CkArrayIndex *ckGetArrayElements(int i) const
    { return CProxySection_ArrayElement::ckGetArrayElements(i); }
    inline int ckGetNumElements() const
    { return CProxySection_ArrayElement::ckGetNumElements(); } 
    inline int ckGetNumElements(int i) const
    { return CProxySection_ArrayElement::ckGetNumElements(i); }    // Generalized array indexing:
    CProxyElement_MsmBlock operator [] (const CkArrayIndex3D &idx) const
        {return CProxyElement_MsmBlock(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_MsmBlock operator() (const CkArrayIndex3D &idx) const
        {return CProxyElement_MsmBlock(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_MsmBlock operator () (int idx) const 
        {return CProxyElement_MsmBlock(ckGetArrayID(), *(CkArrayIndex3D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex3D *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      return CkSectionID(aid, elems, nElems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, const std::vector<CkArrayIndex3D> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      return CkSectionID(aid, elems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, int l1, int u1, int s1, int l2, int u2, int s2, int l3, int u3, int s3, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      std::vector<CkArrayIndex3D> al;
      for (int i=l1; i<=u1; i+=s1) 
        for (int j=l2; j<=u2; j+=s2) 
          for (int k=l3; k<=u3; k+=s3) 
          al.emplace_back(i, j, k);
      return CkSectionID(aid, al, factor);
    } 
    CProxySection_MsmBlock(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_MsmBlock(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_MsmBlock(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems,nElems, factor) {}
    CProxySection_MsmBlock(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems, factor) { ckAutoDelegate(); }
    CProxySection_MsmBlock(const CkSectionID &sid)  
        :CProxySection_ArrayElement(sid) { ckAutoDelegate(); }
    CProxySection_MsmBlock(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_MsmBlock(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_MsmBlock(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) { ckAutoDelegate(); }
    CProxySection_MsmBlock(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems) 
        :CProxySection_ArrayElement(aid,elems) { ckAutoDelegate(); }
    CProxySection_MsmBlock(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, int factor) 
        :CProxySection_ArrayElement(n,aid,elems,nElems, factor) { ckAutoDelegate(); }
    CProxySection_MsmBlock(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, int factor) 
        :CProxySection_ArrayElement(aid,elems, factor) { ckAutoDelegate(); }
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex *elems, int nElems) {
      return CkSectionID(aid, elems, nElems);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems) {
       return CkSectionID(aid, elems);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor) {
      return CkSectionID(aid, elems, nElems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor) {
      return CkSectionID(aid, elems, factor);
    } 
    void ckAutoDelegate(int opts=1) {
      if(ckIsDelegated()) return;
      CProxySection_ArrayElement::ckAutoDelegate(opts);
    } 
    void setReductionClient(CkCallback *cb) {
      CProxySection_ArrayElement::setReductionClient(cb);
    } 
    void resetSection() {
      CProxySection_ArrayElement::resetSection();
    } 
    static void contribute(CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    static void contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    template <typename T>
    static void contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    static void contribute(CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
    static void contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
    template <typename T>
    static void contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
/* DECLS: MsmBlock(int level);
 */
    

/* DECLS: void addCharge(GridMsg* impl_msg);
 */
    
    void addCharge(GridMsg* impl_msg) ;

/* DECLS: void addPotential(GridMsg* impl_msg);
 */
    
    void addPotential(GridMsg* impl_msg) ;

/* DECLS: void sumReducedPotential(CkReductionMsg* impl_msg);
 */
    
    void sumReducedPotential(CkReductionMsg* impl_msg) ;

/* DECLS: void setupSections();
 */
    
    void setupSections(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: MsmBlock(CkMigrateMessage* impl_msg);
 */

};
#define MsmBlock_SDAG_CODE 
typedef CBaseT1<ArrayElementT<CkIndex3D>, CProxy_MsmBlock>CBase_MsmBlock;

/* DECLS: array MsmC1HermiteBlock: ArrayElement{
MsmC1HermiteBlock(int level);
void addCharge(GridMsg* impl_msg);
void addPotential(GridMsg* impl_msg);
void sumReducedPotential(CkReductionMsg* impl_msg);
void setupSections();
MsmC1HermiteBlock(CkMigrateMessage* impl_msg);
};
 */
 class MsmC1HermiteBlock;
 class CkIndex_MsmC1HermiteBlock;
 class CProxy_MsmC1HermiteBlock;
 class CProxyElement_MsmC1HermiteBlock;
 class CProxySection_MsmC1HermiteBlock;
/* --------------- index object ------------------ */
class CkIndex_MsmC1HermiteBlock:public CkIndex_ArrayElement{
  public:
    typedef MsmC1HermiteBlock local_t;
    typedef CkIndex_MsmC1HermiteBlock index_t;
    typedef CProxy_MsmC1HermiteBlock proxy_t;
    typedef CProxyElement_MsmC1HermiteBlock element_t;
    typedef CProxySection_MsmC1HermiteBlock section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: MsmC1HermiteBlock(int level);
     */
    // Entry point registration at startup
    
    static int reg_MsmC1HermiteBlock_marshall1();
    // Entry point index lookup
    
    inline static int idx_MsmC1HermiteBlock_marshall1() {
      static int epidx = reg_MsmC1HermiteBlock_marshall1();
      return epidx;
    }

    
    static int ckNew(int level) { return idx_MsmC1HermiteBlock_marshall1(); }
    
    static void _call_MsmC1HermiteBlock_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_MsmC1HermiteBlock_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_MsmC1HermiteBlock_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_MsmC1HermiteBlock_marshall1(PUP::er &p,void *msg);
    /* DECLS: void addCharge(GridMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_addCharge_GridMsg();
    // Entry point index lookup
    
    inline static int idx_addCharge_GridMsg() {
      static int epidx = reg_addCharge_GridMsg();
      return epidx;
    }

    
    inline static int idx_addCharge(void (MsmC1HermiteBlock::*)(GridMsg* impl_msg) ) {
      return idx_addCharge_GridMsg();
    }


    
    static int addCharge(GridMsg* impl_msg) { return idx_addCharge_GridMsg(); }
    
    static void _call_addCharge_GridMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_addCharge_GridMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void addPotential(GridMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_addPotential_GridMsg();
    // Entry point index lookup
    
    inline static int idx_addPotential_GridMsg() {
      static int epidx = reg_addPotential_GridMsg();
      return epidx;
    }

    
    inline static int idx_addPotential(void (MsmC1HermiteBlock::*)(GridMsg* impl_msg) ) {
      return idx_addPotential_GridMsg();
    }


    
    static int addPotential(GridMsg* impl_msg) { return idx_addPotential_GridMsg(); }
    
    static void _call_addPotential_GridMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_addPotential_GridMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void sumReducedPotential(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_sumReducedPotential_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_sumReducedPotential_CkReductionMsg() {
      static int epidx = reg_sumReducedPotential_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_sumReducedPotential(void (MsmC1HermiteBlock::*)(CkReductionMsg* impl_msg) ) {
      return idx_sumReducedPotential_CkReductionMsg();
    }


    
    static int sumReducedPotential(CkReductionMsg* impl_msg) { return idx_sumReducedPotential_CkReductionMsg(); }
    
    static void _call_sumReducedPotential_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_sumReducedPotential_CkReductionMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void setupSections();
     */
    // Entry point registration at startup
    
    static int reg_setupSections_void();
    // Entry point index lookup
    
    inline static int idx_setupSections_void() {
      static int epidx = reg_setupSections_void();
      return epidx;
    }

    
    inline static int idx_setupSections(void (MsmC1HermiteBlock::*)() ) {
      return idx_setupSections_void();
    }


    
    static int setupSections() { return idx_setupSections_void(); }
    
    static void _call_setupSections_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_setupSections_void(void* impl_msg, void* impl_obj);
    /* DECLS: MsmC1HermiteBlock(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_MsmC1HermiteBlock_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_MsmC1HermiteBlock_CkMigrateMessage() {
      static int epidx = reg_MsmC1HermiteBlock_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_MsmC1HermiteBlock_CkMigrateMessage(); }
    
    static void _call_MsmC1HermiteBlock_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_MsmC1HermiteBlock_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_MsmC1HermiteBlock : public CProxyElement_ArrayElement{
  public:
    typedef MsmC1HermiteBlock local_t;
    typedef CkIndex_MsmC1HermiteBlock index_t;
    typedef CProxy_MsmC1HermiteBlock proxy_t;
    typedef CProxyElement_MsmC1HermiteBlock element_t;
    typedef CProxySection_MsmC1HermiteBlock section_t;

    using array_index_t = CkArrayIndex3D;

    /* TRAM aggregators */

    CProxyElement_MsmC1HermiteBlock(void) {
    }
    CProxyElement_MsmC1HermiteBlock(const ArrayElement *e) : CProxyElement_ArrayElement(e){
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_ArrayElement::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxyElement_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxyElement_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxyElement_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxyElement_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxyElement_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxyElement_ArrayElement::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxyElement_ArrayElement::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxyElement_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxyElement_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxyElement_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxyElement_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_ArrayElement::ckSetReductionClient(cb); }

    inline void ckInsert(CkArrayMessage *m,int ctor,int onPe)
    { CProxyElement_ArrayElement::ckInsert(m,ctor,onPe); }
    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0) const
    { CProxyElement_ArrayElement::ckSend(m,ep,opts); }
    inline void *ckSendSync(CkArrayMessage *m, int ep) const
    { return CProxyElement_ArrayElement::ckSendSync(m,ep); }
    inline const CkArrayIndex &ckGetIndex() const
    { return CProxyElement_ArrayElement::ckGetIndex(); }

    MsmC1HermiteBlock *ckLocal(void) const
    { return (MsmC1HermiteBlock *)CProxyElement_ArrayElement::ckLocal(); }

    CProxyElement_MsmC1HermiteBlock(const CkArrayID &aid,const CkArrayIndex3D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_MsmC1HermiteBlock(const CkArrayID &aid,const CkArrayIndex3D &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}

    CProxyElement_MsmC1HermiteBlock(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_MsmC1HermiteBlock(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}
/* DECLS: MsmC1HermiteBlock(int level);
 */
    
    void insert(int level, int onPE=-1, const CkEntryOptions *impl_e_opts=NULL);
/* DECLS: void addCharge(GridMsg* impl_msg);
 */
    
    void addCharge(GridMsg* impl_msg) ;

/* DECLS: void addPotential(GridMsg* impl_msg);
 */
    
    void addPotential(GridMsg* impl_msg) ;

/* DECLS: void sumReducedPotential(CkReductionMsg* impl_msg);
 */
    
    void sumReducedPotential(CkReductionMsg* impl_msg) ;

/* DECLS: void setupSections();
 */
    
    void setupSections(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: MsmC1HermiteBlock(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
 class CProxy_MsmC1HermiteBlock : public CProxy_ArrayElement{
  public:
    typedef MsmC1HermiteBlock local_t;
    typedef CkIndex_MsmC1HermiteBlock index_t;
    typedef CProxy_MsmC1HermiteBlock proxy_t;
    typedef CProxyElement_MsmC1HermiteBlock element_t;
    typedef CProxySection_MsmC1HermiteBlock section_t;

    using array_index_t = CkArrayIndex3D;
    CProxy_MsmC1HermiteBlock(void) {
    }
    CProxy_MsmC1HermiteBlock(const ArrayElement *e) : CProxy_ArrayElement(e){
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_ArrayElement::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxy_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxy_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxy_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxy_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxy_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxy_ArrayElement::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxy_ArrayElement::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxy_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxy_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxy_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxy_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_ArrayElement::ckSetReductionClient(cb); }

    // Empty array construction
    static CkArrayID ckNew(CkArrayOptions opts = CkArrayOptions()) { return ckCreateEmptyArray(opts); }
    static void      ckNew(CkCallback cb, CkArrayOptions opts = CkArrayOptions()) { ckCreateEmptyArrayAsync(cb, opts); }

    // Generalized array indexing:
    CProxyElement_MsmC1HermiteBlock operator [] (const CkArrayIndex3D &idx) const
    { return CProxyElement_MsmC1HermiteBlock(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_MsmC1HermiteBlock operator() (const CkArrayIndex3D &idx) const
    { return CProxyElement_MsmC1HermiteBlock(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_MsmC1HermiteBlock operator () (int i0,int i1,int i2) const 
        {return CProxyElement_MsmC1HermiteBlock(ckGetArrayID(), CkArrayIndex3D(i0,i1,i2), CK_DELCTOR_CALL);}
    CProxyElement_MsmC1HermiteBlock operator () (CkIndex3D idx) const 
        {return CProxyElement_MsmC1HermiteBlock(ckGetArrayID(), CkArrayIndex3D(idx), CK_DELCTOR_CALL);}
    CProxy_MsmC1HermiteBlock(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_MsmC1HermiteBlock(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: MsmC1HermiteBlock(int level);
 */
    
    static CkArrayID ckNew(int level, const CkArrayOptions &opts = CkArrayOptions(), const CkEntryOptions *impl_e_opts=NULL);
    static void      ckNew(int level, const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);
    static CkArrayID ckNew(int level, const int s1, const int s2, const int s3, const CkEntryOptions *impl_e_opts=NULL);
    static void ckNew(int level, const int s1, const int s2, const int s3, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void addCharge(GridMsg* impl_msg);
 */
    
    void addCharge(GridMsg* impl_msg) ;

/* DECLS: void addPotential(GridMsg* impl_msg);
 */
    
    void addPotential(GridMsg* impl_msg) ;

/* DECLS: void sumReducedPotential(CkReductionMsg* impl_msg);
 */
    
    void sumReducedPotential(CkReductionMsg* impl_msg) ;

/* DECLS: void setupSections();
 */
    
    void setupSections(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: MsmC1HermiteBlock(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
 class CProxySection_MsmC1HermiteBlock : public CProxySection_ArrayElement{
  public:
    typedef MsmC1HermiteBlock local_t;
    typedef CkIndex_MsmC1HermiteBlock index_t;
    typedef CProxy_MsmC1HermiteBlock proxy_t;
    typedef CProxyElement_MsmC1HermiteBlock element_t;
    typedef CProxySection_MsmC1HermiteBlock section_t;

    using array_index_t = CkArrayIndex3D;
    CProxySection_MsmC1HermiteBlock(void) {
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_ArrayElement::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxySection_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxySection_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxySection_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxySection_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxySection_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxySection_ArrayElement::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxySection_ArrayElement::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxySection_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxySection_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxySection_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxySection_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_ArrayElement::ckSetReductionClient(cb); }

    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0)
    { CProxySection_ArrayElement::ckSend(m,ep,opts); }
    inline CkSectionInfo &ckGetSectionInfo()
    { return CProxySection_ArrayElement::ckGetSectionInfo(); }
    inline CkSectionID *ckGetSectionIDs()
    { return CProxySection_ArrayElement::ckGetSectionIDs(); }
    inline CkSectionID &ckGetSectionID()
    { return CProxySection_ArrayElement::ckGetSectionID(); }
    inline CkSectionID &ckGetSectionID(int i)
    { return CProxySection_ArrayElement::ckGetSectionID(i); }
    inline CkArrayID ckGetArrayIDn(int i) const
    { return CProxySection_ArrayElement::ckGetArrayIDn(i); } 
    inline CkArrayIndex *ckGetArrayElements() const
    { return CProxySection_ArrayElement::ckGetArrayElements(); }
    inline CkArrayIndex *ckGetArrayElements(int i) const
    { return CProxySection_ArrayElement::ckGetArrayElements(i); }
    inline int ckGetNumElements() const
    { return CProxySection_ArrayElement::ckGetNumElements(); } 
    inline int ckGetNumElements(int i) const
    { return CProxySection_ArrayElement::ckGetNumElements(i); }    // Generalized array indexing:
    CProxyElement_MsmC1HermiteBlock operator [] (const CkArrayIndex3D &idx) const
        {return CProxyElement_MsmC1HermiteBlock(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_MsmC1HermiteBlock operator() (const CkArrayIndex3D &idx) const
        {return CProxyElement_MsmC1HermiteBlock(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_MsmC1HermiteBlock operator () (int idx) const 
        {return CProxyElement_MsmC1HermiteBlock(ckGetArrayID(), *(CkArrayIndex3D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex3D *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      return CkSectionID(aid, elems, nElems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, const std::vector<CkArrayIndex3D> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      return CkSectionID(aid, elems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, int l1, int u1, int s1, int l2, int u2, int s2, int l3, int u3, int s3, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      std::vector<CkArrayIndex3D> al;
      for (int i=l1; i<=u1; i+=s1) 
        for (int j=l2; j<=u2; j+=s2) 
          for (int k=l3; k<=u3; k+=s3) 
          al.emplace_back(i, j, k);
      return CkSectionID(aid, al, factor);
    } 
    CProxySection_MsmC1HermiteBlock(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_MsmC1HermiteBlock(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_MsmC1HermiteBlock(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems,nElems, factor) {}
    CProxySection_MsmC1HermiteBlock(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems, factor) { ckAutoDelegate(); }
    CProxySection_MsmC1HermiteBlock(const CkSectionID &sid)  
        :CProxySection_ArrayElement(sid) { ckAutoDelegate(); }
    CProxySection_MsmC1HermiteBlock(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_MsmC1HermiteBlock(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_MsmC1HermiteBlock(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) { ckAutoDelegate(); }
    CProxySection_MsmC1HermiteBlock(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems) 
        :CProxySection_ArrayElement(aid,elems) { ckAutoDelegate(); }
    CProxySection_MsmC1HermiteBlock(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, int factor) 
        :CProxySection_ArrayElement(n,aid,elems,nElems, factor) { ckAutoDelegate(); }
    CProxySection_MsmC1HermiteBlock(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, int factor) 
        :CProxySection_ArrayElement(aid,elems, factor) { ckAutoDelegate(); }
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex *elems, int nElems) {
      return CkSectionID(aid, elems, nElems);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems) {
       return CkSectionID(aid, elems);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor) {
      return CkSectionID(aid, elems, nElems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor) {
      return CkSectionID(aid, elems, factor);
    } 
    void ckAutoDelegate(int opts=1) {
      if(ckIsDelegated()) return;
      CProxySection_ArrayElement::ckAutoDelegate(opts);
    } 
    void setReductionClient(CkCallback *cb) {
      CProxySection_ArrayElement::setReductionClient(cb);
    } 
    void resetSection() {
      CProxySection_ArrayElement::resetSection();
    } 
    static void contribute(CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    static void contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    template <typename T>
    static void contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    static void contribute(CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
    static void contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
    template <typename T>
    static void contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
/* DECLS: MsmC1HermiteBlock(int level);
 */
    

/* DECLS: void addCharge(GridMsg* impl_msg);
 */
    
    void addCharge(GridMsg* impl_msg) ;

/* DECLS: void addPotential(GridMsg* impl_msg);
 */
    
    void addPotential(GridMsg* impl_msg) ;

/* DECLS: void sumReducedPotential(CkReductionMsg* impl_msg);
 */
    
    void sumReducedPotential(CkReductionMsg* impl_msg) ;

/* DECLS: void setupSections();
 */
    
    void setupSections(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: MsmC1HermiteBlock(CkMigrateMessage* impl_msg);
 */

};
#define MsmC1HermiteBlock_SDAG_CODE 
typedef CBaseT1<ArrayElementT<CkIndex3D>, CProxy_MsmC1HermiteBlock>CBase_MsmC1HermiteBlock;

/* DECLS: group MsmGridCutoffMap: CkArrayMap{
MsmGridCutoffMap();
};
 */
 class MsmGridCutoffMap;
 class CkIndex_MsmGridCutoffMap;
 class CProxy_MsmGridCutoffMap;
 class CProxyElement_MsmGridCutoffMap;
 class CProxySection_MsmGridCutoffMap;
/* --------------- index object ------------------ */
class CkIndex_MsmGridCutoffMap:public CkIndex_CkArrayMap{
  public:
    typedef MsmGridCutoffMap local_t;
    typedef CkIndex_MsmGridCutoffMap index_t;
    typedef CProxy_MsmGridCutoffMap proxy_t;
    typedef CProxyElement_MsmGridCutoffMap element_t;
    typedef CProxySection_MsmGridCutoffMap section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: MsmGridCutoffMap();
     */
    // Entry point registration at startup
    
    static int reg_MsmGridCutoffMap_void();
    // Entry point index lookup
    
    inline static int idx_MsmGridCutoffMap_void() {
      static int epidx = reg_MsmGridCutoffMap_void();
      return epidx;
    }

    
    static int ckNew() { return idx_MsmGridCutoffMap_void(); }
    
    static void _call_MsmGridCutoffMap_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_MsmGridCutoffMap_void(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_MsmGridCutoffMap: public CProxyElement_CkArrayMap{
  public:
    typedef MsmGridCutoffMap local_t;
    typedef CkIndex_MsmGridCutoffMap index_t;
    typedef CProxy_MsmGridCutoffMap proxy_t;
    typedef CProxyElement_MsmGridCutoffMap element_t;
    typedef CProxySection_MsmGridCutoffMap section_t;


    /* TRAM aggregators */

    CProxyElement_MsmGridCutoffMap(void) {
    }
    CProxyElement_MsmGridCutoffMap(const IrrGroup *g) : CProxyElement_CkArrayMap(g){
    }
    CProxyElement_MsmGridCutoffMap(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_CkArrayMap(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_MsmGridCutoffMap(CkGroupID _gid,int _onPE) : CProxyElement_CkArrayMap(_gid,_onPE){
    }

    int ckIsDelegated(void) const
    { return CProxyElement_CkArrayMap::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_CkArrayMap::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_CkArrayMap::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_CkArrayMap::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxyElement_CkArrayMap::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxyElement_CkArrayMap::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxyElement_CkArrayMap::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_CkArrayMap::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_CkArrayMap::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_CkArrayMap::ckSetReductionClient(cb); }
int ckGetGroupPe(void) const
{return CProxyElement_CkArrayMap::ckGetGroupPe();}

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_CkArrayMap::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_CkArrayMap::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_CkArrayMap::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxyElement_CkArrayMap::ckSetGroupID(g);
    }
    MsmGridCutoffMap* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static MsmGridCutoffMap* ckLocalBranch(CkGroupID gID) {
      return (MsmGridCutoffMap*)CkLocalBranch(gID);
    }
/* DECLS: MsmGridCutoffMap();
 */
    

};
/* ---------------- collective proxy -------------- */
class CProxy_MsmGridCutoffMap: public CProxy_CkArrayMap{
  public:
    typedef MsmGridCutoffMap local_t;
    typedef CkIndex_MsmGridCutoffMap index_t;
    typedef CProxy_MsmGridCutoffMap proxy_t;
    typedef CProxyElement_MsmGridCutoffMap element_t;
    typedef CProxySection_MsmGridCutoffMap section_t;

    CProxy_MsmGridCutoffMap(void) {
    }
    CProxy_MsmGridCutoffMap(const IrrGroup *g) : CProxy_CkArrayMap(g){
    }
    CProxy_MsmGridCutoffMap(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_CkArrayMap(_gid,CK_DELCTOR_ARGS){  }
    CProxy_MsmGridCutoffMap(CkGroupID _gid) : CProxy_CkArrayMap(_gid){  }
    CProxyElement_MsmGridCutoffMap operator[](int onPE) const
      {return CProxyElement_MsmGridCutoffMap(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

    int ckIsDelegated(void) const
    { return CProxy_CkArrayMap::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_CkArrayMap::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_CkArrayMap::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_CkArrayMap::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxy_CkArrayMap::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxy_CkArrayMap::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxy_CkArrayMap::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_CkArrayMap::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_CkArrayMap::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_CkArrayMap::ckSetReductionClient(cb); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_CkArrayMap::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_CkArrayMap::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_CkArrayMap::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxy_CkArrayMap::ckSetGroupID(g);
    }
    MsmGridCutoffMap* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static MsmGridCutoffMap* ckLocalBranch(CkGroupID gID) {
      return (MsmGridCutoffMap*)CkLocalBranch(gID);
    }
/* DECLS: MsmGridCutoffMap();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

};
/* ---------------- section proxy -------------- */
class CProxySection_MsmGridCutoffMap: public CProxySection_CkArrayMap{
  public:
    typedef MsmGridCutoffMap local_t;
    typedef CkIndex_MsmGridCutoffMap index_t;
    typedef CProxy_MsmGridCutoffMap proxy_t;
    typedef CProxyElement_MsmGridCutoffMap element_t;
    typedef CProxySection_MsmGridCutoffMap section_t;

    CProxySection_MsmGridCutoffMap(void) {
    }
    CProxySection_MsmGridCutoffMap(const IrrGroup *g) : CProxySection_CkArrayMap(g){
    }
    CProxySection_MsmGridCutoffMap(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_CkArrayMap(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_MsmGridCutoffMap(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_CkArrayMap(_gid,_pelist,_npes,factor){  }
    CProxySection_MsmGridCutoffMap(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_CkArrayMap(n,_gid,_pelist,_npes,factor){  }
    CProxySection_MsmGridCutoffMap(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_CkArrayMap(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

    int ckIsDelegated(void) const
    { return CProxySection_CkArrayMap::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_CkArrayMap::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_CkArrayMap::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_CkArrayMap::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxySection_CkArrayMap::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxySection_CkArrayMap::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxySection_CkArrayMap::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_CkArrayMap::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_CkArrayMap::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_CkArrayMap::ckSetReductionClient(cb); }
inline int ckGetNumSections() const
{ return CProxySection_CkArrayMap::ckGetNumSections(); }
inline CkSectionInfo &ckGetSectionInfo()
{ return CProxySection_CkArrayMap::ckGetSectionInfo(); }
inline CkSectionID *ckGetSectionIDs()
{ return CProxySection_CkArrayMap::ckGetSectionIDs(); }
inline CkSectionID &ckGetSectionID()
{ return CProxySection_CkArrayMap::ckGetSectionID(); }
inline CkSectionID &ckGetSectionID(int i)
{ return CProxySection_CkArrayMap::ckGetSectionID(i); }
inline CkGroupID ckGetGroupIDn(int i) const
{ return CProxySection_CkArrayMap::ckGetGroupIDn(i); }
inline const int *ckGetElements() const
{ return CProxySection_CkArrayMap::ckGetElements(); }
inline const int *ckGetElements(int i) const
{ return CProxySection_CkArrayMap::ckGetElements(i); }
inline int ckGetNumElements() const
{ return CProxySection_CkArrayMap::ckGetNumElements(); } 
inline int ckGetNumElements(int i) const
{ return CProxySection_CkArrayMap::ckGetNumElements(i); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_CkArrayMap::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_CkArrayMap::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_CkArrayMap::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxySection_CkArrayMap::ckSetGroupID(g);
    }
    MsmGridCutoffMap* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static MsmGridCutoffMap* ckLocalBranch(CkGroupID gID) {
      return (MsmGridCutoffMap*)CkLocalBranch(gID);
    }
/* DECLS: MsmGridCutoffMap();
 */
    

};
#define MsmGridCutoffMap_SDAG_CODE 
typedef CBaseT1<CkArrayMap, CProxy_MsmGridCutoffMap>CBase_MsmGridCutoffMap;

/* DECLS: array MsmGridCutoff: ArrayElement{
MsmGridCutoff();
void setup(MsmGridCutoffInitMsg* impl_msg);
void setupSections(MsmGridCutoffSetupMsg* impl_msg);
void compute(GridMsg* impl_msg);
MsmGridCutoff(CkMigrateMessage* impl_msg);
};
 */
 class MsmGridCutoff;
 class CkIndex_MsmGridCutoff;
 class CProxy_MsmGridCutoff;
 class CProxyElement_MsmGridCutoff;
 class CProxySection_MsmGridCutoff;
/* --------------- index object ------------------ */
class CkIndex_MsmGridCutoff:public CkIndex_ArrayElement{
  public:
    typedef MsmGridCutoff local_t;
    typedef CkIndex_MsmGridCutoff index_t;
    typedef CProxy_MsmGridCutoff proxy_t;
    typedef CProxyElement_MsmGridCutoff element_t;
    typedef CProxySection_MsmGridCutoff section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: MsmGridCutoff();
     */
    // Entry point registration at startup
    
    static int reg_MsmGridCutoff_void();
    // Entry point index lookup
    
    inline static int idx_MsmGridCutoff_void() {
      static int epidx = reg_MsmGridCutoff_void();
      return epidx;
    }

    
    static int ckNew() { return idx_MsmGridCutoff_void(); }
    
    static void _call_MsmGridCutoff_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_MsmGridCutoff_void(void* impl_msg, void* impl_obj);
    /* DECLS: void setup(MsmGridCutoffInitMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_setup_MsmGridCutoffInitMsg();
    // Entry point index lookup
    
    inline static int idx_setup_MsmGridCutoffInitMsg() {
      static int epidx = reg_setup_MsmGridCutoffInitMsg();
      return epidx;
    }

    
    inline static int idx_setup(void (MsmGridCutoff::*)(MsmGridCutoffInitMsg* impl_msg) ) {
      return idx_setup_MsmGridCutoffInitMsg();
    }


    
    static int setup(MsmGridCutoffInitMsg* impl_msg) { return idx_setup_MsmGridCutoffInitMsg(); }
    
    static void _call_setup_MsmGridCutoffInitMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_setup_MsmGridCutoffInitMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void setupSections(MsmGridCutoffSetupMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_setupSections_MsmGridCutoffSetupMsg();
    // Entry point index lookup
    
    inline static int idx_setupSections_MsmGridCutoffSetupMsg() {
      static int epidx = reg_setupSections_MsmGridCutoffSetupMsg();
      return epidx;
    }

    
    inline static int idx_setupSections(void (MsmGridCutoff::*)(MsmGridCutoffSetupMsg* impl_msg) ) {
      return idx_setupSections_MsmGridCutoffSetupMsg();
    }


    
    static int setupSections(MsmGridCutoffSetupMsg* impl_msg) { return idx_setupSections_MsmGridCutoffSetupMsg(); }
    
    static void _call_setupSections_MsmGridCutoffSetupMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_setupSections_MsmGridCutoffSetupMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void compute(GridMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_compute_GridMsg();
    // Entry point index lookup
    
    inline static int idx_compute_GridMsg() {
      static int epidx = reg_compute_GridMsg();
      return epidx;
    }

    
    inline static int idx_compute(void (MsmGridCutoff::*)(GridMsg* impl_msg) ) {
      return idx_compute_GridMsg();
    }


    
    static int compute(GridMsg* impl_msg) { return idx_compute_GridMsg(); }
    
    static void _call_compute_GridMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_compute_GridMsg(void* impl_msg, void* impl_obj);
    /* DECLS: MsmGridCutoff(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_MsmGridCutoff_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_MsmGridCutoff_CkMigrateMessage() {
      static int epidx = reg_MsmGridCutoff_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_MsmGridCutoff_CkMigrateMessage(); }
    
    static void _call_MsmGridCutoff_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_MsmGridCutoff_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_MsmGridCutoff : public CProxyElement_ArrayElement{
  public:
    typedef MsmGridCutoff local_t;
    typedef CkIndex_MsmGridCutoff index_t;
    typedef CProxy_MsmGridCutoff proxy_t;
    typedef CProxyElement_MsmGridCutoff element_t;
    typedef CProxySection_MsmGridCutoff section_t;

    using array_index_t = CkArrayIndex1D;

    /* TRAM aggregators */

    CProxyElement_MsmGridCutoff(void) {
    }
    CProxyElement_MsmGridCutoff(const ArrayElement *e) : CProxyElement_ArrayElement(e){
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_ArrayElement::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxyElement_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxyElement_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxyElement_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxyElement_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxyElement_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxyElement_ArrayElement::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxyElement_ArrayElement::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxyElement_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxyElement_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxyElement_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxyElement_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_ArrayElement::ckSetReductionClient(cb); }

    inline void ckInsert(CkArrayMessage *m,int ctor,int onPe)
    { CProxyElement_ArrayElement::ckInsert(m,ctor,onPe); }
    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0) const
    { CProxyElement_ArrayElement::ckSend(m,ep,opts); }
    inline void *ckSendSync(CkArrayMessage *m, int ep) const
    { return CProxyElement_ArrayElement::ckSendSync(m,ep); }
    inline const CkArrayIndex &ckGetIndex() const
    { return CProxyElement_ArrayElement::ckGetIndex(); }

    MsmGridCutoff *ckLocal(void) const
    { return (MsmGridCutoff *)CProxyElement_ArrayElement::ckLocal(); }

    CProxyElement_MsmGridCutoff(const CkArrayID &aid,const CkArrayIndex1D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_MsmGridCutoff(const CkArrayID &aid,const CkArrayIndex1D &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}

    CProxyElement_MsmGridCutoff(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_MsmGridCutoff(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}
/* DECLS: MsmGridCutoff();
 */
    
    void insert(int onPE=-1, const CkEntryOptions *impl_e_opts=NULL);
/* DECLS: void setup(MsmGridCutoffInitMsg* impl_msg);
 */
    
    void setup(MsmGridCutoffInitMsg* impl_msg) ;

/* DECLS: void setupSections(MsmGridCutoffSetupMsg* impl_msg);
 */
    
    void setupSections(MsmGridCutoffSetupMsg* impl_msg) ;

/* DECLS: void compute(GridMsg* impl_msg);
 */
    
    void compute(GridMsg* impl_msg) ;

/* DECLS: MsmGridCutoff(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
 class CProxy_MsmGridCutoff : public CProxy_ArrayElement{
  public:
    typedef MsmGridCutoff local_t;
    typedef CkIndex_MsmGridCutoff index_t;
    typedef CProxy_MsmGridCutoff proxy_t;
    typedef CProxyElement_MsmGridCutoff element_t;
    typedef CProxySection_MsmGridCutoff section_t;

    using array_index_t = CkArrayIndex1D;
    CProxy_MsmGridCutoff(void) {
    }
    CProxy_MsmGridCutoff(const ArrayElement *e) : CProxy_ArrayElement(e){
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_ArrayElement::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxy_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxy_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxy_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxy_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxy_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxy_ArrayElement::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxy_ArrayElement::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxy_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxy_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxy_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxy_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_ArrayElement::ckSetReductionClient(cb); }

    // Generalized array indexing:
    CProxyElement_MsmGridCutoff operator [] (const CkArrayIndex1D &idx) const
    { return CProxyElement_MsmGridCutoff(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_MsmGridCutoff operator() (const CkArrayIndex1D &idx) const
    { return CProxyElement_MsmGridCutoff(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_MsmGridCutoff operator [] (int idx) const 
        {return CProxyElement_MsmGridCutoff(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxyElement_MsmGridCutoff operator () (int idx) const 
        {return CProxyElement_MsmGridCutoff(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxy_MsmGridCutoff(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_MsmGridCutoff(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: MsmGridCutoff();
 */
    
    static CkArrayID ckNew(const CkArrayOptions &opts = CkArrayOptions(), const CkEntryOptions *impl_e_opts=NULL);
    static void      ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);
    static CkArrayID ckNew(const int s1, const CkEntryOptions *impl_e_opts=NULL);
    static void ckNew(const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void setup(MsmGridCutoffInitMsg* impl_msg);
 */
    
    void setup(MsmGridCutoffInitMsg* impl_msg) ;

/* DECLS: void setupSections(MsmGridCutoffSetupMsg* impl_msg);
 */
    
    void setupSections(MsmGridCutoffSetupMsg* impl_msg) ;

/* DECLS: void compute(GridMsg* impl_msg);
 */
    
    void compute(GridMsg* impl_msg) ;

/* DECLS: MsmGridCutoff(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
 class CProxySection_MsmGridCutoff : public CProxySection_ArrayElement{
  public:
    typedef MsmGridCutoff local_t;
    typedef CkIndex_MsmGridCutoff index_t;
    typedef CProxy_MsmGridCutoff proxy_t;
    typedef CProxyElement_MsmGridCutoff element_t;
    typedef CProxySection_MsmGridCutoff section_t;

    using array_index_t = CkArrayIndex1D;
    CProxySection_MsmGridCutoff(void) {
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_ArrayElement::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxySection_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxySection_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxySection_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxySection_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxySection_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxySection_ArrayElement::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxySection_ArrayElement::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxySection_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxySection_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxySection_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxySection_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_ArrayElement::ckSetReductionClient(cb); }

    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0)
    { CProxySection_ArrayElement::ckSend(m,ep,opts); }
    inline CkSectionInfo &ckGetSectionInfo()
    { return CProxySection_ArrayElement::ckGetSectionInfo(); }
    inline CkSectionID *ckGetSectionIDs()
    { return CProxySection_ArrayElement::ckGetSectionIDs(); }
    inline CkSectionID &ckGetSectionID()
    { return CProxySection_ArrayElement::ckGetSectionID(); }
    inline CkSectionID &ckGetSectionID(int i)
    { return CProxySection_ArrayElement::ckGetSectionID(i); }
    inline CkArrayID ckGetArrayIDn(int i) const
    { return CProxySection_ArrayElement::ckGetArrayIDn(i); } 
    inline CkArrayIndex *ckGetArrayElements() const
    { return CProxySection_ArrayElement::ckGetArrayElements(); }
    inline CkArrayIndex *ckGetArrayElements(int i) const
    { return CProxySection_ArrayElement::ckGetArrayElements(i); }
    inline int ckGetNumElements() const
    { return CProxySection_ArrayElement::ckGetNumElements(); } 
    inline int ckGetNumElements(int i) const
    { return CProxySection_ArrayElement::ckGetNumElements(i); }    // Generalized array indexing:
    CProxyElement_MsmGridCutoff operator [] (const CkArrayIndex1D &idx) const
        {return CProxyElement_MsmGridCutoff(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_MsmGridCutoff operator() (const CkArrayIndex1D &idx) const
        {return CProxyElement_MsmGridCutoff(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_MsmGridCutoff operator [] (int idx) const 
        {return CProxyElement_MsmGridCutoff(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    CProxyElement_MsmGridCutoff operator () (int idx) const 
        {return CProxyElement_MsmGridCutoff(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex1D *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      return CkSectionID(aid, elems, nElems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, const std::vector<CkArrayIndex1D> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      return CkSectionID(aid, elems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, int l, int u, int s, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      std::vector<CkArrayIndex1D> al;
      for (int i=l; i<=u; i+=s) al.emplace_back(i);
      return CkSectionID(aid, al, factor);
    } 
    CProxySection_MsmGridCutoff(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_MsmGridCutoff(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_MsmGridCutoff(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems,nElems, factor) {}
    CProxySection_MsmGridCutoff(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems, factor) { ckAutoDelegate(); }
    CProxySection_MsmGridCutoff(const CkSectionID &sid)  
        :CProxySection_ArrayElement(sid) { ckAutoDelegate(); }
    CProxySection_MsmGridCutoff(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_MsmGridCutoff(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_MsmGridCutoff(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) { ckAutoDelegate(); }
    CProxySection_MsmGridCutoff(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems) 
        :CProxySection_ArrayElement(aid,elems) { ckAutoDelegate(); }
    CProxySection_MsmGridCutoff(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, int factor) 
        :CProxySection_ArrayElement(n,aid,elems,nElems, factor) { ckAutoDelegate(); }
    CProxySection_MsmGridCutoff(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, int factor) 
        :CProxySection_ArrayElement(aid,elems, factor) { ckAutoDelegate(); }
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex *elems, int nElems) {
      return CkSectionID(aid, elems, nElems);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems) {
       return CkSectionID(aid, elems);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor) {
      return CkSectionID(aid, elems, nElems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor) {
      return CkSectionID(aid, elems, factor);
    } 
    void ckAutoDelegate(int opts=1) {
      if(ckIsDelegated()) return;
      CProxySection_ArrayElement::ckAutoDelegate(opts);
    } 
    void setReductionClient(CkCallback *cb) {
      CProxySection_ArrayElement::setReductionClient(cb);
    } 
    void resetSection() {
      CProxySection_ArrayElement::resetSection();
    } 
    static void contribute(CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    static void contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    template <typename T>
    static void contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    static void contribute(CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
    static void contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
    template <typename T>
    static void contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
/* DECLS: MsmGridCutoff();
 */
    

/* DECLS: void setup(MsmGridCutoffInitMsg* impl_msg);
 */
    
    void setup(MsmGridCutoffInitMsg* impl_msg) ;

/* DECLS: void setupSections(MsmGridCutoffSetupMsg* impl_msg);
 */
    
    void setupSections(MsmGridCutoffSetupMsg* impl_msg) ;

/* DECLS: void compute(GridMsg* impl_msg);
 */
    
    void compute(GridMsg* impl_msg) ;

/* DECLS: MsmGridCutoff(CkMigrateMessage* impl_msg);
 */

};
#define MsmGridCutoff_SDAG_CODE 
typedef CBaseT1<ArrayElementT<CkIndex1D>, CProxy_MsmGridCutoff>CBase_MsmGridCutoff;

/* DECLS: array MsmC1HermiteGridCutoff: ArrayElement{
MsmC1HermiteGridCutoff();
void setup(MsmGridCutoffInitMsg* impl_msg);
void setupSections(MsmC1HermiteGridCutoffSetupMsg* impl_msg);
void compute(GridMsg* impl_msg);
MsmC1HermiteGridCutoff(CkMigrateMessage* impl_msg);
};
 */
 class MsmC1HermiteGridCutoff;
 class CkIndex_MsmC1HermiteGridCutoff;
 class CProxy_MsmC1HermiteGridCutoff;
 class CProxyElement_MsmC1HermiteGridCutoff;
 class CProxySection_MsmC1HermiteGridCutoff;
/* --------------- index object ------------------ */
class CkIndex_MsmC1HermiteGridCutoff:public CkIndex_ArrayElement{
  public:
    typedef MsmC1HermiteGridCutoff local_t;
    typedef CkIndex_MsmC1HermiteGridCutoff index_t;
    typedef CProxy_MsmC1HermiteGridCutoff proxy_t;
    typedef CProxyElement_MsmC1HermiteGridCutoff element_t;
    typedef CProxySection_MsmC1HermiteGridCutoff section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: MsmC1HermiteGridCutoff();
     */
    // Entry point registration at startup
    
    static int reg_MsmC1HermiteGridCutoff_void();
    // Entry point index lookup
    
    inline static int idx_MsmC1HermiteGridCutoff_void() {
      static int epidx = reg_MsmC1HermiteGridCutoff_void();
      return epidx;
    }

    
    static int ckNew() { return idx_MsmC1HermiteGridCutoff_void(); }
    
    static void _call_MsmC1HermiteGridCutoff_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_MsmC1HermiteGridCutoff_void(void* impl_msg, void* impl_obj);
    /* DECLS: void setup(MsmGridCutoffInitMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_setup_MsmGridCutoffInitMsg();
    // Entry point index lookup
    
    inline static int idx_setup_MsmGridCutoffInitMsg() {
      static int epidx = reg_setup_MsmGridCutoffInitMsg();
      return epidx;
    }

    
    inline static int idx_setup(void (MsmC1HermiteGridCutoff::*)(MsmGridCutoffInitMsg* impl_msg) ) {
      return idx_setup_MsmGridCutoffInitMsg();
    }


    
    static int setup(MsmGridCutoffInitMsg* impl_msg) { return idx_setup_MsmGridCutoffInitMsg(); }
    
    static void _call_setup_MsmGridCutoffInitMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_setup_MsmGridCutoffInitMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void setupSections(MsmC1HermiteGridCutoffSetupMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_setupSections_MsmC1HermiteGridCutoffSetupMsg();
    // Entry point index lookup
    
    inline static int idx_setupSections_MsmC1HermiteGridCutoffSetupMsg() {
      static int epidx = reg_setupSections_MsmC1HermiteGridCutoffSetupMsg();
      return epidx;
    }

    
    inline static int idx_setupSections(void (MsmC1HermiteGridCutoff::*)(MsmC1HermiteGridCutoffSetupMsg* impl_msg) ) {
      return idx_setupSections_MsmC1HermiteGridCutoffSetupMsg();
    }


    
    static int setupSections(MsmC1HermiteGridCutoffSetupMsg* impl_msg) { return idx_setupSections_MsmC1HermiteGridCutoffSetupMsg(); }
    
    static void _call_setupSections_MsmC1HermiteGridCutoffSetupMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_setupSections_MsmC1HermiteGridCutoffSetupMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void compute(GridMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_compute_GridMsg();
    // Entry point index lookup
    
    inline static int idx_compute_GridMsg() {
      static int epidx = reg_compute_GridMsg();
      return epidx;
    }

    
    inline static int idx_compute(void (MsmC1HermiteGridCutoff::*)(GridMsg* impl_msg) ) {
      return idx_compute_GridMsg();
    }


    
    static int compute(GridMsg* impl_msg) { return idx_compute_GridMsg(); }
    
    static void _call_compute_GridMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_compute_GridMsg(void* impl_msg, void* impl_obj);
    /* DECLS: MsmC1HermiteGridCutoff(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_MsmC1HermiteGridCutoff_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_MsmC1HermiteGridCutoff_CkMigrateMessage() {
      static int epidx = reg_MsmC1HermiteGridCutoff_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_MsmC1HermiteGridCutoff_CkMigrateMessage(); }
    
    static void _call_MsmC1HermiteGridCutoff_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_MsmC1HermiteGridCutoff_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_MsmC1HermiteGridCutoff : public CProxyElement_ArrayElement{
  public:
    typedef MsmC1HermiteGridCutoff local_t;
    typedef CkIndex_MsmC1HermiteGridCutoff index_t;
    typedef CProxy_MsmC1HermiteGridCutoff proxy_t;
    typedef CProxyElement_MsmC1HermiteGridCutoff element_t;
    typedef CProxySection_MsmC1HermiteGridCutoff section_t;

    using array_index_t = CkArrayIndex1D;

    /* TRAM aggregators */

    CProxyElement_MsmC1HermiteGridCutoff(void) {
    }
    CProxyElement_MsmC1HermiteGridCutoff(const ArrayElement *e) : CProxyElement_ArrayElement(e){
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_ArrayElement::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxyElement_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxyElement_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxyElement_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxyElement_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxyElement_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxyElement_ArrayElement::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxyElement_ArrayElement::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxyElement_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxyElement_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxyElement_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxyElement_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_ArrayElement::ckSetReductionClient(cb); }

    inline void ckInsert(CkArrayMessage *m,int ctor,int onPe)
    { CProxyElement_ArrayElement::ckInsert(m,ctor,onPe); }
    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0) const
    { CProxyElement_ArrayElement::ckSend(m,ep,opts); }
    inline void *ckSendSync(CkArrayMessage *m, int ep) const
    { return CProxyElement_ArrayElement::ckSendSync(m,ep); }
    inline const CkArrayIndex &ckGetIndex() const
    { return CProxyElement_ArrayElement::ckGetIndex(); }

    MsmC1HermiteGridCutoff *ckLocal(void) const
    { return (MsmC1HermiteGridCutoff *)CProxyElement_ArrayElement::ckLocal(); }

    CProxyElement_MsmC1HermiteGridCutoff(const CkArrayID &aid,const CkArrayIndex1D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_MsmC1HermiteGridCutoff(const CkArrayID &aid,const CkArrayIndex1D &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}

    CProxyElement_MsmC1HermiteGridCutoff(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_MsmC1HermiteGridCutoff(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}
/* DECLS: MsmC1HermiteGridCutoff();
 */
    
    void insert(int onPE=-1, const CkEntryOptions *impl_e_opts=NULL);
/* DECLS: void setup(MsmGridCutoffInitMsg* impl_msg);
 */
    
    void setup(MsmGridCutoffInitMsg* impl_msg) ;

/* DECLS: void setupSections(MsmC1HermiteGridCutoffSetupMsg* impl_msg);
 */
    
    void setupSections(MsmC1HermiteGridCutoffSetupMsg* impl_msg) ;

/* DECLS: void compute(GridMsg* impl_msg);
 */
    
    void compute(GridMsg* impl_msg) ;

/* DECLS: MsmC1HermiteGridCutoff(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
 class CProxy_MsmC1HermiteGridCutoff : public CProxy_ArrayElement{
  public:
    typedef MsmC1HermiteGridCutoff local_t;
    typedef CkIndex_MsmC1HermiteGridCutoff index_t;
    typedef CProxy_MsmC1HermiteGridCutoff proxy_t;
    typedef CProxyElement_MsmC1HermiteGridCutoff element_t;
    typedef CProxySection_MsmC1HermiteGridCutoff section_t;

    using array_index_t = CkArrayIndex1D;
    CProxy_MsmC1HermiteGridCutoff(void) {
    }
    CProxy_MsmC1HermiteGridCutoff(const ArrayElement *e) : CProxy_ArrayElement(e){
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_ArrayElement::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxy_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxy_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxy_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxy_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxy_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxy_ArrayElement::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxy_ArrayElement::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxy_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxy_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxy_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxy_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_ArrayElement::ckSetReductionClient(cb); }

    // Generalized array indexing:
    CProxyElement_MsmC1HermiteGridCutoff operator [] (const CkArrayIndex1D &idx) const
    { return CProxyElement_MsmC1HermiteGridCutoff(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_MsmC1HermiteGridCutoff operator() (const CkArrayIndex1D &idx) const
    { return CProxyElement_MsmC1HermiteGridCutoff(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_MsmC1HermiteGridCutoff operator [] (int idx) const 
        {return CProxyElement_MsmC1HermiteGridCutoff(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxyElement_MsmC1HermiteGridCutoff operator () (int idx) const 
        {return CProxyElement_MsmC1HermiteGridCutoff(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxy_MsmC1HermiteGridCutoff(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_MsmC1HermiteGridCutoff(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: MsmC1HermiteGridCutoff();
 */
    
    static CkArrayID ckNew(const CkArrayOptions &opts = CkArrayOptions(), const CkEntryOptions *impl_e_opts=NULL);
    static void      ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);
    static CkArrayID ckNew(const int s1, const CkEntryOptions *impl_e_opts=NULL);
    static void ckNew(const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void setup(MsmGridCutoffInitMsg* impl_msg);
 */
    
    void setup(MsmGridCutoffInitMsg* impl_msg) ;

/* DECLS: void setupSections(MsmC1HermiteGridCutoffSetupMsg* impl_msg);
 */
    
    void setupSections(MsmC1HermiteGridCutoffSetupMsg* impl_msg) ;

/* DECLS: void compute(GridMsg* impl_msg);
 */
    
    void compute(GridMsg* impl_msg) ;

/* DECLS: MsmC1HermiteGridCutoff(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
 class CProxySection_MsmC1HermiteGridCutoff : public CProxySection_ArrayElement{
  public:
    typedef MsmC1HermiteGridCutoff local_t;
    typedef CkIndex_MsmC1HermiteGridCutoff index_t;
    typedef CProxy_MsmC1HermiteGridCutoff proxy_t;
    typedef CProxyElement_MsmC1HermiteGridCutoff element_t;
    typedef CProxySection_MsmC1HermiteGridCutoff section_t;

    using array_index_t = CkArrayIndex1D;
    CProxySection_MsmC1HermiteGridCutoff(void) {
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_ArrayElement::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxySection_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxySection_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxySection_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxySection_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxySection_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxySection_ArrayElement::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxySection_ArrayElement::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxySection_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxySection_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxySection_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxySection_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_ArrayElement::ckSetReductionClient(cb); }

    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0)
    { CProxySection_ArrayElement::ckSend(m,ep,opts); }
    inline CkSectionInfo &ckGetSectionInfo()
    { return CProxySection_ArrayElement::ckGetSectionInfo(); }
    inline CkSectionID *ckGetSectionIDs()
    { return CProxySection_ArrayElement::ckGetSectionIDs(); }
    inline CkSectionID &ckGetSectionID()
    { return CProxySection_ArrayElement::ckGetSectionID(); }
    inline CkSectionID &ckGetSectionID(int i)
    { return CProxySection_ArrayElement::ckGetSectionID(i); }
    inline CkArrayID ckGetArrayIDn(int i) const
    { return CProxySection_ArrayElement::ckGetArrayIDn(i); } 
    inline CkArrayIndex *ckGetArrayElements() const
    { return CProxySection_ArrayElement::ckGetArrayElements(); }
    inline CkArrayIndex *ckGetArrayElements(int i) const
    { return CProxySection_ArrayElement::ckGetArrayElements(i); }
    inline int ckGetNumElements() const
    { return CProxySection_ArrayElement::ckGetNumElements(); } 
    inline int ckGetNumElements(int i) const
    { return CProxySection_ArrayElement::ckGetNumElements(i); }    // Generalized array indexing:
    CProxyElement_MsmC1HermiteGridCutoff operator [] (const CkArrayIndex1D &idx) const
        {return CProxyElement_MsmC1HermiteGridCutoff(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_MsmC1HermiteGridCutoff operator() (const CkArrayIndex1D &idx) const
        {return CProxyElement_MsmC1HermiteGridCutoff(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_MsmC1HermiteGridCutoff operator [] (int idx) const 
        {return CProxyElement_MsmC1HermiteGridCutoff(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    CProxyElement_MsmC1HermiteGridCutoff operator () (int idx) const 
        {return CProxyElement_MsmC1HermiteGridCutoff(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex1D *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      return CkSectionID(aid, elems, nElems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, const std::vector<CkArrayIndex1D> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      return CkSectionID(aid, elems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, int l, int u, int s, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      std::vector<CkArrayIndex1D> al;
      for (int i=l; i<=u; i+=s) al.emplace_back(i);
      return CkSectionID(aid, al, factor);
    } 
    CProxySection_MsmC1HermiteGridCutoff(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_MsmC1HermiteGridCutoff(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_MsmC1HermiteGridCutoff(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems,nElems, factor) {}
    CProxySection_MsmC1HermiteGridCutoff(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems, factor) { ckAutoDelegate(); }
    CProxySection_MsmC1HermiteGridCutoff(const CkSectionID &sid)  
        :CProxySection_ArrayElement(sid) { ckAutoDelegate(); }
    CProxySection_MsmC1HermiteGridCutoff(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_MsmC1HermiteGridCutoff(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_MsmC1HermiteGridCutoff(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) { ckAutoDelegate(); }
    CProxySection_MsmC1HermiteGridCutoff(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems) 
        :CProxySection_ArrayElement(aid,elems) { ckAutoDelegate(); }
    CProxySection_MsmC1HermiteGridCutoff(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, int factor) 
        :CProxySection_ArrayElement(n,aid,elems,nElems, factor) { ckAutoDelegate(); }
    CProxySection_MsmC1HermiteGridCutoff(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, int factor) 
        :CProxySection_ArrayElement(aid,elems, factor) { ckAutoDelegate(); }
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex *elems, int nElems) {
      return CkSectionID(aid, elems, nElems);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems) {
       return CkSectionID(aid, elems);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor) {
      return CkSectionID(aid, elems, nElems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor) {
      return CkSectionID(aid, elems, factor);
    } 
    void ckAutoDelegate(int opts=1) {
      if(ckIsDelegated()) return;
      CProxySection_ArrayElement::ckAutoDelegate(opts);
    } 
    void setReductionClient(CkCallback *cb) {
      CProxySection_ArrayElement::setReductionClient(cb);
    } 
    void resetSection() {
      CProxySection_ArrayElement::resetSection();
    } 
    static void contribute(CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    static void contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    template <typename T>
    static void contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    static void contribute(CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
    static void contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
    template <typename T>
    static void contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
/* DECLS: MsmC1HermiteGridCutoff();
 */
    

/* DECLS: void setup(MsmGridCutoffInitMsg* impl_msg);
 */
    
    void setup(MsmGridCutoffInitMsg* impl_msg) ;

/* DECLS: void setupSections(MsmC1HermiteGridCutoffSetupMsg* impl_msg);
 */
    
    void setupSections(MsmC1HermiteGridCutoffSetupMsg* impl_msg) ;

/* DECLS: void compute(GridMsg* impl_msg);
 */
    
    void compute(GridMsg* impl_msg) ;

/* DECLS: MsmC1HermiteGridCutoff(CkMigrateMessage* impl_msg);
 */

};
#define MsmC1HermiteGridCutoff_SDAG_CODE 
typedef CBaseT1<ArrayElementT<CkIndex1D>, CProxy_MsmC1HermiteGridCutoff>CBase_MsmC1HermiteGridCutoff;

/* DECLS: chare MsmTimer: Chare{
MsmTimer();
void done(const double *tm, int n);
};
 */
 class MsmTimer;
 class CkIndex_MsmTimer;
 class CProxy_MsmTimer;
/* --------------- index object ------------------ */
class CkIndex_MsmTimer:public CkIndex_Chare{
  public:
    typedef MsmTimer local_t;
    typedef CkIndex_MsmTimer index_t;
    typedef CProxy_MsmTimer proxy_t;
    typedef CProxy_MsmTimer element_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: MsmTimer();
     */
    // Entry point registration at startup
    
    static int reg_MsmTimer_void();
    // Entry point index lookup
    
    inline static int idx_MsmTimer_void() {
      static int epidx = reg_MsmTimer_void();
      return epidx;
    }

    
    static int ckNew() { return idx_MsmTimer_void(); }
    
    static void _call_MsmTimer_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_MsmTimer_void(void* impl_msg, void* impl_obj);
    /* DECLS: void done(const double *tm, int n);
     */
    // Entry point registration at startup
    
    static int reg_done_marshall2();
    // Entry point index lookup
    
    inline static int idx_done_marshall2() {
      static int epidx = reg_done_marshall2();
      return epidx;
    }

    
    inline static int idx_done(void (MsmTimer::*)(const double *tm, int n) ) {
      return idx_done_marshall2();
    }


    
    static int done(const double *tm, int n) { return idx_done_marshall2(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_done_marshall2();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_done_marshall2() {
      static int epidx = reg_redn_wrapper_done_marshall2();
      return epidx;
    }
    
    static int redn_wrapper_done(CkReductionMsg* impl_msg) { return idx_redn_wrapper_done_marshall2(); }
    
    static void _call_redn_wrapper_done_marshall2(void* impl_msg, void* impl_obj_void);
    
    static void _call_done_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_done_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_done_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_done_marshall2(PUP::er &p,void *msg);
};
/* --------------- element proxy ------------------ */
class CProxy_MsmTimer:public CProxy_Chare{
  public:
    typedef MsmTimer local_t;
    typedef CkIndex_MsmTimer index_t;
    typedef CProxy_MsmTimer proxy_t;
    typedef CProxy_MsmTimer element_t;

    CProxy_MsmTimer(void) {};
    CProxy_MsmTimer(CkChareID __cid) : CProxy_Chare(__cid){  }
    CProxy_MsmTimer(const Chare *c) : CProxy_Chare(c){  }

    int ckIsDelegated(void) const
    { return CProxy_Chare::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_Chare::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_Chare::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_Chare::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxy_Chare::ckCheck(); }
    const CkChareID &ckGetChareID(void) const
    { return CProxy_Chare::ckGetChareID(); }
    operator const CkChareID &(void) const
    { return ckGetChareID(); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_Chare::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_Chare::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_Chare::pup(p);
    }

    void ckSetChareID(const CkChareID &c)
    {      CProxy_Chare::ckSetChareID(c); }
    MsmTimer *ckLocal(void) const
    { return (MsmTimer *)CkLocalChare(&ckGetChareID()); }
/* DECLS: MsmTimer();
 */
    static CkChareID ckNew(int onPE=CK_PE_ANY, const CkEntryOptions *impl_e_opts=NULL);
    static void ckNew(CkChareID* pcid, int onPE=CK_PE_ANY, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void done(const double *tm, int n);
 */
    
    void done(const double *tm, int n, const CkEntryOptions *impl_e_opts=NULL);

};
#define MsmTimer_SDAG_CODE 
typedef CBaseT1<Chare, CProxy_MsmTimer>CBase_MsmTimer;

/* DECLS: chare MsmProfiler: Chare{
MsmProfiler();
void done(const int *tm, int n);
};
 */
 class MsmProfiler;
 class CkIndex_MsmProfiler;
 class CProxy_MsmProfiler;
/* --------------- index object ------------------ */
class CkIndex_MsmProfiler:public CkIndex_Chare{
  public:
    typedef MsmProfiler local_t;
    typedef CkIndex_MsmProfiler index_t;
    typedef CProxy_MsmProfiler proxy_t;
    typedef CProxy_MsmProfiler element_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: MsmProfiler();
     */
    // Entry point registration at startup
    
    static int reg_MsmProfiler_void();
    // Entry point index lookup
    
    inline static int idx_MsmProfiler_void() {
      static int epidx = reg_MsmProfiler_void();
      return epidx;
    }

    
    static int ckNew() { return idx_MsmProfiler_void(); }
    
    static void _call_MsmProfiler_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_MsmProfiler_void(void* impl_msg, void* impl_obj);
    /* DECLS: void done(const int *tm, int n);
     */
    // Entry point registration at startup
    
    static int reg_done_marshall2();
    // Entry point index lookup
    
    inline static int idx_done_marshall2() {
      static int epidx = reg_done_marshall2();
      return epidx;
    }

    
    inline static int idx_done(void (MsmProfiler::*)(const int *tm, int n) ) {
      return idx_done_marshall2();
    }


    
    static int done(const int *tm, int n) { return idx_done_marshall2(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_done_marshall2();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_done_marshall2() {
      static int epidx = reg_redn_wrapper_done_marshall2();
      return epidx;
    }
    
    static int redn_wrapper_done(CkReductionMsg* impl_msg) { return idx_redn_wrapper_done_marshall2(); }
    
    static void _call_redn_wrapper_done_marshall2(void* impl_msg, void* impl_obj_void);
    
    static void _call_done_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_done_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_done_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_done_marshall2(PUP::er &p,void *msg);
};
/* --------------- element proxy ------------------ */
class CProxy_MsmProfiler:public CProxy_Chare{
  public:
    typedef MsmProfiler local_t;
    typedef CkIndex_MsmProfiler index_t;
    typedef CProxy_MsmProfiler proxy_t;
    typedef CProxy_MsmProfiler element_t;

    CProxy_MsmProfiler(void) {};
    CProxy_MsmProfiler(CkChareID __cid) : CProxy_Chare(__cid){  }
    CProxy_MsmProfiler(const Chare *c) : CProxy_Chare(c){  }

    int ckIsDelegated(void) const
    { return CProxy_Chare::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_Chare::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_Chare::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_Chare::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxy_Chare::ckCheck(); }
    const CkChareID &ckGetChareID(void) const
    { return CProxy_Chare::ckGetChareID(); }
    operator const CkChareID &(void) const
    { return ckGetChareID(); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_Chare::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_Chare::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_Chare::pup(p);
    }

    void ckSetChareID(const CkChareID &c)
    {      CProxy_Chare::ckSetChareID(c); }
    MsmProfiler *ckLocal(void) const
    { return (MsmProfiler *)CkLocalChare(&ckGetChareID()); }
/* DECLS: MsmProfiler();
 */
    static CkChareID ckNew(int onPE=CK_PE_ANY, const CkEntryOptions *impl_e_opts=NULL);
    static void ckNew(CkChareID* pcid, int onPE=CK_PE_ANY, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void done(const int *tm, int n);
 */
    
    void done(const int *tm, int n, const CkEntryOptions *impl_e_opts=NULL);

};
#define MsmProfiler_SDAG_CODE 
typedef CBaseT1<Chare, CProxy_MsmProfiler>CBase_MsmProfiler;










/* ---------------- method closures -------------- */
class Closure_ComputeMsmMgr {
  public:



    struct initialize_create_3_closure;







};

/* ---------------- method closures -------------- */
class Closure_MsmBlockMap {
  public:

};

/* ---------------- method closures -------------- */
class Closure_MsmBlock {
  public:





    struct setupSections_5_closure;


};

/* ---------------- method closures -------------- */
class Closure_MsmC1HermiteBlock {
  public:





    struct setupSections_5_closure;


};

/* ---------------- method closures -------------- */
class Closure_MsmGridCutoffMap {
  public:

};

/* ---------------- method closures -------------- */
class Closure_MsmGridCutoff {
  public:





};

/* ---------------- method closures -------------- */
class Closure_MsmC1HermiteGridCutoff {
  public:





};

/* ---------------- method closures -------------- */
class Closure_MsmTimer {
  public:


    struct done_2_closure;

};

/* ---------------- method closures -------------- */
class Closure_MsmProfiler {
  public:


    struct done_2_closure;

};

extern void _registerComputeMsmMgr(void);
#endif
