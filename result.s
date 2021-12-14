.data

.globl main
.text
main:


li $t0, 20

sw $t0, 0($sp)

li $t0, 100

sw $t0, 4($sp)

lw $t0, 4($sp)

li $t1, 5

div $t0, $t1
mflo $t0
sw $t0, 4($sp)

lw $t0, 4($sp)

li $t2, 2

div $t0, $t2
mfhi $t0
sw $t0, 4($sp)

lw $t0, 0($sp)

li $t3, 4

sll $t0, $t0, $t3
sw $t0, 0($sp)

lw $t0, 0($sp)

move $a0, $t0
li $v0, 1
syscall

li $v0, 10
syscall
