/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRImage, NSString, ATVGameMenuItemContents;
@protocol BRImageProxy;

__attribute__((visibility("hidden")))
@interface ATVGameMenuItem : BRControl {
	ATVGameMenuItemContents *_contents;	// 84 = 0x54
}
@property(copy) NSString *detailedText;	// G=0x118e71; S=0x118e91; 
@property(assign) BOOL dimmed;	// G=0x118ef1; S=0x118f15; 
@property(copy) NSString *imageSeparatorText;	// G=0x118df1; S=0x118e11; 
@property(retain) BRImage *leftImage;	// G=0x118d31; S=0x118d51; 
@property(retain) id<BRImageProxy> leftImageProxy;	// G=0x118cf1; S=0x118d11; 
@property(retain) BRImage *rightImage;	// G=0x118d71; S=0x118d91; 
@property(retain) id<BRImageProxy> rightImageProxy;	// G=0x118db1; S=0x118dd1; 
@property(copy) NSString *rightJustifiedText;	// G=0x118eb1; S=0x118ed1; 
@property(copy) NSString *text;	// G=0x118e31; S=0x118e51; 
+ (CGRect)contentFrameForControl:(id)control;	// 0x119029
- (id)init;	// 0x1189fd
- (float)accessibilityDelayForScreenContent;	// 0x119021
- (id)accessibilityLabel;	// 0x118f39
- (id)accessibilityTraitsList;	// 0x118fb1
- (void)controlWasFocused;	// 0x118b45
- (void)controlWasUnfocused;	// 0x118b95
- (void)dealloc;	// 0x118af9
// declared property getter: - (id)detailedText;	// 0x118e71
// declared property getter: - (BOOL)dimmed;	// 0x118ef1
- (void)drawRect:(CGRect)rect;	// 0x118c8d
- (CGRect)focusCursorFrame;	// 0x118c09
// declared property getter: - (id)imageSeparatorText;	// 0x118df1
- (BOOL)isAccessibilityElement;	// 0x118f35
// declared property getter: - (id)leftImage;	// 0x118d31
// declared property getter: - (id)leftImageProxy;	// 0x118cf1
// declared property getter: - (id)rightImage;	// 0x118d71
// declared property getter: - (id)rightImageProxy;	// 0x118db1
// declared property getter: - (id)rightJustifiedText;	// 0x118eb1
// declared property setter: - (void)setDetailedText:(id)text;	// 0x118e91
// declared property setter: - (void)setDimmed:(BOOL)dimmed;	// 0x118f15
// declared property setter: - (void)setImageSeparatorText:(id)text;	// 0x118e11
// declared property setter: - (void)setLeftImage:(id)image;	// 0x118d51
// declared property setter: - (void)setLeftImageProxy:(id)proxy;	// 0x118d11
// declared property setter: - (void)setRightImage:(id)image;	// 0x118d91
// declared property setter: - (void)setRightImageProxy:(id)proxy;	// 0x118dd1
// declared property setter: - (void)setRightJustifiedText:(id)text;	// 0x118ed1
// declared property setter: - (void)setText:(id)text;	// 0x118e51
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x118be5
// declared property getter: - (id)text;	// 0x118e31
@end

