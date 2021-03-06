/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "CoreData-Structs.h"

@class NSExpression, NSString;

@interface NSPropertyTransform : NSObject {
	NSExpression *_valueExpression;	// 4 = 0x4
	NSString *_propertyName;	// 8 = 0x8
	NSPropertyTransform *_prerequisiteTransform;	// 12 = 0xc
	BOOL _replaceMissingValueOnly;	// 16 = 0x10
}
@property(retain, nonatomic) NSPropertyTransform *prerequisiteTransform;	// G=0x36612625; S=0x36612635; @synthesize=_prerequisiteTransform
@property(retain, nonatomic) NSString *propertyName;	// G=0x366125e5; S=0x366125f5; @synthesize=_propertyName
@property(assign) BOOL replaceMissingValueOnly;	// G=0x36612645; S=0x3661265d; @synthesize=_replaceMissingValueOnly
@property(retain, nonatomic) NSExpression *valueExpression;	// G=0x36612605; S=0x36612615; @synthesize=_valueExpression
- (id)initWithCoder:(id)coder;	// 0x36612261
- (id)initWithPropertyName:(id)propertyName valueExpression:(id)expression;	// 0x366120cd
- (id)copyWithZone:(NSZone *)zone;	// 0x36612355
- (void)dealloc;	// 0x36612115
- (id)description;	// 0x3661251d
- (void)encodeWithCoder:(id)coder;	// 0x366121a5
- (BOOL)isEqual:(id)equal;	// 0x36612411
// declared property getter: - (id)prerequisiteTransform;	// 0x36612625
// declared property getter: - (id)propertyName;	// 0x366125e5
// declared property getter: - (BOOL)replaceMissingValueOnly;	// 0x36612645
// declared property setter: - (void)setPrerequisiteTransform:(id)transform;	// 0x36612635
// declared property setter: - (void)setPropertyName:(id)name;	// 0x366125f5
// declared property setter: - (void)setReplaceMissingValueOnly:(BOOL)only;	// 0x3661265d
// declared property setter: - (void)setValueExpression:(id)expression;	// 0x36612615
// declared property getter: - (id)valueExpression;	// 0x36612605
@end

