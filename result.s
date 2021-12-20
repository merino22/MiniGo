.data
string2: .asciiz"i="

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
main: 
addiu $sp, $sp, -12

sw $ra, 0($sp)


li $t0, 0

sw $t0, 4($sp)

li $t0, 13

sw $t0, 8($sp)

for0: 
lw $t1, 4($sp)

li $t2, 20

slt $t3, $t1, $t2

beqz $t3, endFor1
addi $t0, $t0, 1
sw $t0, 4($sp)
la $a0, string2
li $v0, 4
syscall
lw $t0, 4($sp)

move $a0, $t0
li $v0, 1
syscall


j for0
endFor1: 


lw $ra, 0($sp)
addiu $sp, $sp, 12
jr $ra
li $v0, 10
syscall

