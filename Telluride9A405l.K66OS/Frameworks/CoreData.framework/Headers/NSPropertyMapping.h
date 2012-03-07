/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "CoreData-Structs.h"

@class NSArray, NSExpression, NSString, NSDictionary;

@interface NSPropertyMapping : NSObject {
@private
	void *_reserved;	// 4 = 0x4
	void *_reserved1;	// 8 = 0x8
	NSArray *_propertyTransforms;	// 12 = 0xc
	NSString *_name;	// 16 = 0x10
	NSExpression *_valueExpression;	// 20 = 0x14
	NSDictionary *_userInfo;	// 24 = 0x18
	propertyMappingFlags _propertyMappingFlags;	// 28 = 0x1c
}
@property(retain) NSString *name;	// G=0x33fdeca5; S=0x33fdef35; converted property
@property(retain) NSDictionary *userInfo;	// G=0x33fdecc5; S=0x33fdefdd; converted property
@property(retain) NSExpression *valueExpression;	// G=0x33fdecb5; S=0x33fdef89; converted property
+ (void)initialize;	// 0x33fdf031
- (id)init;	// 0x33fded01
- (id)initWithCoder:(id)coder;	// 0x33fdf269
- (id)initWithName:(id)name valueExpression:(id)expression;	// 0x33fdf04d
- (void)_createCachesAndOptimizeState;	// 0x33fdeced
- (id)_initWithDestinationName:(id)destinationName valueExpression:(id)expression;	// 0x33fdf381
- (id)_propertyTransforms;	// 0x33fdecf1
- (void)_setIsEditable:(BOOL)editable;	// 0x33fdf425
- (void)_setPropertyTransforms:(id)transforms;	// 0x33fdf05d
- (void)_throwIfNotEditable;	// 0x33fdf4b9
- (id)copyWithZone:(NSZone *)zone;	// 0x33fdedd9
- (void)dealloc;	// 0x33fdf0b1
- (id)description;	// 0x33fdeea1
- (void)encodeWithCoder:(id)coder;	// 0x33fded15
- (BOOL)isEditable;	// 0x33fdecd5
- (BOOL)isEqual:(id)equal;	// 0x33fdf15d
// converted property getter: - (id)name;	// 0x33fdeca5
// converted property setter: - (void)setName:(id)name;	// 0x33fdef35
// converted property setter: - (void)setUserInfo:(id)info;	// 0x33fdefdd
// converted property setter: - (void)setValueExpression:(id)expression;	// 0x33fdef89
// converted property getter: - (id)userInfo;	// 0x33fdecc5
// converted property getter: - (id)valueExpression;	// 0x33fdecb5
@end
