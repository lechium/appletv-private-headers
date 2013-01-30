/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <NSObject.h> // Unknown library


@interface MZPreferences : NSObject {
}
+ (id)storeBookkeeperPreferences;	// 0x3751fee1
- (id)init;	// 0x3751ff4d
- (void)_preferencesDidChange;	// 0x37520035
- (BOOL)boolForKey:(id)key;	// 0x3752018d
- (void)dealloc;	// 0x3751fff1
- (id)objectForKey:(id)key withDefaultValue:(id)defaultValue;	// 0x3752010d
- (void)registerDefaultsIfKeyNotSet:(id)set registrationBlock:(id)block;	// 0x3752007d
- (void)setBool:(BOOL)aBool forKey:(id)key;	// 0x3752014d
- (void)setObject:(id)object forKey:(id)key;	// 0x375200e9
@end
