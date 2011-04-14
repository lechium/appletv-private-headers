/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "EDImmutableObject.h"

@class EDCollection, NSString, EDResources;

__attribute__((visibility("hidden")))
@interface EDPhoneticInfo : NSObject <EDImmutableObject> {
@private
	EDResources *mResources;	// 4 = 0x4
	unsigned mFontIndex;	// 8 = 0x8
	NSString *mString;	// 12 = 0xc
	int mType;	// 16 = 0x10
	int mAlign;	// 20 = 0x14
	EDCollection *mRuns;	// 24 = 0x18
	bool mDoNotModify;	// 28 = 0x1c
}
@property(assign) int align;	// G=0x31ad1c61; S=0x31a04f41; converted property
@property(retain) id font;	// G=0x31ad1ce1; S=0x31ad1c91; converted property
@property(assign) unsigned fontIndex;	// G=0x31ad1c81; S=0x31a04f5d; converted property
@property(retain) id string;	// G=0x31ad1c71; S=0x31a04ef5; converted property
@property(assign) int type;	// G=0x31ad1c51; S=0x31a04ed9; converted property
+ (id)phoneticInfoWithResources:(id)resources;	// 0x31a04e35
- (id)initWithResources:(id)resources;	// 0x31a04e79
// converted property getter: - (int)align;	// 0x31ad1c61
- (void)dealloc;	// 0x31a054d9
// converted property getter: - (id)font;	// 0x31ad1ce1
// converted property getter: - (unsigned)fontIndex;	// 0x31ad1c81
- (unsigned)hash;	// 0x31ad1d1d
- (BOOL)isEqual:(id)equal;	// 0x31ad1d71
- (BOOL)isEqualToEDPhoneticInfo:(id)edphoneticInfo;	// 0x31ad1dc5
- (id)runs;	// 0x31a27c35
// converted property setter: - (void)setAlign:(int)align;	// 0x31a04f41
- (void)setDoNotModify:(bool)modify;	// 0x31a04fe1
// converted property setter: - (void)setFont:(id)font;	// 0x31ad1c91
// converted property setter: - (void)setFontIndex:(unsigned)index;	// 0x31a04f5d
// converted property setter: - (void)setString:(id)string;	// 0x31a04ef5
// converted property setter: - (void)setType:(int)type;	// 0x31a04ed9
// converted property getter: - (id)string;	// 0x31ad1c71
// converted property getter: - (int)type;	// 0x31ad1c51
@end

