/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

#import <NSObject.h> // Unknown library
#import "ExternalAccessory-Structs.h"

@class NSMutableArray, NSArray, NSString, NSDictionary;
@protocol EAAccessoryDelegate;

@interface EAAccessoryInternal : NSObject {
@private
	BOOL _connected;	// 4 = 0x4
	unsigned _connectionID;	// 8 = 0x8
	NSString *_name;	// 12 = 0xc
	NSString *_manufacturer;	// 16 = 0x10
	NSString *_modelNumber;	// 20 = 0x14
	NSString *_serialNumber;	// 24 = 0x18
	NSString *_firmwareRevision;	// 28 = 0x1c
	NSString *_hardwareRevision;	// 32 = 0x20
	NSString *_preferredApp;	// 36 = 0x24
	int _classType;	// 40 = 0x28
	NSDictionary *_audioPorts;	// 44 = 0x2c
	unsigned _capabilities;	// 48 = 0x30
	NSMutableArray *_sessionsList;	// 52 = 0x34
	NSArray *_eqNames;	// 56 = 0x38
	unsigned _eqItems;	// 60 = 0x3c
	int _iPodOutOptionsMask;	// 64 = 0x40
	CFAccessoryRef _cfAccessory;	// 68 = 0x44
	/*function-pointer*/ void *_cfAccessoryPortPropertyCallback;	// 72 = 0x48
	void *_cfAccessoryPortPropertyContext;	// 76 = 0x4c
	NSDictionary *_protocols;	// 80 = 0x50
	id<EAAccessoryDelegate> _delegate;	// 84 = 0x54
	unsigned _eqIndex;	// 88 = 0x58
}
@property(retain, nonatomic) NSDictionary *audioPorts;	// G=0x3206b545; S=0x3206b555; @synthesize=_audioPorts
@property(assign, nonatomic) unsigned capabilities;	// G=0x3206b579; S=0x3206b589; @synthesize=_capabilities
@property(assign, nonatomic) CFAccessoryRef cfAccessory;	// G=0x3206b60d; S=0x3206b61d; @synthesize=_cfAccessory
@property(assign, nonatomic) /*function-pointer*/ void *cfAccessoryPortPropertyCallback;	// G=0x3206b62d; S=0x3206b63d; @synthesize=_cfAccessoryPortPropertyCallback
@property(assign, nonatomic) void *cfAccessoryPortPropertyContext;	// G=0x3206b64d; S=0x3206b65d; @synthesize=_cfAccessoryPortPropertyContext
@property(assign, nonatomic) int classType;	// G=0x3206b525; S=0x3206b535; @synthesize=_classType
@property(assign, nonatomic) BOOL connected;	// G=0x3206b379; S=0x3206b389; @synthesize=_connected
@property(assign, nonatomic) unsigned connectionID;	// G=0x3206b399; S=0x3206b3a9; @synthesize=_connectionID
@property(assign, nonatomic) id<EAAccessoryDelegate> delegate;	// G=0x3206b6a1; S=0x3206b6b1; @synthesize=_delegate
@property(assign, nonatomic) unsigned eqIndex;	// G=0x3206b5cd; S=0x3206b5dd; @synthesize=_eqIndex
@property(retain, nonatomic) NSArray *eqNames;	// G=0x3206b599; S=0x3206b5a9; @synthesize=_eqNames
@property(copy, nonatomic) NSString *firmwareRevision;	// G=0x3206b489; S=0x3206b499; @synthesize=_firmwareRevision
@property(copy, nonatomic) NSString *hardwareRevision;	// G=0x3206b4bd; S=0x3206b4cd; @synthesize=_hardwareRevision
@property(assign, nonatomic) int iPodOutOptionsMask;	// G=0x3206b5ed; S=0x3206b5fd; @synthesize=_iPodOutOptionsMask
@property(copy, nonatomic) NSString *manufacturer;	// G=0x3206b3b9; S=0x3206b3c9; @synthesize=_manufacturer
@property(copy, nonatomic) NSString *modelNumber;	// G=0x3206b421; S=0x3206b431; @synthesize=_modelNumber
@property(copy, nonatomic) NSString *name;	// G=0x3206b3ed; S=0x3206b3fd; @synthesize=_name
@property(copy, nonatomic) NSString *preferredApp;	// G=0x3206b4f1; S=0x3206b501; @synthesize=_preferredApp
@property(retain, nonatomic) NSDictionary *protocols;	// G=0x3206b66d; S=0x3206b67d; @synthesize=_protocols
@property(copy, nonatomic) NSString *serialNumber;	// G=0x3206b455; S=0x3206b465; @synthesize=_serialNumber
@property(readonly, assign, nonatomic) NSArray *sessionsList;	// G=0x3206b369; 
- (id)init;	// 0x3206b0e1
- (void)addSession:(id)session;	// 0x3206b2a9
// declared property getter: - (id)audioPorts;	// 0x3206b545
// declared property getter: - (unsigned)capabilities;	// 0x3206b579
// declared property getter: - (CFAccessoryRef)cfAccessory;	// 0x3206b60d
// declared property getter: - (/*function-pointer*/ void *)cfAccessoryPortPropertyCallback;	// 0x3206b62d
// declared property getter: - (void *)cfAccessoryPortPropertyContext;	// 0x3206b64d
// declared property getter: - (int)classType;	// 0x3206b525
// declared property getter: - (BOOL)connected;	// 0x3206b379
// declared property getter: - (unsigned)connectionID;	// 0x3206b399
- (void)dealloc;	// 0x3206b149
// declared property getter: - (id)delegate;	// 0x3206b6a1
// declared property getter: - (unsigned)eqIndex;	// 0x3206b5cd
// declared property getter: - (id)eqNames;	// 0x3206b599
// declared property getter: - (id)firmwareRevision;	// 0x3206b489
// declared property getter: - (id)hardwareRevision;	// 0x3206b4bd
// declared property getter: - (int)iPodOutOptionsMask;	// 0x3206b5ed
// declared property getter: - (id)manufacturer;	// 0x3206b3b9
// declared property getter: - (id)modelNumber;	// 0x3206b421
// declared property getter: - (id)name;	// 0x3206b3ed
// declared property getter: - (id)preferredApp;	// 0x3206b4f1
// declared property getter: - (id)protocols;	// 0x3206b66d
- (void)removeSession:(id)session;	// 0x3206b30d
// declared property getter: - (id)serialNumber;	// 0x3206b455
// declared property getter: - (id)sessionsList;	// 0x3206b369
// declared property setter: - (void)setAudioPorts:(id)ports;	// 0x3206b555
// declared property setter: - (void)setCapabilities:(unsigned)capabilities;	// 0x3206b589
// declared property setter: - (void)setCfAccessory:(CFAccessoryRef)accessory;	// 0x3206b61d
// declared property setter: - (void)setCfAccessoryPortPropertyCallback:(/*function-pointer*/ void *)callback;	// 0x3206b63d
// declared property setter: - (void)setCfAccessoryPortPropertyContext:(void *)context;	// 0x3206b65d
// declared property setter: - (void)setClassType:(int)type;	// 0x3206b535
// declared property setter: - (void)setConnected:(BOOL)connected;	// 0x3206b389
// declared property setter: - (void)setConnectionID:(unsigned)anId;	// 0x3206b3a9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3206b6b1
// declared property setter: - (void)setEqIndex:(unsigned)index;	// 0x3206b5dd
// declared property setter: - (void)setEqNames:(id)names;	// 0x3206b5a9
// declared property setter: - (void)setFirmwareRevision:(id)revision;	// 0x3206b499
// declared property setter: - (void)setHardwareRevision:(id)revision;	// 0x3206b4cd
// declared property setter: - (void)setIPodOutOptionsMask:(int)mask;	// 0x3206b5fd
// declared property setter: - (void)setManufacturer:(id)manufacturer;	// 0x3206b3c9
// declared property setter: - (void)setModelNumber:(id)number;	// 0x3206b431
// declared property setter: - (void)setName:(id)name;	// 0x3206b3fd
// declared property setter: - (void)setPreferredApp:(id)app;	// 0x3206b501
// declared property setter: - (void)setProtocols:(id)protocols;	// 0x3206b67d
// declared property setter: - (void)setSerialNumber:(id)number;	// 0x3206b465
@end

