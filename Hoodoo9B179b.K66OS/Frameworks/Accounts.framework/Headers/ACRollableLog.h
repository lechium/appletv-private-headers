/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Accounts.framework/Accounts
 */

#import <NSObject.h> // Unknown library
#import "Accounts-Structs.h"

@class NSDate, NSString, NSFileHandle;

@interface ACRollableLog : NSObject {
	NSDate *_lastStatDate;	// 4 = 0x4
	NSString *_baseFilename;	// 8 = 0x8
	NSString *_generationalFilenameFormat;	// 12 = 0xc
	NSFileHandle *_fh;	// 16 = 0x10
	dispatch_source_s *_fdWatcher;	// 20 = 0x14
	dispatch_queue_s *_logQueue;	// 24 = 0x18
	dispatch_queue_s *_logRequestQueue;	// 28 = 0x1c
}
@property(retain) NSFileHandle *fh;	// G=0x3179c001; S=0x3179c015; @synthesize=_fh
@property(retain) NSDate *lastStatDate;	// G=0x3179c039; S=0x3179c04d; @synthesize=_lastStatDate
+ (id)_filenameWithBase:(id)base generationalFormat:(id)format generation:(int)generation;	// 0x3179abfd
+ (id)_generationalFormatFromBase:(id)base;	// 0x3179ab19
+ (id)allLogFilesForFilename:(id)filename;	// 0x3179ad05
+ (void)enableLogRolling;	// 0x3179ab09
+ (id)loggerWithFilename:(id)filename;	// 0x3179bcad
- (id)initWithFilename:(id)filename;	// 0x3179b4f1
- (id)_filenameWithGenerationNumber:(int)generationNumber;	// 0x3179ac31
- (id)_fullCompressedFilePathWithGenerationNumber:(int)generationNumber;	// 0x3179acd1
- (id)_fullFilePathWithGenerationNumber:(int)generationNumber;	// 0x3179ac81
- (void)_loadUpHandle;	// 0x3179aded
- (void)_rollLogs;	// 0x3179b115
- (void)_statFileIfNecessaryForRollingCheck;	// 0x3179b385
- (id)compressFile:(id)file;	// 0x3179bd61
- (void)dealloc;	// 0x3179b61d
// declared property getter: - (id)fh;	// 0x3179c001
// declared property getter: - (id)lastStatDate;	// 0x3179c039
- (void)logData:(id)data;	// 0x3179b6b5
- (void)logString:(id)string;	// 0x3179b82d
// declared property setter: - (void)setFh:(id)fh;	// 0x3179c015
// declared property setter: - (void)setLastStatDate:(id)date;	// 0x3179c04d
- (void)slurpDataFromFile:(id)file;	// 0x3179b861
@end

