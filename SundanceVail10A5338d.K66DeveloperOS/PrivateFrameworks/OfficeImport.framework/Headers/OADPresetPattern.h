/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADPattern.h"
#import "OfficeImport-Structs.h"


@interface OADPresetPattern : OADPattern {
	int mType;	// 12 = 0xc
	BOOL mIsTypeOverridden;	// 16 = 0x10
}
@property(assign) int type;	// G=0x33ba05b5; S=0x33b003ed; converted property
+ (id)defaultProperties;	// 0x33b0035d
+ (id)nameForPresetPatternType:(int)presetPatternType;	// 0x33ba0741
+ (id)namedBitmapDataForPresetPatternType:(int)presetPatternType;	// 0x33ba0a45
+ (id)presetPatternHeader;	// 0x33ba0b91
- (id)initWithDefaults;	// 0x33b003a5
- (id)copyWithZone:(NSZone *)zone;	// 0x33ba0541
- (unsigned)hash;	// 0x33ba0619
- (BOOL)isEqual:(id)equal;	// 0x33ba0669
- (BOOL)isTypeOverridden;	// 0x33ba05e5
// converted property setter: - (void)setType:(int)type;	// 0x33b003ed
// converted property getter: - (int)type;	// 0x33ba05b5
@end
