.globl f
f:
addi sp,sp,-1000
sw s0,996(sp)
sw ra,992(sp)
addi s0,sp,1000
lw a0, -4(sp)
li t0,0
sw t0, -8(sp)
li t0,20
sw t0,-8(sp)
._conditionLoop_2:
beq t0, zero, ._exit_1
lw t0, -8(sp)
li t1,10
sgt t0, t1, t0
j ._conditionLoop_2
._exit_1:
.return_f:
lw ra,992(sp)
lw s0,996(sp)
addi sp,sp,1000
ret
