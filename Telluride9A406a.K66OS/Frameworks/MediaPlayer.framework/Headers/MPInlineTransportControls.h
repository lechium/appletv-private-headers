/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPTransportControls.h"

@class UILabel, UIActivityIndicatorView;

@interface MPInlineTransportControls : MPTransportControls {
@private
	UILabel *_loadingMovieLabel;	// 128 = 0x80
	UIActivityIndicatorView *_loadingMovieIndicator;	// 132 = 0x84
}
@property(readonly, assign, nonatomic) CGRect availableProgressControlAreaFrame;	// G=0x31a28c55; 
- (id)initWithFrame:(CGRect)frame;	// 0x31a28049
// declared property getter: - (CGRect)availableProgressControlAreaFrame;	// 0x31a28c55
- (id)buttonImageForPart:(unsigned)part;	// 0x31a283b1
- (void)dealloc;	// 0x31a280b9
- (void)layoutSubviews;	// 0x31a284b5
- (id)pauseButtonImage;	// 0x31a28471
- (id)playButtonImage;	// 0x31a28465
- (void)reloadForAdditions:(id)additions removals:(id)removals animate:(BOOL)animate;	// 0x31a28119
- (void)setDisabledParts:(unsigned)parts;	// 0x31a2847d
@end

