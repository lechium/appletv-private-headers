/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLColumn.h"


@interface NSSQLAttribute : NSSQLColumn {
}
- (id)initForReadOnlyFetchWithExpression:(id)expression;	// 0x2d0f15d9
- (id)initWithEntity:(id)entity propertyDescription:(id)description;	// 0x2d054f21
- (unsigned)_sqlTypeForAttributeType:(unsigned)attributeType flags:(unsigned)flags;	// 0x2d055475
- (id)attributeDescription;	// 0x2d0f16b5
- (BOOL)shouldIndex;	// 0x2d0f16c5
@end

