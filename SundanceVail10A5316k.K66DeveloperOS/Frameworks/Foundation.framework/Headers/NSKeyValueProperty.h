/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"
#import "NSCopying.h"

@class NSKeyValueContainerClass, NSString;

__attribute__((visibility("hidden")))
@interface NSKeyValueProperty : NSObject <NSCopying> {
@private
	NSKeyValueContainerClass *_containerClass;	// 4 = 0x4
	NSString *_keyPath;	// 8 = 0x8
}
@property(readonly, retain) NSString *keyPath;	// G=0x31a0bdfd; converted property
- (id)_initWithContainerClass:(id)containerClass keyPath:(id)path propertiesBeingInitialized:(CFSetRef)initialized;	// 0x319eddc9
- (id)copyWithZone:(NSZone *)zone;	// 0x31a6a915
- (void)dealloc;	// 0x31a6a8b1
- (id)dependentValueKeyOrKeysIsASet:(BOOL *)set;	// 0x31a6a93d
- (Class)isaForAutonotifying;	// 0x31a2db91
// converted property getter: - (id)keyPath;	// 0x31a0bdfd
- (id)keyPathIfAffectedByValueForKey:(id)key exactMatch:(BOOL *)match;	// 0x31a2e2ed
- (id)keyPathIfAffectedByValueForMemberOfKeys:(id)keys;	// 0x31a2e8dd
- (BOOL)matchesWithoutOperatorComponentsKeyPath:(id)path;	// 0x31a6aa0d
- (void)object:(id)object didAddObservance:(id)observance recurse:(BOOL)recurse;	// 0x31a6a925
- (void)object:(id)object didRemoveObservance:(id)observance recurse:(BOOL)recurse;	// 0x31a6a929
- (void)object:(id)object withObservance:(id)observance didChangeValueForKeyOrKeys:(id)keyOrKeys recurse:(BOOL)recurse forwardingValues:(XXStruct_OzJQfB)values;	// 0x31a6a939
- (BOOL)object:(id)object withObservance:(id)observance willChangeValueForKeyOrKeys:(id)keyOrKeys recurse:(BOOL)recurse forwardingValues:(XXStruct_OzJQfB *)values;	// 0x31a6a92d
- (id)restOfKeyPathIfContainedByValueForKeyPath:(id)keyPath;	// 0x31a6a941
@end

