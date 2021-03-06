/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSColorStub;

__attribute__((visibility("hidden")))
@interface WDShading : NSObject <NSCopying> {
@private
	int mStyle;	// 4 = 0x4
	NSColorStub *mForegroundColor;	// 8 = 0x8
	NSColorStub *mBackgroundColor;	// 12 = 0xc
}
@property(retain) id background;	// G=0x344c89fd; S=0x344c6b8d; converted property
@property(retain) id foreground;	// G=0x344c8a0d; S=0x344c6b55; converted property
@property(assign) int style;	// G=0x344c8589; S=0x344c6b45; converted property
- (id)init;	// 0x34480565
// converted property getter: - (id)background;	// 0x344c89fd
- (id)copyWithZone:(NSZone *)zone;	// 0x3456cd41
- (void)dealloc;	// 0x3446cf45
// converted property getter: - (id)foreground;	// 0x344c8a0d
- (BOOL)isEqual:(id)equal;	// 0x345dea7d
- (BOOL)isEqualToShading:(id)shading;	// 0x345dead1
// converted property setter: - (void)setBackground:(id)background;	// 0x344c6b8d
// converted property setter: - (void)setForeground:(id)foreground;	// 0x344c6b55
- (void)setShading:(id)shading;	// 0x345dea05
// converted property setter: - (void)setStyle:(int)style;	// 0x344c6b45
// converted property getter: - (int)style;	// 0x344c8589
@end

