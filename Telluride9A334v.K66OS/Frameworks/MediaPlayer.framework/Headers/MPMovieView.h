/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIView.h> // Unknown library

@protocol MPMovieViewDelegate;

@interface MPMovieView : UIView {
@private
	id<MPMovieViewDelegate> _delegate;	// 48 = 0x30
}
@property(assign, nonatomic) id<MPMovieViewDelegate> delegate;	// G=0x34dc94e1; S=0x34dc94f1; @synthesize=_delegate
// declared property getter: - (id)delegate;	// 0x34dc94e1
- (void)didMoveToWindow;	// 0x34dc9499
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x34dc94f1
- (void)willMoveToWindow:(id)window;	// 0x34dc9445
@end

