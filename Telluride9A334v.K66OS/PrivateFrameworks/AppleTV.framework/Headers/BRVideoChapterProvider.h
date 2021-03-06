/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRProvider.h"
#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"

@class BRMediaPlayer, NSTimer;

__attribute__((visibility("hidden")))
@interface BRVideoChapterProvider : NSObject <BRProvider> {
@private
	BRMediaPlayer *_player;	// 4 = 0x4
	NSRange _invalidTitlesRange;	// 8 = 0x8
	NSTimer *_checkForChapterTitleUpdateTimer;	// 16 = 0x10
}
- (id)initWithPlayer:(id)player;	// 0x331f465d
- (void)_checkChapterTitle:(id)title;	// 0x331f4b5d
- (void)_movieLoadedHandler:(id)handler;	// 0x331f4c41
- (BOOL)_videoIsLoaded;	// 0x331f4b11
- (id)controlFactory;	// 0x331f47c1
- (id)dataAtIndex:(long)index;	// 0x331f4821
- (long)dataCount;	// 0x331f47dd
- (void)dealloc;	// 0x331f4745
- (id)hashForDataAtIndex:(long)index;	// 0x331f4ab1
- (void)stopMonitoring;	// 0x331f4ae1
@end

