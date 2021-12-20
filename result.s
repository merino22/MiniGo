.data

.globl main
.text
hello: 
addiu $sp, $sp, -12

sw $ra, 0($sp)

sw $a0, 4($sp)
sw $a1, 8($sp)
l.s $f0, 8($sp)

mov.s $f12, $f0
li $v0, 2
syscall

lw $t0, 4($sp)

move $a0, $t0
li $v0, 1
syscall


lw $ra, 0($sp)
addiu $sp, $sp, 12
jr $ra
getArr: 
addiu $sp, $sp, -8

sw $ra, 0($sp)

sw $a0, 4($sp)
lw $t0, 4($sp)

move $a0, $t0
li $v0, 1
syscall


lw $ra, 0($sp)
addiu $sp, $sp, 8
jr $ra

main:
printFor: 
addiu $sp, $sp, -24

sw $ra, 0($sp)


li $t0, 11

sw $t0, 12($sp)
li $t0, 10

sw $t0, 16($sp)
li $t0, 5

sw $t0, 20($sp)

li $t0, 0

sw $t0, 4($sp)

li $t0, 13

sw $t0, 8($sp)

for0: 
lw $t0, 4($sp)

li $t1, 3

slt $t2, $t1, $t0

beqz $t2, endFor1
lw $t0, 4($sp)

li $a0, 4
mult $a0, $t0
mflo $t0
la $t1, 12($sp)
add $t0, $t1, $t0
l.s $f0, 0($t0)

mov.s $f12, $f0
li $v0, 2
syscall


j for0
endFor1: 


lw $ra, 0($sp)
addiu $sp, $sp, 24
jr $ra
li $v0, 10
syscall

