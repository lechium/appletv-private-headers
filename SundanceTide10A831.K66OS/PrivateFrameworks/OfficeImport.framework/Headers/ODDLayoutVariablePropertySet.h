/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADProperties.h"


@interface ODDLayoutVariablePropertySet : OADProperties {
	int mDirection;	// 12 = 0xc
	BOOL mHasDirection;	// 16 = 0x10
}
@property(assign) int direction;	// G=0x36c0dc1d; S=0x36c0dc4d; converted property
+ (id)defaultProperties;	// 0x36c0dca1
- (id)initWithDefaults;	// 0x36c0dbd5
// converted property getter: - (int)direction;	// 0x36c0dc1d
- (BOOL)hasDirection;	// 0x36c0dc6d
// converted property setter: - (void)setDirection:(int)direction;	// 0x36c0dc4d
@end
