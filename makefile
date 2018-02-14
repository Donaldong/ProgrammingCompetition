include makefile.base

.PHONY: packet.dvi

packet.dvi: 
	$(call dvi,packet)

packet.pdf:
	$(call pdf,packet)
