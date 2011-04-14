/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "NSCopying.h"
#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVPlayerItemErrorLogEventInternal, NSString, NSDate;

@interface AVPlayerItemErrorLogEvent : NSObject <NSCopying> {
@private
	AVPlayerItemErrorLogEventInternal *_playerItemErrorLogEvent;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *URI;	// G=0x30423171; 
@property(readonly, assign, nonatomic) NSDate *date;	// G=0x30423115; 
@property(readonly, assign, nonatomic) NSString *errorComment;	// G=0x304230b9; 
@property(readonly, assign, nonatomic) NSString *errorDomain;	// G=0x30423285; 
@property(readonly, assign, nonatomic) int errorStatusCode;	// G=0x30422a3d; 
@property(readonly, assign, nonatomic) NSString *playbackSessionID;	// G=0x30423229; 
@property(readonly, assign, nonatomic) NSString *serverAddress;	// G=0x304231cd; 
- (id)init;	// 0x30422b55
- (id)initWithDictionary:(id)dictionary;	// 0x30422a99
// declared property getter: - (id)URI;	// 0x30423171
- (id)copyWithZone:(NSZone *)zone;	// 0x30422a85
// declared property getter: - (id)date;	// 0x30423115
- (void)dealloc;	// 0x30422d79
// declared property getter: - (id)errorComment;	// 0x304230b9
// declared property getter: - (id)errorDomain;	// 0x30423285
// declared property getter: - (int)errorStatusCode;	// 0x30422a3d
- (void)finalize;	// 0x30422de1
// declared property getter: - (id)playbackSessionID;	// 0x30423229
// declared property getter: - (id)serverAddress;	// 0x304231cd
@end

