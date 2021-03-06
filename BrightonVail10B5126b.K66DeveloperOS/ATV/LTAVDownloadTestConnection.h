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
- (id)initWithURLString:(id)urlstring;	// 0x68e11
- (void).cxx_destruct;	// 0x696d1
- (unsigned long long)byteCount;	// 0x696a1
- (void)downloadFinished;	// 0x69589
- (int)downloadState;	// 0x69651
- (int)downloadStateContext;	// 0x69675
- (double)elapsedTime;	// 0x68eb5
- (unsigned)expectedContentLength;	// 0x68ee5
- (unsigned long long)expectedSize;	// 0x69689
- (unsigned)fetchedDataLength;	// 0x68ed1
- (void)markProgress;	// 0x690d9
- (void)pause;	// 0x696c5
- (int)qualifiedDownloadState;	// 0x69665
- (void)resume;	// 0x696c9
- (void)setPlayable:(BOOL)playable;	// 0x696c1
- (void)startConnection;	// 0x68ee9
- (double)startTime;	// 0x68e99
- (void)stopConnection;	// 0x6900d
- (BOOL)testContent;	// 0x696cd
- (double)timeUntilPlayable;	// 0x696b5
@end

