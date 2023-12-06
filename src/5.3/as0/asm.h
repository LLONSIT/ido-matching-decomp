#include "stdio.h"
#include "binasm_rec.h"
#ifndef ASM_H
#define ASM_H

extern int gform_extn;

struct _struct_asm_info {
  /* 0x0 */ char *name;
  /* 0x4 */ unsigned unk4_FE : 7;
  /* 0x4 */ unsigned unk4_1FFFFFF_ : 0x19;
};

struct _struct_asm_info_0x8 {
  /* 0x0 */ char *name;
  /* 0x4 */ unsigned int unk4;
};

static struct _struct_asm_info_0x8 asm_info[0x1AF] = {
    {"abs", 0x08000420},
    {"add", 0x060A0421},
    {"addu", 0x060A8421},
    {"and", 0x060C0421},
    { "b",  (unsigned) &gform_extn},
    {"bc0f", 0x101C8000},
    {"bc0t", 0x101D0000},
    {"bc1f", 0x101DB000},
    {"bc1t", 0x101E3000},
    {"bc2f", 0x101E8000},
    {"bc2t", 0x101F0000},
    {"", 0},
    {"", 0},
    {"beq", 0x0C258420},
    {"bge", 0x0C000420},
    {"bgeu", 0x0C000420},
    {"bgez", 0x0E1B0400},
    {"bgt", 0x0C000420},
    {"bgtu", 0x0C000420},
    {"bgtz", 0x0E270400},
    {"ble", 0x0C000420},
    {"bleu", 0x0C000420},
    {"blez", 0x0E268400},
    {"blt", 0x0C000420},
    {"bltu", 0x0C000420},
    {"bltz", 0x0E1A8400},
    {"bne", 0x0C260420},
    {"break", 0x58000},
    {"c0", 0x12318000},
    {"c1", 0x12320000},
    {"c2", 0x12328000},
    {"", 0},
    {"div", 0x06090421},
    {"divu", 0x06098421},
    {"j", 0x0A248400},
    {"jal", 0x0A250400},
    {"la", 0x02000400},
    {"lb", 0x02330460},
    {"lbu", 0x02350460},
    {"lh", 0x02338460},
    {"lhu", 0x02358460},
    {"li", 0x04000400},
    {"lw", 0x02348460},
    {"jr", 0x0A040400},
    {"lwc1", 0x02399060},
    {"lwc2", 0x023A0460},
    {"pref", 0x1E9E0460},
    {"mfhi", 0x14060400},
    {"mflo", 0x14070400},
    {"move", 0x08000420},
    {"jalr", 0x0A048400},
    {"swc1", 0x023B1060},
    {"swc2", 0x023B8460},
    {"", 0},
    {"mthi", 0x14068400},
    {"mtlo", 0x14078400},
    {"mul", 0x06000421},
    {"mulo", 0x06000421},
    {"mulou", 0x06000421},
    {"mult", 0x08080420},
    {"multu", 0x08088420},
    {"neg", 0x08000420},
    {"nop", 0x8000},
    {"nor", 0x060D8421},
    {"or", 0x060C8421},
    {"rem", 0x06090421},
    {"remu", 0x06098421},
    {"rfe", 0x498000},
    {"rol", 0x06000421},
    {"ror", 0x06000421},
    {"sb", 0x02368460},
    {"seq", 0x06000421},
    {"sge", 0x06000421},
    {"sgeu", 0x06000421},
    {"sgt", 0x06000421},
    {"sgtu", 0x06000421},
    {"sh", 0x02370460},
    {"sle", 0x06000421},
    {"sleu", 0x06000421},
    {"sll", 0x06010421},
    {"slt", 0x06000421},
    {"sltu", 0x06000421},
    {"sne", 0x06000421},
    {"sra", 0x06020421},
    {"srl", 0x06018421},
    {"sub", 0x060B0421},
    {"subu", 0x060B8421},
    {"sw", 0x02380460},
    {"syscall", 0x50000},
    {"xor", 0x060D0421},
    {"not", 0x08000420},
    {"lwl", 0x02340460},
    {"lwr", 0x02360460},
    {"swl", 0x02378460},
    {"swr", 0x02388460},
    {"", 0},
    {"mfc0", 0x084584E0},
    {"mfc1", 0x08460480},
    {"mfc2", 0x084684E0},
    {"", 0},
    {"mtc0", 0x084784E0},
    {"mtc1", 0x08480480},
    {"mtc2", 0x084884E0},
    {"sync", 0x4C0000},
    {"tlbr", 0x4A0000},
    {"tlbwi", 0x4A8000},
    {"tlbwr", 0x4B0000},
    {"tlbp", 0x4B8000},
    {"ld", 0x023C8860},
    {"sd", 0x023D0860},
    {"", 0},
    {"ldc1", 0x023D9460},
    {"ldc2", 0x023E2060},
    {"tlbr1", 0x9E8000},
    {"tlbp1", 0x9F0000},
    {"sdc1", 0x023E9460},
    {"sdc2", 0x023F2060},
    {"", 0},
    {"l.s", 0x02001460},
    {"l.d", 0x02001460},
    {"l.e", 0x02001860},
    {"s.s", 0x02001460},
    {"s.d", 0x02001460},
    {"s.e", 0x02001860},
    {"add.s", 0x065014A5},
    {"add.d", 0x065094A5},
    {"add.e", 0x065118C6},
    {"sub.s", 0x065194A5},
    {"sub.d", 0x065214A5},
    {"sub.e", 0x065298C6},
    {"mul.s", 0x065314A5},
    {"mul.d", 0x065394A5},
    {"mul.e", 0x065418C6},
    {"div.s", 0x065494A5},
    {"div.d", 0x065514A5},
    {"div.e", 0x065598C6},
    {"sqrt.s", 0x080014A0},
    {"sqrt.d", 0x080014A0},
    {"sqrt.e", 0x080018C0},
    {"mov.s", 0x080014A0},
    {"mov.d", 0x080014A0},
    {"mov.e", 0x080018C0},
    {"abs.s", 0x080014A0},
    {"abs.d", 0x080014A0},
    {"abs.e", 0x080018C0},
    {"cvt.s.d", 0x080014A0},
    {"cvt.s.e", 0x080014C0},
    {"cvt.s.w", 0x080014A0},
    {"cvt.d.s", 0x080014A0},
    {"cvt.d.e", 0x080014C0},
    {"cvt.d.w", 0x080014A0},
    {"cvt.e.s", 0x080018A0},
    {"cvt.e.d", 0x080018A0},
    {"cvt.e.w", 0x080018A0},
    {"cvt.w.s", 0x080014A0},
    {"cvt.w.d", 0x080014A0},
    {"cvt.w.e", 0x080014C0},
    {"c.f.s", 0x080030A5},
    {"c.f.d", 0x080030A5},
    {"c.f.e", 0x080030C6},
    {"c.un.s", 0x080030A5},
    {"c.un.d", 0x080030A5},
    {"c.un.e", 0x080030C6},
    {"c.eq.s", 0x080030A5},
    {"c.eq.d", 0x080030A5},
    {"c.eq.e", 0x080030C6},
    {"c.ueq.s", 0x080030A5},
    {"c.ueq.d", 0x080030A5},
    {"c.ueq.e", 0x080030C6},
    {"c.olt.s", 0x080030A5},
    {"c.olt.d", 0x080030A5},
    {"c.olt.e", 0x080030C6},
    {"c.ult.s", 0x080030A5},
    {"c.ult.d", 0x080030A5},
    {"c.ult.e", 0x080030C6},
    {"c.ole.s", 0x080030A5},
    {"c.ole.d", 0x080030A5},
    {"c.ole.e", 0x080030C6},
    {"c.ule.s", 0x080030A5},
    {"c.ule.d", 0x080030A5},
    {"c.ule.e", 0x080030C6},
    {"c.sf.s", 0x080030A5},
    {"c.sf.d", 0x080030A5},
    {"c.sf.e", 0x080030C6},
    {"c.ngle.s", 0x080030A5},
    {"c.ngle.d", 0x080030A5},
    {"c.ngle.e", 0x080030C6},
    {"c.seq.s", 0x080030A5},
    {"c.seq.d", 0x080030A5},
    {"c.seq.e", 0x080030C6},
    {"c.ngl.s", 0x080030A5},
    {"c.ngl.d", 0x080030A5},
    {"c.ngl.e", 0x080030C6},
    {"c.lt.s", 0x080030A5},
    {"c.lt.d", 0x080030A5},
    {"c.lt.e", 0x080030C6},
    {"c.nge.s", 0x080030A5},
    {"c.nge.d", 0x080030A5},
    {"c.nge.e", 0x080030C6},
    {"c.le.s", 0x080030A5},
    {"c.le.d", 0x080030A5},
    {"c.le.e", 0x080030C6},
    {"c.ngt.s", 0x080030A5},
    {"c.ngt.d", 0x080030A5},
    {"c.ngt.e", 0x080030C6},
    {"lui", 0x042D0400},
    {"ulw", 0x02000460},
    {"ulh", 0x02000460},
    {"ulhu", 0x02000460},
    {"usw", 0x02000460},
    {"ush", 0x02000460},
    {"addi", 0x06298420},
    {"addiu", 0x062A0420},
    {"slti", 0x062A8420},
    {"sltiu", 0x062B0420},
    {"andi", 0x062B8420},
    {"ori", 0x062C0420},
    {"xori", 0x062C8420},
    {"", 0},
    {"negu", 0x08000420},
    {"beqz", 0x0E258400},
    {"bnez", 0x0E260400},
    {"neg.s", 0x080014A0},
    {"neg.d", 0x080014A0},
    {"neg.e", 0x080018C0},
    {"cfc1", 0x084704E0},
    {"ctc1", 0x084904E0},
    {"bal", 0x0E1C0000},
    {"bgezal", 0x0E1C0400},
    {"bltzal", 0x0E1B8400},
    {"mtc1.d", 0x084808A0},
    {"mfc1.d", 0x084608A0},
    {"trunc.w.s", 0x060014A1},
    {"trunc.w.d", 0x060014A1},
    {"trunc.w.e", 0x060018C1},
    {"round.w.s", 0x060014A1},
    {"round.w.d", 0x060014A1},
    {"round.w.e", 0x060018C1},
    {"addou", 0x060A8421},
    {"subou", 0x060B8421},
    {"truncu.w.s", 0x060014A1},
    {"truncu.w.d", 0x060014A1},
    {"truncu.w.e", 0x060018C1},
    {"roundu.w.s", 0x060014A1},
    {"roundu.w.d", 0x060014A1},
    {"roundu.w.e", 0x060018C1},
    {"cfc0", 0x087A04E0},
    {"cfc2", 0x087A84E0},
    {"", 0},
    {"ctc0", 0x087B04E0},
    {"ctc2", 0x087B84E0},
    {"", 0},
    {"li.s", 0x167C2400},
    {"li.d", 0x167CA800},
    {"li.e", 0x167D2C00},
    {"tlt", 0x1A0F0420},
    {"tltu", 0x1A0F8420},
    {"tge", 0x1A100420},
    {"tgeu", 0x1A108420},
    {"teq", 0x1A110420},
    {"tne", 0x1A118420},
    {"ll", 0x02390460},
    {"sc", 0x023A8460},
    {"ceil.w.s", 0x060014A1},
    {"ceil.w.d", 0x060014A1},
    {"ceil.w.e", 0x060018C1},
    {"ceilu.w.s", 0x060014A1},
    {"ceilu.w.d", 0x060014A1},
    {"ceilu.w.e", 0x060018C1},
    {"floor.w.s", 0x060014A1},
    {"floor.w.d", 0x060014A1},
    {"floor.w.e", 0x060018C1},
    {"flooru.w.s", 0x060014A1},
    {"flooru.w.d", 0x060014A1},
    {"flooru.w.e", 0x060018C1},
    {"beql", 0x0C278420},
    {"beqzl", 0x0E278400},
    {"bnel", 0x0C280420},
    {"bnezl", 0x0E280400},
    {"blel", 0x0C000420},
    {"bleul", 0x0C000420},
    {"blezl", 0x0E288400},
    {"bgtl", 0x0C000420},
    {"bgtul", 0x0C000420},
    {"bgtzl", 0x0E290400},
    {"bltl", 0x0C000420},
    {"bltul", 0x0C000420},
    {"bltzl", 0x0E1F8400},
    {"bltzall", 0x0E208400},
    {"bgel", 0x0C000420},
    {"bgeul", 0x0C000420},
    {"bgezl", 0x0E200400},
    {"bgezall", 0x0E210400},
    {"bc0fl", 0x10218000},
    {"bc0tl", 0x10220000},
    {"bc1fl", 0x1022B000},
    {"bc1tl", 0x10233000},
    {"bc2fl", 0x10238000},
    {"bc2tl", 0x10240000},
    {"", 0},
    {"", 0},
    {"ldl", 0x023F8460},
    {"ldr", 0x02400460},
    {"lld", 0x02408460},
    {"lwu", 0x023C0460},
    {"sdl", 0x02410460},
    {"sdr", 0x02418460},
    {"scd", 0x02420460},
    {"daddi", 0x06308420},
    {"daddiu", 0x06310420},
    {"dadd", 0x06120421},
    {"daddu", 0x06128421},
    {"dsub", 0x06130421},
    {"dsubu", 0x06138421},
    {"dsll", 0x06140421},
    {"dsrl", 0x06148421},
    {"dsra", 0x06150421},
    {"dsllv", 0x06170421},
    {"dsrlv", 0x06178421},
    {"dsrav", 0x06180421},
    {"dmult", 0x08188420},
    {"dmultu", 0x08190420},
    {"ddiv", 0x06000421},
    {"ddivu", 0x06000421},
    {"", 0},
    {"", 0},
    {"dmtc1", 0x084C8480},
    {"dmfc1", 0x084D0480},
    {"dmtc0", 0x084D84E0},
    {"dmfc0", 0x084E04E0},
    {"dmtc2", 0x084E84E0},
    {"dmfc2", 0x084F04E0},
    {"dli", 0x1C000400},
    {"dla", 0x02000400},
    {"eret", 0x8D8000},
    {"trunc.l.s", 0x06001081},
    {"round.l.s", 0x06001081},
    {"ceil.l.s", 0x06001081},
    {"floor.l.s", 0x06001081},
    {"trunc.l.d", 0x06001081},
    {"round.l.d", 0x06001081},
    {"ceil.l.d", 0x06001081},
    {"floor.l.d", 0x06001081},
    {"trunc.l.e", 0x060010A1},
    {"round.l.e", 0x060010A1},
    {"ceil.l.e", 0x060010A1},
    {"floor.l.e", 0x060010A1},
    {"cvt.l.s", 0x08001080},
    {"cvt.l.d", 0x08001080},
    {"cvt.l.e", 0x080010A0},
    {"cvt.l.w", 0x08001080},
    {"cvt.s.l", 0x08001080},
    {"cvt.d.l", 0x08001080},
    {"cvt.e.l", 0x08001480},
    {"cvt.w.l", 0x08001080},
    {"cache", 0x1E4F8460},
    {"cia", 0x04000000},
    {"uld", 0x02000460},
    {"usd", 0x02000460},
    {"dabs", 0x08000420},
    {"dneg", 0x08000420},
    {"dnegu", 0x08000420},
    {"dmul", 0x06000421},
    {"dmulo", 0x06000421},
    {"dmulou", 0x06000421},
    {"drem", 0x06000421},
    {"dremu", 0x06000421},
    {"drol", 0x06000421},
    {"dror", 0x06000421},
    {"daddou", 0x06128421},
    {"dsubou", 0x06138421},
    {"ulwu", 0x02000460},
    {"movt", 0x0600042C},
    {"movf", 0x0600042C},
    {"movn", 0x06000421},
    {"movz", 0x06000421},
    {"madd.s", 0x20001084},
    {"madd.d", 0x20001084},
    {"madd.e", 0x200018C6},
    {"msub.s", 0x20001084},
    {"msub.d", 0x20001084},
    {"msub.e", 0x200018C6},
    {"nmadd.s", 0x20001084},
    {"nmadd.d", 0x20001084},
    {"nmadd.e", 0x200018C6},
    {"nmsub.s", 0x20001084},
    {"nmsub.d", 0x20001084},
    {"nmsub.e", 0x200018C6},
    {"recip.s", 0x08001080},
    {"recip.d", 0x08001080},
    {"rsqrt.s", 0x08001080},
    {"rsqrt.d", 0x08001080},
    {"movt.s", 0x0600108C},
    {"movt.d", 0x0600108C},
    {"movf.s", 0x0600108C},
    {"movf.d", 0x0600108C},
    {"movn.s", 0x06001081},
    {"movn.d", 0x06001081},
    {"movz.s", 0x06001081},
    {"movz.d", 0x06001081},
    {"lwxc1", 0x22001021},
    {"ldxc1", 0x22001021},
    {"swxc1", 0x22001021},
    {"sdxc1", 0x22001021},
    {"prefx", 0x22000421},
    {"dctr", 0},
    {"dctw", 0},
    {"tlbw", 0},
    {"nada", 0},
    {"ssnop", 0},
    {"dsll32", 0x06140421},
    {"dsrl32", 0x06148421},
    {"dsra32", 0x06150421},
    {"bc3f", 0x109F8000},
    {"bc3t", 0x10A00000},
    {"c3", 0x12A08000},
    {"lwc3", 0x02A10460},
    {"swc3", 0x02A18460},
    {"mfc3", 0x08A204E0},
    {"mtc3", 0x08A284E0},
    {"cfc3", 0x08A304E0},
    {"ctc3", 0x08A384E0},
    {"sllv", 0x06028421},
    {"srlv", 0x06030421},
    {"srav", 0x06038421},
    {"mfpc", 0x08A404E0},
    {"mtpc", 0x08A404E0},
    {"mfps", 0x08A404E0},
    {"mtps", 0x08A404E0},
    {"", 0},
    {NULL, 0},
};


#define DECLARE_OPTIONS \
/*  0x0 */ DECLARE_OPTION(EB), \
/*  0x1 */ DECLARE_OPTION(EL), \
/*  0x2 */ DECLARE_OPTION(G), \
/*  0x3 */ DECLARE_OPTION(K), \
/*  0x4 */ DECLARE_OPTION(M), \
/*  0x5 */ DECLARE_OPTION(NR), \
/*  0x6 */ DECLARE_OPTION(O), \
/*  0x7 */ DECLARE_OPTION(O0), \
/*  0x8 */ DECLARE_OPTION(O1), \
/*  0x9 */ DECLARE_OPTION(O2), \
/*  0xA */ DECLARE_OPTION(O3), \
/*  0xB */ DECLARE_OPTION(O4), \
/*  0xC */ DECLARE_OPTION(Olimit), \
/*  0xD */ DECLARE_OPTION(R), \
/*  0xE */ DECLARE_OPTION(RD), \
/*  0xF */ DECLARE_OPTION(T), \
/* 0x10 */ DECLARE_OPTION(e), \
/* 0x11 */ DECLARE_OPTION(fli), \
/* 0x12 */ DECLARE_OPTION(f), \
/* 0x13 */ DECLARE_OPTION(f0), \
/* 0x14 */ DECLARE_OPTION(f1), \
/* 0x15 */ DECLARE_OPTION(f2), \
/* 0x16 */ DECLARE_OPTION(f3), \
/* 0x17 */ DECLARE_OPTION(f4), \
/* 0x18 */ DECLARE_OPTION(g), \
/* 0x19 */ DECLARE_OPTION(g0), \
/* 0x1A */ DECLARE_OPTION(g1), \
/* 0x1B */ DECLARE_OPTION(g2), \
/* 0x1C */ DECLARE_OPTION(g3), \
/* 0x1D */ DECLARE_OPTION(l), \
/* 0x1E */ DECLARE_OPTION(o), \
/* 0x1F */ DECLARE_OPTION(p), \
/* 0x20 */ DECLARE_OPTION(p0), \
/* 0x21 */ DECLARE_OPTION(p1), \
/* 0x22 */ DECLARE_OPTION(p2), \
/* 0x23 */ DECLARE_OPTION(p3), \
/* 0x24 */ DECLARE_OPTION(r), \
/* 0x25 */ DECLARE_OPTION(t), \
/* 0x26 */ DECLARE_OPTION(v), \
/* 0x27 */ DECLARE_OPTION(w), \
/* 0x28 */ DECLARE_OPTION(w1), \
/* 0x29 */ DECLARE_OPTION(w2), \
/* 0x2A */ DECLARE_OPTION(w3), \
/* 0x2B */ DECLARE_OPTION(no_const_opts), \
/* 0x2C */ DECLARE_OPTION(no_lui_opts), \
/* 0x2D */ DECLARE_OPTION(no_div_rem_opts), \
/* 0x2E */ DECLARE_OPTION(no_at_compression), \
/* 0x2F */ DECLARE_OPTION(no_branch_target), \
/* 0x30 */ DECLARE_OPTION(mips1), \
/* 0x31 */ DECLARE_OPTION(mips2), \
/* 0x32 */ DECLARE_OPTION(mips3), \
/* 0x33 */ DECLARE_OPTION(mips4), \
/* 0x34 */ DECLARE_OPTION(nopool), \
/* 0x35 */ DECLARE_OPTION(align8), \
/* 0x36 */ DECLARE_OPTION(align16), \
/* 0x37 */ DECLARE_OPTION(align32), \
/* 0x38 */ DECLARE_OPTION(align64), \
/* 0x39 */ DECLARE_OPTION(align_common), \
/* 0x3A */ DECLARE_OPTION(gp_warn), \
/* 0x3B */ DECLARE_OPTION(non_pic), \
/* 0x3C */ DECLARE_OPTION(r3000), \
/* 0x3D */ DECLARE_OPTION(r4000), \
/* 0x3E */ DECLARE_OPTION(r6000), \
/* 0x3F */ DECLARE_OPTION(r6000LHU), \
/* 0x40 */ DECLARE_OPTION(r6000LWL), \
/* 0x41 */ DECLARE_OPTION(trapuv), \
/* 0x42 */ DECLARE_OPTION(nopeep), \
/* 0x43 */ DECLARE_OPTION(peepdbg), \
/* 0x44 */ DECLARE_OPTION(noswpipe), \
/* 0x45 */ DECLARE_OPTION(swpdbg), \
/* 0x46 */ DECLARE_OPTION(nosymregs), \
/* 0x47 */ DECLARE_OPTION(noxbb), \
/* 0x48 */ DECLARE_OPTION(aggr_xbb), \
/* 0x49 */ DECLARE_OPTION(xbbdbg), \
/* 0x4A */ DECLARE_OPTION(newhilo), \
/* 0x4B */ DECLARE_OPTION(domtag), \
/* 0x4C */ DECLARE_OPTION(fpstall_nop), \
/* 0x4D */ DECLARE_OPTION(noglobal), \
/* 0x4E */ DECLARE_OPTION(nobopt), \
/* 0x4F */ DECLARE_OPTION(dwalign), \
/* 0x50 */ DECLARE_OPTION(excpt), \
/* 0x51 */ DECLARE_OPTION(diag), \
/* 0x52 */ DECLARE_OPTION(mednat), \
/* 0x53 */ DECLARE_OPTION(dwopcode), \
/* 0x54 */ DECLARE_OPTION(64bit), \
/* 0x55 */ DECLARE_OPTION(fp32reg), \
/* 0x56 */ DECLARE_OPTION(extsyms), \
/* 0x57 */ DECLARE_OPTION(pic0), \
/* 0x58 */ DECLARE_OPTION(pic1), \
/* 0x59 */ DECLARE_OPTION(pic2), \
/* 0x5A */ DECLARE_OPTION(big_got), \
/* 0x5B */ DECLARE_OPTION(coff), \
/* 0x5C */ DECLARE_OPTION(elf), \
/* 0x5D */ DECLARE_OPTION(mscoff), \
/* 0x5E */ DECLARE_OPTION(mscoff1), \
/* 0x5F */ DECLARE_OPTION(multi_issue), \
/* 0x60 */ DECLARE_OPTION(nonzero_scnbase), \
/* 0x61 */ DECLARE_OPTION(new_mdebug), \
/* 0x62 */ DECLARE_OPTION(abi), \
/* 0x63 */ DECLARE_OPTION(tfprev10), \
/* 0x64 */ DECLARE_OPTION(force_branch_fixup), \
/* 0x65 */ DECLARE_OPTION(r4200), \
/* 0x66 */ DECLARE_OPTION(r4600), \
/* 0x67 */ DECLARE_OPTION(tfp), \
/* 0x68 */ DECLARE_OPTION(r4300_mul)

#define DECLARE_OPTION(name) OPTION_##name
typedef enum option_name {
    DECLARE_OPTIONS,
    OPTION_MAX
} OPTION;
#undef DECLARE_OPTION

typedef enum mips_isa {
    /* 0 */ ISA_UNSPECIFIED,
    /* 1 */ ISA_MIPS1,
    /* 2 */ ISA_MIPS2,
    /* 3 */ ISA_MIPS3,
    /* 4 */ ISA_MIPS4
} mips_isa;

typedef struct sym {
    /* 0x0 */ struct sym* next;
    /* 0x4 */ char* name;
    /* 0x8 */ int unk8;
    /* 0xC */ struct sym* unkC;
    /* 0x10 */ int unk10;
    /* 0x14 */ int reg;
    /* 0x18 */ int unk18;
} sym;

struct {
    binasm_r* unk0;
    size_t unk4;
} rep_buffer;

#endif /* ASM_H */
