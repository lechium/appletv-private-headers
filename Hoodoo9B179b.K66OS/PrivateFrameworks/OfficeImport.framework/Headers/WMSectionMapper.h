/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"

@class WDSection;

__attribute__((visibility("hidden")))
@interface WMSectionMapper : CMMapper {
@private
	WDSection *wdSection;	// 8 = 0x8
	float mTopMargin;	// 12 = 0xc
	float mLeftMargin;	// 16 = 0x10
	BOOL mBreakAtStart;	// 20 = 0x14
	BOOL mBreakAtEnd;	// 21 = 0x15
	BOOL mIsTitlePage;	// 22 = 0x16
}
@property(assign) float leftMargin;	// G=0x32a24c65; S=0x32a24c55; converted property
@property(assign) float topMargin;	// G=0x32a24c45; S=0x32a24c35; converted property
+ (BOOL)isContentEmpty:(id)empty;	// 0x327d34c5
- (id)initWithWDSection:(id)wdsection breakAtStart:(BOOL)start breakAtEnd:(BOOL)end parent:(id)parent;	// 0x327d36c9
- (void)MapSectionStyleAt:(id)at;	// 0x327d3c69
// converted property getter: - (float)leftMargin;	// 0x32a24c65
- (void)mapAt:(id)at withState:(id)state;	// 0x327d39cd
- (void)mapFooterAt:(id)at withState:(id)state;	// 0x327d32e1
- (void)mapHeaderAt:(id)at withState:(id)state;	// 0x327d3cdd
// converted property setter: - (void)setLeftMargin:(float)margin;	// 0x32a24c55
// converted property setter: - (void)setTopMargin:(float)margin;	// 0x32a24c35
// converted property getter: - (float)topMargin;	// 0x32a24c45
@end

