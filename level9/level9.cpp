extern unsigned int g_8049b40;

void _init()
{
    if (g_8049b40)
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

void sub_8048561()
{
    [D] Unsupported jumpkind Ijk_SigTRAP at address 134514017()
}

extern struct_0 __DTOR_LIST__;
extern char completed.6159;
extern unsigned int dtor_idx.6161;

void __do_global_dtors_aux()
{
    unsigned int v1;  // eax

    if (completed.6159)
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
    completed.6159 = 1;
    return;
}


void frame_dummy()
{
    return;
}

typedef struct struct_1 {
    struct struct_0 *field_0;
} struct_1;

typedef struct struct_2 {
    char padding_0[4];
    char *field_4;
} struct_2;

typedef struct struct_0 {
    struct struct_0 *field_0;
} struct_0;

void main(unsigned int a0, struct_2 *a1)
{
    char v0;  // [bp-0x20]
    struct_1 **v1;  // [bp-0x18]
    void* v2;  // [bp-0x14]
    struct_1 **v3;  // [bp-0x10]
    void* v4;  // [bp-0xc]
    void* v5;  // ebx
    struct_1 **v6;  // ebx

    if (a0 > 1)
    {
        v5 = operatornew(108);
        v5(5);
        v4 = v5;
        v6 = operatornew(108);
        v6(6);
        v3 = v6;
        v2 = v4;
        v1 = v3;
        v2.setAnnotation(a1->field_4);
        *(v1)->field_0(v1, v2, *((int *)&v0));
        return;
    }
    _exit(1); /* do not return */
}

extern void _ZStL8__ioinit;
extern unsigned int __dso_handle;

void __static_initialization_and_destruction_0(int arg_0, int arg_1)
{
    if (arg_0 != 1)
    {
        return;
    }
    else if (arg_1 == 65535)
    {
        _ZStL8__ioinit();
        __cxa_atexit(std::ios_base::Init::~Init, &_ZStL8__ioinit, &__dso_handle);
        return;
    }
    else
    {
        return;
    }
}

void _GLOBAL__sub_I_main()
{
    __static_initialization_and_destruction_0(1, 65535);
    return;
}

extern char g_8048848;

int N::N(void* this, int arg_0)
{
    *((char **)this) = &g_8048848;
    *((int *)&this[104]) = arg_0;
    return;
}

void N::setAnnotation(void* this, char *arg_0)
{
    memcpy(this + 4, arg_0, strlen(arg_0));
    return;
}

void N::operator+(void* this, class N &arg_0)
{
    return;
}

void N::operator-(void* this, class N &arg_0)
{
    return;
}

extern char _GLOBAL_OFFSET_TABLE_;

int __libc_csu_init(unsigned int a0, unsigned int a1, unsigned int a2)
{
    char v0;  // [bp-0x20]
    void* v1;  // esi
    unsigned int v2;  // eax

    _init();
    v1 = 0;
    do
    {
        v2 = *((int *)(-252 + &_GLOBAL_OFFSET_TABLE_ + 0x4 * v1))(a0, a1, a2, *((int *)&v0));
        v1 += 1;
    } while (v1 != 1);
    return v2;
}

void sub_80487d1()
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

extern struct_0 *__init_array_end;

void __do_global_ctors_aux()
{
    struct_1 **v1;  // eax
    struct_0 **v2;  // ebx

    v1 = __init_array_end;
    if (__init_array_end == -1)
        return;
    v2 = &__init_array_end;
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


