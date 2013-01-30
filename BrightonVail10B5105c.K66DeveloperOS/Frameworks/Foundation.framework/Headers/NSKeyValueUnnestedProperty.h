/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSKeyValueProperty.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface NSKeyValueUnnestedProperty : NSKeyValueProperty {
	NSArray *_affectingProperties;	// 12 = 0xc
	BOOL _cachedIsaForAutonotifyingIsValid;	// 16 = 0x10
	Class _cachedIsaForAutonotifying;	// 20 = 0x14
}
- (void)_addDependentValueKey:(id)key;	// 0x3609e415
- (void)_givenPropertiesBeingInitialized:(CFSetRef)initialized getAffectingProperties:(id)properties;	// 0x36087c49
- (id)_initWithContainerClass:(id)containerClass key:(id)key propertiesBeingInitialized:(CFSetRef)initialized;	// 0x360878bd
- (Class)_isaForAutonotifying;	// 0x360891cd
- (id)_keyPathIfAffectedByValueForKey:(id)key exactMatch:(BOOL *)match;	// 0x360936a5
- (id)_keyPathIfAffectedByValueForMemberOfKeys:(id)keys;	// 0x360fbd75
- (void)dealloc;	// 0x360fbbf1
- (id)description;	// 0x360fbc3d
- (Class)isaForAutonotifying;	// 0x360890b9
- (id)keyPathIfAffectedByValueForKey:(id)key exactMatch:(BOOL *)match;	// 0x360935a5
- (id)keyPathIfAffectedByValueForMemberOfKeys:(id)keys;	// 0x360fbdad
- (BOOL)matchesWithoutOperatorComponentsKeyPath:(id)path;	// 0x360fbea1
- (void)object:(id)object didAddObservance:(id)observance recurse:(BOOL)recurse;	// 0x36088fe1
- (void)object:(id)object didRemoveObservance:(id)observance recurse:(BOOL)recurse;	// 0x360bc529
- (void)object:(id)object withObservance:(id)observance didChangeValueForKeyOrKeys:(id)keyOrKeys recurse:(BOOL)recurse forwardingValues:(XXStruct_OzJQfB)values;	// 0x36093c55
- (BOOL)object:(id)object withObservance:(id)observance willChangeValueForKeyOrKeys:(id)keyOrKeys recurse:(BOOL)recurse forwardingValues:(XXStruct_OzJQfB *)values;	// 0x360936dd
@end
