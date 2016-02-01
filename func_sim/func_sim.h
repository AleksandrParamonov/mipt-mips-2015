enum RegNum
{
    zero,
    at,
    v0, v1,
    a0, a1, a2, a3,
    t0, t1, t2, t3, t4, t5, t6, t7,
    s0, s1, s2, s3, s4, s5, s6, s7,
    t8, t9,
    k0, k1,
    gp, sp,
    s8, ra,
    MAX_REG
};

class RF {
    uint32 array[MAX_REG];
public:
    
    uint32 read(RegNum index) const;
    void write(RegNum index, uint32 data);
    void reset(RegNum index); 
                              
};

class MIPS {

    RF* rf;
    uint32 PC;
    FuncMemory* mem;

public:
    MIPS();
    void run(const string&, uint instr_to_run);
    uint32 fetch() const { return mem->read(PC); }
    void updatePC(const FuncInstr& instr) { PC = instr->new_PC; }
};