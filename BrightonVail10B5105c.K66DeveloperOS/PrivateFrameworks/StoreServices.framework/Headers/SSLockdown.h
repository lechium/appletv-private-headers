/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import <NSObject.h> // Unknown library

@class NSLock, NSMutableDictionary;

@interface SSLockdown : NSObject {
	NSMutableDictionary *_dictionary;	// 4 = 0x4
	NSLock *_lock;	// 8 = 0x8
}
@property(readonly, assign) long long totalDiskCapacity;	// G=0x3585a225; 
+ (id)sharedInstance;	// 0x3585a175
- (id)init;	// 0x3585a0ad
- (void *)_copyLocalValueForKey:(CFStringRef)key domain:(CFStringRef)domain;	// 0x3585a87d
- (id)_localDictionaryDirectory;	// 0x3585a91d
- (id)_localDictionaryFileName;	// 0x3585a955
- (id)_ntsLocalDictionary;	// 0x3585a991
- (BOOL)_ntsSaveLocalDictionary;	// 0x3585aad5
- (void)_setLocalValue:(void *)value forKey:(CFStringRef)key domain:(CFStringRef)domain;	// 0x3585abf5
- (id)copyAccountDictionaryForDomain:(CFStringRef)domain;	// 0x3585a2c5
- (CFStringRef)copyDeviceGUID;	// 0x3585a62d
- (void *)copyITunesValueForKey:(CFStringRef)key usedDomain:(const CFStringRef *)domain;	// 0x3585a6b9
- (void *)copyValueForKey:(CFStringRef)key domain:(CFStringRef)domain;	// 0x3585a711
- (void)dealloc;	// 0x3585a111
- (void)removeAccountFromDomain:(CFStringRef)domain;	// 0x3585a73d
- (void)setValue:(void *)value forKey:(CFStringRef)key domain:(CFStringRef)domain;	// 0x3585a849
// declared property getter: - (long long)totalDiskCapacity;	// 0x3585a225
@end
