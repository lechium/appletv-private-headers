/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLIntermediate.h"


__attribute__((visibility("hidden")))
@interface NSSQLConstantValueIntermediate : NSSQLIntermediate {
@private
	unsigned _type;	// 8 = 0x8
	id _constantValue;	// 12 = 0xc
}
- (id)initWithConstantValue:(id)constantValue inScope:(id)scope;	// 0x31e56885
- (id)initWithConstantValue:(id)constantValue ofType:(unsigned)type inScope:(id)scope;	// 0x31eedd45
- (BOOL)_addBindVarForConstId:(id)constId ofType:(unsigned)type inContext:(id)context;	// 0x31e570a1
- (BOOL)_addBindVarForConstVal1:(id)constVal1 inContext:(id)context;	// 0x31e56979
- (void)dealloc;	// 0x31e572bd
- (id)generateSQLStringInContext:(id)context;	// 0x31e568ed
- (id)propertyAtEndOfKeyPathExpression:(id)keyPathExpression;	// 0x31e56ef9
- (unsigned)sqlTypeForProperty:(id)property;	// 0x31e5704d
@end
