#
# Makefile for ALSA
#

obj-$(CONFIG_SND_SA11XX_UDA1341) += snd-sa11xx-uda1341.o 
snd-sa11xx-uda1341-objs		:= sa11xx-uda1341.o

obj-$(CONFIG_SND_ARMAACI)	+= snd-aaci.o
snd-aaci-objs			:= aaci.o devdma.o

obj-$(CONFIG_SND_PXA2XX_PCM)	+= snd-pxa2xx-pcm.o
snd-pxa2xx-pcm-objs		:= pxa2xx-pcm.o

obj-$(CONFIG_SND_PXA2XX_AC97)	+= snd-pxa2xx-ac97.o
snd-pxa2xx-ac97-objs		:= pxa2xx-ac97.o

#
# Define the header file locations for PMIC drivers.
#
CFLAGS_mxc-alsa-pmic.o  = -I$(TOPDIR)/drivers/mxc
obj-$(CONFIG_SND_MXC_PMIC)	+= snd-mxc-alsa.o
snd-mxc-alsa-objs		:= mxc-alsa-pmic.o mxc-alsa-mixer.o

CFLGS_mxc_alsa_spdif.o = -I$(TOPDIR)/drivers/mxc
obj-$(CONFIG_SND_MXC_SPDIF)    += snd-spdif.o
snd-spdif-objs                 := mxc-alsa-spdif.o
