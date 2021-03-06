/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADDash.h"
#import "OfficeImport-Structs.h"


@interface OADPresetDash : OADDash {
	unsigned char mType;	// 9 = 0x9
	unsigned mIsTypeOverridden : 1;	// 10 = 0xa
}
@property(assign) int type;	// G=0x36a39795; S=0x369e2221; converted property
+ (id)defaultProperties;	// 0x369e2191
- (id)initWithDefaults;	// 0x369e21d9
- (id)copyWithZone:(NSZone *)zone;	// 0x36b066d9
- (id)equivalentCustomDash;	// 0x36a4f501
- (unsigned)hash;	// 0x36c1aa0d
- (BOOL)isEqual:(id)equal;	// 0x36a396a9
- (BOOL)isTypeOverridden;	// 0x36a3975d
// converted property setter: - (void)setType:(int)type;	// 0x369e2221
// converted property getter: - (int)type;	// 0x36a39795
@end

