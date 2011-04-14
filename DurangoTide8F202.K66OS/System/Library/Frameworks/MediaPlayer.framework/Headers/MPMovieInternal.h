/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library

@class MPAVItem, NSURL, AVFileValidator;

@interface MPMovieInternal : NSObject {
@private
	MPAVItem *_item;	// 4 = 0x4
	NSURL *_url;	// 8 = 0x8
	AVFileValidator *_fileValidator;	// 12 = 0xc
	int _movieSourceType;	// 16 = 0x10
	double _startPlaybackTime;	// 20 = 0x14
	double _endPlaybackTime;	// 28 = 0x1c
	BOOL _explicitlySetMovieSourceType;	// 36 = 0x24
	BOOL _movieIsUnplayable;	// 37 = 0x25
	double _lastKnownDuration;	// 40 = 0x28
	CGSize _lastKnownNaturalSize;	// 48 = 0x30
	unsigned _lastKnownType;	// 56 = 0x38
}
@end

