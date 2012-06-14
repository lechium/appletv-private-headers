/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OCMapper.h"

@class OCDReader, NSData, CPImportTracing, NSURL;

__attribute__((visibility("hidden")))
@interface OCImporter : OCMapper {
@private
	NSURL *mURL;	// 12 = 0xc
	NSData *mData;	// 16 = 0x10
	OCDReader *mReader;	// 20 = 0x14
	CPImportTracing *mTracing;	// 24 = 0x18
	BOOL mTryAlternateReader;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) CPImportTracing *tracing;	// G=0x3126535d; @synthesize=mTracing
+ (void)initialize;	// 0x30fff9dd
- (id)initWithData:(id)data;	// 0x31264e91
- (id)initWithURL:(id)url;	// 0x31264df5
- (void)dealloc;	// 0x31264f21
- (id)filename;	// 0x3126533d
- (BOOL)isDocumentEncryptedUnsupportedVersion:(BOOL *)version errorMessage:(id *)message;	// 0x31265271
- (BOOL)isDocumentEncryptedUnsupportedVersionHelper:(BOOL *)helper errorMessage:(id *)message readError:(BOOL *)error;	// 0x31265001
- (BOOL)isXML;	// 0x3126536d
- (BOOL)setPassphrase:(id)passphrase;	// 0x31265305
- (void)setURL:(id)url;	// 0x31264fad
- (BOOL)start;	// 0x31265371
// declared property getter: - (id)tracing;	// 0x3126535d
- (BOOL)tryAlternateReader;	// 0x31264ff1
@end
