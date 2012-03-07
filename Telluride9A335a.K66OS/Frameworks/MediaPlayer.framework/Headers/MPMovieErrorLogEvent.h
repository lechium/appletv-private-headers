/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "NSCopying.h"
#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library

@class NSDate, NSString;

@interface MPMovieErrorLogEvent : NSObject <NSCopying> {
@private
	MPMovieErrorLogEventInternal _internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *URI;	// G=0x300f01b1; 
@property(assign, nonatomic) MPMovieErrorLogEventInternal _internal;	// G=0x300f0271; S=0x300f0285; @synthesize
@property(readonly, assign, nonatomic) NSDate *date;	// G=0x300f0191; 
@property(readonly, assign, nonatomic) NSString *errorComment;	// G=0x300f0251; 
@property(readonly, assign, nonatomic) NSString *errorDomain;	// G=0x300f0231; 
@property(readonly, assign, nonatomic) int errorStatusCode;	// G=0x300f0211; 
@property(readonly, assign, nonatomic) NSString *playbackSessionID;	// G=0x300f01f1; 
@property(readonly, assign, nonatomic) NSString *serverAddress;	// G=0x300f01d1; 
// declared property getter: - (id)URI;	// 0x300f01b1
- (id)_initWithAVItemErrorLogEvent:(id)avitemErrorLogEvent;	// 0x300f00e1
// declared property getter: - (MPMovieErrorLogEventInternal)_internal;	// 0x300f0271
- (id)copyWithZone:(NSZone *)zone;	// 0x300f0181
// declared property getter: - (id)date;	// 0x300f0191
- (void)dealloc;	// 0x300f0135
// declared property getter: - (id)errorComment;	// 0x300f0251
// declared property getter: - (id)errorDomain;	// 0x300f0231
// declared property getter: - (int)errorStatusCode;	// 0x300f0211
// declared property getter: - (id)playbackSessionID;	// 0x300f01f1
// declared property getter: - (id)serverAddress;	// 0x300f01d1
// declared property setter: - (void)set_internal:(MPMovieErrorLogEventInternal)internal;	// 0x300f0285
@end
