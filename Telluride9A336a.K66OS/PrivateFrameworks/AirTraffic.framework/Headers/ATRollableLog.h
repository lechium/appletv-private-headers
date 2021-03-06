/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import "AirTraffic-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSFileHandle, NSDate;

@interface ATRollableLog : NSObject {
	NSDate *_lastStatDate;	// 4 = 0x4
	NSString *_directory;	// 8 = 0x8
	NSString *_baseFilename;	// 12 = 0xc
	NSString *_generationalFilenameFormat;	// 16 = 0x10
	NSFileHandle *_fh;	// 20 = 0x14
	dispatch_source_s *_fdWatcher;	// 24 = 0x18
	dispatch_queue_s *_logQueue;	// 28 = 0x1c
	dispatch_queue_s *_logRequestQueue;	// 32 = 0x20
}
@property(retain) NSFileHandle *fh;	// G=0x3248e02d; S=0x3248e041; @synthesize=_fh
@property(retain) NSDate *lastStatDate;	// G=0x3248e065; S=0x3248e079; @synthesize=_lastStatDate
+ (id)_filenameWithBase:(id)base generationalFormat:(id)format generation:(int)generation;	// 0x3248cced
+ (id)_generationalFormatFromBase:(id)base;	// 0x3248cc09
+ (id)allLogFilesForFilename:(id)filename;	// 0x3248cddd
+ (void)enableLogRolling;	// 0x3248cc05
+ (id)loggerWithFilename:(id)filename;	// 0x3248dca5
- (id)initWithFilename:(id)filename;	// 0x3248d581
- (id)_filenameWithGenerationNumber:(int)generationNumber;	// 0x3248cd21
- (id)_fullCompressedFilePathWithGenerationNumber:(int)generationNumber;	// 0x3248cda9
- (id)_fullFilePathWithGenerationNumber:(int)generationNumber;	// 0x3248cd71
- (void)_loadUpHandle;	// 0x3248ceb9
- (void)_rollLogs;	// 0x3248d1b5
- (void)_statFileIfNecessaryForRollingCheck;	// 0x3248d425
- (id)compressFile:(id)file;	// 0x3248dd8d
// declared property getter: - (id)fh;	// 0x3248e02d
// declared property getter: - (id)lastStatDate;	// 0x3248e065
- (void)logData:(id)data;	// 0x3248d6ad
- (void)logString:(id)string;	// 0x3248d825
// declared property setter: - (void)setFh:(id)fh;	// 0x3248e041
// declared property setter: - (void)setLastStatDate:(id)date;	// 0x3248e079
- (void)slurpDataFromFile:(id)file;	// 0x3248d859
@end

