#ifndef _DECL_ComputeMgr_H_
#define _DECL_ComputeMgr_H_
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
/* DECLS: message ComputeGlobalDataMsg;
 */
class ComputeGlobalDataMsg;
class CMessage_ComputeGlobalDataMsg:public CkMessage{
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
    CMessage_ComputeGlobalDataMsg();
    static void *pack(ComputeGlobalDataMsg *p);
    static ComputeGlobalDataMsg* unpack(void* p);
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
/* DECLS: message ComputeGlobalResultsMsg;
 */
class ComputeGlobalResultsMsg;
class CMessage_ComputeGlobalResultsMsg:public CkMessage{
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
    CMessage_ComputeGlobalResultsMsg();
    static void *pack(ComputeGlobalResultsMsg *p);
    static ComputeGlobalResultsMsg* unpack(void* p);
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
/* DECLS: message ComputeDPMEDataMsg;
 */
class ComputeDPMEDataMsg;
class CMessage_ComputeDPMEDataMsg:public CkMessage{
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
    CMessage_ComputeDPMEDataMsg();
    static void *pack(ComputeDPMEDataMsg *p);
    static ComputeDPMEDataMsg* unpack(void* p);
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
/* DECLS: message ComputeDPMEResultsMsg;
 */
class ComputeDPMEResultsMsg;
class CMessage_ComputeDPMEResultsMsg:public CkMessage{
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
    CMessage_ComputeDPMEResultsMsg();
    static void *pack(ComputeDPMEResultsMsg *p);
    static ComputeDPMEResultsMsg* unpack(void* p);
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
/* DECLS: message ComputeConsForceMsg;
 */
class ComputeConsForceMsg;
class CMessage_ComputeConsForceMsg:public CkMessage{
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
    CMessage_ComputeConsForceMsg();
    static void *pack(ComputeConsForceMsg *p);
    static ComputeConsForceMsg* unpack(void* p);
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
/* DECLS: message ComputeEwaldMsg{
float eik[];
}
;
 */
class ComputeEwaldMsg;
class CMessage_ComputeEwaldMsg:public CkMessage{
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
    CMessage_ComputeEwaldMsg();
    static void *pack(ComputeEwaldMsg *p);
    static ComputeEwaldMsg* unpack(void* p);
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
/* DECLS: message NonbondedMICSlaveMsg;
 */
class NonbondedMICSlaveMsg;
class CMessage_NonbondedMICSlaveMsg:public CkMessage{
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
    CMessage_NonbondedMICSlaveMsg();
    static void *pack(NonbondedMICSlaveMsg *p);
    static NonbondedMICSlaveMsg* unpack(void* p);
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
/* DECLS: message NonbondedMICSkipMsg;
 */
class NonbondedMICSkipMsg;
class CMessage_NonbondedMICSkipMsg:public CkMessage{
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
    CMessage_NonbondedMICSkipMsg();
    static void *pack(NonbondedMICSkipMsg *p);
    static NonbondedMICSkipMsg* unpack(void* p);
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

/* DECLS: group ComputeMgr: IrrGroup{
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
 class ComputeMgr;
 class CkIndex_ComputeMgr;
 class CProxy_ComputeMgr;
 class CProxyElement_ComputeMgr;
 class CProxySection_ComputeMgr;
/* --------------- index object ------------------ */
class CkIndex_ComputeMgr:public CkIndex_IrrGroup{
  public:
    typedef ComputeMgr local_t;
    typedef CkIndex_ComputeMgr index_t;
    typedef CProxy_ComputeMgr proxy_t;
    typedef CProxyElement_ComputeMgr element_t;
    typedef CProxySection_ComputeMgr section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: ComputeMgr();
     */
    // Entry point registration at startup
    
    static int reg_ComputeMgr_void();
    // Entry point index lookup
    
    inline static int idx_ComputeMgr_void() {
      static int epidx = reg_ComputeMgr_void();
      return epidx;
    }

    
    static int ckNew() { return idx_ComputeMgr_void(); }
    
    static void _call_ComputeMgr_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ComputeMgr_void(void* impl_msg, void* impl_obj);
    /* DECLS: void updateComputes2(CkQdMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_updateComputes2_CkQdMsg();
    // Entry point index lookup
    
    inline static int idx_updateComputes2_CkQdMsg() {
      static int epidx = reg_updateComputes2_CkQdMsg();
      return epidx;
    }

    
    inline static int idx_updateComputes2(void (ComputeMgr::*)(CkQdMsg* impl_msg) ) {
      return idx_updateComputes2_CkQdMsg();
    }


    
    static int updateComputes2(CkQdMsg* impl_msg) { return idx_updateComputes2_CkQdMsg(); }
    
    static void _call_updateComputes2_CkQdMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_updateComputes2_CkQdMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void updateComputes3();
     */
    // Entry point registration at startup
    
    static int reg_updateComputes3_void();
    // Entry point index lookup
    
    inline static int idx_updateComputes3_void() {
      static int epidx = reg_updateComputes3_void();
      return epidx;
    }

    
    inline static int idx_updateComputes3(void (ComputeMgr::*)() ) {
      return idx_updateComputes3_void();
    }


    
    static int updateComputes3() { return idx_updateComputes3_void(); }
    
    static void _call_updateComputes3_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_updateComputes3_void(void* impl_msg, void* impl_obj);
    /* DECLS: void splitComputes();
     */
    // Entry point registration at startup
    
    static int reg_splitComputes_void();
    // Entry point index lookup
    
    inline static int idx_splitComputes_void() {
      static int epidx = reg_splitComputes_void();
      return epidx;
    }

    
    inline static int idx_splitComputes(void (ComputeMgr::*)() ) {
      return idx_splitComputes_void();
    }


    
    static int splitComputes() { return idx_splitComputes_void(); }
    
    static void _call_splitComputes_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_splitComputes_void(void* impl_msg, void* impl_obj);
    /* DECLS: void splitComputes2(CkQdMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_splitComputes2_CkQdMsg();
    // Entry point index lookup
    
    inline static int idx_splitComputes2_CkQdMsg() {
      static int epidx = reg_splitComputes2_CkQdMsg();
      return epidx;
    }

    
    inline static int idx_splitComputes2(void (ComputeMgr::*)(CkQdMsg* impl_msg) ) {
      return idx_splitComputes2_CkQdMsg();
    }


    
    static int splitComputes2(CkQdMsg* impl_msg) { return idx_splitComputes2_CkQdMsg(); }
    
    static void _call_splitComputes2_CkQdMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_splitComputes2_CkQdMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void updateLocalComputes();
     */
    // Entry point registration at startup
    
    static int reg_updateLocalComputes_void();
    // Entry point index lookup
    
    inline static int idx_updateLocalComputes_void() {
      static int epidx = reg_updateLocalComputes_void();
      return epidx;
    }

    
    inline static int idx_updateLocalComputes(void (ComputeMgr::*)() ) {
      return idx_updateLocalComputes_void();
    }


    
    static int updateLocalComputes() { return idx_updateLocalComputes_void(); }
    
    static void _call_updateLocalComputes_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_updateLocalComputes_void(void* impl_msg, void* impl_obj);
    /* DECLS: void updateLocalComputes2(CkQdMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_updateLocalComputes2_CkQdMsg();
    // Entry point index lookup
    
    inline static int idx_updateLocalComputes2_CkQdMsg() {
      static int epidx = reg_updateLocalComputes2_CkQdMsg();
      return epidx;
    }

    
    inline static int idx_updateLocalComputes2(void (ComputeMgr::*)(CkQdMsg* impl_msg) ) {
      return idx_updateLocalComputes2_CkQdMsg();
    }


    
    static int updateLocalComputes2(CkQdMsg* impl_msg) { return idx_updateLocalComputes2_CkQdMsg(); }
    
    static void _call_updateLocalComputes2_CkQdMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_updateLocalComputes2_CkQdMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void updateLocalComputes3();
     */
    // Entry point registration at startup
    
    static int reg_updateLocalComputes3_void();
    // Entry point index lookup
    
    inline static int idx_updateLocalComputes3_void() {
      static int epidx = reg_updateLocalComputes3_void();
      return epidx;
    }

    
    inline static int idx_updateLocalComputes3(void (ComputeMgr::*)() ) {
      return idx_updateLocalComputes3_void();
    }


    
    static int updateLocalComputes3() { return idx_updateLocalComputes3_void(); }
    
    static void _call_updateLocalComputes3_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_updateLocalComputes3_void(void* impl_msg, void* impl_obj);
    /* DECLS: void updateLocalComputes4(CkQdMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_updateLocalComputes4_CkQdMsg();
    // Entry point index lookup
    
    inline static int idx_updateLocalComputes4_CkQdMsg() {
      static int epidx = reg_updateLocalComputes4_CkQdMsg();
      return epidx;
    }

    
    inline static int idx_updateLocalComputes4(void (ComputeMgr::*)(CkQdMsg* impl_msg) ) {
      return idx_updateLocalComputes4_CkQdMsg();
    }


    
    static int updateLocalComputes4(CkQdMsg* impl_msg) { return idx_updateLocalComputes4_CkQdMsg(); }
    
    static void _call_updateLocalComputes4_CkQdMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_updateLocalComputes4_CkQdMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void updateLocalComputes5();
     */
    // Entry point registration at startup
    
    static int reg_updateLocalComputes5_void();
    // Entry point index lookup
    
    inline static int idx_updateLocalComputes5_void() {
      static int epidx = reg_updateLocalComputes5_void();
      return epidx;
    }

    
    inline static int idx_updateLocalComputes5(void (ComputeMgr::*)() ) {
      return idx_updateLocalComputes5_void();
    }


    
    static int updateLocalComputes5() { return idx_updateLocalComputes5_void(); }
    
    static void _call_updateLocalComputes5_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_updateLocalComputes5_void(void* impl_msg, void* impl_obj);
    /* DECLS: void doneUpdateLocalComputes();
     */
    // Entry point registration at startup
    
    static int reg_doneUpdateLocalComputes_void();
    // Entry point index lookup
    
    inline static int idx_doneUpdateLocalComputes_void() {
      static int epidx = reg_doneUpdateLocalComputes_void();
      return epidx;
    }

    
    inline static int idx_doneUpdateLocalComputes(void (ComputeMgr::*)() ) {
      return idx_doneUpdateLocalComputes_void();
    }


    
    static int doneUpdateLocalComputes() { return idx_doneUpdateLocalComputes_void(); }
    
    static void _call_doneUpdateLocalComputes_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_doneUpdateLocalComputes_void(void* impl_msg, void* impl_obj);
    /* DECLS: void recvComputeGlobalData(ComputeGlobalDataMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvComputeGlobalData_ComputeGlobalDataMsg();
    // Entry point index lookup
    
    inline static int idx_recvComputeGlobalData_ComputeGlobalDataMsg() {
      static int epidx = reg_recvComputeGlobalData_ComputeGlobalDataMsg();
      return epidx;
    }

    
    inline static int idx_recvComputeGlobalData(void (ComputeMgr::*)(ComputeGlobalDataMsg* impl_msg) ) {
      return idx_recvComputeGlobalData_ComputeGlobalDataMsg();
    }


    
    static int recvComputeGlobalData(ComputeGlobalDataMsg* impl_msg) { return idx_recvComputeGlobalData_ComputeGlobalDataMsg(); }
    
    static void _call_recvComputeGlobalData_ComputeGlobalDataMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvComputeGlobalData_ComputeGlobalDataMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvComputeGlobalResults(ComputeGlobalResultsMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvComputeGlobalResults_ComputeGlobalResultsMsg();
    // Entry point index lookup
    
    inline static int idx_recvComputeGlobalResults_ComputeGlobalResultsMsg() {
      static int epidx = reg_recvComputeGlobalResults_ComputeGlobalResultsMsg();
      return epidx;
    }

    
    inline static int idx_recvComputeGlobalResults(void (ComputeMgr::*)(ComputeGlobalResultsMsg* impl_msg) ) {
      return idx_recvComputeGlobalResults_ComputeGlobalResultsMsg();
    }


    
    static int recvComputeGlobalResults(ComputeGlobalResultsMsg* impl_msg) { return idx_recvComputeGlobalResults_ComputeGlobalResultsMsg(); }
    
    static void _call_recvComputeGlobalResults_ComputeGlobalResultsMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvComputeGlobalResults_ComputeGlobalResultsMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvComputeDPMEData(ComputeDPMEDataMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvComputeDPMEData_ComputeDPMEDataMsg();
    // Entry point index lookup
    
    inline static int idx_recvComputeDPMEData_ComputeDPMEDataMsg() {
      static int epidx = reg_recvComputeDPMEData_ComputeDPMEDataMsg();
      return epidx;
    }

    
    inline static int idx_recvComputeDPMEData(void (ComputeMgr::*)(ComputeDPMEDataMsg* impl_msg) ) {
      return idx_recvComputeDPMEData_ComputeDPMEDataMsg();
    }


    
    static int recvComputeDPMEData(ComputeDPMEDataMsg* impl_msg) { return idx_recvComputeDPMEData_ComputeDPMEDataMsg(); }
    
    static void _call_recvComputeDPMEData_ComputeDPMEDataMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvComputeDPMEData_ComputeDPMEDataMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvComputeDPMEResults(ComputeDPMEResultsMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvComputeDPMEResults_ComputeDPMEResultsMsg();
    // Entry point index lookup
    
    inline static int idx_recvComputeDPMEResults_ComputeDPMEResultsMsg() {
      static int epidx = reg_recvComputeDPMEResults_ComputeDPMEResultsMsg();
      return epidx;
    }

    
    inline static int idx_recvComputeDPMEResults(void (ComputeMgr::*)(ComputeDPMEResultsMsg* impl_msg) ) {
      return idx_recvComputeDPMEResults_ComputeDPMEResultsMsg();
    }


    
    static int recvComputeDPMEResults(ComputeDPMEResultsMsg* impl_msg) { return idx_recvComputeDPMEResults_ComputeDPMEResultsMsg(); }
    
    static void _call_recvComputeDPMEResults_ComputeDPMEResultsMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvComputeDPMEResults_ComputeDPMEResultsMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvComputeConsForceMsg(ComputeConsForceMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvComputeConsForceMsg_ComputeConsForceMsg();
    // Entry point index lookup
    
    inline static int idx_recvComputeConsForceMsg_ComputeConsForceMsg() {
      static int epidx = reg_recvComputeConsForceMsg_ComputeConsForceMsg();
      return epidx;
    }

    
    inline static int idx_recvComputeConsForceMsg(void (ComputeMgr::*)(ComputeConsForceMsg* impl_msg) ) {
      return idx_recvComputeConsForceMsg_ComputeConsForceMsg();
    }


    
    static int recvComputeConsForceMsg(ComputeConsForceMsg* impl_msg) { return idx_recvComputeConsForceMsg_ComputeConsForceMsg(); }
    
    static void _call_recvComputeConsForceMsg_ComputeConsForceMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvComputeConsForceMsg_ComputeConsForceMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvComputeEwaldData(ComputeEwaldMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvComputeEwaldData_ComputeEwaldMsg();
    // Entry point index lookup
    
    inline static int idx_recvComputeEwaldData_ComputeEwaldMsg() {
      static int epidx = reg_recvComputeEwaldData_ComputeEwaldMsg();
      return epidx;
    }

    
    inline static int idx_recvComputeEwaldData(void (ComputeMgr::*)(ComputeEwaldMsg* impl_msg) ) {
      return idx_recvComputeEwaldData_ComputeEwaldMsg();
    }


    
    static int recvComputeEwaldData(ComputeEwaldMsg* impl_msg) { return idx_recvComputeEwaldData_ComputeEwaldMsg(); }
    
    static void _call_recvComputeEwaldData_ComputeEwaldMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvComputeEwaldData_ComputeEwaldMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvComputeEwaldResults(ComputeEwaldMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvComputeEwaldResults_ComputeEwaldMsg();
    // Entry point index lookup
    
    inline static int idx_recvComputeEwaldResults_ComputeEwaldMsg() {
      static int epidx = reg_recvComputeEwaldResults_ComputeEwaldMsg();
      return epidx;
    }

    
    inline static int idx_recvComputeEwaldResults(void (ComputeMgr::*)(ComputeEwaldMsg* impl_msg) ) {
      return idx_recvComputeEwaldResults_ComputeEwaldMsg();
    }


    
    static int recvComputeEwaldResults(ComputeEwaldMsg* impl_msg) { return idx_recvComputeEwaldResults_ComputeEwaldMsg(); }
    
    static void _call_recvComputeEwaldResults_ComputeEwaldMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvComputeEwaldResults_ComputeEwaldMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvYieldDevice(int pe);
     */
    // Entry point registration at startup
    
    static int reg_recvYieldDevice_marshall19();
    // Entry point index lookup
    
    inline static int idx_recvYieldDevice_marshall19() {
      static int epidx = reg_recvYieldDevice_marshall19();
      return epidx;
    }

    
    inline static int idx_recvYieldDevice(void (ComputeMgr::*)(int pe) ) {
      return idx_recvYieldDevice_marshall19();
    }


    
    static int recvYieldDevice(int pe) { return idx_recvYieldDevice_marshall19(); }
    
    static void _call_recvYieldDevice_marshall19(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvYieldDevice_marshall19(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_recvYieldDevice_marshall19(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_recvYieldDevice_marshall19(PUP::er &p,void *msg);
    /* DECLS: void recvBuildMICForceTable();
     */
    // Entry point registration at startup
    
    static int reg_recvBuildMICForceTable_void();
    // Entry point index lookup
    
    inline static int idx_recvBuildMICForceTable_void() {
      static int epidx = reg_recvBuildMICForceTable_void();
      return epidx;
    }

    
    inline static int idx_recvBuildMICForceTable(void (ComputeMgr::*)() ) {
      return idx_recvBuildMICForceTable_void();
    }


    
    static int recvBuildMICForceTable() { return idx_recvBuildMICForceTable_void(); }
    
    static void _call_recvBuildMICForceTable_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvBuildMICForceTable_void(void* impl_msg, void* impl_obj);
    /* DECLS: void recvCreateNonbondedMICSlave(NonbondedMICSlaveMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvCreateNonbondedMICSlave_NonbondedMICSlaveMsg();
    // Entry point index lookup
    
    inline static int idx_recvCreateNonbondedMICSlave_NonbondedMICSlaveMsg() {
      static int epidx = reg_recvCreateNonbondedMICSlave_NonbondedMICSlaveMsg();
      return epidx;
    }

    
    inline static int idx_recvCreateNonbondedMICSlave(void (ComputeMgr::*)(NonbondedMICSlaveMsg* impl_msg) ) {
      return idx_recvCreateNonbondedMICSlave_NonbondedMICSlaveMsg();
    }


    
    static int recvCreateNonbondedMICSlave(NonbondedMICSlaveMsg* impl_msg) { return idx_recvCreateNonbondedMICSlave_NonbondedMICSlaveMsg(); }
    
    static void _call_recvCreateNonbondedMICSlave_NonbondedMICSlaveMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvCreateNonbondedMICSlave_NonbondedMICSlaveMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvNonbondedMICSlaveReady(int impl_noname_0, int impl_noname_1, int impl_noname_2);
     */
    // Entry point registration at startup
    
    static int reg_recvNonbondedMICSlaveReady_marshall22();
    // Entry point index lookup
    
    inline static int idx_recvNonbondedMICSlaveReady_marshall22() {
      static int epidx = reg_recvNonbondedMICSlaveReady_marshall22();
      return epidx;
    }

    
    inline static int idx_recvNonbondedMICSlaveReady(void (ComputeMgr::*)(int impl_noname_0, int impl_noname_1, int impl_noname_2) ) {
      return idx_recvNonbondedMICSlaveReady_marshall22();
    }


    
    static int recvNonbondedMICSlaveReady(int impl_noname_0, int impl_noname_1, int impl_noname_2) { return idx_recvNonbondedMICSlaveReady_marshall22(); }
    
    static void _call_recvNonbondedMICSlaveReady_marshall22(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvNonbondedMICSlaveReady_marshall22(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_recvNonbondedMICSlaveReady_marshall22(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_recvNonbondedMICSlaveReady_marshall22(PUP::er &p,void *msg);
    /* DECLS: void recvNonbondedMICSlaveSkip(NonbondedMICSkipMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvNonbondedMICSlaveSkip_NonbondedMICSkipMsg();
    // Entry point index lookup
    
    inline static int idx_recvNonbondedMICSlaveSkip_NonbondedMICSkipMsg() {
      static int epidx = reg_recvNonbondedMICSlaveSkip_NonbondedMICSkipMsg();
      return epidx;
    }

    
    inline static int idx_recvNonbondedMICSlaveSkip(void (ComputeMgr::*)(NonbondedMICSkipMsg* impl_msg) ) {
      return idx_recvNonbondedMICSlaveSkip_NonbondedMICSkipMsg();
    }


    
    static int recvNonbondedMICSlaveSkip(NonbondedMICSkipMsg* impl_msg) { return idx_recvNonbondedMICSlaveSkip_NonbondedMICSkipMsg(); }
    
    static void _call_recvNonbondedMICSlaveSkip_NonbondedMICSkipMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvNonbondedMICSlaveSkip_NonbondedMICSkipMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvMICPEData(int impl_noname_3, int impl_noname_4);
     */
    // Entry point registration at startup
    
    static int reg_recvMICPEData_marshall24();
    // Entry point index lookup
    
    inline static int idx_recvMICPEData_marshall24() {
      static int epidx = reg_recvMICPEData_marshall24();
      return epidx;
    }

    
    inline static int idx_recvMICPEData(void (ComputeMgr::*)(int impl_noname_3, int impl_noname_4) ) {
      return idx_recvMICPEData_marshall24();
    }


    
    static int recvMICPEData(int impl_noname_3, int impl_noname_4) { return idx_recvMICPEData_marshall24(); }
    
    static void _call_recvMICPEData_marshall24(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvMICPEData_marshall24(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_recvMICPEData_marshall24(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_recvMICPEData_marshall24(PUP::er &p,void *msg);
};
/* --------------- element proxy ------------------ */
class CProxyElement_ComputeMgr: public CProxyElement_IrrGroup{
  public:
    typedef ComputeMgr local_t;
    typedef CkIndex_ComputeMgr index_t;
    typedef CProxy_ComputeMgr proxy_t;
    typedef CProxyElement_ComputeMgr element_t;
    typedef CProxySection_ComputeMgr section_t;


    /* TRAM aggregators */

    CProxyElement_ComputeMgr(void) {
    }
    CProxyElement_ComputeMgr(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_ComputeMgr(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_ComputeMgr(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    ComputeMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ComputeMgr* ckLocalBranch(CkGroupID gID) {
      return (ComputeMgr*)CkLocalBranch(gID);
    }
/* DECLS: ComputeMgr();
 */
    

/* DECLS: void updateComputes2(CkQdMsg* impl_msg);
 */
    
    void updateComputes2(CkQdMsg* impl_msg);

/* DECLS: void updateComputes3();
 */
    
    void updateComputes3(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void splitComputes();
 */
    
    void splitComputes(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void splitComputes2(CkQdMsg* impl_msg);
 */
    
    void splitComputes2(CkQdMsg* impl_msg);

/* DECLS: void updateLocalComputes();
 */
    
    void updateLocalComputes(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void updateLocalComputes2(CkQdMsg* impl_msg);
 */
    
    void updateLocalComputes2(CkQdMsg* impl_msg);

/* DECLS: void updateLocalComputes3();
 */
    
    void updateLocalComputes3(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void updateLocalComputes4(CkQdMsg* impl_msg);
 */
    
    void updateLocalComputes4(CkQdMsg* impl_msg);

/* DECLS: void updateLocalComputes5();
 */
    
    void updateLocalComputes5(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void doneUpdateLocalComputes();
 */
    
    void doneUpdateLocalComputes(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvComputeGlobalData(ComputeGlobalDataMsg* impl_msg);
 */
    
    void recvComputeGlobalData(ComputeGlobalDataMsg* impl_msg);

/* DECLS: void recvComputeGlobalResults(ComputeGlobalResultsMsg* impl_msg);
 */
    
    void recvComputeGlobalResults(ComputeGlobalResultsMsg* impl_msg);

/* DECLS: void recvComputeDPMEData(ComputeDPMEDataMsg* impl_msg);
 */
    
    void recvComputeDPMEData(ComputeDPMEDataMsg* impl_msg);

/* DECLS: void recvComputeDPMEResults(ComputeDPMEResultsMsg* impl_msg);
 */
    
    void recvComputeDPMEResults(ComputeDPMEResultsMsg* impl_msg);

/* DECLS: void recvComputeConsForceMsg(ComputeConsForceMsg* impl_msg);
 */
    
    void recvComputeConsForceMsg(ComputeConsForceMsg* impl_msg);

/* DECLS: void recvComputeEwaldData(ComputeEwaldMsg* impl_msg);
 */
    
    void recvComputeEwaldData(ComputeEwaldMsg* impl_msg);

/* DECLS: void recvComputeEwaldResults(ComputeEwaldMsg* impl_msg);
 */
    
    void recvComputeEwaldResults(ComputeEwaldMsg* impl_msg);

/* DECLS: void recvYieldDevice(int pe);
 */
    
    void recvYieldDevice(int pe, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvBuildMICForceTable();
 */
    
    void recvBuildMICForceTable(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvCreateNonbondedMICSlave(NonbondedMICSlaveMsg* impl_msg);
 */
    
    void recvCreateNonbondedMICSlave(NonbondedMICSlaveMsg* impl_msg);

/* DECLS: void recvNonbondedMICSlaveReady(int impl_noname_0, int impl_noname_1, int impl_noname_2);
 */
    
    void recvNonbondedMICSlaveReady(int impl_noname_0, int impl_noname_1, int impl_noname_2, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvNonbondedMICSlaveSkip(NonbondedMICSkipMsg* impl_msg);
 */
    
    void recvNonbondedMICSlaveSkip(NonbondedMICSkipMsg* impl_msg);

/* DECLS: void recvMICPEData(int impl_noname_3, int impl_noname_4);
 */
    
    void recvMICPEData(int impl_noname_3, int impl_noname_4, const CkEntryOptions *impl_e_opts=NULL);

};
/* ---------------- collective proxy -------------- */
class CProxy_ComputeMgr: public CProxy_IrrGroup{
  public:
    typedef ComputeMgr local_t;
    typedef CkIndex_ComputeMgr index_t;
    typedef CProxy_ComputeMgr proxy_t;
    typedef CProxyElement_ComputeMgr element_t;
    typedef CProxySection_ComputeMgr section_t;

    CProxy_ComputeMgr(void) {
    }
    CProxy_ComputeMgr(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_ComputeMgr(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_ComputeMgr(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_ComputeMgr operator[](int onPE) const
      {return CProxyElement_ComputeMgr(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    ComputeMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ComputeMgr* ckLocalBranch(CkGroupID gID) {
      return (ComputeMgr*)CkLocalBranch(gID);
    }
/* DECLS: ComputeMgr();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void updateComputes2(CkQdMsg* impl_msg);
 */
    
    void updateComputes2(CkQdMsg* impl_msg);
    
    void updateComputes2(CkQdMsg* impl_msg, int npes, int *pes);
    
    void updateComputes2(CkQdMsg* impl_msg, CmiGroup &grp);

/* DECLS: void updateComputes3();
 */
    
    void updateComputes3(const CkEntryOptions *impl_e_opts=NULL);
    
    void updateComputes3(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void updateComputes3(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void splitComputes();
 */
    
    void splitComputes(const CkEntryOptions *impl_e_opts=NULL);
    
    void splitComputes(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void splitComputes(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void splitComputes2(CkQdMsg* impl_msg);
 */
    
    void splitComputes2(CkQdMsg* impl_msg);
    
    void splitComputes2(CkQdMsg* impl_msg, int npes, int *pes);
    
    void splitComputes2(CkQdMsg* impl_msg, CmiGroup &grp);

/* DECLS: void updateLocalComputes();
 */
    
    void updateLocalComputes(const CkEntryOptions *impl_e_opts=NULL);
    
    void updateLocalComputes(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void updateLocalComputes(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void updateLocalComputes2(CkQdMsg* impl_msg);
 */
    
    void updateLocalComputes2(CkQdMsg* impl_msg);
    
    void updateLocalComputes2(CkQdMsg* impl_msg, int npes, int *pes);
    
    void updateLocalComputes2(CkQdMsg* impl_msg, CmiGroup &grp);

/* DECLS: void updateLocalComputes3();
 */
    
    void updateLocalComputes3(const CkEntryOptions *impl_e_opts=NULL);
    
    void updateLocalComputes3(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void updateLocalComputes3(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void updateLocalComputes4(CkQdMsg* impl_msg);
 */
    
    void updateLocalComputes4(CkQdMsg* impl_msg);
    
    void updateLocalComputes4(CkQdMsg* impl_msg, int npes, int *pes);
    
    void updateLocalComputes4(CkQdMsg* impl_msg, CmiGroup &grp);

/* DECLS: void updateLocalComputes5();
 */
    
    void updateLocalComputes5(const CkEntryOptions *impl_e_opts=NULL);
    
    void updateLocalComputes5(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void updateLocalComputes5(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void doneUpdateLocalComputes();
 */
    
    void doneUpdateLocalComputes(const CkEntryOptions *impl_e_opts=NULL);
    
    void doneUpdateLocalComputes(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void doneUpdateLocalComputes(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvComputeGlobalData(ComputeGlobalDataMsg* impl_msg);
 */
    
    void recvComputeGlobalData(ComputeGlobalDataMsg* impl_msg);
    
    void recvComputeGlobalData(ComputeGlobalDataMsg* impl_msg, int npes, int *pes);
    
    void recvComputeGlobalData(ComputeGlobalDataMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvComputeGlobalResults(ComputeGlobalResultsMsg* impl_msg);
 */
    
    void recvComputeGlobalResults(ComputeGlobalResultsMsg* impl_msg);
    
    void recvComputeGlobalResults(ComputeGlobalResultsMsg* impl_msg, int npes, int *pes);
    
    void recvComputeGlobalResults(ComputeGlobalResultsMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvComputeDPMEData(ComputeDPMEDataMsg* impl_msg);
 */
    
    void recvComputeDPMEData(ComputeDPMEDataMsg* impl_msg);
    
    void recvComputeDPMEData(ComputeDPMEDataMsg* impl_msg, int npes, int *pes);
    
    void recvComputeDPMEData(ComputeDPMEDataMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvComputeDPMEResults(ComputeDPMEResultsMsg* impl_msg);
 */
    
    void recvComputeDPMEResults(ComputeDPMEResultsMsg* impl_msg);
    
    void recvComputeDPMEResults(ComputeDPMEResultsMsg* impl_msg, int npes, int *pes);
    
    void recvComputeDPMEResults(ComputeDPMEResultsMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvComputeConsForceMsg(ComputeConsForceMsg* impl_msg);
 */
    
    void recvComputeConsForceMsg(ComputeConsForceMsg* impl_msg);
    
    void recvComputeConsForceMsg(ComputeConsForceMsg* impl_msg, int npes, int *pes);
    
    void recvComputeConsForceMsg(ComputeConsForceMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvComputeEwaldData(ComputeEwaldMsg* impl_msg);
 */
    
    void recvComputeEwaldData(ComputeEwaldMsg* impl_msg);
    
    void recvComputeEwaldData(ComputeEwaldMsg* impl_msg, int npes, int *pes);
    
    void recvComputeEwaldData(ComputeEwaldMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvComputeEwaldResults(ComputeEwaldMsg* impl_msg);
 */
    
    void recvComputeEwaldResults(ComputeEwaldMsg* impl_msg);
    
    void recvComputeEwaldResults(ComputeEwaldMsg* impl_msg, int npes, int *pes);
    
    void recvComputeEwaldResults(ComputeEwaldMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvYieldDevice(int pe);
 */
    
    void recvYieldDevice(int pe, const CkEntryOptions *impl_e_opts=NULL);
    
    void recvYieldDevice(int pe, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void recvYieldDevice(int pe, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvBuildMICForceTable();
 */
    
    void recvBuildMICForceTable(const CkEntryOptions *impl_e_opts=NULL);
    
    void recvBuildMICForceTable(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void recvBuildMICForceTable(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvCreateNonbondedMICSlave(NonbondedMICSlaveMsg* impl_msg);
 */
    
    void recvCreateNonbondedMICSlave(NonbondedMICSlaveMsg* impl_msg);
    
    void recvCreateNonbondedMICSlave(NonbondedMICSlaveMsg* impl_msg, int npes, int *pes);
    
    void recvCreateNonbondedMICSlave(NonbondedMICSlaveMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvNonbondedMICSlaveReady(int impl_noname_0, int impl_noname_1, int impl_noname_2);
 */
    
    void recvNonbondedMICSlaveReady(int impl_noname_0, int impl_noname_1, int impl_noname_2, const CkEntryOptions *impl_e_opts=NULL);
    
    void recvNonbondedMICSlaveReady(int impl_noname_0, int impl_noname_1, int impl_noname_2, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void recvNonbondedMICSlaveReady(int impl_noname_0, int impl_noname_1, int impl_noname_2, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvNonbondedMICSlaveSkip(NonbondedMICSkipMsg* impl_msg);
 */
    
    void recvNonbondedMICSlaveSkip(NonbondedMICSkipMsg* impl_msg);
    
    void recvNonbondedMICSlaveSkip(NonbondedMICSkipMsg* impl_msg, int npes, int *pes);
    
    void recvNonbondedMICSlaveSkip(NonbondedMICSkipMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvMICPEData(int impl_noname_3, int impl_noname_4);
 */
    
    void recvMICPEData(int impl_noname_3, int impl_noname_4, const CkEntryOptions *impl_e_opts=NULL);
    
    void recvMICPEData(int impl_noname_3, int impl_noname_4, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void recvMICPEData(int impl_noname_3, int impl_noname_4, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

};
/* ---------------- section proxy -------------- */
class CProxySection_ComputeMgr: public CProxySection_IrrGroup{
  public:
    typedef ComputeMgr local_t;
    typedef CkIndex_ComputeMgr index_t;
    typedef CProxy_ComputeMgr proxy_t;
    typedef CProxyElement_ComputeMgr element_t;
    typedef CProxySection_ComputeMgr section_t;

    CProxySection_ComputeMgr(void) {
    }
    CProxySection_ComputeMgr(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_ComputeMgr(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_ComputeMgr(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_ComputeMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_ComputeMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    ComputeMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ComputeMgr* ckLocalBranch(CkGroupID gID) {
      return (ComputeMgr*)CkLocalBranch(gID);
    }
/* DECLS: ComputeMgr();
 */
    

/* DECLS: void updateComputes2(CkQdMsg* impl_msg);
 */
    
    void updateComputes2(CkQdMsg* impl_msg);

/* DECLS: void updateComputes3();
 */
    
    void updateComputes3(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void splitComputes();
 */
    
    void splitComputes(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void splitComputes2(CkQdMsg* impl_msg);
 */
    
    void splitComputes2(CkQdMsg* impl_msg);

/* DECLS: void updateLocalComputes();
 */
    
    void updateLocalComputes(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void updateLocalComputes2(CkQdMsg* impl_msg);
 */
    
    void updateLocalComputes2(CkQdMsg* impl_msg);

/* DECLS: void updateLocalComputes3();
 */
    
    void updateLocalComputes3(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void updateLocalComputes4(CkQdMsg* impl_msg);
 */
    
    void updateLocalComputes4(CkQdMsg* impl_msg);

/* DECLS: void updateLocalComputes5();
 */
    
    void updateLocalComputes5(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void doneUpdateLocalComputes();
 */
    
    void doneUpdateLocalComputes(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvComputeGlobalData(ComputeGlobalDataMsg* impl_msg);
 */
    
    void recvComputeGlobalData(ComputeGlobalDataMsg* impl_msg);

/* DECLS: void recvComputeGlobalResults(ComputeGlobalResultsMsg* impl_msg);
 */
    
    void recvComputeGlobalResults(ComputeGlobalResultsMsg* impl_msg);

/* DECLS: void recvComputeDPMEData(ComputeDPMEDataMsg* impl_msg);
 */
    
    void recvComputeDPMEData(ComputeDPMEDataMsg* impl_msg);

/* DECLS: void recvComputeDPMEResults(ComputeDPMEResultsMsg* impl_msg);
 */
    
    void recvComputeDPMEResults(ComputeDPMEResultsMsg* impl_msg);

/* DECLS: void recvComputeConsForceMsg(ComputeConsForceMsg* impl_msg);
 */
    
    void recvComputeConsForceMsg(ComputeConsForceMsg* impl_msg);

/* DECLS: void recvComputeEwaldData(ComputeEwaldMsg* impl_msg);
 */
    
    void recvComputeEwaldData(ComputeEwaldMsg* impl_msg);

/* DECLS: void recvComputeEwaldResults(ComputeEwaldMsg* impl_msg);
 */
    
    void recvComputeEwaldResults(ComputeEwaldMsg* impl_msg);

/* DECLS: void recvYieldDevice(int pe);
 */
    
    void recvYieldDevice(int pe, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvBuildMICForceTable();
 */
    
    void recvBuildMICForceTable(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvCreateNonbondedMICSlave(NonbondedMICSlaveMsg* impl_msg);
 */
    
    void recvCreateNonbondedMICSlave(NonbondedMICSlaveMsg* impl_msg);

/* DECLS: void recvNonbondedMICSlaveReady(int impl_noname_0, int impl_noname_1, int impl_noname_2);
 */
    
    void recvNonbondedMICSlaveReady(int impl_noname_0, int impl_noname_1, int impl_noname_2, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvNonbondedMICSlaveSkip(NonbondedMICSkipMsg* impl_msg);
 */
    
    void recvNonbondedMICSlaveSkip(NonbondedMICSkipMsg* impl_msg);

/* DECLS: void recvMICPEData(int impl_noname_3, int impl_noname_4);
 */
    
    void recvMICPEData(int impl_noname_3, int impl_noname_4, const CkEntryOptions *impl_e_opts=NULL);

};
#define ComputeMgr_SDAG_CODE 
typedef CBaseT1<Group, CProxy_ComputeMgr>CBase_ComputeMgr;









/* ---------------- method closures -------------- */
class Closure_ComputeMgr {
  public:



    struct updateComputes3_3_closure;


    struct splitComputes_4_closure;



    struct updateLocalComputes_6_closure;



    struct updateLocalComputes3_8_closure;



    struct updateLocalComputes5_10_closure;


    struct doneUpdateLocalComputes_11_closure;









    struct recvYieldDevice_19_closure;


    struct recvBuildMICForceTable_20_closure;



    struct recvNonbondedMICSlaveReady_22_closure;



    struct recvMICPEData_24_closure;

};

extern void _registerComputeMgr(void);
#endif
