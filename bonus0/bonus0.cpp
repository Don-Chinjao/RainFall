extern unsigned int g_80498d4;

void _init()
{
    if (g_80498d4)
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

void sub_8048421()
{
    [D] Unsupported jumpkind Ijk_SigTRAP at address 134513697()
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

void p(char *a0, char *a1)
{
    char v0;  // [bp-0x100c]

    puts(a1);
    read(0, &v0, 0x1000);
    *(strchr(&v0, 10)) = 0;
    strncpy(a0, &v0, 20);
    return;
}

void int operator++(void* a0)
{
    unsigned int v0;  // [bp-0x40]
    char v1[20];  // [bp-0x34]
    char v2[20];  // [bp-0x20]
    void* v3;  // edi

    p(&v1, " - ");
    p(&v2, " - ");
    strcpy(a0, &v1);
    v0 = 4294967295;
    v3 = a0;
    do
    {
        if (!v0)
            break;
    } while (*((char *)v3));
    *((unsigned short *)(-1 + ~(v0) + (char *)a0)) = 32;
    strcat(a0, &v2);
    return;
}

int main()
{
    char v0;  // [bp-0x2e]

    int operator++(&v0);
    puts(&v0);
    return 0;
}

extern char __init_array_start;

int __libc_csu_init(unsigned int a0, unsigned int a1, unsigned int a2)
{
    _init();
    return &__init_array_start;
}

void sub_8048631()
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


