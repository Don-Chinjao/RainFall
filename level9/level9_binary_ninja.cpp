int32_t _init()
{
    if (__gmon_start__)
        __gmon_start__();
    
    frame_dummy();
    return __do_global_ctors_aux();
}

int32_t sub_80484a0()
{
    int32_t var_4 = data_8049b48;
    /* jump -> data_8049b4c */
}

int32_t __cxa_atexit(void (* func)(void* retval), void* arg, void* dso_handle)
{
    /* tailcall */
    return __cxa_atexit(func, arg, dso_handle);
}

int32_t sub_80484b6()
{
    /* tailcall */
    return sub_80484a0(0);
}

int32_t __gmon_start__()
{
    /* tailcall */
    return __gmon_start__();
}

int32_t sub_80484c6()
{
    /* tailcall */
    return sub_80484a0(8);
}

void std::ios_base::Init::Init(class std::ios_base::Init* const this)
{
    /* tailcall */
    return std::ios_base::Init::Init(this);
}

int32_t sub_80484d6()
{
    /* tailcall */
    return sub_80484a0(0x10);
}

void __libc_start_main(int32_t (* main)(int32_t argc, char** argv, char** envp), int32_t argc, char** ubp_av, void (* init)(), void (* fini)(), void (* rtld_fini)(), void* stack_end) __noreturn
{
    /* tailcall */
    return __libc_start_main(main, argc, ubp_av, init, fini, rtld_fini, stack_end);
}

int32_t sub_80484e6()
{
    /* tailcall */
    return sub_80484a0(0x18);
}

void _exit(int32_t status) __noreturn
{
    /* tailcall */
    return _exit(status);
}

int32_t sub_80484f6()
{
    /* tailcall */
    return sub_80484a0(0x20);
}

void func(class std::ios_base::Init* retval)
{
    /* tailcall */
    return std::ios_base::Init::~Init(retval);
}

int32_t sub_8048506()
{
    /* tailcall */
    return sub_80484a0(0x28);
}

int32_t memcpy(void* arg1, void const* arg2, size_t arg3)
{
    /* tailcall */
    return memcpy(arg1, arg2, arg3);
}

int32_t sub_8048516()
{
    /* tailcall */
    return sub_80484a0(0x30);
}

size_t strlen(char const* arg1)
{
    /* tailcall */
    return strlen(arg1);
}

int32_t sub_8048526()
{
    /* tailcall */
    return sub_80484a0(0x38);
}

int32_t operator new(std::size_t sz)
{
    /* tailcall */
    return operator new(sz);
}

int32_t sub_8048536()
{
    /* tailcall */
    return sub_80484a0(0x40);
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
    if (completed.6159)
        return;
    
    for (uint32_t dtor_idx.6161_1 = dtor_idx.6161; dtor_idx.6161_1 < 0; 
        dtor_idx.6161_1 = dtor_idx.6161)
    {
        dtor_idx.6161 = dtor_idx.6161_1 + 1;
        __DTOR_LIST__[dtor_idx.6161_1 + 1]();
    }
    
    completed.6159 = 1;
}

int32_t frame_dummy()
{
    int32_t __JCR_END___1 = __JCR_END__;
    
    if (!__JCR_END___1)
        return __JCR_END___1;
    
    return 0;
}

int32_t main(int32_t argc, char** argv, char** envp)
{
    if (argc <= 1)
    {
        _exit(1);
        /* no return */
    }
    
    int32_t eax = operator new(0x6c);
    int32_t var_2c = 5;
    N::N(eax);
    int32_t eax_1 = operator new(0x6c);
    int32_t var_2c_1 = 6;
    N::N(eax_1);
    int32_t var_2c_2 = argv[1];
    N::setAnnotation(eax);
    return (**eax_1)(eax_1, eax);
}

void __static_initialization_and_destruction_0(int32_t arg1, int32_t arg2)
{
    if (arg1 == 1 && arg2 == 0xffff)
    {
        std::ios_base::Init::Init(&std::__ioinit);
        __cxa_atexit(func, &std::__ioinit, &__dso_handle);
    }
}

int32_t (static initializer)::main()
{
    return __static_initialization_and_destruction_0(1, 0xffff);
}

int32_t N::N(int32_t arg1)
{
    *arg1 = &_vtable_for_N;
    int32_t arg_8;
    *(arg1 + 0x68) = arg_8;
    return arg1;
}

int32_t N::setAnnotation(char* arg1)
{
    char* arg_8;
    return memcpy(&arg1[4], arg_8, strlen(arg_8));
}

int32_t N::operator+(N& arg1)
{
    void* arg_8;
    return *(arg_8 + 0x68) + *(arg1 + 0x68);
}

int32_t N::operator-(N& arg1)
{
    void* arg_8;
    return *(arg1 + 0x68) - *(arg_8 + 0x68);
}

void __libc_csu_init()
{
    _init();
    
    for (int32_t i = 0; i != 1; i += 1)
    {
        int32_t arg_4;
        int32_t arg_8;
        int32_t arg_c;
        (&__init_array_start)[i](arg_4, arg_8, arg_c);
    }
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


