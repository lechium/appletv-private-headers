/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSObject.h> // Unknown library

@class NSExpression, NSString;

__attribute__((visibility("hidden")))
@interface NSPropertyTransform : NSObject {
@private
	NSExpression *_valueExpression;	// 4 = 0x4
	NSString *_propertyName;	// 8 = 0x8
	NSPropertyTransform *_prerequisiteTransform;	// 12 = 0xc
	BOOL _replaceMissingValueOnly;	// 16 = 0x10
}
@property(retain, nonatomic) NSPropertyTransform *prerequisiteTransform;	// G=0x31ee7791; S=0x31ee7b41; @synthesize=_prerequisiteTransform
@property(retain, nonatomic) NSString *propertyName;	// G=0x31ee77b1; S=0x31ee7af1; @synthesize=_propertyName
@property(assign) BOOL replaceMissingValueOnly;	// G=0x31ee7771; S=0x31ee7781; @synthesize=_replaceMissingValueOnly
@property(retain, nonatomic) NSExpression *valueExpression;	// G=0x31ee77a1; S=0x31ee7b19; @synthesize=_valueExpression
- (id)initWithCoder:(id)coder;	// 0x31ee7c71
- (id)initWithPropertyName:(id)propertyName valueExpression:(id)expression;	// 0x31ee77c1
- (id)copyWithZone:(NSZone *)zone;	// 0x31ee78d9
- (void)dealloc;	// 0x31ee7a5d
- (id)description;	// 0x31ee7999
- (void)encodeWithCoder:(id)coder;	// 0x31ee780d
- (BOOL)isEqual:(id)equal;	// 0x31ee7b69
// declared property getter: - (id)prerequisiteTransform;	// 0x31ee7791
// declared property getter: - (id)propertyName;	// 0x31ee77b1
// declared property getter: - (BOOL)replaceMissingValueOnly;	// 0x31ee7771
// declared property setter: - (void)setPrerequisiteTransform:(id)transform;	// 0x31ee7b41
// declared property setter: - (void)setPropertyName:(id)name;	// 0x31ee7af1
// declared property setter: - (void)setReplaceMissingValueOnly:(BOOL)only;	// 0x31ee7781
// declared property setter: - (void)setValueExpression:(id)expression;	// 0x31ee7b19
// declared property getter: - (id)valueExpression;	// 0x31ee77a1
@end

