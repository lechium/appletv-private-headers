/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLColumn.h"


@interface NSSQLAttribute : NSSQLColumn {
}
- (id)initForReadOnlyFetchWithExpression:(id)expression;	// 0x30f30fd5
- (id)initWithEntity:(id)entity propertyDescription:(id)description;	// 0x30e987d1
- (unsigned)_sqlTypeForAttributeType:(unsigned)attributeType flags:(unsigned)flags;	// 0x30e98d21
- (id)attributeDescription;	// 0x30f310b1
- (BOOL)shouldIndex;	// 0x30f310c1
@end
