/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVSWUDownloadResult : NSObject {
@private
	BOOL _canceled;	// 4 = 0x4
	NSString *_failedURL;	// 8 = 0x8
}
+ (id)resultWithFailedURL:(id)failedURL wasCanceled:(BOOL)canceled;	// 0x339ad5ed
- (id)initWithFailedURL:(id)failedURL wasCanceled:(BOOL)canceled;	// 0x339ad62d
- (void)dealloc;	// 0x339ad691
- (id)missingFileURL;	// 0x339ad6ed
- (BOOL)wasCanceled;	// 0x339ad6dd
@end
