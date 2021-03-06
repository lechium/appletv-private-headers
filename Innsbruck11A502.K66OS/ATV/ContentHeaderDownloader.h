/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AppleTV-Structs.h"

@class ContentDownloadData;
@protocol ContentHeaderDownloaderProtocol;

@interface ContentHeaderDownloader : XXUnknownSuperclass {
	ContentDownloadData *contentDownloadData;	// 52 = 0x34
	shared_ptr<netflix::http::HttpStreamReader> headerHttpReader;	// 56 = 0x38
	shared_ptr<netflix::http::HttpStreamReader> transportHttpReader;	// 64 = 0x40
	shared_ptr<netflix::http::HttpStreamReader> iFrameHttpReader;	// 72 = 0x48
	id<ContentHeaderDownloaderProtocol> delegate_;	// 80 = 0x50
}
@property(assign) id<ContentHeaderDownloaderProtocol> delegate;	// G=0x5ad249; S=0x5ad25d; @synthesize=delegate_
- (id)initWithContentDownloadData:(id)contentDownloadData delegate:(id)delegate;	// 0x5aab0d
- (id).cxx_construct;	// 0x5ad3a9
- (void).cxx_destruct;	// 0x5ad275
- (void)dealloc;	// 0x5aaced
// declared property getter: - (id)delegate;	// 0x5ad249
- (void)downloadContentHeader:(id)header;	// 0x5ad049
- (BOOL)downloadContentHeaderInternal;	// 0x5aadd1
- (BOOL)downloadContentHeaderInternalDash;	// 0x5acc71
- (BOOL)downloadDashHeaderDataToBuffer:(char *)buffer startAt:(int)at length:(int)length;	// 0x5ac775
- (const char *)mediaTypeToDLType:(int)dltype;	// 0x5aad91
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x5ad25d
- (id)urlAsRangeRequest:(id)request startOffset:(long long)offset endOffset:(long long)offset3;	// 0x5ad195
@end

