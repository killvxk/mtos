#define	IOAPIC_ID		0x00
#define	IOAPIC_VER		0x01
#define	IOAPIC_ARB		0x02
#define	IOAPIC_REDTBL	0x10

#define IOAPIC_FLAG_LOGICAL		1 << 11
#define IOAPIC_FLAG_PHYSICAL	0 << 11

#define IOAPIC_FLAG_LOWACTIVE	1 << 13
#define IOAPIC_FLAG_HIGHACTIVE	0 << 13

#define IOAPIC_FLAG_LEVELSENSE	1 << 15	
#define IOAPIC_FLAG_EDGESENSE	0 << 15	
		
#define IOAPIC_FLAG_ENABLEINT	1 << 16

#define IOAPIC_FLAG_MASK (IOAPIC_FLAG_LOGICAL  | IOAPIC_FLAG_LOWACTIVE  | IOAPIC_FLAG_LEVELSENSE | IOAPIC_FLAG_ENABLEINT)

#define IOAPIC_DELIVERY_FIXED			0
#define IOAPIC_DELIVERY_LOWPRIORITY		1
#define IOAPIC_DELIVERY_SMI				2
#define IOAPIC_DELIVERY_NMI				4
#define	IOAPIC_DELIVERY_INIT			5
#define IOAPIC_DELIVERY_EXTINT			7

EXPORTSTART
	void IoApicWrite(UINT32* IoApicBase, UINT32 offset, UINT32 val);
	UINT32 IoApicRead(UINT32* IoApicBase, UINT32 offset);
	UINT32	IoApicGetId(IOAPIC *IoApic);
	UINT32	IoApicGetVersion(IOAPIC *IoApic);
	UINT32	IoApicGetArb(IOAPIC *IoApic);
	UINT64	IoApicReadRedir(IOAPIC *IoApic, UINT32 offset);
	void	IoApicWriteRedir(IOAPIC *IoApic, UINT32 offset,UINT64 val);
	void	IoApicWriteRedirEntry(IOAPIC *IoApic, UINT32 offset, UINT32 IntVector, UINT32 DeliveryMode, UINT32 Flags, UINT32 DestField );
	UINT64	IoApicReadRedirEntry(IOAPIC *IoApic, UINT32 offset);
	void	IoApicInit(void);
EXPORTEND