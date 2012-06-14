/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

#import <NSObject.h> // Unknown library
#import "MediaToolbox-Structs.h"
#import "SSPlayInfoRequestDelegate.h"

@class SSPlayInfoRequest;

@interface FPAPSSPlayInfoRequestHandler : NSObject <SSPlayInfoRequestDelegate> {
@private
	OpaqueFigPlayer *_player;	// 4 = 0x4
	SSPlayInfoRequest *_playInfoRequest;	// 8 = 0x8
}
- (id)init;	// 0x33205dad
- (void)dealloc;	// 0x33205df9
- (void)playInfoRequest:(id)request didReceiveResponse:(id)response;	// 0x33205ea5
- (void)request:(id)request didFailWithError:(id)error;	// 0x33205ea9
- (void)requestDidFinish:(id)request;	// 0x33206295
- (void)setPlayer:(OpaqueFigPlayer *)player;	// 0x33205e59
- (void)setRequest:(id)request;	// 0x33205e69
@end

