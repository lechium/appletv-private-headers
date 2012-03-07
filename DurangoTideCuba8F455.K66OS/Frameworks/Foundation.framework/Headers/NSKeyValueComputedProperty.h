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
@interface NSKeyValueComputedProperty : NSKeyValueProperty {
@private
	NSString *_operationName;	// 12 = 0xc
	NSString *_operationArgumentKeyPath;	// 16 = 0x10
	NSKeyValueUnnestedProperty *_operationArgumentProperty;	// 20 = 0x14
}
- (void)_addDependentValueKey:(id)key;	// 0x310680d5
- (void)_givenPropertiesBeingInitialized:(CFSetRef)initialized getAffectingProperties:(id)properties;	// 0x310680f5
- (id)_initWithContainerClass:(id)containerClass keyPath:(id)path propertiesBeingInitialized:(CFSetRef)initialized;	// 0x31068789
- (Class)_isaForAutonotifying;	// 0x310680b5
- (id)_keyPathIfAffectedByValueForKey:(id)key exactMatch:(BOOL *)match;	// 0x3106807d
- (id)_keyPathIfAffectedByValueForMemberOfKeys:(id)keys;	// 0x3106804d
- (void)dealloc;	// 0x3106819d
- (id)description;	// 0x31068115
- (BOOL)matchesWithoutOperatorComponentsKeyPath:(id)path;	// 0x31068579
- (void)object:(id)object didAddObservance:(id)observance recurse:(BOOL)recurse;	// 0x3106801d
- (void)object:(id)object didRemoveObservance:(id)observance recurse:(BOOL)recurse;	// 0x31067fed
- (void)object:(id)object withObservance:(id)observance didChangeValueForKeyOrKeys:(id)keyOrKeys recurse:(BOOL)recurse forwardingValues:(XXStruct_OzJQfB)values;	// 0x31067f6d
- (BOOL)object:(id)object withObservance:(id)observance willChangeValueForKeyOrKeys:(id)keyOrKeys recurse:(BOOL)recurse forwardingValues:(XXStruct_OzJQfB *)values;	// 0x31067fad
@end
