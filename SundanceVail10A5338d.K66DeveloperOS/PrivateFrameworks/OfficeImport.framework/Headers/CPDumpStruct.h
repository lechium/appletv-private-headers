/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CPDumpType.h"

@class NSMutableArray, NSString;

@interface CPDumpStruct : CPDumpType {
	int mSize;	// 8 = 0x8
	NSString *mSizeFieldName;	// 12 = 0xc
	int mSizeCorrection;	// 16 = 0x10
	NSMutableArray *mMembers;	// 20 = 0x14
}
- (id)initWithMembers:(id)members;	// 0x33c59d7d
- (id)initWithSize:(int)size members:(id)members;	// 0x33c59da5
- (id)initWithSize:(int)size sizeFieldName:(id)name sizeCorrection:(int)correction members:(id)members;	// 0x33c59bfd
- (id)initWithSizeFieldName:(id)sizeFieldName members:(id)members;	// 0x33c59dc9
- (id)initWithSizeFieldName:(id)sizeFieldName sizeCorrection:(int)correction members:(id)members;	// 0x33c59df1
- (void)dealloc;	// 0x33c59e19
- (void)fromBinary:(FILE *)binary toXml:(xmlNode *)xml state:(id)state;	// 0x33c59e7d
@end
