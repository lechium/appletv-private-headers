/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "NetflixNrdObjectProtocol.h"
#import "NetflixNrdObject.h"

@class NetflixNrdObjectCallback;

__attribute__((visibility("hidden")))
@interface NetflixMedia : NetflixNrdObject <NetflixNrdObjectProtocol> {
@private
	NetflixNrdObjectCallback *nccpErrorListener_;	// 12 = 0xc
	NetflixNrdObjectCallback *nccpMediaListener_;	// 16 = 0x10
	NetflixNrdObjectCallback *nccpMediaExceptionListener_;	// 20 = 0x14
}
@property(retain, nonatomic) NetflixNrdObjectCallback *nccpErrorListener;	// G=0x32c84135; S=0x32c84145; @synthesize=nccpErrorListener_
@property(retain, nonatomic) NetflixNrdObjectCallback *nccpMediaExceptionListener;	// G=0x32c8419d; S=0x32c841ad; @synthesize=nccpMediaExceptionListener_
@property(retain, nonatomic) NetflixNrdObjectCallback *nccpMediaListener;	// G=0x32c84169; S=0x32c84179; @synthesize=nccpMediaListener_
+ (id)sharedInstance;	// 0x32c834ad
- (id)init;	// 0x32c8358d
- (void)addEventListener:(id)listener name:(id)name;	// 0x32c839f1
- (void)close;	// 0x32c84059
- (void)dealloc;	// 0x32c836ed
- (BOOL)handleEvent:(id)event;	// 0x32c8381d
- (void)handleMediaError:(id)error;	// 0x32c840c5
- (void)handleMediaException:(id)exception;	// 0x32c840fd
- (void)handleNccpError:(id)error;	// 0x32c8408d
// declared property getter: - (id)nccpErrorListener;	// 0x32c84135
// declared property getter: - (id)nccpMediaExceptionListener;	// 0x32c8419d
// declared property getter: - (id)nccpMediaListener;	// 0x32c84169
- (void)open:(unsigned)open trackId:(unsigned)anId params:(id)params playbackType:(unsigned)type;	// 0x32c83a81
- (void)pause:(int)pause;	// 0x32c83dc9
- (void)play:(int)play;	// 0x32c83cd5
- (void)play:(int)play audioTrack:(int)track;	// 0x32c83ce9
- (void)removeEventListener:(id)listener name:(id)name;	// 0x32c83a39
- (void)reposition:(int)reposition;	// 0x32c83f11
// declared property setter: - (void)setNccpErrorListener:(id)listener;	// 0x32c84145
// declared property setter: - (void)setNccpMediaExceptionListener:(id)listener;	// 0x32c841ad
// declared property setter: - (void)setNccpMediaListener:(id)listener;	// 0x32c84179
- (void)stop:(int)stop;	// 0x32c83fb5
- (void)unpause:(int)unpause;	// 0x32c83e6d
@end
