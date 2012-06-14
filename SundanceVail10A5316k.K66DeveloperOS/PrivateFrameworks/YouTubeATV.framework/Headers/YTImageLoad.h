/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

#import "NSURLConnectionDelegate.h"
#import <NSObject.h> // Unknown library

@class NSMutableData, NSString, NSURL, NSURLConnection;

@interface YTImageLoad : NSObject <NSURLConnectionDelegate> {
	NSURL *_URL;	// 4 = 0x4
	NSURLConnection *_connection;	// 8 = 0x8
	NSMutableData *_imageData;	// 12 = 0xc
	NSString *_videoID;	// 16 = 0x10
}
- (void)_createImage;	// 0x35e6492d
- (void)_loadFinished;	// 0x35e64869
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x35e649e5
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x35e648e9
- (void)connectionDidFinishLoading:(id)connection;	// 0x35e649b5
- (void)dealloc;	// 0x35e64749
- (void)start;	// 0x35e647d5
@end

