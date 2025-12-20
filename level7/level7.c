int32_t _init()
{
    if (__gmon_start__)
        __gmon_start__();
    
    frame_dummy();
    return __do_global_ctors_aux();
}

int32_t sub_80483a0()
{
    int32_t var_4 = data_804990c;
    /* jump -> data_8049910 */
}

int32_t printf(char const* format, ...)
{
    /* tailcall */
    return printf();
}

int32_t sub_80483b6()
{
    /* tailcall */
    return sub_80483a0(0);
}

char* fgets(char* buf, int32_t n, FILE* fp)
{
    /* tailcall */
    return fgets(buf, n, fp);
}

int32_t sub_80483c6()
{
    /* tailcall */
    return sub_80483a0(8);
}

time_t time(time_t* arg1)
{
    /* tailcall */
    return time(arg1);
}

int32_t sub_80483d6()
{
    /* tailcall */
    return sub_80483a0(0x10);
}

char* strcpy(char* arg1, char const* arg2)
{
    /* tailcall */
    return strcpy(arg1, arg2);
}

int32_t sub_80483e6()
{
    /* tailcall */
    return sub_80483a0(0x18);
}

int32_t malloc(size_t bytes)
{
    /* tailcall */
    return malloc(bytes);
}

int32_t sub_80483f6()
{
    /* tailcall */
    return sub_80483a0(0x20);
}

int32_t puts(char const* str)
{
    /* tailcall */
    return puts(str);
}

int32_t sub_8048406()
{
    /* tailcall */
    return sub_80483a0(0x28);
}

int32_t __gmon_start__()
{
    /* tailcall */
    return __gmon_start__();
}

int32_t sub_8048416()
{
    /* tailcall */
    return sub_80483a0(0x30);
}

void __libc_start_main(int32_t (* main)(int32_t argc, char** argv, char** envp), int32_t argc, char** ubp_av, void (* init)(), void (* fini)(), void (* rtld_fini)(), void* stack_end) __noreturn
{
    /* tailcall */
    return __libc_start_main(main, argc, ubp_av, init, fini, rtld_fini, stack_end);
}

int32_t sub_8048426()
{
    /* tailcall */
    return sub_80483a0(0x38);
}

FILE* fopen(char const* filename, char const* mode)
{
    /* tailcall */
    return fopen(filename, mode);
}

int32_t sub_8048436()
{
    /* tailcall */
    return sub_80483a0(0x40);
}

void __convention("regparm") _start(int32_t arg1, void (* arg2)()) __noreturn
{
    int32_t stack_end = arg1;
    void ubp_av;
    __libc_start_main(main, __return_addr, &ubp_av, __libc_csu_init, __libc_csu_fini, arg2, 
        &stack_end);
    /* no return */
}

void __do_global_dtors_aux()
{
    if (__bss_start)
        return;
    
    for (uint32_t dtor_idx.6161_1 = dtor_idx.6161; dtor_idx.6161_1 < 0; 
        dtor_idx.6161_1 = dtor_idx.6161)
    {
        dtor_idx.6161 = dtor_idx.6161_1 + 1;
        __DTOR_LIST__[dtor_idx.6161_1 + 1]();
    }
    
    __bss_start = 1;
}

int32_t frame_dummy()
{
    int32_t __JCR_END___1 = __JCR_END__;
    
    if (!__JCR_END___1)
        return __JCR_END___1;
    
    return 0;
}

int32_t m()
{
    return printf("%s - %d\n", &c, time(nullptr));
}

extern char c;

int32_t main(int32_t argc, char** argv, char** envp)
{
    int32_t* eax = malloc(8);

    *eax = 1;
    eax[1] = malloc(8);

    int32_t* eax_4 = malloc(8);

    *eax_4 = 2;
    eax_4[1] = malloc(8);

    strcpy(eax[1], argv[1]);
    strcpy(eax_4[1], argv[2]);

    fgets(&c, 0x44, fopen("/home/user/level8/.pass", "r"));
    puts("~~");

    return 0;
}

void __libc_csu_init()
{
    _init();
}

void j___libc_csu_fini()
{
    /* tailcall */
    return __libc_csu_fini();
}

void __libc_csu_fini() __pure
{
    return;
}

int32_t __i686.get_pc_thunk.bx() __pure
{
    return;
}

int32_t __do_global_ctors_aux()
{
    return 0xffffffff;
}

int32_t _fini()
{
    return __do_global_dtors_aux();
}


