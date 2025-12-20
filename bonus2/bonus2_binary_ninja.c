int32_t _init()
{
    if (__gmon_start__)
        __gmon_start__();
    
    frame_dummy();
    return __do_global_ctors_aux();
}

int32_t sub_8048350()
{
    int32_t var_4 = data_8049954;
    /* jump -> data_8049958 */
}

int32_t memcmp(void const* arg1, void const* arg2, size_t arg3)
{
    /* tailcall */
    return memcmp(arg1, arg2, arg3);
}

int32_t sub_8048366()
{
    /* tailcall */
    return sub_8048350(0);
}

char* strcat(char* arg1, char const* arg2)
{
    /* tailcall */
    return strcat(arg1, arg2);
}

int32_t sub_8048376()
{
    /* tailcall */
    return sub_8048350(8);
}

char* getenv(char const* name)
{
    /* tailcall */
    return getenv(name);
}

int32_t sub_8048386()
{
    /* tailcall */
    return sub_8048350(0x10);
}

int32_t puts(char const* str)
{
    /* tailcall */
    return puts(str);
}

int32_t sub_8048396()
{
    /* tailcall */
    return sub_8048350(0x18);
}

int32_t __gmon_start__()
{
    /* tailcall */
    return __gmon_start__();
}

int32_t sub_80483a6()
{
    /* tailcall */
    return sub_8048350(0x20);
}

void __libc_start_main(int32_t (* main)(int32_t argc, char** argv, char** envp), int32_t argc, char** ubp_av, void (* init)(), void (* fini)(), void (* rtld_fini)(), void* stack_end) __noreturn
{
    /* tailcall */
    return __libc_start_main(main, argc, ubp_av, init, fini, rtld_fini, stack_end);
}

int32_t sub_80483b6()
{
    /* tailcall */
    return sub_8048350(0x28);
}

char* strncpy(char* arg1, char const* arg2, size_t arg3)
{
    /* tailcall */
    return strncpy(arg1, arg2, arg3);
}

int32_t sub_80483c6()
{
    /* tailcall */
    return sub_8048350(0x30);
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

int32_t greetuser()
{
    uint32_t language_1 = language;
    int32_t str;
    
    if (language_1 == 1)
        __builtin_memcpy(&str, 
            "\x48\x79\x76\xc3\xa4\xc3\xa4\x20\x70\xc3\xa4\x69\x76\xc3\xa4\xc3\xa4\x20\x00", 0x13);
    else if (language_1 == 2)
        __builtin_strcpy(&str, "Goedemiddag! ");
    else if (!language_1)
        __builtin_strncpy(&str, "Hello ", 7);
    
    void arg_4;
    strcat(&str, &arg_4);
    return puts(&str);
}

int32_t main(int32_t argc, char** argv, char** envp)
{
    if (argc != 3)
        return 1;
    
    void var_60;
    __builtin_memset(&var_60, 0, 0x4c);

    char* name = &var_60;
    strncpy(name, argv[1], 0x28);

    void var_38;
    name = &var_38;
    strncpy(name, argv[2], 0x20);

    name = "LANG";
    char* name_1 = getenv(name);
    
    //var_60 == argv 1 [40 0x28] bp-0x60
    //var_38 == argv 2 [36 0x24] bp-0x38

    if (name_1)
    {
        var_ac = &data_804873d;
        name = name_1;
        
        if (memcmp(name, var_ac, 2))
        {
            var_ac = &data_8048740;
            name = name_1;
            
            if (!memcmp(name, var_ac, 2))
                language = 2;
        }
        else
            language = 1;
    }
    
    __builtin_memcpy(&name, &var_60, 0x4c);
    return greetuser();
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


