/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OADProperties : NSObject {
@private
	OADProperties *mParent;	// 4 = 0x4
	unsigned mIsMerged : 1;	// 8 = 0x8
	unsigned mIsMergedWithParent : 1;	// 8 = 0x8
}
@property(assign, getter=isMerged) BOOL merged;	// G=0x328a2819; S=0x328a2851; converted property
@property(assign, getter=isMergedWithParent) BOOL mergedWithParent;	// G=0x328a2835; S=0x328a286d; converted property
@property(retain) id parent;	// G=0x328a2809; S=0x32827521; converted property
+ (id)defaultProperties;	// 0x3289cb59
- (id)init;	// 0x328272e1
- (id)initWithDefaults;	// 0x328c849d
- (void)dealloc;	// 0x3289f381
- (void)flatten;	// 0x32ac27d1
- (unsigned)hash;	// 0x32ac2771
- (BOOL)isEqual:(id)equal;	// 0x328a3bd1
// converted property getter: - (BOOL)isMerged;	// 0x328a2819
- (BOOL)isMergedPropertyForSelector:(SEL)selector;	// 0x3281f359
// converted property getter: - (BOOL)isMergedWithParent;	// 0x328a2835
- (id)overrideForSelector:(SEL)selector;	// 0x3281f2a9
// converted property getter: - (id)parent;	// 0x328a2809
- (void)removeUnnecessaryOverrides;	// 0x328a2c05
// converted property setter: - (void)setMerged:(BOOL)merged;	// 0x328a2851
// converted property setter: - (void)setMergedWithParent:(BOOL)parent;	// 0x328a286d
// converted property setter: - (void)setParent:(id)parent;	// 0x32827521
- (void)setParent:(id)parent myRestrictedClass:(Class)aClass;	// 0x328a1ba1
@end

