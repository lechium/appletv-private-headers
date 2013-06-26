/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "LTDownloadTestConnection.h"
#import "BRDownload.h"

@class ATVVideoCacheManager;

__attribute__((visibility("hidden")))
@interface LTAVDownloadTestConnection : LTDownloadTestConnection <BRDownload> {
	ATVVideoCacheManager *_videoCacheManager;	// 96 = 0x60
	double _computedBandwidth;	// 100 = 0x64
	long long _lastBytesTransferred;	// 108 = 0x6c
	unsigned long _consecutiveSameBytesTransferredNeeded;	// 116 = 0x74
	unsigned long long _numSamplesTakenToComputeTime;	// 120 = 0x78
}
- (id)initWithURLString:(id)urlstring;	// 0x69529
- (void).cxx_destruct;	// 0x69de9
- (unsigned long long)byteCount;	// 0x69db9
- (void)downloadFinished;	// 0x69ca1
- (int)downloadState;	// 0x69d69
- (int)downloadStateContext;	// 0x69d8d
- (double)elapsedTime;	// 0x695cd
- (unsigned)expectedContentLength;	// 0x695fd
- (unsigned long long)expectedSize;	// 0x69da1
- (unsigned)fetchedDataLength;	// 0x695e9
- (void)markProgress;	// 0x697f1
- (void)pause;	// 0x69ddd
- (int)qualifiedDownloadState;	// 0x69d7d
- (void)resume;	// 0x69de1
- (void)setPlayable:(BOOL)playable;	// 0x69dd9
- (void)startConnection;	// 0x69601
- (double)startTime;	// 0x695b1
- (void)stopConnection;	// 0x69725
- (BOOL)testContent;	// 0x69de5
- (double)timeUntilPlayable;	// 0x69dcd
@end
