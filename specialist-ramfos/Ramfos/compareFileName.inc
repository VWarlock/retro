;+---------------------------------------------------------------------------
; RAMFOS
; �������� ��� �������� ����� � ������ �������� �������������. 
; � �����������, ���� �������, �� ������� ����.
;
; �� �����
;  v_header  - ���� 1, ������� ����� ������, ���� b & 20h
;  v_header2 - ���� 2
;
; �� ������
;  jz        - ���� ������. �� ���� b & 20h, �� ����� ������������.
;
; 2013-11-01 ����������������� vinxru
;----------------------------------------------------------------------------

compareFileName:; �������� �������������� � ����� ������ 
		lxi	h, v_header2
		lxi	d, v_header
		mvi	c, 15
		call	memcmp_hl_de_c
		rnz

		; ���� (b & 20h)==0 ������� (�� �������)
		mov	a, b
		ani	20h
		rz

		; ��������� � ������� fileDelete