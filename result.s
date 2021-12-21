.data

.globl main
.text
BubbleSort: 
addiu $sp, $sp, -20

sw $ra, 0($sp)

sw $a0, 4($sp)
sw $a1, 8($sp)

li $t0, 0

sw $t0, 12($sp)

for0: 
lw $t1, 12($sp)

lw $t2, 8($sp)

li $t3, 1

sub $t2, $t2, $t3

slt $t3, $t1, $t2

beqz $t3, endFor1
addi $t0, $t0, 1
sw $t0, 12($sp)

li $t0, 0

sw $t0, 16($sp)

for2: 
lw $t1, 16($sp)

lw $t4, 8($sp)

lw $t5, 12($sp)

sub $t4, $t4, $t5

li $t5, 1

sub $t4, $t4, $t5

slt $t5, $t1, $t4

beqz $t5, endFor3
addi $t0, $t0, 1
sw $t0, 16($sp)

j for2
endFor3: 


j for0
endFor1: 

li $t0, 20

move $a0, $t0


lw $ra, 0($sp)
addiu $sp, $sp, 20
jr $ra
main: 
addiu $sp, $sp, -12

sw $ra, 0($sp)


li $t0, 11

sw $t0, 8($sp)
li $t0, 14

sw $t0, 8($sp)
li $t0, 3

sw $t0, 8($sp)
li $t0, 8

sw $t0, 8($sp)
li $t0, 18

sw $t0, 8($sp)
li $t0, 17

sw $t0, 8($sp)
li $t0, 43

sw $t0, 8($sp)

li $t0, 7

sw $t0, 4($sp)

lw $t0, 4($sp)

lw $t1, 4($sp)

move $a0, $t0
move $a1, $t1
jal BubbleSort
move $t0, $v0
li $t0, 2

li $t1, 20

mult $t0, $t1
mflo $t0

move $a0, $t0
li $v0, 1
syscall


lw $ra, 0($sp)
addiu $sp, $sp, 12
jr $ra
li $v0, 10
syscall

