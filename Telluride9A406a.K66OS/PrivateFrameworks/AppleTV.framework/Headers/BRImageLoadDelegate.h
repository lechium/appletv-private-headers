/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class BRImageManager, BRImageLoadJob, NSMutableData;

__attribute__((visibility("hidden")))
@interface BRImageLoadDelegate : NSObject {
@private
	BRImageManager *_manager;	// 4 = 0x4
	BRImageLoadJob *_job;	// 8 = 0x8
	NSMutableData *_data;	// 12 = 0xc
}
@property(readonly, retain) BRImageLoadJob *job;	// G=0x3314288d; converted property
+ (id)imageLoadDelegateForManager:(id)manager withJob:(id)job;	// 0x33142689
- (id)initForManager:(id)manager withJob:(id)job;	// 0x331426c9
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x331427e9
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x33142825
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x3314278d
- (id)connection:(id)connection willCacheResponse:(id)response;	// 0x33142889
- (id)connection:(id)connection willSendRequest:(id)request redirectResponse:(id)response;	// 0x331427e5
- (void)connectionDidFinishLoading:(id)connection;	// 0x33142869
- (id)content;	// 0x3314289d
- (void)dealloc;	// 0x3314272d
// converted property getter: - (id)job;	// 0x3314288d
@end

