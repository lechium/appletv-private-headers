/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSXPCCoding.h"
#import "StoreServices-Structs.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSSet;

@interface SSDownloadPolicyRule : NSObject <NSCoding, SSXPCCoding, NSCopying> {
	NSSet *_applicationStates;	// 4 = 0x4
	float _batteryLevel;	// 8 = 0x8
	int _cellularDataStates;	// 12 = 0xc
	long long _downloadSizeLimit;	// 16 = 0x10
	NSSet *_networkTypes;	// 24 = 0x18
	int _powerStates;	// 28 = 0x1c
	int _registrationStates;	// 32 = 0x20
	int _timeLimitStates;	// 36 = 0x24
}
@property(copy, nonatomic) NSSet *applicationStates;	// G=0x3784b2dd; S=0x3784b2f1; @synthesize=_applicationStates
@property(assign, nonatomic) float batteryLevel;	// G=0x3784b301; S=0x3784b311; @synthesize=_batteryLevel
@property(readonly, assign, nonatomic, getter=isCellularAllowed) BOOL cellularAllowed;	// G=0x3784a521; 
@property(assign, nonatomic) int cellularDataStates;	// G=0x3784b321; S=0x3784b331; @synthesize=_cellularDataStates
@property(assign, nonatomic) long long downloadSizeLimit;	// G=0x3784b341; S=0x3784b359; @synthesize=_downloadSizeLimit
@property(copy, nonatomic) NSSet *networkTypes;	// G=0x3784b36d; S=0x3784b381; @synthesize=_networkTypes
@property(assign, nonatomic) int powerStates;	// G=0x3784b391; S=0x3784b3a1; @synthesize=_powerStates
@property(assign, nonatomic) int registrationStates;	// G=0x3784b3b1; S=0x3784b3c1; @synthesize=_registrationStates
@property(assign, nonatomic) int timeLimitStates;	// G=0x3784b3d1; S=0x3784b3e1; @synthesize=_timeLimitStates
@property(readonly, assign, nonatomic, getter=isWiFiAllowed) BOOL wiFiAllowed;	// G=0x3784a5f9; 
- (id)init;	// 0x3784a285
- (id)initWithCoder:(id)coder;	// 0x3784ac3d
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x3784b0a5
- (void)addApplicationState:(id)state;	// 0x3784a351
- (void)addNetworkType:(int)type;	// 0x3784a425
// declared property getter: - (id)applicationStates;	// 0x3784b2dd
// declared property getter: - (float)batteryLevel;	// 0x3784b301
// declared property getter: - (int)cellularDataStates;	// 0x3784b321
- (id)copyWithZone:(NSZone *)zone;	// 0x3784ae6d
- (id)copyXPCEncoding;	// 0x3784af69
- (void)dealloc;	// 0x3784a2ed
// declared property getter: - (long long)downloadSizeLimit;	// 0x3784b341
- (void)encodeWithCoder:(id)coder;	// 0x3784aacd
- (unsigned)hash;	// 0x3784a8e1
// declared property getter: - (BOOL)isCellularAllowed;	// 0x3784a521
- (BOOL)isEqual:(id)equal;	// 0x3784a901
// declared property getter: - (BOOL)isWiFiAllowed;	// 0x3784a5f9
// declared property getter: - (id)networkTypes;	// 0x3784b36d
// declared property getter: - (int)powerStates;	// 0x3784b391
// declared property getter: - (int)registrationStates;	// 0x3784b3b1
// declared property setter: - (void)setApplicationStates:(id)states;	// 0x3784b2f1
// declared property setter: - (void)setBatteryLevel:(float)level;	// 0x3784b311
// declared property setter: - (void)setCellularDataStates:(int)states;	// 0x3784b331
// declared property setter: - (void)setDownloadSizeLimit:(long long)limit;	// 0x3784b359
// declared property setter: - (void)setNetworkTypes:(id)types;	// 0x3784b381
// declared property setter: - (void)setPowerStates:(int)states;	// 0x3784b3a1
// declared property setter: - (void)setRegistrationStates:(int)states;	// 0x3784b3c1
// declared property setter: - (void)setTimeLimitStates:(int)states;	// 0x3784b3e1
// declared property getter: - (int)timeLimitStates;	// 0x3784b3d1
- (void)unionPolicyRule:(id)rule;	// 0x3784a67d
@end

