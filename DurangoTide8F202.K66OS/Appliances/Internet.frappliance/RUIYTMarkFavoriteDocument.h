/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RUIYTDocument.h"

@class NSString;

@interface RUIYTMarkFavoriteDocument : RUIYTDocument {
	NSString *_accessToken;	// 52 = 0x34
	NSString *_videoID;	// 56 = 0x38
}
@property(retain) NSString *accessToken;	// G=0x1fb81; S=0x1fbb1; @synthesize=_accessToken
@property(retain) NSString *videoID;	// G=0x1fb99; S=0x1fbdd; @synthesize=_videoID
- (id)URLRequest;	// 0x1f981
// declared property getter: - (id)accessToken;	// 0x1fb81
- (void)dealloc;	// 0x1fb25
- (void)documentLoaded;	// 0x1f97d
// declared property setter: - (void)setAccessToken:(id)token;	// 0x1fbb1
// declared property setter: - (void)setVideoID:(id)anId;	// 0x1fbdd
// declared property getter: - (id)videoID;	// 0x1fb99
@end

