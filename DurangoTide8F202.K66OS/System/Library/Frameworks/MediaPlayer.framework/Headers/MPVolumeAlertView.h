/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIAlertView.h> // Unknown library
#import "UIModalViewDelegate.h"

@class NSString;

@interface MPVolumeAlertView : UIAlertView <UIModalViewDelegate> {
	NSString *_volumeAudioCategory;	// 148 = 0x94
}
- (void)dealloc;	// 0x31daa959
- (void)layout;	// 0x31daaca9
- (void)setVolumeAudioCategory:(id)category;	// 0x31daa835
- (id)volumeView;	// 0x31daa89d
@end

