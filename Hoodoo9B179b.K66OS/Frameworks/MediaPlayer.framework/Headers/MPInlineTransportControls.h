/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPTransportControls.h"

@class UIActivityIndicatorView, UILabel;

@interface MPInlineTransportControls : MPTransportControls {
@private
	UILabel *_loadingMovieLabel;	// 128 = 0x80
	UIActivityIndicatorView *_loadingMovieIndicator;	// 132 = 0x84
}
@property(readonly, assign, nonatomic) CGRect availableProgressControlAreaFrame;	// G=0x309a2381; 
- (id)initWithFrame:(CGRect)frame;	// 0x309a1775
// declared property getter: - (CGRect)availableProgressControlAreaFrame;	// 0x309a2381
- (id)buttonImageForPart:(unsigned)part;	// 0x309a1add
- (void)dealloc;	// 0x309a17e5
- (void)layoutSubviews;	// 0x309a1be1
- (id)pauseButtonImage;	// 0x309a1b9d
- (id)playButtonImage;	// 0x309a1b91
- (void)reloadForAdditions:(id)additions removals:(id)removals animate:(BOOL)animate;	// 0x309a1845
- (void)setDisabledParts:(unsigned)parts;	// 0x309a1ba9
@end

