/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "MediaPlayer-Structs.h"
#import "NSCopying.h"

@class NSArray, NSData;

@interface MPMovieAccessLog : NSObject <NSCopying> {
@private
	MPMovieAccessLogInternal _internal;	// 4 = 0x4
}
@property(assign, nonatomic) MPMovieAccessLogInternal _internal;	// G=0x30934e15; S=0x30934e29; @synthesize
@property(readonly, assign, nonatomic) NSArray *events;	// G=0x30934cb1; 
@property(readonly, assign, nonatomic) NSData *extendedLogData;	// G=0x30934c71; 
@property(readonly, assign, nonatomic) unsigned extendedLogDataStringEncoding;	// G=0x30934c91; 
- (id)_initWithAVItemAccessLog:(id)avitemAccessLog;	// 0x30934ba9
// declared property getter: - (MPMovieAccessLogInternal)_internal;	// 0x30934e15
- (id)copyWithZone:(NSZone *)zone;	// 0x30934c61
- (void)dealloc;	// 0x30934c15
// declared property getter: - (id)events;	// 0x30934cb1
// declared property getter: - (id)extendedLogData;	// 0x30934c71
// declared property getter: - (unsigned)extendedLogDataStringEncoding;	// 0x30934c91
// declared property setter: - (void)set_internal:(MPMovieAccessLogInternal)internal;	// 0x30934e29
@end
