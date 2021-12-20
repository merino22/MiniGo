.data
string3: .asciiz"doubleday"

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
printFor: 
addiu $sp, $sp, -12

sw $ra, 0($sp)


li $t0, 120

sw $t0, 4($sp)

li $t0, 13

sw $t0, 8($sp)

lw $t0, 4($sp)

move $a0, $t0
li $v0, 1
syscall

lw $t0, 8($sp)

li $t1, 13

beq $t0, $t1, label1
addi $t0, $zero, 0
 j finalLabel2
label1:
addi $t0, $zero, 1
finalLabel2:

beqz $t0, endif0

la $a0, string3
li $v0, 4
syscall


endif0 :

lw $t0, 4($sp)

li.s $f0, 13.5

move $a0, $t0
mfc1 $a1, $f0
jal hello
move $t0, $v0

lw $ra, 0($sp)
addiu $sp, $sp, 12
jr $ra
li $v0, 10
syscall

