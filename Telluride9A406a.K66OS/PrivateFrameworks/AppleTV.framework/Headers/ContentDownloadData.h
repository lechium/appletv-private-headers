/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"

@class NSError, NSMutableData, NSLock, CDNDownloadData, NSMutableString, NSString;

__attribute__((visibility("hidden")))
@interface ContentDownloadData : NSObject {
@private
	BOOL ignore;	// 4 = 0x4
	NSLock *lock;	// 8 = 0x8
	CDNDownloadData *cdn;	// 12 = 0xc
	NSString *audioLanguageBCP47;	// 16 = 0x10
	NSString *downloadableId;	// 20 = 0x14
	unsigned bitRate;	// 24 = 0x18
	int trackIndex;	// 28 = 0x1c
	int streamIndex;	// 32 = 0x20
	unsigned sortedIndex;	// 36 = 0x24
	int contentProfile;	// 40 = 0x28
	NSString *url;	// 44 = 0x2c
	NSString *redirectedUrl;	// 48 = 0x30
	int state;	// 52 = 0x34
	int error;	// 56 = 0x38
	NSError *nsError;	// 60 = 0x3c
	BOOL failed;	// 64 = 0x40
	int httpStatusCode;	// 68 = 0x44
	int mediaType;	// 72 = 0x48
	double downloadStartTime;	// 76 = 0x4c
	double downloadEndTime;	// 84 = 0x54
	double playlistGenerateStartTime;	// 92 = 0x5c
	double playlistGenerateEndTime;	// 100 = 0x64
	double parseKeyStartTime;	// 108 = 0x6c
	double parseKeyEndTime;	// 116 = 0x74
	NSMutableString *moviePlaylist;	// 124 = 0x7c
	int movieDuration;	// 128 = 0x80
	int moviePeakBandwidth;	// 132 = 0x84
	int movieAverageBandwidth;	// 136 = 0x88
	NSMutableData *contentHeaderData;	// 140 = 0x8c
	int contentChunkStart;	// 144 = 0x90
	float m3u8ChunkRatio;	// 148 = 0x94
}
@property(readonly, retain, nonatomic) NSString *audioLanguageBCP47;	// G=0x3336bc78; @synthesize
@property(readonly, assign, nonatomic) unsigned bitRate;	// G=0x3336bc3c; @synthesize
@property(readonly, retain, nonatomic) CDNDownloadData *cdn;	// G=0x3336bcc8; @synthesize
@property(readonly, assign, nonatomic) int contentChunkStart;	// G=0x3336b948; @synthesize
@property(readonly, retain, nonatomic) NSMutableData *contentHeaderData;	// G=0x3336b934; @synthesize
@property(readonly, assign, nonatomic) int contentProfile;	// G=0x3336bc00; @synthesize
@property(assign, nonatomic) double downloadEndTime;	// G=0x3336bab8; S=0x3336bad4; @synthesize
@property(assign, nonatomic) double downloadStartTime;	// G=0x3336baec; S=0x3336bb08; @synthesize
@property(readonly, retain, nonatomic) NSString *downloadableId;	// G=0x3336bc8c; @synthesize
@property(assign, nonatomic) int error;	// G=0x3336bb88; S=0x3336bb9c; @synthesize
@property(assign, nonatomic) BOOL failed;	// G=0x3336bb48; S=0x3336bb60; @synthesize
@property(assign, nonatomic) int httpStatusCode;	// G=0x3336bb20; S=0x3336bb34; @synthesize
@property(assign, nonatomic) BOOL ignore;	// G=0x3336bcdc; S=0x3336bcf4; @synthesize
@property(assign, nonatomic) NSLock *lock;	// G=0x3336bca0; S=0x3336bcb4; @synthesize
@property(assign, nonatomic) float m3u8ChunkRatio;	// G=0x3336b90c; S=0x3336b920; @synthesize
@property(readonly, assign, nonatomic) int mediaType;	// G=0x3336b8f8; @synthesize
@property(assign, nonatomic) int movieAverageBandwidth;	// G=0x3336b970; S=0x3336b984; @synthesize
@property(assign, nonatomic) int movieDuration;	// G=0x3336b9c0; S=0x3336b9d4; @synthesize
@property(assign, nonatomic) int moviePeakBandwidth;	// G=0x3336b998; S=0x3336b9ac; @synthesize
@property(readonly, retain, nonatomic) NSMutableString *moviePlaylist;	// G=0x3336b95c; @synthesize
@property(retain, nonatomic) NSError *nsError;	// G=0x3336bb74; S=0x3336be70; @synthesize
@property(assign, nonatomic) double parseKeyEndTime;	// G=0x3336b9e8; S=0x3336ba04; @synthesize
@property(assign, nonatomic) double parseKeyStartTime;	// G=0x3336ba1c; S=0x3336ba38; @synthesize
@property(assign, nonatomic) double playlistGenerateEndTime;	// G=0x3336ba50; S=0x3336ba6c; @synthesize
@property(assign, nonatomic) double playlistGenerateStartTime;	// G=0x3336ba84; S=0x3336baa0; @synthesize
@property(readonly, retain, nonatomic) NSString *redirectedUrl;	// G=0x3336bbd8; @synthesize
@property(assign, nonatomic) unsigned sortedIndex;	// G=0x3336bc14; S=0x3336bc28; @synthesize
@property(assign, nonatomic) int state;	// G=0x3336bbb0; S=0x3336bbc4; @synthesize
@property(readonly, assign, nonatomic) int streamIndex;	// G=0x3336bc50; @synthesize
@property(readonly, assign, nonatomic) int trackIndex;	// G=0x3336bc64; @synthesize
@property(readonly, retain, nonatomic) NSString *url;	// G=0x3336bbec; @synthesize
- (id)initWithManifestStream:(const shared_ptr<netflix::ase::ManifestStream> *)manifestStream streamIndex:(int)index trackIndex:(int)index3 audioBCP47:(id)a47 cdnData:(id)data;	// 0x3336c084
// declared property getter: - (id)audioLanguageBCP47;	// 0x3336bc78
// declared property getter: - (unsigned)bitRate;	// 0x3336bc3c
// declared property getter: - (id)cdn;	// 0x3336bcc8
- (int)compareByDescendingBitRate:(id)rate;	// 0x3336bea4
// declared property getter: - (int)contentChunkStart;	// 0x3336b948
// declared property getter: - (id)contentHeaderData;	// 0x3336b934
// declared property getter: - (int)contentProfile;	// 0x3336bc00
- (void)dealloc;	// 0x3336bd18
// declared property getter: - (double)downloadEndTime;	// 0x3336bab8
// declared property getter: - (double)downloadStartTime;	// 0x3336baec
// declared property getter: - (id)downloadableId;	// 0x3336bc8c
// declared property getter: - (int)error;	// 0x3336bb88
// declared property getter: - (BOOL)failed;	// 0x3336bb48
// declared property getter: - (int)httpStatusCode;	// 0x3336bb20
// declared property getter: - (BOOL)ignore;	// 0x3336bcdc
// declared property getter: - (id)lock;	// 0x3336bca0
// declared property getter: - (float)m3u8ChunkRatio;	// 0x3336b90c
// declared property getter: - (int)mediaType;	// 0x3336b8f8
// declared property getter: - (int)movieAverageBandwidth;	// 0x3336b970
// declared property getter: - (int)movieDuration;	// 0x3336b9c0
// declared property getter: - (int)moviePeakBandwidth;	// 0x3336b998
// declared property getter: - (id)moviePlaylist;	// 0x3336b95c
// declared property getter: - (id)nsError;	// 0x3336bb74
// declared property getter: - (double)parseKeyEndTime;	// 0x3336b9e8
// declared property getter: - (double)parseKeyStartTime;	// 0x3336ba1c
// declared property getter: - (double)playlistGenerateEndTime;	// 0x3336ba50
// declared property getter: - (double)playlistGenerateStartTime;	// 0x3336ba84
// declared property getter: - (id)redirectedUrl;	// 0x3336bbd8
- (void)setContentHeaderData:(id)data withChunkStart:(int)chunkStart;	// 0x3336c00c
// declared property setter: - (void)setDownloadEndTime:(double)time;	// 0x3336bad4
// declared property setter: - (void)setDownloadStartTime:(double)time;	// 0x3336bb08
// declared property setter: - (void)setError:(int)error;	// 0x3336bb9c
// declared property setter: - (void)setFailed:(BOOL)failed;	// 0x3336bb60
// declared property setter: - (void)setHttpStatusCode:(int)code;	// 0x3336bb34
// declared property setter: - (void)setIgnore:(BOOL)ignore;	// 0x3336bcf4
// declared property setter: - (void)setLock:(id)lock;	// 0x3336bcb4
// declared property setter: - (void)setM3u8ChunkRatio:(float)ratio;	// 0x3336b920
// declared property setter: - (void)setMovieAverageBandwidth:(int)bandwidth;	// 0x3336b984
// declared property setter: - (void)setMovieDuration:(int)duration;	// 0x3336b9d4
// declared property setter: - (void)setMoviePeakBandwidth:(int)bandwidth;	// 0x3336b9ac
- (void)setMoviePlaylist:(id)playlist;	// 0x3336bfa8
// declared property setter: - (void)setNsError:(id)error;	// 0x3336be70
// declared property setter: - (void)setParseKeyEndTime:(double)time;	// 0x3336ba04
// declared property setter: - (void)setParseKeyStartTime:(double)time;	// 0x3336ba38
// declared property setter: - (void)setPlaylistGenerateEndTime:(double)time;	// 0x3336ba6c
// declared property setter: - (void)setPlaylistGenerateStartTime:(double)time;	// 0x3336baa0
- (void)setRedirectedUrl:(id)url;	// 0x3336bf28
// declared property setter: - (void)setSortedIndex:(unsigned)index;	// 0x3336bc28
// declared property setter: - (void)setState:(int)state;	// 0x3336bbc4
// declared property getter: - (unsigned)sortedIndex;	// 0x3336bc14
// declared property getter: - (int)state;	// 0x3336bbb0
// declared property getter: - (int)streamIndex;	// 0x3336bc50
// declared property getter: - (int)trackIndex;	// 0x3336bc64
// declared property getter: - (id)url;	// 0x3336bbec
@end

