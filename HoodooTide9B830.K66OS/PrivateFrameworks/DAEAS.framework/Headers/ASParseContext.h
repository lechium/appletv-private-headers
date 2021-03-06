/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <NSObject.h> // Unknown library
#import "DAEAS-Structs.h"

@class NSFileHandle, NSMutableArray, NSString;

@interface ASParseContext : NSObject {
	NSMutableArray *_dataBuffers;	// 4 = 0x4
	unsigned _offsetIntoFirstData;	// 8 = 0x8
	long long _curOffset;	// 12 = 0xc
	int _codePage;	// 20 = 0x14
	NSString *_parseErrorReason;	// 24 = 0x18
	BOOL _moreDataExpected;	// 28 = 0x1c
	int _dataGeneration;	// 32 = 0x20
	long long _expectedTotalBytesCount;	// 36 = 0x24
	long long _currentBytesReceivedCount;	// 44 = 0x2c
	unsigned _lastFoundBufferWithoutLineEnding;	// 52 = 0x34
	unsigned _numTokensInBuffersWithoutLineEndings;	// 56 = 0x38
	BOOL _lastLookedAtBufferHadStringEndPrefix;	// 60 = 0x3c
	BOOL _keepPreviousData;	// 61 = 0x3d
	NSMutableArray *_bypassedDataBuffers;	// 64 = 0x40
	NSFileHandle *_logFileHandle;	// 68 = 0x44
	NSString *_logFilePath;	// 72 = 0x48
	int _streamingState;	// 76 = 0x4c
}
@property(assign) int codePage;	// G=0x318a3d01; S=0x318a3d11; @synthesize=_codePage
@property(readonly, assign) long long curOffset;	// G=0x318a3ccd; @synthesize=_curOffset
@property(readonly, assign) long long currentBytesReceivedCount;	// G=0x318a3e01; @synthesize=_currentBytesReceivedCount
@property(assign) int dataGeneration;	// G=0x318a3d79; S=0x318a3d89; @synthesize=_dataGeneration
@property(assign) long long expectedTotalBytesCount;	// G=0x318a3d99; S=0x318a3dcd; @synthesize=_expectedTotalBytesCount
@property(assign) BOOL keepPreviousData;	// G=0x318a3e55; S=0x318a3e65; @synthesize=_keepPreviousData
@property(assign) BOOL moreDataExpected;	// G=0x318a3d59; S=0x318a3d69; @synthesize=_moreDataExpected
@property(retain) NSString *parseErrorReason;	// G=0x318a3d21; S=0x318a3d35; @synthesize=_parseErrorReason
@property(assign, nonatomic) int streamingState;	// G=0x318a3e35; S=0x318a3e45; @synthesize=_streamingState
+ (dispatch_queue_s *)_logQueue;	// 0x318a24f1
- (id)init;	// 0x318a251d
- (void)_logBlobChunk:(id)chunk;	// 0x318a35dd
- (void)_moveLogFileContentsAtPath:(id)path;	// 0x318a2711
- (int)_numTokensForNextOpaqueDataCheckNumTokens:(BOOL)nextOpaqueDataCheckNumTokens;	// 0x318a3b19
- (void)addData:(id)data;	// 0x318a3721
- (BOOL)advanceOffsetByAmount:(unsigned)amount;	// 0x318a34a5
- (BOOL)advanceOffsetByAmount:(unsigned)amount retainLastToken:(BOOL)token;	// 0x318a3305
- (char *)bufferForLength:(unsigned)length shouldFree:(BOOL *)free;	// 0x318a3121
- (id)bufferWithAllData;	// 0x318a3039
- (unsigned char)byteAtOffsetFromCurrentByte:(unsigned)currentByte;	// 0x318a398d
// declared property getter: - (int)codePage;	// 0x318a3d01
// declared property getter: - (long long)curOffset;	// 0x318a3ccd
- (unsigned char)currentByte;	// 0x318a37fd
// declared property getter: - (long long)currentBytesReceivedCount;	// 0x318a3e01
// declared property getter: - (int)dataGeneration;	// 0x318a3d79
- (void)dealloc;	// 0x318a2ac9
// declared property getter: - (long long)expectedTotalBytesCount;	// 0x318a3d99
- (long)goodSizeForBuffer;	// 0x318a2fb9
- (BOOL)hasNumberOfTokensRemaining:(unsigned)tokensRemaining;	// 0x318a2b7d
- (void)invalidateBuffers;	// 0x318a3c5d
// declared property getter: - (BOOL)keepPreviousData;	// 0x318a3e55
// declared property getter: - (BOOL)moreDataExpected;	// 0x318a3d59
- (unsigned char)nextByte;	// 0x318a3a91
- (int)numTokensForNextOpaqueData;	// 0x318a3be1
- (int)numTokensForNextString;	// 0x318a3aa9
- (int)numTokensStreamableForNextStringSizeOfTerminator:(int *)terminator;	// 0x318a3bf5
- (int)numberOfBytesUntilStringEnd:(char *)bytesUntilStringEnd searchStringLength:(int)length acceptingBufferBits:(BOOL)bits;	// 0x318a2c41
// declared property getter: - (id)parseErrorReason;	// 0x318a3d21
- (void)resetToZeroOffset;	// 0x318a34bd
// declared property setter: - (void)setCodePage:(int)page;	// 0x318a3d11
// declared property setter: - (void)setDataGeneration:(int)generation;	// 0x318a3d89
// declared property setter: - (void)setExpectedTotalBytesCount:(long long)count;	// 0x318a3dcd
// declared property setter: - (void)setKeepPreviousData:(BOOL)data;	// 0x318a3e65
// declared property setter: - (void)setMoreDataExpected:(BOOL)expected;	// 0x318a3d69
// declared property setter: - (void)setParseErrorReason:(id)reason;	// 0x318a3d35
- (void)setShouldLog:(BOOL)log;	// 0x318a2569
// declared property setter: - (void)setStreamingState:(int)state;	// 0x318a3e45
// declared property getter: - (int)streamingState;	// 0x318a3e35
@end

