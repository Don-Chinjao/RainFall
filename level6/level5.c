int32_t _init()
{
    if (__gmon_start__)
        __gmon_start__();
    
    frame_dummy();
    return __do_global_ctors_aux();
}

int32_t sub_8048330()
{
    int32_t var_4 = data_8049804;
    /* jump -> data_8049808 */
}

char* strcpy(char* arg1, char const* arg2)
{
    /* tailcall */
    return strcpy(arg1, arg2);
}

int32_t sub_8048346()
{
    /* tailcall */
    return sub_8048330(0);
}

int32_t malloc(size_t bytes)
{
    /* tailcall */
    return malloc(bytes);
}

int32_t sub_8048356()
{
    /* tailcall */
    return sub_8048330(8);
}

int32_t puts(char const* str)
{
    /* tailcall */
    return puts(str);
}

int32_t sub_8048366()
{
    /* tailcall */
    return sub_8048330(0x10);
}

int32_t system(char const* line)
{
    /* tailcall */
    return system(line);
}

int32_t sub_8048376()
{
    /* tailcall */
    return sub_8048330(0x18);
}

int32_t __gmon_start__()
{
    /* tailcall */
    return __gmon_start__();
}

int32_t sub_8048386()
{
    /* tailcall */
    return sub_8048330(0x20);
}

void __libc_start_main(int32_t (* main)(int32_t argc, char** argv, char** envp), int32_t argc, char** ubp_av, void (* init)(), void (* fini)(), void (* rtld_fini)(), void* stack_end) __noreturn
{
    /* tailcall */
    return __libc_start_main(main, argc, ubp_av, init, fini, rtld_fini, stack_end);
}

int32_t sub_8048396()
{
    /* tailcall */
    return sub_8048330(0x28);
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

int32_t n()
{
    return system("/bin/cat /home/user/level7/.pass");
}

int32_t m()
{
    return puts("Nope");
}

int32_t main(int32_t argc, char** argv, char** envp)
{
    char*	eax = malloc(0x40);
    int32_t	(**eax_1)() = malloc(4);

    *eax_1 = m;
    strcpy(eax, argv[1]);
    return (*eax_1)();
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


