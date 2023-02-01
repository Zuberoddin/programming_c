	.file	"assignment_nov_14.c"
	.text
.Ltext0:
	.file 0 "/home/engineer/c/C_assignments" "assignment_nov_14.c"
	.globl	len
	.bss
	.align 4
	.type	len, @object
	.size	len, 4
len:
	.zero	4
	.section	.rodata
	.align 8
.LC0:
	.string	"Menu\n 0.exit\n 1.remove_spaces\n 2.rotate_elements_array.c"
.LC1:
	.string	"Select the option"
.LC2:
	.string	"%d"
.LC3:
	.string	"Enter the strings"
.LC4:
	.string	"%[^\n]s"
.LC5:
	.string	"Enter the number of values:"
.LC6:
	.string	"Enter value:"
	.align 8
.LC7:
	.string	"Enter the number for how many times rotating"
.LC8:
	.string	"After rotating"
.LC9:
	.string	"%d\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB6:
	.file 1 "assignment_nov_14.c"
	.loc 1 8 1
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%r15
	pushq	%r14
	pushq	%r13
	pushq	%r12
	pushq	%rbx
	subq	$168, %rsp
	.cfi_offset 15, -24
	.cfi_offset 14, -32
	.cfi_offset 13, -40
	.cfi_offset 12, -48
	.cfi_offset 3, -56
	.loc 1 8 1
	movq	%fs:40, %rax
	movq	%rax, -56(%rbp)
	xorl	%eax, %eax
.L14:
.LBB2:
	.loc 1 12 2
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	.loc 1 13 2
	movq	stdin(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	__fpurge@PLT
	.loc 1 14 2
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	.loc 1 16 3
	leaq	-200(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	.loc 1 17 3
	movl	-200(%rbp), %eax
	cmpl	$2, %eax
	je	.L2
	cmpl	$2, %eax
	jg	.L14
	testl	%eax, %eax
	je	.L4
	cmpl	$1, %eax
	je	.L5
	jmp	.L3
.L4:
.LBB3:
	.loc 1 19 10
	movl	$0, %edi
	call	exit@PLT
.L5:
	.loc 1 23 4
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	.loc 1 24 4
	movq	stdin(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	__fpurge@PLT
	.loc 1 25 4
	leaq	-160(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC4(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	.loc 1 26 8
	leaq	-160(%rbp), %rax
	movq	%rax, %rdi
	call	strlen@PLT
	.loc 1 26 7
	movl	%eax, len(%rip)
	.loc 1 27 8
	leaq	-160(%rbp), %rax
	movq	%rax, %rdi
	call	remove_spaces
	movq	%rax, -168(%rbp)
	.loc 1 28 4
	movq	-168(%rbp), %rax
	movq	%rax, %rdi
	call	puts@PLT
	.loc 1 29 4
	jmp	.L3
.L2:
	.loc 1 32 4
	leaq	.LC5(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	.loc 1 33 4
	leaq	-196(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	.loc 1 34 4
	movq	stdin(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	__fpurge@PLT
	.loc 1 35 4
	movl	-196(%rbp), %eax
	movq	%rsp, %rdx
	movq	%rdx, %rbx
	.loc 1 35 8
	movslq	%eax, %rdx
	subq	$1, %rdx
	movq	%rdx, -184(%rbp)
	movslq	%eax, %rdx
	movq	%rdx, %r12
	movl	$0, %r13d
	movslq	%eax, %rdx
	movq	%rdx, %r14
	movl	$0, %r15d
	cltq
	leaq	0(,%rax,4), %rdx
	movl	$16, %eax
	subq	$1, %rax
	addq	%rdx, %rax
	movl	$16, %ecx
	movl	$0, %edx
	divq	%rcx
	imulq	$16, %rax, %rax
	movq	%rax, %rcx
	andq	$-4096, %rcx
	movq	%rsp, %rdx
	subq	%rcx, %rdx
.L7:
	cmpq	%rdx, %rsp
	je	.L8
	subq	$4096, %rsp
	orq	$0, 4088(%rsp)
	jmp	.L7
.L8:
	movq	%rax, %rdx
	andl	$4095, %edx
	subq	%rdx, %rsp
	movq	%rax, %rdx
	andl	$4095, %edx
	testq	%rdx, %rdx
	je	.L9
	andl	$4095, %eax
	subq	$8, %rax
	addq	%rsp, %rax
	orq	$0, (%rax)
.L9:
	movq	%rsp, %rax
	addq	$3, %rax
	shrq	$2, %rax
	salq	$2, %rax
	movq	%rax, -176(%rbp)
	.loc 1 36 9
	movl	$0, -188(%rbp)
	.loc 1 36 4
	jmp	.L10
.L11:
	.loc 1 38 5 discriminator 3
	leaq	.LC6(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	.loc 1 39 5 discriminator 3
	movl	-188(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-176(%rbp), %rax
	addq	%rdx, %rax
	movq	%rax, %rsi
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	.loc 1 40 5 discriminator 3
	movq	stdin(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	__fpurge@PLT
	.loc 1 36 17 discriminator 3
	addl	$1, -188(%rbp)
.L10:
	.loc 1 36 13 discriminator 1
	movl	-196(%rbp), %eax
	cmpl	%eax, -188(%rbp)
	jl	.L11
	.loc 1 42 4
	leaq	.LC7(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	.loc 1 43 4
	leaq	-192(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	.loc 1 44 4
	movq	stdin(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	__fpurge@PLT
	.loc 1 45 4
	movl	-192(%rbp), %edx
	movl	-196(%rbp), %ecx
	movq	-176(%rbp), %rax
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	rotate_elements
	.loc 1 46 4
	leaq	.LC8(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	.loc 1 47 9
	movl	$0, -188(%rbp)
	.loc 1 47 4
	jmp	.L12
.L13:
	.loc 1 49 5 discriminator 3
	movq	-176(%rbp), %rax
	movl	-188(%rbp), %edx
	movslq	%edx, %rdx
	movl	(%rax,%rdx,4), %eax
	movl	%eax, %esi
	leaq	.LC9(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	.loc 1 47 17 discriminator 3
	addl	$1, -188(%rbp)
.L12:
	.loc 1 47 13 discriminator 1
	movl	-196(%rbp), %eax
	cmpl	%eax, -188(%rbp)
	jl	.L13
	.loc 1 51 4
	nop
	movq	%rbx, %rsp
.L3:
.LBE3:
.LBE2:
	.loc 1 11 2 discriminator 3
	jmp	.L14
	.cfi_endproc
.LFE6:
	.size	main, .-main
	.globl	remove_spaces
	.type	remove_spaces, @function
remove_spaces:
.LFB7:
	.loc 1 56 1
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)
	.loc 1 58 7
	movl	$0, -8(%rbp)
	.loc 1 58 2
	jmp	.L17
.L24:
	.loc 1 60 9
	movq	-24(%rbp), %rax
	movzbl	(%rax), %eax
	.loc 1 60 5
	cmpb	$32, %al
	jne	.L18
	.loc 1 62 9
	movl	$0, -8(%rbp)
	.loc 1 62 4
	jmp	.L19
.L20:
	.loc 1 64 15 discriminator 3
	movl	-8(%rbp), %eax
	cltq
	leaq	1(%rax), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	.loc 1 64 8 discriminator 3
	movl	-8(%rbp), %edx
	movslq	%edx, %rcx
	movq	-24(%rbp), %rdx
	addq	%rcx, %rdx
	.loc 1 64 15 discriminator 3
	movzbl	(%rax), %eax
	.loc 1 64 11 discriminator 3
	movb	%al, (%rdx)
	.loc 1 62 23 discriminator 3
	addl	$1, -8(%rbp)
.L19:
	.loc 1 62 18 discriminator 1
	movl	len(%rip), %eax
	subl	$1, %eax
	.loc 1 62 13 discriminator 1
	cmpl	%eax, -8(%rbp)
	jl	.L20
	.loc 1 66 7
	movl	-8(%rbp), %eax
	movslq	%eax, %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	.loc 1 66 10
	movb	$0, (%rax)
	.loc 1 67 7
	movl	len(%rip), %eax
	subl	$1, %eax
	movl	%eax, len(%rip)
	.loc 1 68 5
	movl	$-1, -8(%rbp)
	.loc 1 69 4
	jmp	.L21
.L18:
	.loc 1 71 10
	movl	-8(%rbp), %eax
	movslq	%eax, %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	.loc 1 71 5
	cmpb	$32, %al
	jne	.L21
	.loc 1 71 25 discriminator 1
	movl	-8(%rbp), %eax
	cltq
	leaq	1(%rax), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	.loc 1 71 19 discriminator 1
	cmpb	$32, %al
	jne	.L21
	.loc 1 73 9
	movl	-8(%rbp), %eax
	movl	%eax, -4(%rbp)
	.loc 1 73 4
	jmp	.L22
.L23:
	.loc 1 75 15 discriminator 3
	movl	-4(%rbp), %eax
	cltq
	leaq	1(%rax), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	.loc 1 75 8 discriminator 3
	movl	-4(%rbp), %edx
	movslq	%edx, %rcx
	movq	-24(%rbp), %rdx
	addq	%rcx, %rdx
	.loc 1 75 15 discriminator 3
	movzbl	(%rax), %eax
	.loc 1 75 11 discriminator 3
	movb	%al, (%rdx)
	.loc 1 73 23 discriminator 3
	addl	$1, -4(%rbp)
.L22:
	.loc 1 73 18 discriminator 1
	movl	len(%rip), %eax
	subl	$1, %eax
	.loc 1 73 13 discriminator 1
	cmpl	%eax, -4(%rbp)
	jl	.L23
	.loc 1 77 7
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	.loc 1 77 10
	movb	$0, (%rax)
	.loc 1 78 7
	movl	len(%rip), %eax
	subl	$1, %eax
	movl	%eax, len(%rip)
	.loc 1 79 5
	subl	$1, -8(%rbp)
	.loc 1 80 4
	nop
.L21:
	.loc 1 58 17 discriminator 2
	addl	$1, -8(%rbp)
.L17:
	.loc 1 58 11 discriminator 1
	movl	len(%rip), %eax
	cmpl	%eax, -8(%rbp)
	jl	.L24
	.loc 1 83 9
	movq	-24(%rbp), %rax
	.loc 1 84 1
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	remove_spaces, .-remove_spaces
	.globl	rotate_elements
	.type	rotate_elements, @function
rotate_elements:
.LFB8:
	.loc 1 86 1
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	movl	%edx, -32(%rbp)
	.loc 1 88 7
	movl	$0, -8(%rbp)
	.loc 1 88 2
	jmp	.L27
.L30:
	.loc 1 90 7
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, -4(%rbp)
	.loc 1 91 8
	movl	$0, -12(%rbp)
	.loc 1 91 3
	jmp	.L28
.L29:
	.loc 1 93 10 discriminator 3
	movl	-12(%rbp), %eax
	cltq
	addq	$1, %rax
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	.loc 1 93 5 discriminator 3
	movl	-12(%rbp), %edx
	movslq	%edx, %rdx
	leaq	0(,%rdx,4), %rcx
	movq	-24(%rbp), %rdx
	addq	%rcx, %rdx
	.loc 1 93 10 discriminator 3
	movl	(%rax), %eax
	.loc 1 93 8 discriminator 3
	movl	%eax, (%rdx)
	.loc 1 91 18 discriminator 3
	addl	$1, -12(%rbp)
.L28:
	.loc 1 91 14 discriminator 1
	movl	-28(%rbp), %eax
	subl	$1, %eax
	.loc 1 91 12 discriminator 1
	cmpl	%eax, -12(%rbp)
	jl	.L29
	.loc 1 95 4 discriminator 2
	movl	-12(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rax, %rdx
	.loc 1 95 7 discriminator 2
	movl	-4(%rbp), %eax
	movl	%eax, (%rdx)
	.loc 1 88 15 discriminator 2
	addl	$1, -8(%rbp)
.L27:
	.loc 1 88 11 discriminator 1
	movl	-8(%rbp), %eax
	cmpl	-32(%rbp), %eax
	jl	.L30
	.loc 1 98 1
	nop
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	rotate_elements, .-rotate_elements
.Letext0:
	.file 2 "/usr/lib/gcc/x86_64-linux-gnu/11/include/stddef.h"
	.file 3 "/usr/include/x86_64-linux-gnu/bits/types.h"
	.file 4 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h"
	.file 5 "/usr/include/x86_64-linux-gnu/bits/types/FILE.h"
	.file 6 "/usr/include/stdio.h"
	.file 7 "/usr/include/string.h"
	.file 8 "/usr/include/stdlib.h"
	.section	.debug_info,"",@progbits
.Ldebug_info0:
	.long	0x497
	.value	0x5
	.byte	0x1
	.byte	0x8
	.long	.Ldebug_abbrev0
	.uleb128 0xf
	.long	.LASF56
	.byte	0x1d
	.long	.LASF0
	.long	.LASF1
	.quad	.Ltext0
	.quad	.Letext0-.Ltext0
	.long	.Ldebug_line0
	.uleb128 0x5
	.long	.LASF9
	.byte	0x2
	.byte	0xd1
	.byte	0x1b
	.long	0x3a
	.uleb128 0x3
	.byte	0x8
	.byte	0x7
	.long	.LASF2
	.uleb128 0x3
	.byte	0x4
	.byte	0x7
	.long	.LASF3
	.uleb128 0x10
	.byte	0x8
	.uleb128 0x3
	.byte	0x1
	.byte	0x8
	.long	.LASF4
	.uleb128 0x3
	.byte	0x2
	.byte	0x7
	.long	.LASF5
	.uleb128 0x3
	.byte	0x1
	.byte	0x6
	.long	.LASF6
	.uleb128 0x3
	.byte	0x2
	.byte	0x5
	.long	.LASF7
	.uleb128 0x11
	.byte	0x4
	.byte	0x5
	.string	"int"
	.uleb128 0x3
	.byte	0x8
	.byte	0x5
	.long	.LASF8
	.uleb128 0x5
	.long	.LASF10
	.byte	0x3
	.byte	0x98
	.byte	0x12
	.long	0x6d
	.uleb128 0x5
	.long	.LASF11
	.byte	0x3
	.byte	0x99
	.byte	0x12
	.long	0x6d
	.uleb128 0x4
	.long	0x91
	.uleb128 0x3
	.byte	0x1
	.byte	0x6
	.long	.LASF12
	.uleb128 0x12
	.long	0x91
	.uleb128 0x13
	.long	.LASF57
	.byte	0xd8
	.byte	0x4
	.byte	0x31
	.byte	0x8
	.long	0x207
	.uleb128 0x1
	.long	.LASF13
	.byte	0x33
	.byte	0x7
	.long	0x66
	.byte	0
	.uleb128 0x1
	.long	.LASF14
	.byte	0x36
	.byte	0x9
	.long	0x8c
	.byte	0x8
	.uleb128 0x1
	.long	.LASF15
	.byte	0x37
	.byte	0x9
	.long	0x8c
	.byte	0x10
	.uleb128 0x1
	.long	.LASF16
	.byte	0x38
	.byte	0x9
	.long	0x8c
	.byte	0x18
	.uleb128 0x1
	.long	.LASF17
	.byte	0x39
	.byte	0x9
	.long	0x8c
	.byte	0x20
	.uleb128 0x1
	.long	.LASF18
	.byte	0x3a
	.byte	0x9
	.long	0x8c
	.byte	0x28
	.uleb128 0x1
	.long	.LASF19
	.byte	0x3b
	.byte	0x9
	.long	0x8c
	.byte	0x30
	.uleb128 0x1
	.long	.LASF20
	.byte	0x3c
	.byte	0x9
	.long	0x8c
	.byte	0x38
	.uleb128 0x1
	.long	.LASF21
	.byte	0x3d
	.byte	0x9
	.long	0x8c
	.byte	0x40
	.uleb128 0x1
	.long	.LASF22
	.byte	0x40
	.byte	0x9
	.long	0x8c
	.byte	0x48
	.uleb128 0x1
	.long	.LASF23
	.byte	0x41
	.byte	0x9
	.long	0x8c
	.byte	0x50
	.uleb128 0x1
	.long	.LASF24
	.byte	0x42
	.byte	0x9
	.long	0x8c
	.byte	0x58
	.uleb128 0x1
	.long	.LASF25
	.byte	0x44
	.byte	0x16
	.long	0x220
	.byte	0x60
	.uleb128 0x1
	.long	.LASF26
	.byte	0x46
	.byte	0x14
	.long	0x225
	.byte	0x68
	.uleb128 0x1
	.long	.LASF27
	.byte	0x48
	.byte	0x7
	.long	0x66
	.byte	0x70
	.uleb128 0x1
	.long	.LASF28
	.byte	0x49
	.byte	0x7
	.long	0x66
	.byte	0x74
	.uleb128 0x1
	.long	.LASF29
	.byte	0x4a
	.byte	0xb
	.long	0x74
	.byte	0x78
	.uleb128 0x1
	.long	.LASF30
	.byte	0x4d
	.byte	0x12
	.long	0x51
	.byte	0x80
	.uleb128 0x1
	.long	.LASF31
	.byte	0x4e
	.byte	0xf
	.long	0x58
	.byte	0x82
	.uleb128 0x1
	.long	.LASF32
	.byte	0x4f
	.byte	0x8
	.long	0x22a
	.byte	0x83
	.uleb128 0x1
	.long	.LASF33
	.byte	0x51
	.byte	0xf
	.long	0x23a
	.byte	0x88
	.uleb128 0x1
	.long	.LASF34
	.byte	0x59
	.byte	0xd
	.long	0x80
	.byte	0x90
	.uleb128 0x1
	.long	.LASF35
	.byte	0x5b
	.byte	0x17
	.long	0x244
	.byte	0x98
	.uleb128 0x1
	.long	.LASF36
	.byte	0x5c
	.byte	0x19
	.long	0x24e
	.byte	0xa0
	.uleb128 0x1
	.long	.LASF37
	.byte	0x5d
	.byte	0x14
	.long	0x225
	.byte	0xa8
	.uleb128 0x1
	.long	.LASF38
	.byte	0x5e
	.byte	0x9
	.long	0x48
	.byte	0xb0
	.uleb128 0x1
	.long	.LASF39
	.byte	0x5f
	.byte	0xa
	.long	0x2e
	.byte	0xb8
	.uleb128 0x1
	.long	.LASF40
	.byte	0x60
	.byte	0x7
	.long	0x66
	.byte	0xc0
	.uleb128 0x1
	.long	.LASF41
	.byte	0x62
	.byte	0x8
	.long	0x253
	.byte	0xc4
	.byte	0
	.uleb128 0x5
	.long	.LASF42
	.byte	0x5
	.byte	0x7
	.byte	0x19
	.long	0x9d
	.uleb128 0x14
	.long	.LASF58
	.byte	0x4
	.byte	0x2b
	.byte	0xe
	.uleb128 0x9
	.long	.LASF43
	.uleb128 0x4
	.long	0x21b
	.uleb128 0x4
	.long	0x9d
	.uleb128 0xa
	.long	0x91
	.long	0x23a
	.uleb128 0xb
	.long	0x3a
	.byte	0
	.byte	0
	.uleb128 0x4
	.long	0x213
	.uleb128 0x9
	.long	.LASF44
	.uleb128 0x4
	.long	0x23f
	.uleb128 0x9
	.long	.LASF45
	.uleb128 0x4
	.long	0x249
	.uleb128 0xa
	.long	0x91
	.long	0x263
	.uleb128 0xb
	.long	0x3a
	.byte	0x13
	.byte	0
	.uleb128 0x15
	.long	.LASF48
	.byte	0x6
	.byte	0x8f
	.byte	0xe
	.long	0x26f
	.uleb128 0x4
	.long	0x207
	.uleb128 0x3
	.byte	0x8
	.byte	0x5
	.long	.LASF46
	.uleb128 0x3
	.byte	0x8
	.byte	0x7
	.long	.LASF47
	.uleb128 0x4
	.long	0x98
	.uleb128 0x16
	.string	"len"
	.byte	0x1
	.byte	0x6
	.byte	0x5
	.long	0x66
	.uleb128 0x9
	.byte	0x3
	.quad	len
	.uleb128 0xc
	.long	.LASF49
	.byte	0x6
	.value	0x164
	.byte	0xc
	.long	0x66
	.long	0x2b5
	.uleb128 0x6
	.long	0x282
	.uleb128 0x7
	.byte	0
	.uleb128 0xc
	.long	.LASF50
	.byte	0x7
	.value	0x197
	.byte	0xf
	.long	0x2e
	.long	0x2cc
	.uleb128 0x6
	.long	0x282
	.byte	0
	.uleb128 0x17
	.long	.LASF51
	.byte	0x8
	.value	0x270
	.byte	0xd
	.long	0x2df
	.uleb128 0x6
	.long	0x66
	.byte	0
	.uleb128 0x18
	.long	.LASF59
	.byte	0x6
	.value	0x1b5
	.byte	0xc
	.long	.LASF60
	.long	0x66
	.long	0x2fb
	.uleb128 0x6
	.long	0x282
	.uleb128 0x7
	.byte	0
	.uleb128 0xd
	.long	.LASF55
	.long	0x66
	.long	0x30a
	.uleb128 0x7
	.byte	0
	.uleb128 0x19
	.long	.LASF53
	.byte	0x1
	.byte	0x55
	.byte	0x6
	.quad	.LFB8
	.quad	.LFE8-.LFB8
	.uleb128 0x1
	.byte	0x9c
	.long	0x374
	.uleb128 0x8
	.string	"c"
	.byte	0x55
	.byte	0x1b
	.long	0x374
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x8
	.string	"n"
	.byte	0x55
	.byte	0x21
	.long	0x66
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x8
	.string	"m"
	.byte	0x55
	.byte	0x27
	.long	0x66
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x1a
	.long	.LASF52
	.byte	0x1
	.byte	0x57
	.byte	0x6
	.long	0x66
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.string	"i"
	.byte	0x57
	.byte	0xb
	.long	0x66
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x2
	.string	"j"
	.byte	0x57
	.byte	0xd
	.long	0x66
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x4
	.long	0x66
	.uleb128 0x1b
	.long	.LASF61
	.byte	0x1
	.byte	0x37
	.byte	0x7
	.long	0x8c
	.quad	.LFB7
	.quad	.LFE7-.LFB7
	.uleb128 0x1
	.byte	0x9c
	.long	0x3c2
	.uleb128 0x8
	.string	"ptr"
	.byte	0x37
	.byte	0x1a
	.long	0x8c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.string	"i"
	.byte	0x39
	.byte	0x6
	.long	0x66
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.string	"j"
	.byte	0x39
	.byte	0x8
	.long	0x66
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.uleb128 0x1c
	.long	.LASF54
	.byte	0x1
	.byte	0x7
	.byte	0x1
	.long	0x66
	.quad	.LFB6
	.quad	.LFE6-.LFB6
	.uleb128 0x1
	.byte	0x9c
	.long	0x47a
	.uleb128 0x2
	.string	"opt"
	.byte	0x9
	.byte	0x6
	.long	0x66
	.uleb128 0x3
	.byte	0x91
	.sleb128 -216
	.uleb128 0xe
	.quad	.LBB2
	.quad	.LBE2-.LBB2
	.uleb128 0xd
	.long	.LASF55
	.long	0x66
	.long	0x413
	.uleb128 0x7
	.byte	0
	.uleb128 0xe
	.quad	.LBB3
	.quad	.LBE3-.LBB3
	.uleb128 0x2
	.string	"arr"
	.byte	0x15
	.byte	0x9
	.long	0x47a
	.uleb128 0x3
	.byte	0x91
	.sleb128 -176
	.uleb128 0x2
	.string	"dst"
	.byte	0x16
	.byte	0xa
	.long	0x8c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -184
	.uleb128 0x2
	.string	"i"
	.byte	0x1f
	.byte	0x8
	.long	0x66
	.uleb128 0x3
	.byte	0x91
	.sleb128 -204
	.uleb128 0x2
	.string	"n"
	.byte	0x1f
	.byte	0xa
	.long	0x66
	.uleb128 0x3
	.byte	0x91
	.sleb128 -212
	.uleb128 0x2
	.string	"m"
	.byte	0x1f
	.byte	0xc
	.long	0x66
	.uleb128 0x3
	.byte	0x91
	.sleb128 -208
	.uleb128 0x2
	.string	"c"
	.byte	0x23
	.byte	0x8
	.long	0x48a
	.uleb128 0x4
	.byte	0x91
	.sleb128 -192
	.byte	0x6
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0xa
	.long	0x91
	.long	0x48a
	.uleb128 0xb
	.long	0x3a
	.byte	0x63
	.byte	0
	.uleb128 0x1d
	.long	0x66
	.uleb128 0x1e
	.long	0x3a
	.uleb128 0x4
	.byte	0x91
	.sleb128 -200
	.byte	0x6
	.byte	0
	.byte	0
	.section	.debug_abbrev,"",@progbits
.Ldebug_abbrev0:
	.uleb128 0x1
	.uleb128 0xd
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 4
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x38
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x2
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x3
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0xe
	.byte	0
	.byte	0
	.uleb128 0x4
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0x21
	.sleb128 8
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x5
	.uleb128 0x16
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x6
	.uleb128 0x5
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x7
	.uleb128 0x18
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x8
	.uleb128 0x5
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x9
	.uleb128 0x13
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3c
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0xa
	.uleb128 0x1
	.byte	0x1
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xb
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0xc
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3c
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xd
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0x21
	.sleb128 13
	.uleb128 0x39
	.uleb128 0x21
	.sleb128 2
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3c
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xe
	.uleb128 0xb
	.byte	0x1
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.byte	0
	.byte	0
	.uleb128 0xf
	.uleb128 0x11
	.byte	0x1
	.uleb128 0x25
	.uleb128 0xe
	.uleb128 0x13
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0x1f
	.uleb128 0x1b
	.uleb128 0x1f
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x10
	.uleb128 0x17
	.byte	0
	.byte	0
	.uleb128 0x10
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x11
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0x8
	.byte	0
	.byte	0
	.uleb128 0x12
	.uleb128 0x26
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x13
	.uleb128 0x13
	.byte	0x1
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x14
	.uleb128 0x16
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x15
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3c
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0x16
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x17
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x87
	.uleb128 0x19
	.uleb128 0x3c
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x18
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x6e
	.uleb128 0xe
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3c
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x19
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x7a
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x1a
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x1b
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x7a
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x1c
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x7c
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x1d
	.uleb128 0x1
	.byte	0x1
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x1e
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0x18
	.byte	0
	.byte	0
	.byte	0
	.section	.debug_aranges,"",@progbits
	.long	0x2c
	.value	0x2
	.long	.Ldebug_info0
	.byte	0x8
	.byte	0
	.value	0
	.value	0
	.quad	.Ltext0
	.quad	.Letext0-.Ltext0
	.quad	0
	.quad	0
	.section	.debug_line,"",@progbits
.Ldebug_line0:
	.section	.debug_str,"MS",@progbits,1
.LASF49:
	.string	"printf"
.LASF10:
	.string	"__off_t"
.LASF14:
	.string	"_IO_read_ptr"
.LASF26:
	.string	"_chain"
.LASF9:
	.string	"size_t"
.LASF32:
	.string	"_shortbuf"
.LASF20:
	.string	"_IO_buf_base"
.LASF47:
	.string	"long long unsigned int"
.LASF35:
	.string	"_codecvt"
.LASF55:
	.string	"__fpurge"
.LASF46:
	.string	"long long int"
.LASF6:
	.string	"signed char"
.LASF27:
	.string	"_fileno"
.LASF15:
	.string	"_IO_read_end"
.LASF8:
	.string	"long int"
.LASF61:
	.string	"remove_spaces"
.LASF13:
	.string	"_flags"
.LASF21:
	.string	"_IO_buf_end"
.LASF30:
	.string	"_cur_column"
.LASF44:
	.string	"_IO_codecvt"
.LASF60:
	.string	"__isoc99_scanf"
.LASF29:
	.string	"_old_offset"
.LASF34:
	.string	"_offset"
.LASF59:
	.string	"scanf"
.LASF52:
	.string	"temp"
.LASF43:
	.string	"_IO_marker"
.LASF48:
	.string	"stdin"
.LASF3:
	.string	"unsigned int"
.LASF38:
	.string	"_freeres_buf"
.LASF50:
	.string	"strlen"
.LASF2:
	.string	"long unsigned int"
.LASF18:
	.string	"_IO_write_ptr"
.LASF5:
	.string	"short unsigned int"
.LASF22:
	.string	"_IO_save_base"
.LASF33:
	.string	"_lock"
.LASF28:
	.string	"_flags2"
.LASF40:
	.string	"_mode"
.LASF56:
	.string	"GNU C17 11.3.0 -mtune=generic -march=x86-64 -g -fasynchronous-unwind-tables -fstack-protector-strong -fstack-clash-protection -fcf-protection"
.LASF19:
	.string	"_IO_write_end"
.LASF58:
	.string	"_IO_lock_t"
.LASF57:
	.string	"_IO_FILE"
.LASF25:
	.string	"_markers"
.LASF4:
	.string	"unsigned char"
.LASF7:
	.string	"short int"
.LASF45:
	.string	"_IO_wide_data"
.LASF31:
	.string	"_vtable_offset"
.LASF42:
	.string	"FILE"
.LASF51:
	.string	"exit"
.LASF12:
	.string	"char"
.LASF11:
	.string	"__off64_t"
.LASF16:
	.string	"_IO_read_base"
.LASF24:
	.string	"_IO_save_end"
.LASF39:
	.string	"__pad5"
.LASF41:
	.string	"_unused2"
.LASF23:
	.string	"_IO_backup_base"
.LASF37:
	.string	"_freeres_list"
.LASF36:
	.string	"_wide_data"
.LASF53:
	.string	"rotate_elements"
.LASF54:
	.string	"main"
.LASF17:
	.string	"_IO_write_base"
	.section	.debug_line_str,"MS",@progbits,1
.LASF0:
	.string	"assignment_nov_14.c"
.LASF1:
	.string	"/home/engineer/c/C_assignments"
	.ident	"GCC: (Ubuntu 11.3.0-1ubuntu1~22.04) 11.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	1f - 0f
	.long	4f - 1f
	.long	5
0:
	.string	"GNU"
1:
	.align 8
	.long	0xc0000002
	.long	3f - 2f
2:
	.long	0x3
3:
	.align 8
4:
