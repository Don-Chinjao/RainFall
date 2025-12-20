int32_t _init()
{
    if (__gmon_start__)
        __gmon_start__();
    
    frame_dummy();
    return __do_global_ctors_aux();
}

int32_t sub_8048370()
{
    int32_t var_4 = data_80498dc;
    /* jump -> data_80498e0 */
}

ssize_t read(int32_t fd, void* buf, size_t nbytes)
{
    /* tailcall */
    return read(fd, buf, nbytes);
}

int32_t sub_8048386()
{
    /* tailcall */
    return sub_8048370(0);
}

char* strcat(char* arg1, char const* arg2)
{
    /* tailcall */
    return strcat(arg1, arg2);
}

int32_t sub_8048396()
{
    /* tailcall */
    return sub_8048370(8);
}

char* strcpy(char* arg1, char const* arg2)
{
    /* tailcall */
    return strcpy(arg1, arg2);
}

int32_t sub_80483a6()
{
    /* tailcall */
    return sub_8048370(0x10);
}

int32_t puts(char const* str)
{
    /* tailcall */
    return puts(str);
}

int32_t sub_80483b6()
{
    /* tailcall */
    return sub_8048370(0x18);
}

int32_t __gmon_start__()
{
    /* tailcall */
    return __gmon_start__();
}

int32_t sub_80483c6()
{
    /* tailcall */
    return sub_8048370(0x20);
}

char* strchr(char const* arg1, int32_t arg2)
{
    /* tailcall */
    return strchr(arg1, arg2);
}

int32_t sub_80483d6()
{
    /* tailcall */
    return sub_8048370(0x28);
}

void __libc_start_main(int32_t (* main)(int32_t argc, char** argv, char** envp), int32_t argc, char** ubp_av, void (* init)(), void (* fini)(), void (* rtld_fini)(), void* stack_end) __noreturn
{
    /* tailcall */
    return __libc_start_main(main, argc, ubp_av, init, fini, rtld_fini, stack_end);
}

int32_t sub_80483e6()
{
    /* tailcall */
    return sub_8048370(0x30);
}

char* strncpy(char* arg1, char const* arg2, size_t arg3)
{
    /* tailcall */
    return strncpy(arg1, arg2, arg3);
}

int32_t sub_80483f6()
{
    /* tailcall */
    return sub_8048370(0x38);
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

char* p(char* arg1, char* arg2)
{
    puts(arg2);
    char buf[0x1008];
    read(0, &buf, 0x1000);
    *strchr(&buf, 0xa) = 0;
    return strncpy(arg1, &buf, 0x14);
}

// [aaaaaaaaaaaaaaaaaaaa] 20
// [                    ] 20

// [aaaaaaaaaaaaaaaaaaaa] 20
// [                    ] 20
// [                                          ] 42

char* pp(char* arg1)
{
    char var_34[0x14];
    p(&var_34, " - ");
    char var_20[0x14];
    p(&var_20, " - ");
    strcpy(arg1, &var_34);
    int32_t i = 0xffffffff;
    char* edi = arg1;
    
    while (i)
    {
        bool cond:0_1 = 0 != *edi;
        edi = &edi[1];
        i -= 1;
        
        if (!cond:0_1)
            break;
    }
    
    *(~i - 1 + arg1) = 0x20;
    return strcat(arg1, &var_20);
}

int32_t main(int32_t argc, char** argv, char** envp)
{
    char str[0x2a];
    pp(&str);
    puts(&str);
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


