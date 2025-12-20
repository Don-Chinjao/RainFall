
./bonus3:     file format elf32-i386


Disassembly of section .init:

0804836c <_init>:
 804836c:	53                   	push   ebx
 804836d:	83 ec 08             	sub    esp,0x8
 8048370:	e8 00 00 00 00       	call   8048375 <_init+0x9>
 8048375:	5b                   	pop    ebx
 8048376:	81 c3 83 15 00 00    	add    ebx,0x1583
 804837c:	8b 83 fc ff ff ff    	mov    eax,DWORD PTR [ebx-0x4]
 8048382:	85 c0                	test   eax,eax
 8048384:	74 05                	je     804838b <_init+0x1f>
 8048386:	e8 65 00 00 00       	call   80483f0 <__gmon_start__@plt>
 804838b:	e8 40 01 00 00       	call   80484d0 <frame_dummy>
 8048390:	e8 0b 03 00 00       	call   80486a0 <__do_global_ctors_aux>
 8048395:	83 c4 08             	add    esp,0x8
 8048398:	5b                   	pop    ebx
 8048399:	c3                   	ret

Disassembly of section .plt:

080483a0 <.plt>:
 80483a0:	ff 35 fc 98 04 08    	push   DWORD PTR ds:0x80498fc
 80483a6:	ff 25 00 99 04 08    	jmp    DWORD PTR ds:0x8049900
 80483ac:	00 00                	add    BYTE PTR [eax],al
	...

080483b0 <strcmp@plt>:
 80483b0:	ff 25 04 99 04 08    	jmp    DWORD PTR ds:0x8049904
 80483b6:	68 00 00 00 00       	push   0x0
 80483bb:	e9 e0 ff ff ff       	jmp    80483a0 <.plt>

080483c0 <fclose@plt>:
 80483c0:	ff 25 08 99 04 08    	jmp    DWORD PTR ds:0x8049908
 80483c6:	68 08 00 00 00       	push   0x8
 80483cb:	e9 d0 ff ff ff       	jmp    80483a0 <.plt>

080483d0 <fread@plt>:
 80483d0:	ff 25 0c 99 04 08    	jmp    DWORD PTR ds:0x804990c
 80483d6:	68 10 00 00 00       	push   0x10
 80483db:	e9 c0 ff ff ff       	jmp    80483a0 <.plt>

080483e0 <puts@plt>:
 80483e0:	ff 25 10 99 04 08    	jmp    DWORD PTR ds:0x8049910
 80483e6:	68 18 00 00 00       	push   0x18
 80483eb:	e9 b0 ff ff ff       	jmp    80483a0 <.plt>

080483f0 <__gmon_start__@plt>:
 80483f0:	ff 25 14 99 04 08    	jmp    DWORD PTR ds:0x8049914
 80483f6:	68 20 00 00 00       	push   0x20
 80483fb:	e9 a0 ff ff ff       	jmp    80483a0 <.plt>

08048400 <__libc_start_main@plt>:
 8048400:	ff 25 18 99 04 08    	jmp    DWORD PTR ds:0x8049918
 8048406:	68 28 00 00 00       	push   0x28
 804840b:	e9 90 ff ff ff       	jmp    80483a0 <.plt>

08048410 <fopen@plt>:
 8048410:	ff 25 1c 99 04 08    	jmp    DWORD PTR ds:0x804991c
 8048416:	68 30 00 00 00       	push   0x30
 804841b:	e9 80 ff ff ff       	jmp    80483a0 <.plt>

08048420 <execl@plt>:
 8048420:	ff 25 20 99 04 08    	jmp    DWORD PTR ds:0x8049920
 8048426:	68 38 00 00 00       	push   0x38
 804842b:	e9 70 ff ff ff       	jmp    80483a0 <.plt>

08048430 <atoi@plt>:
 8048430:	ff 25 24 99 04 08    	jmp    DWORD PTR ds:0x8049924
 8048436:	68 40 00 00 00       	push   0x40
 804843b:	e9 60 ff ff ff       	jmp    80483a0 <.plt>

Disassembly of section .text:

08048440 <_start>:
 8048440:	31 ed                	xor    ebp,ebp
 8048442:	5e                   	pop    esi
 8048443:	89 e1                	mov    ecx,esp
 8048445:	83 e4 f0             	and    esp,0xfffffff0
 8048448:	50                   	push   eax
 8048449:	54                   	push   esp
 804844a:	52                   	push   edx
 804844b:	68 90 86 04 08       	push   0x8048690
 8048450:	68 20 86 04 08       	push   0x8048620
 8048455:	51                   	push   ecx
 8048456:	56                   	push   esi
 8048457:	68 f4 84 04 08       	push   0x80484f4
 804845c:	e8 9f ff ff ff       	call   8048400 <__libc_start_main@plt>
 8048461:	f4                   	hlt
 8048462:	90                   	nop
 8048463:	90                   	nop
 8048464:	90                   	nop
 8048465:	90                   	nop
 8048466:	90                   	nop
 8048467:	90                   	nop
 8048468:	90                   	nop
 8048469:	90                   	nop
 804846a:	90                   	nop
 804846b:	90                   	nop
 804846c:	90                   	nop
 804846d:	90                   	nop
 804846e:	90                   	nop
 804846f:	90                   	nop

08048470 <__do_global_dtors_aux>:
 8048470:	55                   	push   ebp
 8048471:	89 e5                	mov    ebp,esp
 8048473:	53                   	push   ebx
 8048474:	83 ec 04             	sub    esp,0x4
 8048477:	80 3d 30 99 04 08 00 	cmp    BYTE PTR ds:0x8049930,0x0
 804847e:	75 3f                	jne    80484bf <__do_global_dtors_aux+0x4f>
 8048480:	a1 34 99 04 08       	mov    eax,ds:0x8049934
 8048485:	bb 24 98 04 08       	mov    ebx,0x8049824
 804848a:	81 eb 20 98 04 08    	sub    ebx,0x8049820
 8048490:	c1 fb 02             	sar    ebx,0x2
 8048493:	83 eb 01             	sub    ebx,0x1
 8048496:	39 d8                	cmp    eax,ebx
 8048498:	73 1e                	jae    80484b8 <__do_global_dtors_aux+0x48>
 804849a:	8d b6 00 00 00 00    	lea    esi,[esi+0x0]
 80484a0:	83 c0 01             	add    eax,0x1
 80484a3:	a3 34 99 04 08       	mov    ds:0x8049934,eax
 80484a8:	ff 14 85 20 98 04 08 	call   DWORD PTR [eax*4+0x8049820]
 80484af:	a1 34 99 04 08       	mov    eax,ds:0x8049934
 80484b4:	39 d8                	cmp    eax,ebx
 80484b6:	72 e8                	jb     80484a0 <__do_global_dtors_aux+0x30>
 80484b8:	c6 05 30 99 04 08 01 	mov    BYTE PTR ds:0x8049930,0x1
 80484bf:	83 c4 04             	add    esp,0x4
 80484c2:	5b                   	pop    ebx
 80484c3:	5d                   	pop    ebp
 80484c4:	c3                   	ret
 80484c5:	8d 74 26 00          	lea    esi,[esi+eiz*1+0x0]
 80484c9:	8d bc 27 00 00 00 00 	lea    edi,[edi+eiz*1+0x0]

080484d0 <frame_dummy>:
 80484d0:	55                   	push   ebp
 80484d1:	89 e5                	mov    ebp,esp
 80484d3:	83 ec 18             	sub    esp,0x18
 80484d6:	a1 28 98 04 08       	mov    eax,ds:0x8049828
 80484db:	85 c0                	test   eax,eax
 80484dd:	74 12                	je     80484f1 <frame_dummy+0x21>
 80484df:	b8 00 00 00 00       	mov    eax,0x0
 80484e4:	85 c0                	test   eax,eax
 80484e6:	74 09                	je     80484f1 <frame_dummy+0x21>
 80484e8:	c7 04 24 28 98 04 08 	mov    DWORD PTR [esp],0x8049828
 80484ef:	ff d0                	call   eax
 80484f1:	c9                   	leave
 80484f2:	c3                   	ret
 80484f3:	90                   	nop

080484f4 <main>:
 80484f4:	55                   	push   ebp
 80484f5:	89 e5                	mov    ebp,esp
 80484f7:	57                   	push   edi
 80484f8:	53                   	push   ebx
 80484f9:	83 e4 f0             	and    esp,0xfffffff0
 80484fc:	81 ec a0 00 00 00    	sub    esp,0xa0
 8048502:	ba f0 86 04 08       	mov    edx,0x80486f0
 8048507:	b8 f2 86 04 08       	mov    eax,0x80486f2
 804850c:	89 54 24 04          	mov    DWORD PTR [esp+0x4],edx
 8048510:	89 04 24             	mov    DWORD PTR [esp],eax
 8048513:	e8 f8 fe ff ff       	call   8048410 <fopen@plt>
 8048518:	89 84 24 9c 00 00 00 	mov    DWORD PTR [esp+0x9c],eax
 804851f:	8d 5c 24 18          	lea    ebx,[esp+0x18]
 8048523:	b8 00 00 00 00       	mov    eax,0x0
 8048528:	ba 21 00 00 00       	mov    edx,0x21
 804852d:	89 df                	mov    edi,ebx
 804852f:	89 d1                	mov    ecx,edx
 8048531:	f3 ab                	rep stos DWORD PTR es:[edi],eax
 8048533:	83 bc 24 9c 00 00 00 	cmp    DWORD PTR [esp+0x9c],0x0
 804853a:	00 
 804853b:	74 06                	je     8048543 <main+0x4f>
 804853d:	83 7d 08 02          	cmp    DWORD PTR [ebp+0x8],0x2
 8048541:	74 0a                	je     804854d <main+0x59>
 8048543: +0x4f	b8 ff ff ff ff       	mov    eax,0xffffffff
 8048548:	e9 c8 00 00 00       	jmp    8048615 <main+0x121>
 804854d: +0x59	8d 44 24 18          	lea    eax,[esp+0x18]
 8048551:	8b 94 24 9c 00 00 00 	mov    edx,DWORD PTR [esp+0x9c]
 8048558:	89 54 24 0c          	mov    DWORD PTR [esp+0xc],edx
 804855c:	c7 44 24 08 42 00 00 	mov    DWORD PTR [esp+0x8],0x42
 8048563:	00 
 8048564:	c7 44 24 04 01 00 00 	mov    DWORD PTR [esp+0x4],0x1
 804856b:	00 
 804856c:	89 04 24             	mov    DWORD PTR [esp],eax
 804856f:	e8 5c fe ff ff       	call   80483d0 <fread@plt>
 8048574:	c6 44 24 59 00       	mov    BYTE PTR [esp+0x59],0x0
 8048579:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
 804857c:	83 c0 04             	add    eax,0x4
 804857f:	8b 00                	mov    eax,DWORD PTR [eax]
 8048581:	89 04 24             	mov    DWORD PTR [esp],eax
 8048584:	e8 a7 fe ff ff       	call   8048430 <atoi@plt>
 8048589:	c6 44 04 18 00       	mov    BYTE PTR [esp+eax*1+0x18],0x0
 804858e:	8d 44 24 18          	lea    eax,[esp+0x18]
 8048592:	8d 50 42             	lea    edx,[eax+0x42]
 8048595:	8b 84 24 9c 00 00 00 	mov    eax,DWORD PTR [esp+0x9c]
 804859c:	89 44 24 0c          	mov    DWORD PTR [esp+0xc],eax
 80485a0:	c7 44 24 08 41 00 00 	mov    DWORD PTR [esp+0x8],0x41
 80485a7:	00 
 80485a8:	c7 44 24 04 01 00 00 	mov    DWORD PTR [esp+0x4],0x1
 80485af:	00 
 80485b0:	89 14 24             	mov    DWORD PTR [esp],edx
 80485b3:	e8 18 fe ff ff       	call   80483d0 <fread@plt>
 80485b8:	8b 84 24 9c 00 00 00 	mov    eax,DWORD PTR [esp+0x9c]
 80485bf:	89 04 24             	mov    DWORD PTR [esp],eax
 80485c2:	e8 f9 fd ff ff       	call   80483c0 <fclose@plt>
 80485c7:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
 80485ca:	83 c0 04             	add    eax,0x4
 80485cd:	8b 00                	mov    eax,DWORD PTR [eax]
 80485cf:	89 44 24 04          	mov    DWORD PTR [esp+0x4],eax
 80485d3:	8d 44 24 18          	lea    eax,[esp+0x18]
 80485d7:	89 04 24             	mov    DWORD PTR [esp],eax
 80485da:	e8 d1 fd ff ff       	call   80483b0 <strcmp@plt>
 80485df:	85 c0                	test   eax,eax
 80485e1:	75 1e                	jne    8048601 <main+0x10d>
 80485e3:	c7 44 24 08 00 00 00 	mov    DWORD PTR [esp+0x8],0x0
 80485ea:	00 
 80485eb:	c7 44 24 04 07 87 04 	mov    DWORD PTR [esp+0x4],0x8048707
 80485f2:	08 
 80485f3:	c7 04 24 0a 87 04 08 	mov    DWORD PTR [esp],0x804870a
 80485fa:	e8 21 fe ff ff       	call   8048420 <execl@plt>
 80485ff:	eb 0f                	jmp    8048610 <main+0x11c>
 8048601:	8d 44 24 18          	lea    eax,[esp+0x18]
 8048605:	83 c0 42             	add    eax,0x42
 8048608:	89 04 24             	mov    DWORD PTR [esp],eax
 804860b:	e8 d0 fd ff ff       	call   80483e0 <puts@plt>
 8048610:	b8 00 00 00 00       	mov    eax,0x0
 8048615:	8d 65 f8             	lea    esp,[ebp-0x8]
 8048618:	5b                   	pop    ebx
 8048619:	5f                   	pop    edi
 804861a:	5d                   	pop    ebp
 804861b:	c3                   	ret
 804861c:	90                   	nop
 804861d:	90                   	nop
 804861e:	90                   	nop
 804861f:	90                   	nop

08048620 <__libc_csu_init>:
 8048620:	55                   	push   ebp
 8048621:	57                   	push   edi
 8048622:	56                   	push   esi
 8048623:	53                   	push   ebx
 8048624:	e8 69 00 00 00       	call   8048692 <__i686.get_pc_thunk.bx>
 8048629:	81 c3 cf 12 00 00    	add    ebx,0x12cf
 804862f:	83 ec 1c             	sub    esp,0x1c
 8048632:	8b 6c 24 30          	mov    ebp,DWORD PTR [esp+0x30]
 8048636:	8d bb 20 ff ff ff    	lea    edi,[ebx-0xe0]
 804863c:	e8 2b fd ff ff       	call   804836c <_init>
 8048641:	8d 83 20 ff ff ff    	lea    eax,[ebx-0xe0]
 8048647:	29 c7                	sub    edi,eax
 8048649:	c1 ff 02             	sar    edi,0x2
 804864c:	85 ff                	test   edi,edi
 804864e:	74 29                	je     8048679 <__libc_csu_init+0x59>
 8048650:	31 f6                	xor    esi,esi
 8048652:	8d b6 00 00 00 00    	lea    esi,[esi+0x0]
 8048658:	8b 44 24 38          	mov    eax,DWORD PTR [esp+0x38]
 804865c:	89 2c 24             	mov    DWORD PTR [esp],ebp
 804865f:	89 44 24 08          	mov    DWORD PTR [esp+0x8],eax
 8048663:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
 8048667:	89 44 24 04          	mov    DWORD PTR [esp+0x4],eax
 804866b:	ff 94 b3 20 ff ff ff 	call   DWORD PTR [ebx+esi*4-0xe0]
 8048672:	83 c6 01             	add    esi,0x1
 8048675:	39 fe                	cmp    esi,edi
 8048677:	75 df                	jne    8048658 <__libc_csu_init+0x38>
 8048679:	83 c4 1c             	add    esp,0x1c
 804867c:	5b                   	pop    ebx
 804867d:	5e                   	pop    esi
 804867e:	5f                   	pop    edi
 804867f:	5d                   	pop    ebp
 8048680:	c3                   	ret
 8048681:	eb 0d                	jmp    8048690 <__libc_csu_fini>
 8048683:	90                   	nop
 8048684:	90                   	nop
 8048685:	90                   	nop
 8048686:	90                   	nop
 8048687:	90                   	nop
 8048688:	90                   	nop
 8048689:	90                   	nop
 804868a:	90                   	nop
 804868b:	90                   	nop
 804868c:	90                   	nop
 804868d:	90                   	nop
 804868e:	90                   	nop
 804868f:	90                   	nop

08048690 <__libc_csu_fini>:
 8048690:	f3 c3                	repz ret

08048692 <__i686.get_pc_thunk.bx>:
 8048692:	8b 1c 24             	mov    ebx,DWORD PTR [esp]
 8048695:	c3                   	ret
 8048696:	90                   	nop
 8048697:	90                   	nop
 8048698:	90                   	nop
 8048699:	90                   	nop
 804869a:	90                   	nop
 804869b:	90                   	nop
 804869c:	90                   	nop
 804869d:	90                   	nop
 804869e:	90                   	nop
 804869f:	90                   	nop

080486a0 <__do_global_ctors_aux>:
 80486a0:	55                   	push   ebp
 80486a1:	89 e5                	mov    ebp,esp
 80486a3:	53                   	push   ebx
 80486a4:	83 ec 04             	sub    esp,0x4
 80486a7:	a1 18 98 04 08       	mov    eax,ds:0x8049818
 80486ac:	83 f8 ff             	cmp    eax,0xffffffff
 80486af:	74 13                	je     80486c4 <__do_global_ctors_aux+0x24>
 80486b1:	bb 18 98 04 08       	mov    ebx,0x8049818
 80486b6:	66 90                	xchg   ax,ax
 80486b8:	83 eb 04             	sub    ebx,0x4
 80486bb:	ff d0                	call   eax
 80486bd:	8b 03                	mov    eax,DWORD PTR [ebx]
 80486bf:	83 f8 ff             	cmp    eax,0xffffffff
 80486c2:	75 f4                	jne    80486b8 <__do_global_ctors_aux+0x18>
 80486c4:	83 c4 04             	add    esp,0x4
 80486c7:	5b                   	pop    ebx
 80486c8:	5d                   	pop    ebp
 80486c9:	c3                   	ret
 80486ca:	90                   	nop
 80486cb:	90                   	nop

Disassembly of section .fini:

080486cc <_fini>:
 80486cc:	53                   	push   ebx
 80486cd:	83 ec 08             	sub    esp,0x8
 80486d0:	e8 00 00 00 00       	call   80486d5 <_fini+0x9>
 80486d5:	5b                   	pop    ebx
 80486d6:	81 c3 23 12 00 00    	add    ebx,0x1223
 80486dc:	e8 8f fd ff ff       	call   8048470 <__do_global_dtors_aux>
 80486e1:	83 c4 08             	add    esp,0x8
 80486e4:	5b                   	pop    ebx
 80486e5:	c3                   	ret
