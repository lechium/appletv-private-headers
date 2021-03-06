/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <NSObject.h> // Unknown library

@class NSArray;
@protocol CoreDAVAccountInfoProvider;

@interface CoreDAVRequestLogger : NSObject {
	id<CoreDAVAccountInfoProvider> _provider;	// 4 = 0x4
	NSArray *_headerSortDescriptors;	// 8 = 0x8
	int _snippetsLogged;	// 12 = 0xc
}
@property(retain) NSArray *headerSortDescriptors;	// G=0x334168ed; S=0x33416901; @synthesize=_headerSortDescriptors
- (id)initWithProvider:(id)provider;	// 0x334158ed
- (id)_inflateRequestBody:(id)body;	// 0x33415a55
- (void)dealloc;	// 0x334159f1
- (void)finishCoreDAVResponse;	// 0x334167a5
// declared property getter: - (id)headerSortDescriptors;	// 0x334168ed
- (void)logCoreDAVRequest:(id)request;	// 0x33415bb5
- (void)logCoreDAVResponseHeaders:(id)headers andStatusCode:(int)code;	// 0x334162c1
- (void)logCoreDAVResponseSnippet:(id)snippet;	// 0x33416691
// declared property setter: - (void)setHeaderSortDescriptors:(id)descriptors;	// 0x33416901
@end

