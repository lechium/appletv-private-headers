/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDCollection.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface EDTableStylesCollection : EDCollection {
@private
	NSString *mDefaultTableStyleName;	// 8 = 0x8
	NSString *mDefaultPivotStyleName;	// 12 = 0xc
}
@property(retain) id defaultPivotStyleName;	// G=0x35733f95; S=0x35685a41; converted property
@property(retain) id defaultTableStyleName;	// G=0x35733f85; S=0x356859f9; converted property
- (void)dealloc;	// 0x355f2d71
- (id)defaultPivotStyle;	// 0x35733fc5
// converted property getter: - (id)defaultPivotStyleName;	// 0x35733f95
- (id)defaultTableStyle;	// 0x35733fa5
// converted property getter: - (id)defaultTableStyleName;	// 0x35733f85
- (id)objectWithName:(id)name;	// 0x356d9845
// converted property setter: - (void)setDefaultPivotStyleName:(id)name;	// 0x35685a41
// converted property setter: - (void)setDefaultTableStyleName:(id)name;	// 0x356859f9
@end

