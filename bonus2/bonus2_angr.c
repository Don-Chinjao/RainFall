extern unsigned int g_804994c;

void _init()
{
    if (g_804994c)
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

void sub_80483f1()
{
    [D] Unsupported jumpkind Ijk_SigTRAP at address 134513649()
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

extern unsigned int language;

void greetuser()
{
    char v0[4];  // [bp-0x4c], Other Possible Types: unsigned int
    unsigned int v1;  // [bp-0x48]
    unsigned int v2;  // [bp-0x44]
    unsigned int v3;  // [bp-0x40]
    unsigned short v4;  // [bp-0x3c]
    char v5;  // [bp-0x3a]
    char v6;  // [bp+0x4]

    if (language == 1)
    {
        v0 = 3279321416;
        v1 = 547668900;
        v2 = 1772405616;
        v3 = 3282355062;
        v4 = 8356;
        v5 = 0;
    }
    else if (language == 2)
    {
        strncpy(v0, "Goedemiddag! ", 13);
    }
    else if (!language)
    {
        strncpy(v0, "Hello ", 6);
    }
    strcat(&v0, &v6);
    puts(&v0);
    return;
}

extern unsigned int language;

int main(unsigned int a0, char **a1)
{
    void* v0;  // [bp-0xb0]
    char v1[40];  // [bp-0x60]
    char v2[36];  // [bp-0x38]
    void* v3;  // [bp-0x14]
    void* *v4;  // edi
    unsigned int v5;  // ecx
    char v6[4];  // edi
    char v7[4];  // esi
    unsigned int v8;  // ecx

    if (a0 != 3)
        return 1;
    v4 = &v1;
    for (v5 = 19; v5; v4 += 1)
    {
        v5 -= 1;
        *(v4) = 0;
    }
    strncpy(&v1, a1[1], 40);
    strncpy(&v2, a1[2], 32);
    v0 = "LANG";
    v3 = getenv("LANG");
    if (v3)
    {
        v0 = v3;
        if (!memcmp(v3, "fi", 2))
        {
            language = 1;
        }
        else
        {
            v0 = v3;
            if (!memcmp(v3, "nl", 2))
                language = 2;
        }
    }
    v6 = &v0;
    v7 = &v1;
    for (v8 = 19; v8; v7 += 1)
    {
        v8 -= 1;
        *(v6) = *(v7);
        v6 += 1;
    }
    return (unsigned int)greetuser();
}

extern unsigned int __init_array_start;

unsigned int __libc_csu_init(unsigned int a0, unsigned int a1, unsigned int a2)
{
    _init();
    return &__init_array_start;
}

void sub_80486a1()
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


