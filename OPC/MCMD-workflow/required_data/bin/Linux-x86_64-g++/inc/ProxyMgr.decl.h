#ifndef _DECL_ProxyMgr_H_
#define _DECL_ProxyMgr_H_
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
/* DECLS: message RegisterProxyMsg;
 */
class RegisterProxyMsg;
class CMessage_RegisterProxyMsg:public CkMessage{
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
    CMessage_RegisterProxyMsg();
    static void *pack(RegisterProxyMsg *p);
    static RegisterProxyMsg* unpack(void* p);
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
/* DECLS: message UnregisterProxyMsg;
 */
class UnregisterProxyMsg;
class CMessage_UnregisterProxyMsg:public CkMessage{
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
    CMessage_UnregisterProxyMsg();
    static void *pack(UnregisterProxyMsg *p);
    static UnregisterProxyMsg* unpack(void* p);
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
/* DECLS: message ProxyResultMsg;
 */
class ProxyResultMsg;
class CMessage_ProxyResultMsg:public CkMessage{
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
    CMessage_ProxyResultMsg();
    static void *pack(ProxyResultMsg *p);
    static ProxyResultMsg* unpack(void* p);
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
/* DECLS: message ProxySpanningTreeMsg;
 */
class ProxySpanningTreeMsg;
class CMessage_ProxySpanningTreeMsg:public CkMessage{
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
    CMessage_ProxySpanningTreeMsg();
    static void *pack(ProxySpanningTreeMsg *p);
    static ProxySpanningTreeMsg* unpack(void* p);
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
/* DECLS: message ProxyCombinedResultMsg;
 */
class ProxyCombinedResultMsg;
class CMessage_ProxyCombinedResultMsg:public CkMessage{
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
    CMessage_ProxyCombinedResultMsg();
    static void *pack(ProxyCombinedResultMsg *p);
    static ProxyCombinedResultMsg* unpack(void* p);
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
/* DECLS: message ProxyCombinedResultRawMsg{
NodeID nodes[];
char isForceNonZero[];
Force forceArr[];
}
;
 */
class ProxyCombinedResultRawMsg;
class CMessage_ProxyCombinedResultRawMsg:public CkMessage{
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
    CMessage_ProxyCombinedResultRawMsg();
    static void *pack(ProxyCombinedResultRawMsg *p);
    static ProxyCombinedResultRawMsg* unpack(void* p);
    void *operator new(size_t, int, int, int);
    void *operator new(size_t, int, int, int, const int);
    void *operator new(size_t, int, int, int, const int, const GroupDepNum);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, int, int, int){dealloc(p);}
    void operator delete(void *p, int, int, int, const int){dealloc(p);}
    void operator delete(void *p, int, int, int, const int, const GroupDepNum){dealloc(p);}
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
/* DECLS: message ProxyDataMsg{
CompAtom positionList[];
CompAtom avgPositionList[];
CompAtom velocityList[];
Real intRadList[];
int lcpoTypeList[];
CompAtomExt positionExtList[];
CudaAtom cudaAtomList[];
}
;
 */
class ProxyDataMsg;
class CMessage_ProxyDataMsg:public CkMessage{
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
    CMessage_ProxyDataMsg();
    static void *pack(ProxyDataMsg *p);
    static ProxyDataMsg* unpack(void* p);
    void *operator new(size_t, int, int, int, int, int, int, int);
    void *operator new(size_t, int, int, int, int, int, int, int, const int);
    void *operator new(size_t, int, int, int, int, int, int, int, const int, const GroupDepNum);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, int, int, int, int, int, int, int){dealloc(p);}
    void operator delete(void *p, int, int, int, int, int, int, int, const int){dealloc(p);}
    void operator delete(void *p, int, int, int, int, int, int, int, const int, const GroupDepNum){dealloc(p);}
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
/* DECLS: message ProxyGBISP1ResultMsg{
GBReal psiSum[];
}
;
 */
class ProxyGBISP1ResultMsg;
class CMessage_ProxyGBISP1ResultMsg:public CkMessage{
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
    CMessage_ProxyGBISP1ResultMsg();
    static void *pack(ProxyGBISP1ResultMsg *p);
    static ProxyGBISP1ResultMsg* unpack(void* p);
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
/* DECLS: message ProxyGBISP2DataMsg{
float bornRad[];
}
;
 */
class ProxyGBISP2DataMsg;
class CMessage_ProxyGBISP2DataMsg:public CkMessage{
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
    CMessage_ProxyGBISP2DataMsg();
    static void *pack(ProxyGBISP2DataMsg *p);
    static ProxyGBISP2DataMsg* unpack(void* p);
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
/* DECLS: message ProxyGBISP2ResultMsg{
GBReal dEdaSum[];
}
;
 */
class ProxyGBISP2ResultMsg;
class CMessage_ProxyGBISP2ResultMsg:public CkMessage{
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
    CMessage_ProxyGBISP2ResultMsg();
    static void *pack(ProxyGBISP2ResultMsg *p);
    static ProxyGBISP2ResultMsg* unpack(void* p);
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
/* DECLS: message ProxyGBISP3DataMsg{
float dHdrPrefix[];
}
;
 */
class ProxyGBISP3DataMsg;
class CMessage_ProxyGBISP3DataMsg:public CkMessage{
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
    CMessage_ProxyGBISP3DataMsg();
    static void *pack(ProxyGBISP3DataMsg *p);
    static ProxyGBISP3DataMsg* unpack(void* p);
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
/* DECLS: message ProxyResultVarsizeMsg{
Force forceArr[];
char isZero[];
}
;
 */
class ProxyResultVarsizeMsg;
class CMessage_ProxyResultVarsizeMsg:public CkMessage{
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
    CMessage_ProxyResultVarsizeMsg();
    static void *pack(ProxyResultVarsizeMsg *p);
    static ProxyResultVarsizeMsg* unpack(void* p);
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
/* DECLS: message ProxyNodeAwareSpanningTreeMsg{
int numPesOfNode[];
int allPes[];
}
;
 */
class ProxyNodeAwareSpanningTreeMsg;
class CMessage_ProxyNodeAwareSpanningTreeMsg:public CkMessage{
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
    CMessage_ProxyNodeAwareSpanningTreeMsg();
    static void *pack(ProxyNodeAwareSpanningTreeMsg *p);
    static ProxyNodeAwareSpanningTreeMsg* unpack(void* p);
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
/* DECLS: message PatchProxyListMsg{
int patchIDs[];
int proxyListLen[];
int proxyPEs[];
}
;
 */
class PatchProxyListMsg;
class CMessage_PatchProxyListMsg:public CkMessage{
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
    CMessage_PatchProxyListMsg();
    static void *pack(PatchProxyListMsg *p);
    static PatchProxyListMsg* unpack(void* p);
    void *operator new(size_t, int, int, int);
    void *operator new(size_t, int, int, int, const int);
    void *operator new(size_t, int, int, int, const int, const GroupDepNum);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, int, int, int){dealloc(p);}
    void operator delete(void *p, int, int, int, const int){dealloc(p);}
    void operator delete(void *p, int, int, int, const int, const GroupDepNum){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: group ProxyMgr: IrrGroup{
ProxyMgr();
void recvRegisterProxy(RegisterProxyMsg* impl_msg);
void recvUnregisterProxy(UnregisterProxyMsg* impl_msg);
void recvProxyData(ProxyDataMsg* impl_msg);
void recvImmediateProxyData(ProxyDataMsg* impl_msg);
void recvProxyAll(ProxyDataMsg* impl_msg);
void recvImmediateProxyAll(ProxyDataMsg* impl_msg);
void recvResults(ProxyResultVarsizeMsg* impl_msg);
void recvResults(ProxyResultMsg* impl_msg);
void recvResults(ProxyCombinedResultRawMsg* impl_msg);
void recvImmediateResults(ProxyCombinedResultRawMsg* impl_msg);
void recvSpanningTreeOnHomePatch(int impl_noname_0, const int *tree, int n);
void recvNodeAwareSpanningTreeOnHomePatch(ProxyNodeAwareSpanningTreeMsg* impl_msg);
void recvSpanningTree(ProxySpanningTreeMsg* impl_msg);
void recvNodeAwareSpanningTree(ProxyNodeAwareSpanningTreeMsg* impl_msg);
void recvNodeAwareSTParent(int impl_noname_1, int impl_noname_2);
void buildProxySpanningTree2();
void recvProxies(int pid, const int *list, int n);
void recvPatchProxyInfo(PatchProxyListMsg* impl_msg);
void sendResult(ProxyGBISP1ResultMsg* impl_msg);
void recvResult(ProxyGBISP1ResultMsg* impl_msg);
void recvData(ProxyGBISP2DataMsg* impl_msg);
void sendResult(ProxyGBISP2ResultMsg* impl_msg);
void recvResult(ProxyGBISP2ResultMsg* impl_msg);
void recvData(ProxyGBISP3DataMsg* impl_msg);
};
 */
 class ProxyMgr;
 class CkIndex_ProxyMgr;
 class CProxy_ProxyMgr;
 class CProxyElement_ProxyMgr;
 class CProxySection_ProxyMgr;
/* --------------- index object ------------------ */
class CkIndex_ProxyMgr:public CkIndex_IrrGroup{
  public:
    typedef ProxyMgr local_t;
    typedef CkIndex_ProxyMgr index_t;
    typedef CProxy_ProxyMgr proxy_t;
    typedef CProxyElement_ProxyMgr element_t;
    typedef CProxySection_ProxyMgr section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: ProxyMgr();
     */
    // Entry point registration at startup
    
    static int reg_ProxyMgr_void();
    // Entry point index lookup
    
    inline static int idx_ProxyMgr_void() {
      static int epidx = reg_ProxyMgr_void();
      return epidx;
    }

    
    static int ckNew() { return idx_ProxyMgr_void(); }
    
    static void _call_ProxyMgr_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ProxyMgr_void(void* impl_msg, void* impl_obj);
    /* DECLS: void recvRegisterProxy(RegisterProxyMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvRegisterProxy_RegisterProxyMsg();
    // Entry point index lookup
    
    inline static int idx_recvRegisterProxy_RegisterProxyMsg() {
      static int epidx = reg_recvRegisterProxy_RegisterProxyMsg();
      return epidx;
    }

    
    inline static int idx_recvRegisterProxy(void (ProxyMgr::*)(RegisterProxyMsg* impl_msg) ) {
      return idx_recvRegisterProxy_RegisterProxyMsg();
    }


    
    static int recvRegisterProxy(RegisterProxyMsg* impl_msg) { return idx_recvRegisterProxy_RegisterProxyMsg(); }
    
    static void _call_recvRegisterProxy_RegisterProxyMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvRegisterProxy_RegisterProxyMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvUnregisterProxy(UnregisterProxyMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvUnregisterProxy_UnregisterProxyMsg();
    // Entry point index lookup
    
    inline static int idx_recvUnregisterProxy_UnregisterProxyMsg() {
      static int epidx = reg_recvUnregisterProxy_UnregisterProxyMsg();
      return epidx;
    }

    
    inline static int idx_recvUnregisterProxy(void (ProxyMgr::*)(UnregisterProxyMsg* impl_msg) ) {
      return idx_recvUnregisterProxy_UnregisterProxyMsg();
    }


    
    static int recvUnregisterProxy(UnregisterProxyMsg* impl_msg) { return idx_recvUnregisterProxy_UnregisterProxyMsg(); }
    
    static void _call_recvUnregisterProxy_UnregisterProxyMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvUnregisterProxy_UnregisterProxyMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvProxyData(ProxyDataMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvProxyData_ProxyDataMsg();
    // Entry point index lookup
    
    inline static int idx_recvProxyData_ProxyDataMsg() {
      static int epidx = reg_recvProxyData_ProxyDataMsg();
      return epidx;
    }

    
    inline static int idx_recvProxyData(void (ProxyMgr::*)(ProxyDataMsg* impl_msg) ) {
      return idx_recvProxyData_ProxyDataMsg();
    }


    
    static int recvProxyData(ProxyDataMsg* impl_msg) { return idx_recvProxyData_ProxyDataMsg(); }
    
    static void _call_recvProxyData_ProxyDataMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvProxyData_ProxyDataMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvImmediateProxyData(ProxyDataMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvImmediateProxyData_ProxyDataMsg();
    // Entry point index lookup
    
    inline static int idx_recvImmediateProxyData_ProxyDataMsg() {
      static int epidx = reg_recvImmediateProxyData_ProxyDataMsg();
      return epidx;
    }

    
    inline static int idx_recvImmediateProxyData(void (ProxyMgr::*)(ProxyDataMsg* impl_msg) ) {
      return idx_recvImmediateProxyData_ProxyDataMsg();
    }


    
    static int recvImmediateProxyData(ProxyDataMsg* impl_msg) { return idx_recvImmediateProxyData_ProxyDataMsg(); }
    
    static void _call_recvImmediateProxyData_ProxyDataMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvImmediateProxyData_ProxyDataMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvProxyAll(ProxyDataMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvProxyAll_ProxyDataMsg();
    // Entry point index lookup
    
    inline static int idx_recvProxyAll_ProxyDataMsg() {
      static int epidx = reg_recvProxyAll_ProxyDataMsg();
      return epidx;
    }

    
    inline static int idx_recvProxyAll(void (ProxyMgr::*)(ProxyDataMsg* impl_msg) ) {
      return idx_recvProxyAll_ProxyDataMsg();
    }


    
    static int recvProxyAll(ProxyDataMsg* impl_msg) { return idx_recvProxyAll_ProxyDataMsg(); }
    
    static void _call_recvProxyAll_ProxyDataMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvProxyAll_ProxyDataMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvImmediateProxyAll(ProxyDataMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvImmediateProxyAll_ProxyDataMsg();
    // Entry point index lookup
    
    inline static int idx_recvImmediateProxyAll_ProxyDataMsg() {
      static int epidx = reg_recvImmediateProxyAll_ProxyDataMsg();
      return epidx;
    }

    
    inline static int idx_recvImmediateProxyAll(void (ProxyMgr::*)(ProxyDataMsg* impl_msg) ) {
      return idx_recvImmediateProxyAll_ProxyDataMsg();
    }


    
    static int recvImmediateProxyAll(ProxyDataMsg* impl_msg) { return idx_recvImmediateProxyAll_ProxyDataMsg(); }
    
    static void _call_recvImmediateProxyAll_ProxyDataMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvImmediateProxyAll_ProxyDataMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvResults(ProxyResultVarsizeMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvResults_ProxyResultVarsizeMsg();
    // Entry point index lookup
    
    inline static int idx_recvResults_ProxyResultVarsizeMsg() {
      static int epidx = reg_recvResults_ProxyResultVarsizeMsg();
      return epidx;
    }

    
    inline static int idx_recvResults(void (ProxyMgr::*)(ProxyResultVarsizeMsg* impl_msg) ) {
      return idx_recvResults_ProxyResultVarsizeMsg();
    }


    
    static int recvResults(ProxyResultVarsizeMsg* impl_msg) { return idx_recvResults_ProxyResultVarsizeMsg(); }
    
    static void _call_recvResults_ProxyResultVarsizeMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvResults_ProxyResultVarsizeMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvResults(ProxyResultMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvResults_ProxyResultMsg();
    // Entry point index lookup
    
    inline static int idx_recvResults_ProxyResultMsg() {
      static int epidx = reg_recvResults_ProxyResultMsg();
      return epidx;
    }

    
    inline static int idx_recvResults(void (ProxyMgr::*)(ProxyResultMsg* impl_msg) ) {
      return idx_recvResults_ProxyResultMsg();
    }


    
    static int recvResults(ProxyResultMsg* impl_msg) { return idx_recvResults_ProxyResultMsg(); }
    
    static void _call_recvResults_ProxyResultMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvResults_ProxyResultMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvResults(ProxyCombinedResultRawMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvResults_ProxyCombinedResultRawMsg();
    // Entry point index lookup
    
    inline static int idx_recvResults_ProxyCombinedResultRawMsg() {
      static int epidx = reg_recvResults_ProxyCombinedResultRawMsg();
      return epidx;
    }

    
    inline static int idx_recvResults(void (ProxyMgr::*)(ProxyCombinedResultRawMsg* impl_msg) ) {
      return idx_recvResults_ProxyCombinedResultRawMsg();
    }


    
    static int recvResults(ProxyCombinedResultRawMsg* impl_msg) { return idx_recvResults_ProxyCombinedResultRawMsg(); }
    
    static void _call_recvResults_ProxyCombinedResultRawMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvResults_ProxyCombinedResultRawMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvImmediateResults(ProxyCombinedResultRawMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvImmediateResults_ProxyCombinedResultRawMsg();
    // Entry point index lookup
    
    inline static int idx_recvImmediateResults_ProxyCombinedResultRawMsg() {
      static int epidx = reg_recvImmediateResults_ProxyCombinedResultRawMsg();
      return epidx;
    }

    
    inline static int idx_recvImmediateResults(void (ProxyMgr::*)(ProxyCombinedResultRawMsg* impl_msg) ) {
      return idx_recvImmediateResults_ProxyCombinedResultRawMsg();
    }


    
    static int recvImmediateResults(ProxyCombinedResultRawMsg* impl_msg) { return idx_recvImmediateResults_ProxyCombinedResultRawMsg(); }
    
    static void _call_recvImmediateResults_ProxyCombinedResultRawMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvImmediateResults_ProxyCombinedResultRawMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvSpanningTreeOnHomePatch(int impl_noname_0, const int *tree, int n);
     */
    // Entry point registration at startup
    
    static int reg_recvSpanningTreeOnHomePatch_marshall12();
    // Entry point index lookup
    
    inline static int idx_recvSpanningTreeOnHomePatch_marshall12() {
      static int epidx = reg_recvSpanningTreeOnHomePatch_marshall12();
      return epidx;
    }

    
    inline static int idx_recvSpanningTreeOnHomePatch(void (ProxyMgr::*)(int impl_noname_0, const int *tree, int n) ) {
      return idx_recvSpanningTreeOnHomePatch_marshall12();
    }


    
    static int recvSpanningTreeOnHomePatch(int impl_noname_0, const int *tree, int n) { return idx_recvSpanningTreeOnHomePatch_marshall12(); }
    
    static void _call_recvSpanningTreeOnHomePatch_marshall12(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvSpanningTreeOnHomePatch_marshall12(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_recvSpanningTreeOnHomePatch_marshall12(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_recvSpanningTreeOnHomePatch_marshall12(PUP::er &p,void *msg);
    /* DECLS: void recvNodeAwareSpanningTreeOnHomePatch(ProxyNodeAwareSpanningTreeMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvNodeAwareSpanningTreeOnHomePatch_ProxyNodeAwareSpanningTreeMsg();
    // Entry point index lookup
    
    inline static int idx_recvNodeAwareSpanningTreeOnHomePatch_ProxyNodeAwareSpanningTreeMsg() {
      static int epidx = reg_recvNodeAwareSpanningTreeOnHomePatch_ProxyNodeAwareSpanningTreeMsg();
      return epidx;
    }

    
    inline static int idx_recvNodeAwareSpanningTreeOnHomePatch(void (ProxyMgr::*)(ProxyNodeAwareSpanningTreeMsg* impl_msg) ) {
      return idx_recvNodeAwareSpanningTreeOnHomePatch_ProxyNodeAwareSpanningTreeMsg();
    }


    
    static int recvNodeAwareSpanningTreeOnHomePatch(ProxyNodeAwareSpanningTreeMsg* impl_msg) { return idx_recvNodeAwareSpanningTreeOnHomePatch_ProxyNodeAwareSpanningTreeMsg(); }
    
    static void _call_recvNodeAwareSpanningTreeOnHomePatch_ProxyNodeAwareSpanningTreeMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvNodeAwareSpanningTreeOnHomePatch_ProxyNodeAwareSpanningTreeMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvSpanningTree(ProxySpanningTreeMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvSpanningTree_ProxySpanningTreeMsg();
    // Entry point index lookup
    
    inline static int idx_recvSpanningTree_ProxySpanningTreeMsg() {
      static int epidx = reg_recvSpanningTree_ProxySpanningTreeMsg();
      return epidx;
    }

    
    inline static int idx_recvSpanningTree(void (ProxyMgr::*)(ProxySpanningTreeMsg* impl_msg) ) {
      return idx_recvSpanningTree_ProxySpanningTreeMsg();
    }


    
    static int recvSpanningTree(ProxySpanningTreeMsg* impl_msg) { return idx_recvSpanningTree_ProxySpanningTreeMsg(); }
    
    static void _call_recvSpanningTree_ProxySpanningTreeMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvSpanningTree_ProxySpanningTreeMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvNodeAwareSpanningTree(ProxyNodeAwareSpanningTreeMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvNodeAwareSpanningTree_ProxyNodeAwareSpanningTreeMsg();
    // Entry point index lookup
    
    inline static int idx_recvNodeAwareSpanningTree_ProxyNodeAwareSpanningTreeMsg() {
      static int epidx = reg_recvNodeAwareSpanningTree_ProxyNodeAwareSpanningTreeMsg();
      return epidx;
    }

    
    inline static int idx_recvNodeAwareSpanningTree(void (ProxyMgr::*)(ProxyNodeAwareSpanningTreeMsg* impl_msg) ) {
      return idx_recvNodeAwareSpanningTree_ProxyNodeAwareSpanningTreeMsg();
    }


    
    static int recvNodeAwareSpanningTree(ProxyNodeAwareSpanningTreeMsg* impl_msg) { return idx_recvNodeAwareSpanningTree_ProxyNodeAwareSpanningTreeMsg(); }
    
    static void _call_recvNodeAwareSpanningTree_ProxyNodeAwareSpanningTreeMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvNodeAwareSpanningTree_ProxyNodeAwareSpanningTreeMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvNodeAwareSTParent(int impl_noname_1, int impl_noname_2);
     */
    // Entry point registration at startup
    
    static int reg_recvNodeAwareSTParent_marshall16();
    // Entry point index lookup
    
    inline static int idx_recvNodeAwareSTParent_marshall16() {
      static int epidx = reg_recvNodeAwareSTParent_marshall16();
      return epidx;
    }

    
    inline static int idx_recvNodeAwareSTParent(void (ProxyMgr::*)(int impl_noname_1, int impl_noname_2) ) {
      return idx_recvNodeAwareSTParent_marshall16();
    }


    
    static int recvNodeAwareSTParent(int impl_noname_1, int impl_noname_2) { return idx_recvNodeAwareSTParent_marshall16(); }
    
    static void _call_recvNodeAwareSTParent_marshall16(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvNodeAwareSTParent_marshall16(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_recvNodeAwareSTParent_marshall16(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_recvNodeAwareSTParent_marshall16(PUP::er &p,void *msg);
    /* DECLS: void buildProxySpanningTree2();
     */
    // Entry point registration at startup
    
    static int reg_buildProxySpanningTree2_void();
    // Entry point index lookup
    
    inline static int idx_buildProxySpanningTree2_void() {
      static int epidx = reg_buildProxySpanningTree2_void();
      return epidx;
    }

    
    inline static int idx_buildProxySpanningTree2(void (ProxyMgr::*)() ) {
      return idx_buildProxySpanningTree2_void();
    }


    
    static int buildProxySpanningTree2() { return idx_buildProxySpanningTree2_void(); }
    
    static void _call_buildProxySpanningTree2_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_buildProxySpanningTree2_void(void* impl_msg, void* impl_obj);
    /* DECLS: void recvProxies(int pid, const int *list, int n);
     */
    // Entry point registration at startup
    
    static int reg_recvProxies_marshall18();
    // Entry point index lookup
    
    inline static int idx_recvProxies_marshall18() {
      static int epidx = reg_recvProxies_marshall18();
      return epidx;
    }

    
    inline static int idx_recvProxies(void (ProxyMgr::*)(int pid, const int *list, int n) ) {
      return idx_recvProxies_marshall18();
    }


    
    static int recvProxies(int pid, const int *list, int n) { return idx_recvProxies_marshall18(); }
    
    static void _call_recvProxies_marshall18(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvProxies_marshall18(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_recvProxies_marshall18(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_recvProxies_marshall18(PUP::er &p,void *msg);
    /* DECLS: void recvPatchProxyInfo(PatchProxyListMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvPatchProxyInfo_PatchProxyListMsg();
    // Entry point index lookup
    
    inline static int idx_recvPatchProxyInfo_PatchProxyListMsg() {
      static int epidx = reg_recvPatchProxyInfo_PatchProxyListMsg();
      return epidx;
    }

    
    inline static int idx_recvPatchProxyInfo(void (ProxyMgr::*)(PatchProxyListMsg* impl_msg) ) {
      return idx_recvPatchProxyInfo_PatchProxyListMsg();
    }


    
    static int recvPatchProxyInfo(PatchProxyListMsg* impl_msg) { return idx_recvPatchProxyInfo_PatchProxyListMsg(); }
    
    static void _call_recvPatchProxyInfo_PatchProxyListMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvPatchProxyInfo_PatchProxyListMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void sendResult(ProxyGBISP1ResultMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_sendResult_ProxyGBISP1ResultMsg();
    // Entry point index lookup
    
    inline static int idx_sendResult_ProxyGBISP1ResultMsg() {
      static int epidx = reg_sendResult_ProxyGBISP1ResultMsg();
      return epidx;
    }

    
    inline static int idx_sendResult(void (ProxyMgr::*)(ProxyGBISP1ResultMsg* impl_msg) ) {
      return idx_sendResult_ProxyGBISP1ResultMsg();
    }


    
    static int sendResult(ProxyGBISP1ResultMsg* impl_msg) { return idx_sendResult_ProxyGBISP1ResultMsg(); }
    
    static void _call_sendResult_ProxyGBISP1ResultMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_sendResult_ProxyGBISP1ResultMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvResult(ProxyGBISP1ResultMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvResult_ProxyGBISP1ResultMsg();
    // Entry point index lookup
    
    inline static int idx_recvResult_ProxyGBISP1ResultMsg() {
      static int epidx = reg_recvResult_ProxyGBISP1ResultMsg();
      return epidx;
    }

    
    inline static int idx_recvResult(void (ProxyMgr::*)(ProxyGBISP1ResultMsg* impl_msg) ) {
      return idx_recvResult_ProxyGBISP1ResultMsg();
    }


    
    static int recvResult(ProxyGBISP1ResultMsg* impl_msg) { return idx_recvResult_ProxyGBISP1ResultMsg(); }
    
    static void _call_recvResult_ProxyGBISP1ResultMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvResult_ProxyGBISP1ResultMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvData(ProxyGBISP2DataMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvData_ProxyGBISP2DataMsg();
    // Entry point index lookup
    
    inline static int idx_recvData_ProxyGBISP2DataMsg() {
      static int epidx = reg_recvData_ProxyGBISP2DataMsg();
      return epidx;
    }

    
    inline static int idx_recvData(void (ProxyMgr::*)(ProxyGBISP2DataMsg* impl_msg) ) {
      return idx_recvData_ProxyGBISP2DataMsg();
    }


    
    static int recvData(ProxyGBISP2DataMsg* impl_msg) { return idx_recvData_ProxyGBISP2DataMsg(); }
    
    static void _call_recvData_ProxyGBISP2DataMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvData_ProxyGBISP2DataMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void sendResult(ProxyGBISP2ResultMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_sendResult_ProxyGBISP2ResultMsg();
    // Entry point index lookup
    
    inline static int idx_sendResult_ProxyGBISP2ResultMsg() {
      static int epidx = reg_sendResult_ProxyGBISP2ResultMsg();
      return epidx;
    }

    
    inline static int idx_sendResult(void (ProxyMgr::*)(ProxyGBISP2ResultMsg* impl_msg) ) {
      return idx_sendResult_ProxyGBISP2ResultMsg();
    }


    
    static int sendResult(ProxyGBISP2ResultMsg* impl_msg) { return idx_sendResult_ProxyGBISP2ResultMsg(); }
    
    static void _call_sendResult_ProxyGBISP2ResultMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_sendResult_ProxyGBISP2ResultMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvResult(ProxyGBISP2ResultMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvResult_ProxyGBISP2ResultMsg();
    // Entry point index lookup
    
    inline static int idx_recvResult_ProxyGBISP2ResultMsg() {
      static int epidx = reg_recvResult_ProxyGBISP2ResultMsg();
      return epidx;
    }

    
    inline static int idx_recvResult(void (ProxyMgr::*)(ProxyGBISP2ResultMsg* impl_msg) ) {
      return idx_recvResult_ProxyGBISP2ResultMsg();
    }


    
    static int recvResult(ProxyGBISP2ResultMsg* impl_msg) { return idx_recvResult_ProxyGBISP2ResultMsg(); }
    
    static void _call_recvResult_ProxyGBISP2ResultMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvResult_ProxyGBISP2ResultMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvData(ProxyGBISP3DataMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvData_ProxyGBISP3DataMsg();
    // Entry point index lookup
    
    inline static int idx_recvData_ProxyGBISP3DataMsg() {
      static int epidx = reg_recvData_ProxyGBISP3DataMsg();
      return epidx;
    }

    
    inline static int idx_recvData(void (ProxyMgr::*)(ProxyGBISP3DataMsg* impl_msg) ) {
      return idx_recvData_ProxyGBISP3DataMsg();
    }


    
    static int recvData(ProxyGBISP3DataMsg* impl_msg) { return idx_recvData_ProxyGBISP3DataMsg(); }
    
    static void _call_recvData_ProxyGBISP3DataMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvData_ProxyGBISP3DataMsg(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_ProxyMgr: public CProxyElement_IrrGroup{
  public:
    typedef ProxyMgr local_t;
    typedef CkIndex_ProxyMgr index_t;
    typedef CProxy_ProxyMgr proxy_t;
    typedef CProxyElement_ProxyMgr element_t;
    typedef CProxySection_ProxyMgr section_t;


    /* TRAM aggregators */

    CProxyElement_ProxyMgr(void) {
    }
    CProxyElement_ProxyMgr(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_ProxyMgr(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_ProxyMgr(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    ProxyMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ProxyMgr* ckLocalBranch(CkGroupID gID) {
      return (ProxyMgr*)CkLocalBranch(gID);
    }
/* DECLS: ProxyMgr();
 */
    

/* DECLS: void recvRegisterProxy(RegisterProxyMsg* impl_msg);
 */
    
    void recvRegisterProxy(RegisterProxyMsg* impl_msg);

/* DECLS: void recvUnregisterProxy(UnregisterProxyMsg* impl_msg);
 */
    
    void recvUnregisterProxy(UnregisterProxyMsg* impl_msg);

/* DECLS: void recvProxyData(ProxyDataMsg* impl_msg);
 */
    
    void recvProxyData(ProxyDataMsg* impl_msg);

/* DECLS: void recvImmediateProxyData(ProxyDataMsg* impl_msg);
 */
    
    void recvImmediateProxyData(ProxyDataMsg* impl_msg);

/* DECLS: void recvProxyAll(ProxyDataMsg* impl_msg);
 */
    
    void recvProxyAll(ProxyDataMsg* impl_msg);

/* DECLS: void recvImmediateProxyAll(ProxyDataMsg* impl_msg);
 */
    
    void recvImmediateProxyAll(ProxyDataMsg* impl_msg);

/* DECLS: void recvResults(ProxyResultVarsizeMsg* impl_msg);
 */
    
    void recvResults(ProxyResultVarsizeMsg* impl_msg);

/* DECLS: void recvResults(ProxyResultMsg* impl_msg);
 */
    
    void recvResults(ProxyResultMsg* impl_msg);

/* DECLS: void recvResults(ProxyCombinedResultRawMsg* impl_msg);
 */
    
    void recvResults(ProxyCombinedResultRawMsg* impl_msg);

/* DECLS: void recvImmediateResults(ProxyCombinedResultRawMsg* impl_msg);
 */
    
    void recvImmediateResults(ProxyCombinedResultRawMsg* impl_msg);

/* DECLS: void recvSpanningTreeOnHomePatch(int impl_noname_0, const int *tree, int n);
 */
    
    void recvSpanningTreeOnHomePatch(int impl_noname_0, const int *tree, int n, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvNodeAwareSpanningTreeOnHomePatch(ProxyNodeAwareSpanningTreeMsg* impl_msg);
 */
    
    void recvNodeAwareSpanningTreeOnHomePatch(ProxyNodeAwareSpanningTreeMsg* impl_msg);

/* DECLS: void recvSpanningTree(ProxySpanningTreeMsg* impl_msg);
 */
    
    void recvSpanningTree(ProxySpanningTreeMsg* impl_msg);

/* DECLS: void recvNodeAwareSpanningTree(ProxyNodeAwareSpanningTreeMsg* impl_msg);
 */
    
    void recvNodeAwareSpanningTree(ProxyNodeAwareSpanningTreeMsg* impl_msg);

/* DECLS: void recvNodeAwareSTParent(int impl_noname_1, int impl_noname_2);
 */
    
    void recvNodeAwareSTParent(int impl_noname_1, int impl_noname_2, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void buildProxySpanningTree2();
 */
    
    void buildProxySpanningTree2(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvProxies(int pid, const int *list, int n);
 */
    
    void recvProxies(int pid, const int *list, int n, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvPatchProxyInfo(PatchProxyListMsg* impl_msg);
 */
    
    void recvPatchProxyInfo(PatchProxyListMsg* impl_msg);

/* DECLS: void sendResult(ProxyGBISP1ResultMsg* impl_msg);
 */
    
    void sendResult(ProxyGBISP1ResultMsg* impl_msg);

/* DECLS: void recvResult(ProxyGBISP1ResultMsg* impl_msg);
 */
    
    void recvResult(ProxyGBISP1ResultMsg* impl_msg);

/* DECLS: void recvData(ProxyGBISP2DataMsg* impl_msg);
 */
    
    void recvData(ProxyGBISP2DataMsg* impl_msg);

/* DECLS: void sendResult(ProxyGBISP2ResultMsg* impl_msg);
 */
    
    void sendResult(ProxyGBISP2ResultMsg* impl_msg);

/* DECLS: void recvResult(ProxyGBISP2ResultMsg* impl_msg);
 */
    
    void recvResult(ProxyGBISP2ResultMsg* impl_msg);

/* DECLS: void recvData(ProxyGBISP3DataMsg* impl_msg);
 */
    
    void recvData(ProxyGBISP3DataMsg* impl_msg);

};
/* ---------------- collective proxy -------------- */
class CProxy_ProxyMgr: public CProxy_IrrGroup{
  public:
    typedef ProxyMgr local_t;
    typedef CkIndex_ProxyMgr index_t;
    typedef CProxy_ProxyMgr proxy_t;
    typedef CProxyElement_ProxyMgr element_t;
    typedef CProxySection_ProxyMgr section_t;

    CProxy_ProxyMgr(void) {
    }
    CProxy_ProxyMgr(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_ProxyMgr(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_ProxyMgr(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_ProxyMgr operator[](int onPE) const
      {return CProxyElement_ProxyMgr(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    ProxyMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ProxyMgr* ckLocalBranch(CkGroupID gID) {
      return (ProxyMgr*)CkLocalBranch(gID);
    }
/* DECLS: ProxyMgr();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvRegisterProxy(RegisterProxyMsg* impl_msg);
 */
    
    void recvRegisterProxy(RegisterProxyMsg* impl_msg);
    
    void recvRegisterProxy(RegisterProxyMsg* impl_msg, int npes, int *pes);
    
    void recvRegisterProxy(RegisterProxyMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvUnregisterProxy(UnregisterProxyMsg* impl_msg);
 */
    
    void recvUnregisterProxy(UnregisterProxyMsg* impl_msg);
    
    void recvUnregisterProxy(UnregisterProxyMsg* impl_msg, int npes, int *pes);
    
    void recvUnregisterProxy(UnregisterProxyMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvProxyData(ProxyDataMsg* impl_msg);
 */
    
    void recvProxyData(ProxyDataMsg* impl_msg);
    
    void recvProxyData(ProxyDataMsg* impl_msg, int npes, int *pes);
    
    void recvProxyData(ProxyDataMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvImmediateProxyData(ProxyDataMsg* impl_msg);
 */
    
    void recvImmediateProxyData(ProxyDataMsg* impl_msg);
    
    void recvImmediateProxyData(ProxyDataMsg* impl_msg, int npes, int *pes);
    
    void recvImmediateProxyData(ProxyDataMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvProxyAll(ProxyDataMsg* impl_msg);
 */
    
    void recvProxyAll(ProxyDataMsg* impl_msg);
    
    void recvProxyAll(ProxyDataMsg* impl_msg, int npes, int *pes);
    
    void recvProxyAll(ProxyDataMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvImmediateProxyAll(ProxyDataMsg* impl_msg);
 */
    
    void recvImmediateProxyAll(ProxyDataMsg* impl_msg);
    
    void recvImmediateProxyAll(ProxyDataMsg* impl_msg, int npes, int *pes);
    
    void recvImmediateProxyAll(ProxyDataMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvResults(ProxyResultVarsizeMsg* impl_msg);
 */
    
    void recvResults(ProxyResultVarsizeMsg* impl_msg);
    
    void recvResults(ProxyResultVarsizeMsg* impl_msg, int npes, int *pes);
    
    void recvResults(ProxyResultVarsizeMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvResults(ProxyResultMsg* impl_msg);
 */
    
    void recvResults(ProxyResultMsg* impl_msg);
    
    void recvResults(ProxyResultMsg* impl_msg, int npes, int *pes);
    
    void recvResults(ProxyResultMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvResults(ProxyCombinedResultRawMsg* impl_msg);
 */
    
    void recvResults(ProxyCombinedResultRawMsg* impl_msg);
    
    void recvResults(ProxyCombinedResultRawMsg* impl_msg, int npes, int *pes);
    
    void recvResults(ProxyCombinedResultRawMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvImmediateResults(ProxyCombinedResultRawMsg* impl_msg);
 */
    
    void recvImmediateResults(ProxyCombinedResultRawMsg* impl_msg);
    
    void recvImmediateResults(ProxyCombinedResultRawMsg* impl_msg, int npes, int *pes);
    
    void recvImmediateResults(ProxyCombinedResultRawMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvSpanningTreeOnHomePatch(int impl_noname_0, const int *tree, int n);
 */
    
    void recvSpanningTreeOnHomePatch(int impl_noname_0, const int *tree, int n, const CkEntryOptions *impl_e_opts=NULL);
    
    void recvSpanningTreeOnHomePatch(int impl_noname_0, const int *tree, int n, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void recvSpanningTreeOnHomePatch(int impl_noname_0, const int *tree, int n, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvNodeAwareSpanningTreeOnHomePatch(ProxyNodeAwareSpanningTreeMsg* impl_msg);
 */
    
    void recvNodeAwareSpanningTreeOnHomePatch(ProxyNodeAwareSpanningTreeMsg* impl_msg);
    
    void recvNodeAwareSpanningTreeOnHomePatch(ProxyNodeAwareSpanningTreeMsg* impl_msg, int npes, int *pes);
    
    void recvNodeAwareSpanningTreeOnHomePatch(ProxyNodeAwareSpanningTreeMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvSpanningTree(ProxySpanningTreeMsg* impl_msg);
 */
    
    void recvSpanningTree(ProxySpanningTreeMsg* impl_msg);
    
    void recvSpanningTree(ProxySpanningTreeMsg* impl_msg, int npes, int *pes);
    
    void recvSpanningTree(ProxySpanningTreeMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvNodeAwareSpanningTree(ProxyNodeAwareSpanningTreeMsg* impl_msg);
 */
    
    void recvNodeAwareSpanningTree(ProxyNodeAwareSpanningTreeMsg* impl_msg);
    
    void recvNodeAwareSpanningTree(ProxyNodeAwareSpanningTreeMsg* impl_msg, int npes, int *pes);
    
    void recvNodeAwareSpanningTree(ProxyNodeAwareSpanningTreeMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvNodeAwareSTParent(int impl_noname_1, int impl_noname_2);
 */
    
    void recvNodeAwareSTParent(int impl_noname_1, int impl_noname_2, const CkEntryOptions *impl_e_opts=NULL);
    
    void recvNodeAwareSTParent(int impl_noname_1, int impl_noname_2, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void recvNodeAwareSTParent(int impl_noname_1, int impl_noname_2, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void buildProxySpanningTree2();
 */
    
    void buildProxySpanningTree2(const CkEntryOptions *impl_e_opts=NULL);
    
    void buildProxySpanningTree2(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void buildProxySpanningTree2(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvProxies(int pid, const int *list, int n);
 */
    
    void recvProxies(int pid, const int *list, int n, const CkEntryOptions *impl_e_opts=NULL);
    
    void recvProxies(int pid, const int *list, int n, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void recvProxies(int pid, const int *list, int n, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvPatchProxyInfo(PatchProxyListMsg* impl_msg);
 */
    
    void recvPatchProxyInfo(PatchProxyListMsg* impl_msg);
    
    void recvPatchProxyInfo(PatchProxyListMsg* impl_msg, int npes, int *pes);
    
    void recvPatchProxyInfo(PatchProxyListMsg* impl_msg, CmiGroup &grp);

/* DECLS: void sendResult(ProxyGBISP1ResultMsg* impl_msg);
 */
    
    void sendResult(ProxyGBISP1ResultMsg* impl_msg);
    
    void sendResult(ProxyGBISP1ResultMsg* impl_msg, int npes, int *pes);
    
    void sendResult(ProxyGBISP1ResultMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvResult(ProxyGBISP1ResultMsg* impl_msg);
 */
    
    void recvResult(ProxyGBISP1ResultMsg* impl_msg);
    
    void recvResult(ProxyGBISP1ResultMsg* impl_msg, int npes, int *pes);
    
    void recvResult(ProxyGBISP1ResultMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvData(ProxyGBISP2DataMsg* impl_msg);
 */
    
    void recvData(ProxyGBISP2DataMsg* impl_msg);
    
    void recvData(ProxyGBISP2DataMsg* impl_msg, int npes, int *pes);
    
    void recvData(ProxyGBISP2DataMsg* impl_msg, CmiGroup &grp);

/* DECLS: void sendResult(ProxyGBISP2ResultMsg* impl_msg);
 */
    
    void sendResult(ProxyGBISP2ResultMsg* impl_msg);
    
    void sendResult(ProxyGBISP2ResultMsg* impl_msg, int npes, int *pes);
    
    void sendResult(ProxyGBISP2ResultMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvResult(ProxyGBISP2ResultMsg* impl_msg);
 */
    
    void recvResult(ProxyGBISP2ResultMsg* impl_msg);
    
    void recvResult(ProxyGBISP2ResultMsg* impl_msg, int npes, int *pes);
    
    void recvResult(ProxyGBISP2ResultMsg* impl_msg, CmiGroup &grp);

/* DECLS: void recvData(ProxyGBISP3DataMsg* impl_msg);
 */
    
    void recvData(ProxyGBISP3DataMsg* impl_msg);
    
    void recvData(ProxyGBISP3DataMsg* impl_msg, int npes, int *pes);
    
    void recvData(ProxyGBISP3DataMsg* impl_msg, CmiGroup &grp);

};
/* ---------------- section proxy -------------- */
class CProxySection_ProxyMgr: public CProxySection_IrrGroup{
  public:
    typedef ProxyMgr local_t;
    typedef CkIndex_ProxyMgr index_t;
    typedef CProxy_ProxyMgr proxy_t;
    typedef CProxyElement_ProxyMgr element_t;
    typedef CProxySection_ProxyMgr section_t;

    CProxySection_ProxyMgr(void) {
    }
    CProxySection_ProxyMgr(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_ProxyMgr(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_ProxyMgr(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_ProxyMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_ProxyMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    ProxyMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ProxyMgr* ckLocalBranch(CkGroupID gID) {
      return (ProxyMgr*)CkLocalBranch(gID);
    }
/* DECLS: ProxyMgr();
 */
    

/* DECLS: void recvRegisterProxy(RegisterProxyMsg* impl_msg);
 */
    
    void recvRegisterProxy(RegisterProxyMsg* impl_msg);

/* DECLS: void recvUnregisterProxy(UnregisterProxyMsg* impl_msg);
 */
    
    void recvUnregisterProxy(UnregisterProxyMsg* impl_msg);

/* DECLS: void recvProxyData(ProxyDataMsg* impl_msg);
 */
    
    void recvProxyData(ProxyDataMsg* impl_msg);

/* DECLS: void recvImmediateProxyData(ProxyDataMsg* impl_msg);
 */
    
    void recvImmediateProxyData(ProxyDataMsg* impl_msg);

/* DECLS: void recvProxyAll(ProxyDataMsg* impl_msg);
 */
    
    void recvProxyAll(ProxyDataMsg* impl_msg);

/* DECLS: void recvImmediateProxyAll(ProxyDataMsg* impl_msg);
 */
    
    void recvImmediateProxyAll(ProxyDataMsg* impl_msg);

/* DECLS: void recvResults(ProxyResultVarsizeMsg* impl_msg);
 */
    
    void recvResults(ProxyResultVarsizeMsg* impl_msg);

/* DECLS: void recvResults(ProxyResultMsg* impl_msg);
 */
    
    void recvResults(ProxyResultMsg* impl_msg);

/* DECLS: void recvResults(ProxyCombinedResultRawMsg* impl_msg);
 */
    
    void recvResults(ProxyCombinedResultRawMsg* impl_msg);

/* DECLS: void recvImmediateResults(ProxyCombinedResultRawMsg* impl_msg);
 */
    
    void recvImmediateResults(ProxyCombinedResultRawMsg* impl_msg);

/* DECLS: void recvSpanningTreeOnHomePatch(int impl_noname_0, const int *tree, int n);
 */
    
    void recvSpanningTreeOnHomePatch(int impl_noname_0, const int *tree, int n, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvNodeAwareSpanningTreeOnHomePatch(ProxyNodeAwareSpanningTreeMsg* impl_msg);
 */
    
    void recvNodeAwareSpanningTreeOnHomePatch(ProxyNodeAwareSpanningTreeMsg* impl_msg);

/* DECLS: void recvSpanningTree(ProxySpanningTreeMsg* impl_msg);
 */
    
    void recvSpanningTree(ProxySpanningTreeMsg* impl_msg);

/* DECLS: void recvNodeAwareSpanningTree(ProxyNodeAwareSpanningTreeMsg* impl_msg);
 */
    
    void recvNodeAwareSpanningTree(ProxyNodeAwareSpanningTreeMsg* impl_msg);

/* DECLS: void recvNodeAwareSTParent(int impl_noname_1, int impl_noname_2);
 */
    
    void recvNodeAwareSTParent(int impl_noname_1, int impl_noname_2, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void buildProxySpanningTree2();
 */
    
    void buildProxySpanningTree2(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvProxies(int pid, const int *list, int n);
 */
    
    void recvProxies(int pid, const int *list, int n, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvPatchProxyInfo(PatchProxyListMsg* impl_msg);
 */
    
    void recvPatchProxyInfo(PatchProxyListMsg* impl_msg);

/* DECLS: void sendResult(ProxyGBISP1ResultMsg* impl_msg);
 */
    
    void sendResult(ProxyGBISP1ResultMsg* impl_msg);

/* DECLS: void recvResult(ProxyGBISP1ResultMsg* impl_msg);
 */
    
    void recvResult(ProxyGBISP1ResultMsg* impl_msg);

/* DECLS: void recvData(ProxyGBISP2DataMsg* impl_msg);
 */
    
    void recvData(ProxyGBISP2DataMsg* impl_msg);

/* DECLS: void sendResult(ProxyGBISP2ResultMsg* impl_msg);
 */
    
    void sendResult(ProxyGBISP2ResultMsg* impl_msg);

/* DECLS: void recvResult(ProxyGBISP2ResultMsg* impl_msg);
 */
    
    void recvResult(ProxyGBISP2ResultMsg* impl_msg);

/* DECLS: void recvData(ProxyGBISP3DataMsg* impl_msg);
 */
    
    void recvData(ProxyGBISP3DataMsg* impl_msg);

};
#define ProxyMgr_SDAG_CODE 
typedef CBaseT1<Group, CProxy_ProxyMgr>CBase_ProxyMgr;

/* DECLS: nodegroup NodeProxyMgr: NodeGroup{
NodeProxyMgr();
void createProxyInfo(int impl_noname_3);
void recvImmediateProxyData(ProxyDataMsg* impl_msg);
void recvImmediateProxyAll(ProxyDataMsg* impl_msg);
void recvImmediateResults(ProxyCombinedResultRawMsg* impl_msg);
void sendProxyListInfo(PatchProxyListMsg* impl_msg);
};
 */
 class NodeProxyMgr;
 class CkIndex_NodeProxyMgr;
 class CProxy_NodeProxyMgr;
 class CProxyElement_NodeProxyMgr;
 class CProxySection_NodeProxyMgr;
/* --------------- index object ------------------ */
class CkIndex_NodeProxyMgr:public CkIndex_NodeGroup{
  public:
    typedef NodeProxyMgr local_t;
    typedef CkIndex_NodeProxyMgr index_t;
    typedef CProxy_NodeProxyMgr proxy_t;
    typedef CProxyElement_NodeProxyMgr element_t;
    typedef CProxySection_NodeProxyMgr section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: NodeProxyMgr();
     */
    // Entry point registration at startup
    
    static int reg_NodeProxyMgr_void();
    // Entry point index lookup
    
    inline static int idx_NodeProxyMgr_void() {
      static int epidx = reg_NodeProxyMgr_void();
      return epidx;
    }

    
    static int ckNew() { return idx_NodeProxyMgr_void(); }
    
    static void _call_NodeProxyMgr_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_NodeProxyMgr_void(void* impl_msg, void* impl_obj);
    /* DECLS: void createProxyInfo(int impl_noname_3);
     */
    // Entry point registration at startup
    
    static int reg_createProxyInfo_marshall2();
    // Entry point index lookup
    
    inline static int idx_createProxyInfo_marshall2() {
      static int epidx = reg_createProxyInfo_marshall2();
      return epidx;
    }

    
    inline static int idx_createProxyInfo(void (NodeProxyMgr::*)(int impl_noname_3) ) {
      return idx_createProxyInfo_marshall2();
    }


    
    static int createProxyInfo(int impl_noname_3) { return idx_createProxyInfo_marshall2(); }
    
    static void _call_createProxyInfo_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_createProxyInfo_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_createProxyInfo_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_createProxyInfo_marshall2(PUP::er &p,void *msg);
    /* DECLS: void recvImmediateProxyData(ProxyDataMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvImmediateProxyData_ProxyDataMsg();
    // Entry point index lookup
    
    inline static int idx_recvImmediateProxyData_ProxyDataMsg() {
      static int epidx = reg_recvImmediateProxyData_ProxyDataMsg();
      return epidx;
    }

    
    inline static int idx_recvImmediateProxyData(void (NodeProxyMgr::*)(ProxyDataMsg* impl_msg) ) {
      return idx_recvImmediateProxyData_ProxyDataMsg();
    }


    
    static int recvImmediateProxyData(ProxyDataMsg* impl_msg) { return idx_recvImmediateProxyData_ProxyDataMsg(); }
    
    static void _call_recvImmediateProxyData_ProxyDataMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvImmediateProxyData_ProxyDataMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvImmediateProxyAll(ProxyDataMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvImmediateProxyAll_ProxyDataMsg();
    // Entry point index lookup
    
    inline static int idx_recvImmediateProxyAll_ProxyDataMsg() {
      static int epidx = reg_recvImmediateProxyAll_ProxyDataMsg();
      return epidx;
    }

    
    inline static int idx_recvImmediateProxyAll(void (NodeProxyMgr::*)(ProxyDataMsg* impl_msg) ) {
      return idx_recvImmediateProxyAll_ProxyDataMsg();
    }


    
    static int recvImmediateProxyAll(ProxyDataMsg* impl_msg) { return idx_recvImmediateProxyAll_ProxyDataMsg(); }
    
    static void _call_recvImmediateProxyAll_ProxyDataMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvImmediateProxyAll_ProxyDataMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void recvImmediateResults(ProxyCombinedResultRawMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvImmediateResults_ProxyCombinedResultRawMsg();
    // Entry point index lookup
    
    inline static int idx_recvImmediateResults_ProxyCombinedResultRawMsg() {
      static int epidx = reg_recvImmediateResults_ProxyCombinedResultRawMsg();
      return epidx;
    }

    
    inline static int idx_recvImmediateResults(void (NodeProxyMgr::*)(ProxyCombinedResultRawMsg* impl_msg) ) {
      return idx_recvImmediateResults_ProxyCombinedResultRawMsg();
    }


    
    static int recvImmediateResults(ProxyCombinedResultRawMsg* impl_msg) { return idx_recvImmediateResults_ProxyCombinedResultRawMsg(); }
    
    static void _call_recvImmediateResults_ProxyCombinedResultRawMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvImmediateResults_ProxyCombinedResultRawMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void sendProxyListInfo(PatchProxyListMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_sendProxyListInfo_PatchProxyListMsg();
    // Entry point index lookup
    
    inline static int idx_sendProxyListInfo_PatchProxyListMsg() {
      static int epidx = reg_sendProxyListInfo_PatchProxyListMsg();
      return epidx;
    }

    
    inline static int idx_sendProxyListInfo(void (NodeProxyMgr::*)(PatchProxyListMsg* impl_msg) ) {
      return idx_sendProxyListInfo_PatchProxyListMsg();
    }


    
    static int sendProxyListInfo(PatchProxyListMsg* impl_msg) { return idx_sendProxyListInfo_PatchProxyListMsg(); }
    
    static void _call_sendProxyListInfo_PatchProxyListMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_sendProxyListInfo_PatchProxyListMsg(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_NodeProxyMgr: public CProxyElement_NodeGroup{
  public:
    typedef NodeProxyMgr local_t;
    typedef CkIndex_NodeProxyMgr index_t;
    typedef CProxy_NodeProxyMgr proxy_t;
    typedef CProxyElement_NodeProxyMgr element_t;
    typedef CProxySection_NodeProxyMgr section_t;


    /* TRAM aggregators */

    CProxyElement_NodeProxyMgr(void) {
    }
    CProxyElement_NodeProxyMgr(const IrrGroup *g) : CProxyElement_NodeGroup(g){
    }
    CProxyElement_NodeProxyMgr(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_NodeGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_NodeProxyMgr(CkGroupID _gid,int _onPE) : CProxyElement_NodeGroup(_gid,_onPE){
    }

    int ckIsDelegated(void) const
    { return CProxyElement_NodeGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_NodeGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_NodeGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_NodeGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxyElement_NodeGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxyElement_NodeGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxyElement_NodeGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_NodeGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_NodeGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_NodeGroup::ckSetReductionClient(cb); }
int ckGetGroupPe(void) const
{return CProxyElement_NodeGroup::ckGetGroupPe();}

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_NodeGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_NodeGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_NodeGroup::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxyElement_NodeGroup::ckSetGroupID(g);
    }
    NodeProxyMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static NodeProxyMgr* ckLocalBranch(CkGroupID gID) {
      return (NodeProxyMgr*)CkLocalNodeBranch(gID);
    }
/* DECLS: NodeProxyMgr();
 */
    

/* DECLS: void createProxyInfo(int impl_noname_3);
 */
    
    void createProxyInfo(int impl_noname_3, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvImmediateProxyData(ProxyDataMsg* impl_msg);
 */
    
    void recvImmediateProxyData(ProxyDataMsg* impl_msg);

/* DECLS: void recvImmediateProxyAll(ProxyDataMsg* impl_msg);
 */
    
    void recvImmediateProxyAll(ProxyDataMsg* impl_msg);

/* DECLS: void recvImmediateResults(ProxyCombinedResultRawMsg* impl_msg);
 */
    
    void recvImmediateResults(ProxyCombinedResultRawMsg* impl_msg);

/* DECLS: void sendProxyListInfo(PatchProxyListMsg* impl_msg);
 */
    
    void sendProxyListInfo(PatchProxyListMsg* impl_msg);

};
/* ---------------- collective proxy -------------- */
class CProxy_NodeProxyMgr: public CProxy_NodeGroup{
  public:
    typedef NodeProxyMgr local_t;
    typedef CkIndex_NodeProxyMgr index_t;
    typedef CProxy_NodeProxyMgr proxy_t;
    typedef CProxyElement_NodeProxyMgr element_t;
    typedef CProxySection_NodeProxyMgr section_t;

    CProxy_NodeProxyMgr(void) {
    }
    CProxy_NodeProxyMgr(const IrrGroup *g) : CProxy_NodeGroup(g){
    }
    CProxy_NodeProxyMgr(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_NodeGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_NodeProxyMgr(CkGroupID _gid) : CProxy_NodeGroup(_gid){  }
    CProxyElement_NodeProxyMgr operator[](int onPE) const
      {return CProxyElement_NodeProxyMgr(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

    int ckIsDelegated(void) const
    { return CProxy_NodeGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_NodeGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_NodeGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_NodeGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxy_NodeGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxy_NodeGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxy_NodeGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_NodeGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_NodeGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_NodeGroup::ckSetReductionClient(cb); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_NodeGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_NodeGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_NodeGroup::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxy_NodeGroup::ckSetGroupID(g);
    }
    NodeProxyMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static NodeProxyMgr* ckLocalBranch(CkGroupID gID) {
      return (NodeProxyMgr*)CkLocalNodeBranch(gID);
    }
/* DECLS: NodeProxyMgr();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void createProxyInfo(int impl_noname_3);
 */
    
    void createProxyInfo(int impl_noname_3, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvImmediateProxyData(ProxyDataMsg* impl_msg);
 */
    
    void recvImmediateProxyData(ProxyDataMsg* impl_msg);

/* DECLS: void recvImmediateProxyAll(ProxyDataMsg* impl_msg);
 */
    
    void recvImmediateProxyAll(ProxyDataMsg* impl_msg);

/* DECLS: void recvImmediateResults(ProxyCombinedResultRawMsg* impl_msg);
 */
    
    void recvImmediateResults(ProxyCombinedResultRawMsg* impl_msg);

/* DECLS: void sendProxyListInfo(PatchProxyListMsg* impl_msg);
 */
    
    void sendProxyListInfo(PatchProxyListMsg* impl_msg);

};
/* ---------------- section proxy -------------- */
class CProxySection_NodeProxyMgr: public CProxySection_NodeGroup{
  public:
    typedef NodeProxyMgr local_t;
    typedef CkIndex_NodeProxyMgr index_t;
    typedef CProxy_NodeProxyMgr proxy_t;
    typedef CProxyElement_NodeProxyMgr element_t;
    typedef CProxySection_NodeProxyMgr section_t;

    CProxySection_NodeProxyMgr(void) {
    }
    CProxySection_NodeProxyMgr(const IrrGroup *g) : CProxySection_NodeGroup(g){
    }
    CProxySection_NodeProxyMgr(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_NodeGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_NodeProxyMgr(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_NodeGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_NodeProxyMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_NodeGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_NodeProxyMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_NodeGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

    int ckIsDelegated(void) const
    { return CProxySection_NodeGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_NodeGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_NodeGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_NodeGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxySection_NodeGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxySection_NodeGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxySection_NodeGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_NodeGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_NodeGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_NodeGroup::ckSetReductionClient(cb); }
inline int ckGetNumSections() const
{ return CProxySection_NodeGroup::ckGetNumSections(); }
inline CkSectionInfo &ckGetSectionInfo()
{ return CProxySection_NodeGroup::ckGetSectionInfo(); }
inline CkSectionID *ckGetSectionIDs()
{ return CProxySection_NodeGroup::ckGetSectionIDs(); }
inline CkSectionID &ckGetSectionID()
{ return CProxySection_NodeGroup::ckGetSectionID(); }
inline CkSectionID &ckGetSectionID(int i)
{ return CProxySection_NodeGroup::ckGetSectionID(i); }
inline CkGroupID ckGetGroupIDn(int i) const
{ return CProxySection_NodeGroup::ckGetGroupIDn(i); }
inline const int *ckGetElements() const
{ return CProxySection_NodeGroup::ckGetElements(); }
inline const int *ckGetElements(int i) const
{ return CProxySection_NodeGroup::ckGetElements(i); }
inline int ckGetNumElements() const
{ return CProxySection_NodeGroup::ckGetNumElements(); } 
inline int ckGetNumElements(int i) const
{ return CProxySection_NodeGroup::ckGetNumElements(i); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_NodeGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_NodeGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_NodeGroup::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxySection_NodeGroup::ckSetGroupID(g);
    }
    NodeProxyMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static NodeProxyMgr* ckLocalBranch(CkGroupID gID) {
      return (NodeProxyMgr*)CkLocalNodeBranch(gID);
    }
/* DECLS: NodeProxyMgr();
 */
    

/* DECLS: void createProxyInfo(int impl_noname_3);
 */
    
    void createProxyInfo(int impl_noname_3, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvImmediateProxyData(ProxyDataMsg* impl_msg);
 */
    
    void recvImmediateProxyData(ProxyDataMsg* impl_msg);

/* DECLS: void recvImmediateProxyAll(ProxyDataMsg* impl_msg);
 */
    
    void recvImmediateProxyAll(ProxyDataMsg* impl_msg);

/* DECLS: void recvImmediateResults(ProxyCombinedResultRawMsg* impl_msg);
 */
    
    void recvImmediateResults(ProxyCombinedResultRawMsg* impl_msg);

/* DECLS: void sendProxyListInfo(PatchProxyListMsg* impl_msg);
 */
    
    void sendProxyListInfo(PatchProxyListMsg* impl_msg);

};
#define NodeProxyMgr_SDAG_CODE 
typedef CBaseT1<NodeGroup, CProxy_NodeProxyMgr>CBase_NodeProxyMgr;















/* ---------------- method closures -------------- */
class Closure_ProxyMgr {
  public:












    struct recvSpanningTreeOnHomePatch_12_closure;





    struct recvNodeAwareSTParent_16_closure;


    struct buildProxySpanningTree2_17_closure;


    struct recvProxies_18_closure;








};

/* ---------------- method closures -------------- */
class Closure_NodeProxyMgr {
  public:


    struct createProxyInfo_2_closure;





};

extern void _registerProxyMgr(void);
#endif
