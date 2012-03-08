/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRImageControl, BRTextControl;

@interface BRMetadataTitleControl : BRControl {
@private
	BRTextControl *_title;	// 48 = 0x30
	BRTextControl *_titleSubtext;	// 52 = 0x34
	BRImageControl *_rating;	// 56 = 0x38
	BRImageControl *_rightImage;	// 60 = 0x3c
	BOOL _ratingSnapsToTitle;	// 64 = 0x40
	float _rightImageHeight;	// 68 = 0x44
}
- (id)init;	// 0x330916c9
- (void)_layoutSubcontrolsWithSize:(CGSize)size;	// 0x33091db5
- (id)accessibilityLabel;	// 0x33091d31
- (void)dealloc;	// 0x33091871
- (void)layoutSubcontrols;	// 0x33091ce9
- (CGSize)renderedSize;	// 0x33091b21
- (void)setRating:(id)rating;	// 0x330919f5
- (void)setRatingSnapsToTitle:(BOOL)title;	// 0x33091a79
- (void)setRightImage:(id)image;	// 0x33091aa9
- (void)setRightImageFixedHeight:(float)height;	// 0x33091ae5
- (void)setTitle:(id)title;	// 0x330918f9
- (void)setTitleSubtext:(id)subtext;	// 0x33091975
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x33091c11
@end

