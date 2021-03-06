/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"

@class OADParagraphProperties, CMStyle;

__attribute__((visibility("hidden")))
@interface PMBulletMapper : CMMapper {
@private
	OADParagraphProperties *mProperties;	// 8 = 0x8
	CMStyle *mStyle;	// 12 = 0xc
	int mFontSize;	// 16 = 0x10
}
+ (id)stringForIndex:(int)index withFormat:(int)format;	// 0x3115d345
- (id)initWithOadProperties:(id)oadProperties fontSize:(int)size parent:(id)parent;	// 0x3107fbb9
- (id)bulletFontName;	// 0x31080b75
- (int)bulletSize;	// 0x310809d1
- (void)dealloc;	// 0x3107ff9d
- (id)makeBulletWithListState:(id)listState;	// 0x31080845
- (void)mapAt:(id)at withState:(id)state;	// 0x3107fc45
- (void)mapBulletColorWithState:(id)state;	// 0x31080de5
@end

