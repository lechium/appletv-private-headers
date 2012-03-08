/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "UIGestureRecognizerDelegate.h"
#import <UIImageView.h> // Unknown library

@class UITapGestureRecognizer;
@protocol UIMovieSnapshotViewDelegate;

@interface UIMovieSnapshotView : UIImageView <UIGestureRecognizerDelegate> {
@private
	id<UIMovieSnapshotViewDelegate> _delegate;	// 52 = 0x34
	UITapGestureRecognizer *_tapGestureRecognizer;	// 56 = 0x38
}
@property(assign, nonatomic) id<UIMovieSnapshotViewDelegate> delegate;	// G=0x3093d2f5; S=0x3093d305; @synthesize=_delegate
- (id)initWithFrame:(CGRect)frame;	// 0x3093d181
- (void)_viewWasTapped:(id)tapped;	// 0x3093d2ad
- (void)dealloc;	// 0x3093d245
// declared property getter: - (id)delegate;	// 0x3093d2f5
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;	// 0x3093d2a9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3093d305
@end

