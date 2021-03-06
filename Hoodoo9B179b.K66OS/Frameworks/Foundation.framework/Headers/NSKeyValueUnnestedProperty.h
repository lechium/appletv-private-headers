/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSKeyValueProperty.h"
#import "Foundation-Structs.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface NSKeyValueUnnestedProperty : NSKeyValueProperty {
@private
	NSArray *_affectingProperties;	// 12 = 0xc
	BOOL _cachedIsaForAutonotifyingIsValid;	// 16 = 0x10
	Class _cachedIsaForAutonotifying;	// 20 = 0x14
}
- (void)_addDependentValueKey:(id)key;	// 0x31037a39
- (void)_givenPropertiesBeingInitialized:(CFSetRef)initialized getAffectingProperties:(id)properties;	// 0x3100ed55
- (id)_initWithContainerClass:(id)containerClass key:(id)key propertiesBeingInitialized:(CFSetRef)initialized;	// 0x3100ea55
- (Class)_isaForAutonotifying;	// 0x3100ff95
- (id)_keyPathIfAffectedByValueForKey:(id)key exactMatch:(BOOL *)match;	// 0x3102c965
- (id)_keyPathIfAffectedByValueForMemberOfKeys:(id)keys;	// 0x3104f8f9
- (void)dealloc;	// 0x310872a5
- (id)description;	// 0x310872f1
- (Class)isaForAutonotifying;	// 0x3100fe8d
- (id)keyPathIfAffectedByValueForKey:(id)key exactMatch:(BOOL *)match;	// 0x3102c871
- (id)keyPathIfAffectedByValueForMemberOfKeys:(id)keys;	// 0x3104f819
- (BOOL)matchesWithoutOperatorComponentsKeyPath:(id)path;	// 0x31087429
- (void)object:(id)object didAddObservance:(id)observance recurse:(BOOL)recurse;	// 0x31022b9d
- (void)object:(id)object didRemoveObservance:(id)observance recurse:(BOOL)recurse;	// 0x3104d9cd
- (void)object:(id)object withObservance:(id)observance didChangeValueForKeyOrKeys:(id)keyOrKeys recurse:(BOOL)recurse forwardingValues:(XXStruct_OzJQfB)values;	// 0x3102cf11
- (BOOL)object:(id)object withObservance:(id)observance willChangeValueForKeyOrKeys:(id)keyOrKeys recurse:(BOOL)recurse forwardingValues:(XXStruct_OzJQfB *)values;	// 0x3102c99d
@end

