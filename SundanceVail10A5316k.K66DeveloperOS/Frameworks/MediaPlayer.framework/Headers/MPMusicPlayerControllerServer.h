/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class MPMusicPlayerControllerServerInternal, MPAVController;

@interface MPMusicPlayerControllerServer : NSObject {
@private
	MPMusicPlayerControllerServerInternal *_internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) MPAVController *player;	// G=0x3487a525; 
+ (void)initialize;	// 0x3487a2b1
+ (BOOL)isMusicPlayerControllerServerRunning;	// 0x3487a3e9
+ (id)sharedInstance;	// 0x3487a3fd
+ (void)startMusicPlayerControllerServerWithDelegate:(id)delegate;	// 0x3487a31d
- (id)initWithDelegate:(id)delegate;	// 0x3487a40d
- (void)_runMigServer;	// 0x3487da6d
- (void)dealloc;	// 0x3487a495
- (void)forwardInvocation:(id)invocation;	// 0x3487a4e1
- (id)methodSignatureForSelector:(SEL)selector;	// 0x3487a505
// declared property getter: - (id)player;	// 0x3487a525
@end

