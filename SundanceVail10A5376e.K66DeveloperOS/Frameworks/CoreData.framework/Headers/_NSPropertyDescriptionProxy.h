/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSPropertyDescription, NSEntityDescription;

@interface _NSPropertyDescriptionProxy : NSObject {
	id _sourceBuffer;	// 4 = 0x4
	NSPropertyDescription *_underlyingProperty;	// 8 = 0x8
	NSEntityDescription *_entityDescription;	// 12 = 0xc
	unsigned _entitysReferenceIDForProperty;	// 16 = 0x10
}
+ (BOOL)resolveInstanceMethod:(SEL)method;	// 0x35ccc549
- (id)initWithCoder:(id)coder;	// 0x35ccc23d
- (id)initWithPropertyDescription:(id)propertyDescription;	// 0x35ccc22d
- (void)_createCachesAndOptimizeState;	// 0x35ccc429
- (unsigned)_entitysReferenceID;	// 0x35ccc409
- (void)_setEntity:(id)entity;	// 0x35ccc42d
- (void)_setEntitysReferenceID:(unsigned)anId;	// 0x35ccc3f9
- (id)_underlyingProperty;	// 0x35ccc3e9
- (void)_versionHash:(char *)hash inStyle:(unsigned)style;	// 0x35ccc461
- (Class)class;	// 0x35ccc4d5
- (id)description;	// 0x35ccc36d
- (void)encodeWithCoder:(id)coder;	// 0x35ccc2e9
- (id)entity;	// 0x35ccc419
- (id)forwardingTargetForSelector:(SEL)selector;	// 0x35ccc519
- (BOOL)isEqual:(id)equal;	// 0x35ccc4f5
- (BOOL)isKindOfClass:(Class)aClass;	// 0x35ccc43d
- (id)methodSignatureForSelector:(SEL)selector;	// 0x35ccc529
@end
