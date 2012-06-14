/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "StoreKit-Structs.h"

@class NSError, NSURL, NSNumber;

@interface SKDownloadChangeset : NSObject <NSCopying> {
@private
	NSNumber *_contentLength;	// 4 = 0x4
	NSURL *_contentURL;	// 8 = 0x8
	NSNumber *_downloadID;	// 12 = 0xc
	NSNumber *_downloadState;	// 16 = 0x10
	NSError *_error;	// 20 = 0x14
	NSNumber *_progress;	// 24 = 0x18
	NSNumber *_timeRemaining;	// 28 = 0x1c
}
@property(copy, nonatomic) NSNumber *contentLength;	// G=0x349fe231; S=0x349fe245; @synthesize=_contentLength
@property(copy, nonatomic) NSURL *contentURL;	// G=0x349fe255; S=0x349fe269; @synthesize=_contentURL
@property(copy, nonatomic) NSNumber *downloadID;	// G=0x349fe279; S=0x349fe28d; @synthesize=_downloadID
@property(copy, nonatomic) NSNumber *downloadState;	// G=0x349fe29d; S=0x349fe2b1; @synthesize=_downloadState
@property(copy, nonatomic) NSError *error;	// G=0x349fe2c1; S=0x349fe2d5; @synthesize=_error
@property(copy, nonatomic) NSNumber *progress;	// G=0x349fe2e5; S=0x349fe2f9; @synthesize=_progress
@property(copy, nonatomic) NSNumber *timeRemaining;	// G=0x349fe309; S=0x349fe31d; @synthesize=_timeRemaining
+ (id)changesetWithDownloadID:(id)downloadID state:(int)state;	// 0x349fdd6d
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x349fde01
// declared property getter: - (id)contentLength;	// 0x349fe231
// declared property getter: - (id)contentURL;	// 0x349fe255
- (id)copyWithZone:(NSZone *)zone;	// 0x349fe125
- (id)copyXPCEncoding;	// 0x349fe025
- (void)dealloc;	// 0x349fdca5
// declared property getter: - (id)downloadID;	// 0x349fe279
// declared property getter: - (id)downloadState;	// 0x349fe29d
// declared property getter: - (id)error;	// 0x349fe2c1
// declared property getter: - (id)progress;	// 0x349fe2e5
// declared property setter: - (void)setContentLength:(id)length;	// 0x349fe245
// declared property setter: - (void)setContentURL:(id)url;	// 0x349fe269
// declared property setter: - (void)setDownloadID:(id)anId;	// 0x349fe28d
// declared property setter: - (void)setDownloadState:(id)state;	// 0x349fe2b1
// declared property setter: - (void)setError:(id)error;	// 0x349fe2d5
// declared property setter: - (void)setProgress:(id)progress;	// 0x349fe2f9
// declared property setter: - (void)setTimeRemaining:(id)remaining;	// 0x349fe31d
// declared property getter: - (id)timeRemaining;	// 0x349fe309
@end

