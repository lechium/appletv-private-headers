/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVFlagstaffPreviewImageOverLay : BRControl {
	NSString *_text1;	// 84 = 0x54
	NSString *_text2;	// 88 = 0x58
	NSString *_text3;	// 92 = 0x5c
}
@property(copy, nonatomic) NSString *text1;	// G=0x19788d; S=0x1978a1; @synthesize=_text1
@property(copy, nonatomic) NSString *text2;	// G=0x1978b1; S=0x1978c5; @synthesize=_text2
@property(copy, nonatomic) NSString *text3;	// G=0x1978d5; S=0x1978e9; @synthesize=_text3
- (id)init;	// 0x197371
- (void)dealloc;	// 0x1973c9
- (void)drawRect:(CGRect)rect;	// 0x197441
// declared property setter: - (void)setText1:(id)a1;	// 0x1978a1
// declared property setter: - (void)setText2:(id)a2;	// 0x1978c5
// declared property setter: - (void)setText3:(id)a3;	// 0x1978e9
// declared property getter: - (id)text1;	// 0x19788d
// declared property getter: - (id)text2;	// 0x1978b1
// declared property getter: - (id)text3;	// 0x1978d5
@end
