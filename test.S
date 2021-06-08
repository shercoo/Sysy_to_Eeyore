
var 48 T0
var T1
var T2
var t0
var t1
var t2
var T3
var t3
var t4
var t5
var t6
var t7
var t8
var t9
var t10
var t11
var t12
T0[0]=1
T0[4]=2
T0[16]=3
T0[20]=4
T0[32]=5
T0[36]=6
f_main [0]
	T1=0
	T2=0
	l0:
	t0=3+4
	t1=t0-2
	t2=T1<=t1
	if t2==0 goto l2
		l1:
		T3=T1
		l3:
		t3=T3>=0
		if t3==0 goto l5
			l4:
			t4=T3<4
			if t4==0 goto l7
			l8:
			t5=T1-T3
			t6=t5<3
			if t6==0 goto l7
			l6:
				t7=T1-T3
				t8=t7*4
				t9=t8+T3
				t10=T0[t9]
				t10=T2
				T2=1
			l7:
			t11=T3-1
			T3=t11
			goto l3
		l5:
		t12=T1+1
		T1=t12
		goto l0
	l2:
end f_main


