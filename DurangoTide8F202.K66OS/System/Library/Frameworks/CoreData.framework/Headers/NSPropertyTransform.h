/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "CoreData-Structs.h"

@class NSString, NSExpression;

__attribute__((visibility("hidden")))
@interface NSPropertyTransform : NSObject {
@private
	NSExpression *_valueExpression;	// 4 = 0x4
	NSString *_propertyName;	// 8 = 0x8
	NSPropertyTransform *_prerequisiteTransform;	// 12 = 0xc
	BOOL _replaceMissingValueOnly;	// 16 = 0x10
}
@property(retain, nonatomic) NSPropertyTransform *prerequisiteTransform;	// G=0x33168775; S=0x33168cad; @synthesize=_prerequisiteTransform
@property(retain, nonatomic) NSString *propertyName;	// G=0x33168795; S=0x33168c5d; @synthesize=_propertyName
@property(assign) BOOL replaceMissingValueOnly;	// G=0x33168755; S=0x33168765; @synthesize=_replaceMissingValueOnly
@property(retain, nonatomic) NSExpression *valueExpression;	// G=0x33168785; S=0x33168c85; @synthesize=_valueExpression
- (id)initWithCoder:(id)coder;	// 0x331689ed
- (id)initWithPropertyName:(id)propertyName valueExpression:(id)expression;	// 0x331689ad
- (id)copyWithZone:(NSZone *)zone;	// 0x33168861
- (void)dealloc;	// 0x33168ad5
- (id)description;	// 0x331687a5
- (void)encodeWithCoder:(id)coder;	// 0x33168909
- (BOOL)isEqual:(id)equal;	// 0x33168b61
// declared property getter: - (id)prerequisiteTransform;	// 0x33168775
// declared property getter: - (id)propertyName;	// 0x33168795
// declared property getter: - (BOOL)replaceMissingValueOnly;	// 0x33168755
// declared property setter: - (void)setPrerequisiteTransform:(id)transform;	// 0x33168cad
// declared property setter: - (void)setPropertyName:(id)name;	// 0x33168c5d
// declared property setter: - (void)setReplaceMissingValueOnly:(BOOL)only;	// 0x33168765
// declared property setter: - (void)setValueExpression:(id)expression;	// 0x33168c85
// declared property getter: - (id)valueExpression;	// 0x33168785
@end

