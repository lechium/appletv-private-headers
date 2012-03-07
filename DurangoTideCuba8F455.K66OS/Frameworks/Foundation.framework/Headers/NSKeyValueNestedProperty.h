/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSKeyValueProperty.h"

@class NSString, NSKeyValueUnnestedProperty;

__attribute__((visibility("hidden")))
@interface NSKeyValueNestedProperty : NSKeyValueProperty {
@private
	NSString *_relationshipKey;	// 12 = 0xc
	NSString *_keyPathFromRelatedObject;	// 16 = 0x10
	NSKeyValueUnnestedProperty *_relationshipProperty;	// 20 = 0x14
	NSString *_keyPathWithoutOperatorComponents;	// 24 = 0x18
	BOOL _isAllowedToResultInForwarding;	// 28 = 0x1c
	id _dependentValueKeyOrKeys;	// 32 = 0x20
	BOOL _dependentValueKeyOrKeysIsASet;	// 36 = 0x24
}
- (void)_addDependentValueKey:(id)key;	// 0x31038af5
- (void)_givenPropertiesBeingInitialized:(CFSetRef)initialized getAffectingProperties:(id)properties;	// 0x31038ad5
- (id)_initWithContainerClass:(id)containerClass keyPath:(id)path firstDotIndex:(unsigned)index propertiesBeingInitialized:(CFSetRef)initialized;	// 0x3103887d
- (Class)_isaForAutonotifying;	// 0x31038d91
- (id)_keyPathIfAffectedByValueForKey:(id)key exactMatch:(BOOL *)match;	// 0x31039361
- (id)_keyPathIfAffectedByValueForMemberOfKeys:(id)keys;	// 0x31068209
- (void)dealloc;	// 0x310682c1
- (id)dependentValueKeyOrKeysIsASet:(BOOL *)set;	// 0x31067f51
- (id)description;	// 0x31068239
- (BOOL)matchesWithoutOperatorComponentsKeyPath:(id)path;	// 0x310685a1
- (void)object:(id)object didAddObservance:(id)observance recurse:(BOOL)recurse;	// 0x31038bf5
- (void)object:(id)object didRemoveObservance:(id)observance recurse:(BOOL)recurse;	// 0x3103907d
- (void)object:(id)object withObservance:(id)observance didChangeValueForKeyOrKeys:(id)keyOrKeys recurse:(BOOL)recurse forwardingValues:(XXStruct_OzJQfB)values;	// 0x310688ad
- (BOOL)object:(id)object withObservance:(id)observance willChangeValueForKeyOrKeys:(id)keyOrKeys recurse:(BOOL)recurse forwardingValues:(XXStruct_OzJQfB *)values;	// 0x31068a81
@end
