;+---------------------------------------------------------------------------
; MXOS
; ��������� ��������� ����� ��� ������ ������� (�����������)
;
; 2013-12-12 ����������������� vinxru
;----------------------------------------------------------------------------

; ---------------------------------------------------------------------------
; ��������� ESC+F

printChar_eF:	mvi	a, 80h
		sta	v_escMode
		ret