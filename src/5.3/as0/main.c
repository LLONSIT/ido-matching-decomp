#include <stdio.h>
#include <stdlib.h>
#include "asm.h"
#include "binasm_rec.h" //temp

char *sregisters[0x49] = {
    "$0",    "$1",    "$2",    "$3",    "$4",    "$5",    "$6",    "$7",
    "$8",    "$9",    "$10",   "$11",   "$12",   "$13",   "$14",   "$15",
    "$16",   "$17",   "$18",   "$19",   "$20",   "$21",   "$22",   "$23",
    "$24",   "$25",   "$26",   "$27",   "$28",   "$29",   "$30",   "$31",
    "$f0",   "$f1",   "$f2",   "$f3",   "$f4",   "$f5",   "$f6",   "$f7",
    "$f8",   "$f9",   "$f10",  "$f11",  "$f12",  "$f13",  "$f14",  "$f15",
    "$f16",  "$f17",  "$f18",  "$f19",  "$f20",  "$f21",  "$f22",  "$f23",
    "$f24",  "$f25",  "$f26",  "$f27",  "$f28",  "$f29",  "$f30",  "$f31",
    "$fcc0", "$fcc1", "$fcc2", "$fcc3", "$fcc4", "$fcc5", "$fcc6", "$fcc7",
    "   ",
};

char* sitype[0x3F] = {
    "label",    ".sym",      ".globl",   ".cpload",      ".align",    ".ascii",  ".asciiz",    ".byte",   ".comm",
    ".lcomm",   ".data",     ".double",  ".file",        ".float",    ".half",   ".cprestore", ".gpword", ".cpadd",
    ".weakext", ".loopno",   ".space",   ".text",        ".word",     "ocode",   ".end",       ".sdata",  ".rdata",
    ".ent",     ".loc",      ".bgnb",    ".endb",        ".asm0",     ".set",    ".cpalias",   ".repeat", ".endr",
    ".lab",     ".vreg",     ".mask",    ".fmask",       ".err",      "globabs", ".verstamp",  ".frame",  ".extended",
    ".extern",  ".aent",     ".option",  ".noalias",     ".alias",    ".mtag",   ".malias",    ".struct", ".livereg",
    ".gjaldef", ".gjallive", ".gjrlive", ".ishift_addr", ".irestext", ".dword",  ".prologue",  ".edata",  ".alloc",
};

//External declaration
extern int local_label[0x100];
extern int isStruct;
extern binasm_r binasm_rec;

//File declaration
int warnexitflag;
static char* assembler_file;
static char* B_1000A7F0;
static char* B_1000A7F4;
static char* B_1000A7F8;
char* sframereg = "$framereg"; //Extern, but declared here
char* sframesize = "$framesize";//Extern, but declared here
int CurrentFile;
int CurrentLine;
int CurrentSegment;
int LastLabel;
int atflag;
int binasm_count;
FILE* binasmfyle;
int debugflag;
int diag_flag;
FILE* extsyms_file;
int gp_warn;
FILE* in_file;
int invent_locs;
char isa;
int linelength;
int in_repeat_block;
int mednat;
int nowarnflag;
char *reg_ptr[0x100];
int severity;
struct sym* ophashtable[0x100];
struct sym* hashtable[0x100];
int verbose;
int list_extsyms;


//External function call
extern void posterror(char*, char*, int);
extern void call_perror(int arg0, const char* arg1);
extern int which_opt(char*);
extern sym* alloc_new_sym(void);
extern int hash(char*);
extern void make_file(char* arg0);
extern void put_binasmfyle(void);
extern void sym_init(int arg0);
extern void readinline(void);
extern void sym_finish(char* arg0, char* arg1);
extern void Parsestmt(void);
extern void do_dot_end(int arg0);

//Internal function call
static void func_00403F10(void);
static void func_00404008(void);
static int func_00404108(int arg0, char* name, int arg2);
void func_004041A8(char* arg0, int arg1);
void func_00404234(int argc, char** argv);

//func_00403F10
void func_00403F10(void) {
    struct _struct_asm_info* var_s2;
    int operand_hash;
    int index;
    char* name;
    sym* cur_symbol;

    for (index = 0, var_s2 = (struct _struct_asm_info*)&asm_info; index < 0x1AE; index++, var_s2++) {
       name = var_s2->name;
        if (name[0] != '\0') {
            operand_hash = hash(name);
            cur_symbol = alloc_new_sym();

            cur_symbol->next = ophashtable[operand_hash];
            cur_symbol->name = name;
            cur_symbol->unkC = 0;
            cur_symbol->unk8 = 0;
            cur_symbol->unk10 = 1;
            cur_symbol->reg = index;

            cur_symbol->unk18 = var_s2->unk4_FE;

            ophashtable[operand_hash] = cur_symbol;
        }
    }
}

//func_00404008:
void func_00404008(void) {
    int directives_hash;
    int index;
    char* asm_directives;
    struct sym* cur_symbol;


    for(index = 0 ; index < 0x3F ; index++) {
        if (*sitype[index] == 0x2E) {
            asm_directives = sitype[index];
            directives_hash = hash(asm_directives); //create a hash for each asm directive
            cur_symbol = alloc_new_sym();

            cur_symbol->next =  ophashtable[directives_hash];
            cur_symbol->name = asm_directives;
            cur_symbol->unkC = 0;
            cur_symbol->unk8 = -1;
            cur_symbol->unk10 = 2;
            cur_symbol->reg = index;

            ophashtable[directives_hash] = cur_symbol;
        }
    }
}

static int func_00404108(int arg0, char* name, int arg2) {
    sym* temp_v0;
    int sp20;

    sp20 = hash(name);
    temp_v0 = alloc_new_sym();

    temp_v0->next = hashtable[sp20];
    temp_v0->name = name;
    temp_v0->unkC = 0;
    temp_v0->unk10 = 0;
    temp_v0->unk8 = arg2;
    temp_v0->reg = arg0;

    hashtable[sp20] = temp_v0;
}

void func_004041A8(char* arg0, int arg1) {
    int unused;
    int sp20;
    sym* cur_symbol;


    sp20 = hash(arg0);
    cur_symbol = alloc_new_sym();

    cur_symbol->next = hashtable[sp20];
    cur_symbol->name = arg0;
    cur_symbol->unkC = 0;
    cur_symbol->unk10 = 4;
    cur_symbol->unk8 = arg1;
    hashtable[sp20] = cur_symbol;
}

//func_00404234:
void func_00404234(int argc, char** argv) {
    int j;
    int i;
    int k;
    int var_s3 = 1;

    assembler_file = NULL;
    B_1000A7F0 = "binasm";
    B_1000A7F4 = NULL;
    B_1000A7F8 = NULL;
    list_extsyms = 0;
    CurrentSegment = 1;
    CurrentLine = 0;
    CurrentFile = EOF;
    linelength = 0;
    severity = 4;
    verbose = 0;
    atflag = 1;
    debugflag = 0;
    isStruct = 0;
    LastLabel = 0;
    in_repeat_block = 0;
    invent_locs = 1;
    gp_warn = 0;
    mednat = 0;


    for (i = 1; i < argc; i++) {
        char* cur_arg = argv[i];

        if (*cur_arg == '-') {
            switch (which_opt(cur_arg)) {
                case OPTION_g0:
                    debugflag = 0;
                    break;

                case OPTION_g1:
                    debugflag = 1;
                    break;

                case OPTION_g:
                case OPTION_g2:
                    debugflag = 2;
                    break;

                case OPTION_g3:
                    debugflag = 3;
                    break;

                case OPTION_p0:
                    var_s3 = 0;
                    break;

                case OPTION_p1:
                    var_s3 = 1;
                    break;

                case OPTION_p:
                case OPTION_p2:
                    var_s3 = 2;
                    break;

                case OPTION_p3:
                    var_s3 = 3;
                    break;

                case OPTION_w:
                case OPTION_w1:
                    nowarnflag = 1;
                    warnexitflag = 0;
                    break;

                case OPTION_w2:
                    nowarnflag = 0;
                    warnexitflag = 1;
                    break;

                case OPTION_w3:
                    nowarnflag = 1;
                    warnexitflag = 1;
                    break;

                case OPTION_v:
                    verbose = 1;
                    fprintf(stderr, "as0: ");
                    fflush(stderr);
                    break;

                case OPTION_t:
                    i++;
                    B_1000A7F4 = argv[i];
                    break;

                case OPTION_extsyms:
                    i++;
                    B_1000A7F8 = argv[i];
                    list_extsyms = 1;
                    break;

                // Ignore these options. They take an argument so increment again.
                case OPTION_G:
                case OPTION_Olimit:
                case OPTION_swpdbg:
                case OPTION_xbbdbg:
                case OPTION_multi_issue:
                    i++;
                    break;

                case OPTION_o:
                    i++;
                    B_1000A7F0 = argv[i];
                    break;

                case OPTION_gp_warn:
                    gp_warn = 1;
                    break;

                case OPTION_MAX:
                    posterror("Unknown option", cur_arg, 2);
                    break;

                case OPTION_mips1:
                    isa = ISA_MIPS1;
                    break;

                case OPTION_mips2:
                    isa = ISA_MIPS2;
                    break;

                case OPTION_mips3:
                    isa = ISA_MIPS3;
                    printf("%d: \n", isa);
                    break;

                case OPTION_mips4:
                    isa = ISA_MIPS4;
                    break;

                case OPTION_mednat:
                    mednat = 1;
                    break;

                case OPTION_diag:
                    diag_flag = 1;
                    break;
                default:
                    break;
            }
        } else if (assembler_file == NULL) {
            assembler_file = argv[i];
        } else {
            posterror("Extra filename on command line", argv[i], 2);
        }
    }
    if (isa == ISA_UNSPECIFIED) {
        isa = ISA_MIPS1;
    }
    if (var_s3 >= 2) {
        debugflag = 2;
    }

    if ((binasmfyle = fopen(B_1000A7F0, "w")) == NULL) {
        call_perror(1, B_1000A7F0);
        exit(1);
    }
    binasm_count = 1;
    if (list_extsyms) {
        if (( B_1000A7F8 == NULL) || ((extsyms_file = fopen(B_1000A7F8, "w")) == NULL)) {
            call_perror(1, B_1000A7F8);
            exit(1);
        }
    }
    binasm_rec.unk5_003F = 0x2A; //!< Is this something like a universal signature for every binasm file?
    binasm_rec.unk0 = 0; //symno
    binasm_rec.unk8 = 3;
    binasm_rec.unkC = 0x13;
    put_binasmfyle();
    sym_init(debugflag);

    if (assembler_file != NULL) {
        if ((in_file = fopen(assembler_file, "r")) == NULL) {
            call_perror(1, assembler_file);
            exit(1);
        }
    } else {
        in_file = stdin;
    }
    if (fgetc(in_file) != '#') {
        make_file(assembler_file);
    }
    fseek(in_file, 0, 0);

    for (j = 0; j < 0x20; j++) {
        reg_ptr[j] = func_00404108(j, sregisters[j], j);
    }
    for (j = 0x20; j < 0x40; j++) {
        func_00404108(j, sregisters[j], j - 0x20);
    }
    for (j = 0x40; j < 0x48 ; j++) {
        func_00404108(j, sregisters[j], j - 0x40);
    }

    func_00404108(1, "$at", 1);
    func_00404108(0x1A, "$kt0", 0x1B);
    func_00404108(0x1B, "$kt1", 0x1C);
    func_00404108(0x1C, "$gp", 0x1D);
    func_00404108(0x1D, "$sp", 0x1E);
    func_00404108(0x1E, "$fp", 0x1F);
    func_00404108(0x1D, sframereg, 0x1D);
    func_004041A8(sframesize, 0);
    func_00404008();
    func_00403F10();

    for (k = 0; k < 0x100; k++) { \
        local_label[k] = 0;       \
    }
}

//main
int main(int argc, char** arg1) {
    func_00404234(argc, arg1);
    while (!feof(in_file)) {
            readinline();
            Parsestmt();
        }
    if (verbose != 0) {
        fprintf(stderr, "\n");
    }
    if ((severity < 2) || ((warnexitflag != 0) && (severity < 3))) {
        exit(1);
    }
    do_dot_end(1);
    sym_finish(B_1000A7F0, B_1000A7F4);
    return 0;
}
