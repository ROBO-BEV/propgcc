// AR 0 to AR 47 can be accessed only by M unit.
	mov.i r1 = ar0
	mov.i r1 = ar1
	mov.i r1 = ar2
	mov.i r1 = ar3
	mov.i r1 = ar4
	mov.i r1 = ar5
	mov.i r1 = ar6
	mov.i r1 = ar7
	mov.i r1 = ar8
	mov.i r1 = ar9
	mov.i r1 = ar10
	mov.i r1 = ar11
	mov.i r1 = ar12
	mov.i r1 = ar13
	mov.i r1 = ar14
	mov.i r1 = ar15
	mov.i r1 = ar16
	mov.i r1 = ar17
	mov.i r1 = ar18
	mov.i r1 = ar19
	mov.i r1 = ar20
	mov.i r1 = ar21
	mov.i r1 = ar22
	mov.i r1 = ar23
	mov.i r1 = ar24
	mov.i r1 = ar25
	mov.i r1 = ar26
	mov.i r1 = ar27
	mov.i r1 = ar28
	mov.i r1 = ar29
	mov.i r1 = ar30
	mov.i r1 = ar31
	mov.i r1 = ar32
	mov.i r1 = ar33
	mov.i r1 = ar34
	mov.i r1 = ar35
	mov.i r1 = ar36
	mov.i r1 = ar37
	mov.i r1 = ar38
	mov.i r1 = ar39
	mov.i r1 = ar40
	mov.i r1 = ar41
	mov.i r1 = ar42
	mov.i r1 = ar43
	mov.i r1 = ar44
	mov.i r1 = ar45
	mov.i r1 = ar46
	mov.i r1 = ar47

// AR 48 to 63 can be accessed by I or M units.

// AR 64 to AR 111 can be accessed only by I unit.
	mov.m r1 = ar64
	mov.m r1 = ar65
	mov.m r1 = ar66
	mov.m r1 = ar67
	mov.m r1 = ar68
	mov.m r1 = ar69
	mov.m r1 = ar70
	mov.m r1 = ar71
	mov.m r1 = ar72
	mov.m r1 = ar73
	mov.m r1 = ar74
	mov.m r1 = ar75
	mov.m r1 = ar76
	mov.m r1 = ar77
	mov.m r1 = ar78
	mov.m r1 = ar79
	mov.m r1 = ar80
	mov.m r1 = ar81
	mov.m r1 = ar82
	mov.m r1 = ar83
	mov.m r1 = ar84
	mov.m r1 = ar85
	mov.m r1 = ar86
	mov.m r1 = ar87
	mov.m r1 = ar88
	mov.m r1 = ar89
	mov.m r1 = ar90
	mov.m r1 = ar91
	mov.m r1 = ar92
	mov.m r1 = ar93
	mov.m r1 = ar94
	mov.m r1 = ar95
	mov.m r1 = ar96
	mov.m r1 = ar97
	mov.m r1 = ar98
	mov.m r1 = ar99
	mov.m r1 = ar100
	mov.m r1 = ar101
	mov.m r1 = ar102
	mov.m r1 = ar103
	mov.m r1 = ar104
	mov.m r1 = ar105
	mov.m r1 = ar106
	mov.m r1 = ar107
	mov.m r1 = ar108
	mov.m r1 = ar109
	mov.m r1 = ar110
	mov.m r1 = ar111

// AR 112 to 127 can be accessed by I or M units.

// AR K0 to AR ITC can be accessed only by M unit.
	mov.i r1 = ar.k0
	mov.i r1 = ar.k1
	mov.i r1 = ar.k2
	mov.i r1 = ar.k3
	mov.i r1 = ar.k4
	mov.i r1 = ar.k5
	mov.i r1 = ar.k6
	mov.i r1 = ar.k7
	mov.i r1 = ar.rsc
	mov.i r1 = ar.bsp
	mov.i r1 = ar.bspstore
	mov.i r1 = ar.rnat
	mov.i r1 = ar.fcr
	mov.i r1 = ar.eflag
	mov.i r1 = ar.csd
	mov.i r1 = ar.ssd
	mov.i r1 = ar.cflg
	mov.i r1 = ar.fsr
	mov.i r1 = ar.fir
	mov.i r1 = ar.fdr
	mov.i r1 = ar.ccv
	mov.i r1 = ar.unat
	mov.i r1 = ar.fpsr
	mov.i r1 = ar.itc
	mov.i r1 = ar.ruc

// AR PFS, LC and EC can be accessed only by I unit.
	mov.m r1 = ar.pfs
	mov.m r1 = ar.lc
	mov.m r1 = ar.ec
