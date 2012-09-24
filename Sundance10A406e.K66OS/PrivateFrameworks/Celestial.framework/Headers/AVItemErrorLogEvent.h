/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class AVItemErrorLogEventInternal, NSDate, NSString;

@interface AVItemErrorLogEvent : NSObject <NSCopying> {
	AVItemErrorLogEventInternal *_playerItemErrorLogEvent;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *URI;	// G=0x36d47669; 
@property(readonly, assign, nonatomic) NSDate *date;	// G=0x36d475f5; 
@property(readonly, assign, nonatomic) NSString *errorComment;	// G=0x36d47895; 
@property(readonly, assign, nonatomic) NSString *errorDomain;	// G=0x36d47821; 
@property(readonly, assign, nonatomic) int errorStatusCode;	// G=0x36d477c5; 
@property(readonly, assign, nonatomic) NSString *playbackSessionID;	// G=0x36d47751; 
@property(readonly, assign, nonatomic) NSString *serverAddress;	// G=0x36d476dd; 
- (id)init;	// 0x36d47449
- (id)initWithDictionary:(id)dictionary;	// 0x36d474e1
// declared property getter: - (id)URI;	// 0x36d47669
- (id)copyWithZone:(NSZone *)zone;	// 0x36d47535
// declared property getter: - (id)date;	// 0x36d475f5
- (void)dealloc;	// 0x36d47589
// declared property getter: - (id)errorComment;	// 0x36d47895
// declared property getter: - (id)errorDomain;	// 0x36d47821
// declared property getter: - (int)errorStatusCode;	// 0x36d477c5
- (void)finalize;	// 0x36d47545
// declared property getter: - (id)playbackSessionID;	// 0x36d47751
// declared property getter: - (id)serverAddress;	// 0x36d476dd
@end
