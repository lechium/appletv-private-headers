/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library

@class NSURL;

@interface MPMovie : NSObject {
@private
	id _internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) double duration;	// G=0x31a311bd; 
@property(assign, nonatomic) double endPlaybackTime;	// G=0x31a31331; S=0x31a31309; 
@property(readonly, assign, nonatomic) int movieMediaTypes;	// G=0x31a310b9; 
@property(assign, nonatomic) int movieSourceType;	// G=0x31a3119d; S=0x31a31105; 
@property(readonly, assign, nonatomic) CGSize naturalSize;	// G=0x31a31265; 
@property(readonly, assign, nonatomic) double playableDuration;	// G=0x31a31211; 
@property(assign, nonatomic) double startPlaybackTime;	// G=0x31a312e1; S=0x31a312b9; 
@property(readonly, assign, nonatomic) NSURL *url;	// G=0x31a31099; 
+ (id)movieWithURL:(id)url error:(id *)error;	// 0x31a30d51
- (id)_MPArrayQueueItem;	// 0x31a315ed
- (void)_determineMediaType;	// 0x31a316bd
- (void)_durationAvailableNotification:(id)notification;	// 0x31a31359
- (id)_initWithURL:(id)url error:(id *)error;	// 0x31a30d9d
- (void)_naturalSizeAvailableNotification:(id)notification;	// 0x31a3142d
- (void)_typeAvailableNotification:(id)notification;	// 0x31a31531
- (void)dealloc;	// 0x31a30f7d
// declared property getter: - (double)duration;	// 0x31a311bd
// declared property getter: - (double)endPlaybackTime;	// 0x31a31331
// declared property getter: - (int)movieMediaTypes;	// 0x31a310b9
// declared property getter: - (int)movieSourceType;	// 0x31a3119d
// declared property getter: - (CGSize)naturalSize;	// 0x31a31265
// declared property getter: - (double)playableDuration;	// 0x31a31211
// declared property setter: - (void)setEndPlaybackTime:(double)time;	// 0x31a31309
// declared property setter: - (void)setMovieSourceType:(int)type;	// 0x31a31105
// declared property setter: - (void)setStartPlaybackTime:(double)time;	// 0x31a312b9
// declared property getter: - (double)startPlaybackTime;	// 0x31a312e1
// declared property getter: - (id)url;	// 0x31a31099
@end

