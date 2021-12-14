.data

.globl main
.text
main:


li $t0, 20

sw $t0, 0($sp)

lw $t0, 0($sp)

li $t1, 2

li $t2, 0
forPwr:
slt $t3, $t2, $t1
beq $t3, $zero, endForPwr
mult $t0, $t0
mflo $t0
addi $t2, $t2, 1
endForPwr:
sw $t0, 0($sp)

lw $t0, 0($sp)

li $t2, 4

add $t0, $t0, $t2
lw $t0, 0($sp)

li $t3, 1

sub $t0, $t0, $t3
lw $t0, 0($sp)

li $t4, 8

mul $t0, $t0, $t4
mflo $t0

lw $t0, 0($sp)

li $t5, 2

div $t0, $t5
mflo $t0


li $t7, 100

sw $t7, 4($sp)

lw $t7, 4($sp)

li $t8, 5

div $t7, $t8
mflo $t7
sw $t7, 4($sp)

lw $t7, 4($sp)

li $t9, 2

div $t7, $t9
mfhi $t7
sw $t7, 4($sp)

lw $t7, 0($sp)

move $a0, $t7
li $v0, 1
syscall

li $v0, 10
syscall
