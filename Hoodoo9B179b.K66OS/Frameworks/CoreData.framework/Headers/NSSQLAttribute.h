/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLColumn.h"


__attribute__((visibility("hidden")))
@interface NSSQLAttribute : NSSQLColumn {
}
- (id)initForReadOnlyFetchWithExpression:(id)expression;	// 0x32b8642d
- (id)initWithEntity:(id)entity propertyDescription:(id)description;	// 0x32ade92d
- (unsigned)_sqlTypeForAttributeType:(unsigned)attributeType flags:(unsigned)flags;	// 0x32adee3d
- (id)attributeDescription;	// 0x32b8641d
- (BOOL)shouldIndex;	// 0x32b863f5
@end

