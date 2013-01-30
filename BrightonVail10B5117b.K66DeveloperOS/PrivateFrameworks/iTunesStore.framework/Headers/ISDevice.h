/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <NSObject.h> // Unknown library
#import "ISSingleton.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface ISDevice : NSObject <ISSingleton> {
	unsigned _daemonLaunchCount;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
	NSString *_guid;	// 12 = 0xc
	double _lastFreeSpaceRequest;	// 16 = 0x10
}
@property(readonly, assign) NSString *deviceName;	// G=0x36a4f561; 
@property(readonly, assign) NSString *guid;	// G=0x36a4f599; 
@property(readonly, assign) NSString *hardwareName;	// G=0x36a4f795; 
@property(readonly, assign) NSString *serialNumber;	// G=0x36a4f7bd; 
@property(readonly, assign) NSString *systemName;	// G=0x36a4f7e5; 
+ (void)setSharedInstance:(id)instance;	// 0x36a4f141
+ (id)sharedInstance;	// 0x36a4f195
- (id)init;	// 0x36a4eff9
- (int)_deviceClass;	// 0x36a4fc0d
- (BOOL)checkCapabilities:(id)capabilities withMismatches:(id *)mismatches;	// 0x36a4f211
- (id)copyProtocolConditionalContext;	// 0x36a4f29d
- (id)copyPurchaseValidationContext;	// 0x36a4f369
- (void)dealloc;	// 0x36a4f065
// declared property getter: - (id)deviceName;	// 0x36a4f561
// declared property getter: - (id)guid;	// 0x36a4f599
// declared property getter: - (id)hardwareName;	// 0x36a4f795
- (BOOL)releasePowerAssertion:(id)assertion;	// 0x36a4f0d9
- (void)requestFreeSpace:(unsigned long long)space atPath:(id)path withOptions:(id)options completionBlock:(id)block;	// 0x36a4f845
// declared property getter: - (id)serialNumber;	// 0x36a4f7bd
- (id)supportedOfferDeviceForDevices:(id)devices;	// 0x36a4fb15
// declared property getter: - (id)systemName;	// 0x36a4f7e5
- (BOOL)takePowerAssertion:(id)assertion;	// 0x36a4f10d
@end
