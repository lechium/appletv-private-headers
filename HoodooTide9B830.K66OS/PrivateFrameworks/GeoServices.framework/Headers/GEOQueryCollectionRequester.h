/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBRequester.h> // Unknown library

@class NSThread;

__attribute__((visibility("hidden")))
@interface GEOQueryCollectionRequester : PBRequester {
	NSThread *_thread;	// 88 = 0x58
}
- (id)initWithURL:(id)url andDelegate:(id)delegate;	// 0x35f1761d
- (void)_applicationDidEnterBackground:(id)_application;	// 0x35f17721
- (void)_cancelSubmissionOnThread;	// 0x35f1775d
- (void)dealloc;	// 0x35f176c5
@end
