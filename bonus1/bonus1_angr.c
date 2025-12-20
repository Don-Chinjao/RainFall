extern unsigned int g_8049760;

void _init()
{
    if (g_8049760)
        __gmon_start__();
    frame_dummy();
    __do_global_ctors_aux();
    return;
}

void _start()
{
    unsigned int v1;  // [bp+0x0]
    unsigned int v2;  // [bp+0x4]
    unsigned int v3;  // eax
    unsigned int v4;  // edx

    v1 = v3;
    __libc_start_main(main, v1, &v2, __libc_csu_init, __libc_csu_fini, v4, &v1, v1); /* do not return */
}

void sub_8048391()
{
    [D] Unsupported jumpkind Ijk_SigTRAP at address 134513553()
}

extern struct_0 __DTOR_LIST__;
extern char __bss_start;
extern unsigned int dtor_idx.6161;

void __do_global_dtors_aux()
{
    unsigned int v1;  // eax

    if (__bss_start)
        return;
    v1 = dtor_idx.6161;
    if (dtor_idx.6161 < 0)
    {
        do
        {
            dtor_idx.6161 = v1 + 1;
            (&__DTOR_LIST__.field_0)[dtor_idx.6161]();
            v1 = dtor_idx.6161;
        } while (dtor_idx.6161 < 0);
    }
    __bss_start = 1;
    return;
}


void frame_dummy()
{
    return;
}

typedef struct struct_0 {
    char padding_0[4];
    char *field_4;
    void* field_8;
} struct_0;

void* main(unsigned int a0, struct_0 *a1)
{
    char v0;  // [bp-0x30]
    unsigned int v1;  // [bp-0x8]

    v1 = atoi(a1->field_4);
    if (v1 > 9)
        return 1;
    memcpy(&v0, a1->field_8, v1 * 4);
    if (v1 != 1464814662)
        return 0;
    execl("/bin/sh", "sh");
    return 0;
}

extern unsigned int __init_array_start;

unsigned int __libc_csu_init(unsigned int a0, unsigned int a1, unsigned int a2)
{
    _init();
    return &__init_array_start;
}

void sub_8048511()
{
    __libc_csu_fini();
    return;
}

void __libc_csu_fini()
{
    return;
}

void __i686.get_pc_thunk.bx(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    return;
}

typedef struct struct_1 {
    struct struct_1 *field_0;
} struct_1;

typedef struct struct_0 {
    struct struct_0 *field_0;
} struct_0;

extern struct_0 *__init_array_start;

void __do_global_ctors_aux()
{
    struct_1 **v1;  // eax
    struct_0 **v2;  // ebx

    v1 = __init_array_start;
    if (__init_array_start == -1)
        return;
    v2 = &__init_array_start;
    do
    {
        v2 += 1;
        v1();
        v1 = *(v2);
    } while (*(v2) != -1);
    return;
}

void _fini()
{
    __do_global_dtors_aux();
    return;
}


