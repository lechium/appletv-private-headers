/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
 */

#import "PrintKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSFileHandle, NSMutableArray;
@protocol PKPrinterBrowserDelegate, OS_dispatch_queue;

@interface PKPrinterBrowser : NSObject {
	id<PKPrinterBrowserDelegate> delegate;	// 4 = 0x4
	DNSServiceRef_tRef mainBrowserRef;	// 8 = 0x8
	DNSServiceRef_tRef ippBrowserRef;	// 12 = 0xc
	DNSServiceRef_tRef ippsBrowserRef;	// 16 = 0x10
	DNSServiceRef_tRef localippBrowserRef;	// 20 = 0x14
	DNSServiceRef_tRef localippsBrowserRef;	// 24 = 0x18
	NSMutableDictionary *printers;	// 28 = 0x1c
	NSMutableDictionary *printersByUUID;	// 32 = 0x20
	NSFileHandle *handle;	// 36 = 0x24
	unsigned char originalCellFlag;	// 40 = 0x28
	unsigned char originalWifiFlag;	// 41 = 0x29
	NSObject<OS_dispatch_queue> *printersQueue;	// 44 = 0x2c
	NSMutableArray *pendingList;	// 48 = 0x30
}
@property(assign, nonatomic) id<PKPrinterBrowserDelegate> delegate;	// G=0x3590c459; S=0x3590c469; @synthesize
@property(retain, nonatomic) NSFileHandle *handle;	// G=0x3590c479; S=0x3590c489; @synthesize
@property(retain, nonatomic) NSMutableArray *pendingList;	// G=0x3590c4c9; S=0x3590c4d9; @synthesize
@property(retain, nonatomic) NSMutableDictionary *printers;	// G=0x3590c499; S=0x3590c4a9; @synthesize
@property(retain, nonatomic) NSMutableDictionary *printersByUUID;	// G=0x3590c4e9; S=0x3590c4f9; @synthesize
@property(readonly, assign, nonatomic) NSObject<OS_dispatch_queue> *printersQueue;	// G=0x3590c4b9; @synthesize
+ (id)browserWithDelegate:(id)delegate;	// 0x3590ac15
- (id)initWithDelegate:(id)delegate;	// 0x3590ac5d
- (void)addBlockToPendingList:(id)pendingList;	// 0x3590b9c9
- (void)addLimboPrinter:(id)printer local:(BOOL)local;	// 0x3590b301
- (void)addQueryResult:(id)result toPrinter:(id)printer;	// 0x3590b665
- (void)browseCallback:(unsigned)callback interface:(unsigned)interface name:(const char *)name regType:(const char *)type domain:(const char *)domain;	// 0x3590bb75
- (void)browseLocalCallback:(unsigned)callback interface:(unsigned)interface name:(const char *)name regType:(const char *)type domain:(const char *)domain;	// 0x3590bd1d
- (void)dealloc;	// 0x3590afcd
// declared property getter: - (id)delegate;	// 0x3590c459
// declared property getter: - (id)handle;	// 0x3590c479
// declared property getter: - (id)pendingList;	// 0x3590c4c9
// declared property getter: - (id)printers;	// 0x3590c499
// declared property getter: - (id)printersByUUID;	// 0x3590c4e9
// declared property getter: - (id)printersQueue;	// 0x3590c4b9
- (void)queryCallback:(int)callback flags:(unsigned)flags fullName:(const char *)name rdlen:(unsigned short)rdlen rdata:(const void *)rdata;	// 0x3590bec5
- (void)queryHardcodedPrinters;	// 0x3590c0c9
- (void)reissueTXTQuery:(id)query;	// 0x3590b551
- (void)removePrinter:(id)printer;	// 0x3590b135
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3590c469
// declared property setter: - (void)setHandle:(id)handle;	// 0x3590c489
// declared property setter: - (void)setPendingList:(id)list;	// 0x3590c4d9
// declared property setter: - (void)setPrinters:(id)printers;	// 0x3590c4a9
// declared property setter: - (void)setPrintersByUUID:(id)uuid;	// 0x3590c4f9
@end
