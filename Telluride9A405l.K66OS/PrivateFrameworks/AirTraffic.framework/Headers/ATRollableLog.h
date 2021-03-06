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
@property(retain) NSFileHandle *fh;	// G=0x350ec019; S=0x350ec02d; @synthesize=_fh
@property(retain) NSDate *lastStatDate;	// G=0x350ec051; S=0x350ec065; @synthesize=_lastStatDate
+ (id)_filenameWithBase:(id)base generationalFormat:(id)format generation:(int)generation;	// 0x350eacd9
+ (id)_generationalFormatFromBase:(id)base;	// 0x350eabf5
+ (id)allLogFilesForFilename:(id)filename;	// 0x350eadc9
+ (void)enableLogRolling;	// 0x350eabf1
+ (id)loggerWithFilename:(id)filename;	// 0x350ebc91
- (id)initWithFilename:(id)filename;	// 0x350eb56d
- (id)_filenameWithGenerationNumber:(int)generationNumber;	// 0x350ead0d
- (id)_fullCompressedFilePathWithGenerationNumber:(int)generationNumber;	// 0x350ead95
- (id)_fullFilePathWithGenerationNumber:(int)generationNumber;	// 0x350ead5d
- (void)_loadUpHandle;	// 0x350eaea5
- (void)_rollLogs;	// 0x350eb1a1
- (void)_statFileIfNecessaryForRollingCheck;	// 0x350eb411
- (id)compressFile:(id)file;	// 0x350ebd79
// declared property getter: - (id)fh;	// 0x350ec019
// declared property getter: - (id)lastStatDate;	// 0x350ec051
- (void)logData:(id)data;	// 0x350eb699
- (void)logString:(id)string;	// 0x350eb811
// declared property setter: - (void)setFh:(id)fh;	// 0x350ec02d
// declared property setter: - (void)setLastStatDate:(id)date;	// 0x350ec065
- (void)slurpDataFromFile:(id)file;	// 0x350eb845
@end

