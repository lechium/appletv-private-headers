/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RUIYTDocument.h"

@class NSString;

@interface RUIYTRateDocument : RUIYTDocument {
	NSString *_accessToken;	// 52 = 0x34
	NSString *_videoID;	// 56 = 0x38
	int _rating;	// 60 = 0x3c
}
@property(retain) NSString *accessToken;	// G=0x1ff85; S=0x1ffb5; @synthesize=_accessToken
@property(assign) int rating;	// G=0x1fd51; S=0x1fd61; @synthesize=_rating
@property(retain) NSString *videoID;	// G=0x1ff9d; S=0x1ffe1; @synthesize=_videoID
- (id)URLRequest;	// 0x1fd71
// declared property getter: - (id)accessToken;	// 0x1ff85
- (void)dealloc;	// 0x1ff29
- (void)documentLoaded;	// 0x1fd4d
// declared property getter: - (int)rating;	// 0x1fd51
// declared property setter: - (void)setAccessToken:(id)token;	// 0x1ffb5
// declared property setter: - (void)setRating:(int)rating;	// 0x1fd61
// declared property setter: - (void)setVideoID:(id)anId;	// 0x1ffe1
// declared property getter: - (id)videoID;	// 0x1ff9d
@end

