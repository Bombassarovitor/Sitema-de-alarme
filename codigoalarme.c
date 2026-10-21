
.data
msgA: .asciiz "Sensor A - Porta aberta? (0=nao, 1=sim): "
msgB: .asciiz "\nSensor B - Movimento? (0=nao, 1=sim): "
msgC: .asciiz "\nSensor C - Sistema ligado? (0=nao, 1=sim): "
msgS: .asciiz "\nAlarme: "
ligado: .asciiz "LIGADO"
desligado: .asciiz "DESLIGADO"
 
.text
.globl main

main:
    # Ler sensor A
    li $v0, 4
    la $a0, msgA
    syscall

    li $v0, 5
    syscall
    move $t0, $v0

    # Ler sensor B
    li $v0, 4
    la $a0, msgB
    syscall

    li $v0, 5
    syscall
    move $t1, $v0

    # Ler sensor C
    li $v0, 4
    la $a0, msgC
    syscall

    li $v0, 5
    syscall
    move $t2, $v0

    # Verificar se A ou B indica risco
    or $t3, $t0, $t1

    # O alarme so liga se C estiver ligado
    and $t4, $t3, $t2

    # Mostrar resultado
    li $v0, 4
    la $a0, msgS
    syscall

    beq $t4, $zero, alarme_off

alarme_on:
    li $v0, 4
    la $a0, ligado
    syscall
    j fim

alarme_off:
    li $v0, 4
    la $a0, desligado
    syscall

fim:
    li $v0, 10
    syscall
