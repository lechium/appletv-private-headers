/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class SSLogFileOptions, NSFileHandle;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface SSRollableLog : NSObject {
	NSObject<OS_dispatch_queue> *_dispatchQueue;	// 4 = 0x4
	double _lastFileStatTime;	// 8 = 0x8
	NSFileHandle *_fileHandle;	// 16 = 0x10
	NSObject<OS_dispatch_source> *_fileObserverSource;	// 20 = 0x14
	SSLogFileOptions *_options;	// 24 = 0x18
}
@property(readonly, assign) SSLogFileOptions *logOptions;	// G=0x32380501; 
- (id)initWithLogOptions:(id)logOptions;	// 0x323803d1
- (id)_activeLogFilePath;	// 0x32380779
- (void)_checkLogFileSize;	// 0x32380791
- (void)_closeLogFile;	// 0x32380869
- (id)_logFilePathWithIndex:(int)index;	// 0x323808b1
- (void)_openLogFile;	// 0x323809f5
- (void)_rollLogFiles;	// 0x32380bf9
- (void)dealloc;	// 0x32380471
// declared property getter: - (id)logOptions;	// 0x32380501
- (void)writeString:(id)string;	// 0x32380539
@end
