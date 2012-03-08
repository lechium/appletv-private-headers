/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library

@class NSData, NSMutableArray, NSLock, NSDictionary;

__attribute__((visibility("hidden")))
@interface NetflixPlaybackManager : NSObject {
@private
	BOOL openNotificationSent_;	// 4 = 0x4
	NSDictionary *movieDetails_;	// 8 = 0x8
	NSData *playReadyKey_;	// 12 = 0xc
	IMediaControl *mediaControl_;	// 16 = 0x10
	NetflixMediaControlListener *mediaControlListener_;	// 20 = 0x14
	NSMutableArray *errorStack_;	// 24 = 0x18
	NSLock *subtitlesProcessingLock_;	// 28 = 0x1c
	BOOL subtitlesProcessing_;	// 32 = 0x20
	int subtitlesTrackIndex_;	// 36 = 0x24
	NSLock *playbackCommandLock_;	// 40 = 0x28
	BOOL playbackCommandInProgress_;	// 44 = 0x2c
	int state_;	// 48 = 0x30
	unsigned lastKnownMappedBitrate_;	// 52 = 0x34
	unsigned lastNumAccessLogEvents_;	// 56 = 0x38
	long long totalBytesTransferred_;	// 60 = 0x3c
	double observedBitrate_;	// 68 = 0x44
	BOOL pollNetworkInterface_;	// 76 = 0x4c
	long long pollBytesStart_;	// 80 = 0x50
	BwEntry *bwEntry_;	// 88 = 0x58
	double lastBwEntryTime_;	// 92 = 0x5c
	long long lastBwEntryBytes_;	// 100 = 0x64
	int networkInterfaceType_;	// 108 = 0x6c
	long long bufferingStartBytes_;	// 112 = 0x70
	double bufferingStartTime_;	// 120 = 0x78
	double sampleReportWindow_;	// 128 = 0x80
}
@property(readonly, assign, nonatomic) unsigned bitrate;	// G=0x33372d0c; 
@property(assign, nonatomic) long long bufferingStartBytes;	// G=0x33372400; S=0x33372418; @synthesize=bufferingStartBytes_
@property(assign, nonatomic) double bufferingStartTime;	// G=0x333723cc; S=0x333723e8; @synthesize=bufferingStartTime_
@property(assign, nonatomic) BwEntry *bwEntry;	// G=0x333724bc; S=0x333724d0; @synthesize=bwEntry_
@property(readonly, assign, nonatomic) long long bytes;	// G=0x33372c94; 
@property(readonly, assign, nonatomic) long long bytesForInterface;	// G=0x33372b64; 
@property(readonly, assign, nonatomic) unsigned currentStreamBitrate;	// G=0x33372b1c; 
@property(retain, nonatomic) NSMutableArray *errorStack;	// G=0x3337269c; S=0x33372a40; @synthesize=errorStack_
@property(assign, nonatomic) long long lastBwEntryBytes;	// G=0x33372458; S=0x33372470; @synthesize=lastBwEntryBytes_
@property(assign, nonatomic) double lastBwEntryTime;	// G=0x33372488; S=0x333724a4; @synthesize=lastBwEntryTime_
@property(assign, nonatomic) unsigned lastKnownMappedBitrate;	// G=0x333725cc; S=0x333725e0; @synthesize=lastKnownMappedBitrate_
@property(assign, nonatomic) unsigned lastNumAccessLogEvents;	// G=0x333725a4; S=0x333725b8; @synthesize=lastNumAccessLogEvents_
@property(assign, nonatomic) IMediaControl *mediaControl;	// G=0x333726c4; S=0x33377590; @synthesize=mediaControl_
@property(assign, nonatomic) NetflixMediaControlListener *mediaControlListener;	// G=0x333726b0; S=0x33372350; @synthesize=mediaControlListener_
@property(retain) NSDictionary *movieDetails;	// G=0x333729cc; S=0x33372998; @synthesize=movieDetails_
@property(assign, nonatomic) int networkInterfaceType;	// G=0x33372430; S=0x33372444; @synthesize=networkInterfaceType_
@property(assign, nonatomic) double observedBitrate;	// G=0x33372540; S=0x3337255c; @synthesize=observedBitrate_
@property(assign, nonatomic) BOOL openNotificationSent;	// G=0x333726d8; S=0x333726f0; @synthesize=openNotificationSent_
@property(copy) NSData *playReadyKey;	// G=0x33372a20; S=0x333729ec; @synthesize=playReadyKey_
@property(assign) BOOL playbackCommandInProgress;	// G=0x3337261c; S=0x33372634; @synthesize=playbackCommandInProgress_
@property(retain) NSLock *playbackCommandLock;	// G=0x33372afc; S=0x33372ac8; @synthesize=playbackCommandLock_
@property(assign, nonatomic) long long pollBytesStart;	// G=0x333724e4; S=0x333724fc; @synthesize=pollBytesStart_
@property(assign, nonatomic) BOOL pollNetworkInterface;	// G=0x33372514; S=0x3337252c; @synthesize=pollNetworkInterface_
@property(assign, nonatomic) double sampleReportWindow;	// G=0x33372398; S=0x333723b4; @synthesize=sampleReportWindow_
@property(assign) int state;	// G=0x333725f4; S=0x33372608; @synthesize=state_
@property(assign) BOOL subtitlesProcessing;	// G=0x33372670; S=0x33372688; @synthesize=subtitlesProcessing_
@property(retain) NSLock *subtitlesProcessingLock;	// G=0x33372aa8; S=0x33372a74; @synthesize=subtitlesProcessingLock_
@property(assign, nonatomic) int subtitlesTrackIndex;	// G=0x33372648; S=0x3337265c; @synthesize=subtitlesTrackIndex_
@property(assign, nonatomic) long long totalBytesTransferred;	// G=0x33372574; S=0x3337258c; @synthesize=totalBytesTransferred_
+ (void)initialize;	// 0x3337234c
+ (id)sharedInstance;	// 0x33372848
- (id)init;	// 0x33372728
// declared property getter: - (unsigned)bitrate;	// 0x33372d0c
- (void)buffering:(double)buffering;	// 0x33376dfc
- (void)bufferingComplete:(double)complete;	// 0x33376c34
// declared property getter: - (long long)bufferingStartBytes;	// 0x33372400
// declared property getter: - (double)bufferingStartTime;	// 0x333723cc
// declared property getter: - (BwEntry *)bwEntry;	// 0x333724bc
// declared property getter: - (long long)bytes;	// 0x33372c94
// declared property getter: - (long long)bytesForInterface;	// 0x33372b64
- (void)close;	// 0x33376f50
- (id)createErrorFromStack;	// 0x33375380
// declared property getter: - (unsigned)currentStreamBitrate;	// 0x33372b1c
- (void)dealloc;	// 0x3337772c
- (void)end:(double)end reason:(id)reason;	// 0x333770ac
// declared property getter: - (id)errorStack;	// 0x3337269c
- (int)fetchBookmark:(id)bookmark;	// 0x33372ed8
// declared property getter: - (long long)lastBwEntryBytes;	// 0x33372458
// declared property getter: - (double)lastBwEntryTime;	// 0x33372488
// declared property getter: - (unsigned)lastKnownMappedBitrate;	// 0x333725cc
// declared property getter: - (unsigned)lastNumAccessLogEvents;	// 0x333725a4
// declared property getter: - (IMediaControl *)mediaControl;	// 0x333726c4
// declared property getter: - (NetflixMediaControlListener *)mediaControlListener;	// 0x333726b0
- (void)mediaDidAcquireLicense;	// 0x33375024
- (void)mediaDidAuthorize;	// 0x33375184
- (void)mediaDidBuildPlaylists;	// 0x33374f74
- (void)mediaDidCdnSelect;	// 0x333750d4
- (void)mediaDidClose;	// 0x333756cc
- (void)mediaDidFailLoadSubtitles:(int)media error:(id)error;	// 0x33374b8c
- (void)mediaDidFailOpen:(id)media;	// 0x33375234
- (void)mediaDidHandleNccpError:(id)media;	// 0x33375690
- (void)mediaDidLoadSubtitles:(id)media;	// 0x33374cf8
- (void)mediaDidSetSpeed:(float)media;	// 0x33374ecc
- (void)mediaOpenComplete:(id)complete;	// 0x33375758
- (void)mediaWillAcquireLicense;	// 0x3337507c
- (void)mediaWillAuthorize;	// 0x333751dc
- (void)mediaWillBuildPlaylists;	// 0x33374fcc
- (void)mediaWillCdnSelect;	// 0x3337512c
- (void)mediaWillLoadSubtitles;	// 0x33374e74
// declared property getter: - (id)movieDetails;	// 0x333729cc
// declared property getter: - (int)networkInterfaceType;	// 0x33372430
- (void)networkSelection:(id)selection;	// 0x33375808
// declared property getter: - (double)observedBitrate;	// 0x33372540
- (void)open:(id)open;	// 0x33377548
- (void)openAsync:(id)async;	// 0x333737c8
// declared property getter: - (BOOL)openNotificationSent;	// 0x333726d8
- (void)pause:(double)pause;	// 0x33377450
- (void)play:(double)play;	// 0x333774cc
// declared property getter: - (id)playReadyKey;	// 0x33372a20
// declared property getter: - (BOOL)playbackCommandInProgress;	// 0x3337261c
// declared property getter: - (id)playbackCommandLock;	// 0x33372afc
- (unsigned)playlistForIndicatedBitrate:(double)indicatedBitrate;	// 0x33372d5c
- (id)playlistForRequestedM3u8:(id)requestedM3u8;	// 0x33375e9c
// declared property getter: - (long long)pollBytesStart;	// 0x333724e4
// declared property getter: - (BOOL)pollNetworkInterface;	// 0x33372514
- (void)postMediaCloseFailure;	// 0x333747ec
- (void)postMediaOpenFailure;	// 0x33374a0c
- (void)postMediaOpenFailure:(id)failure clearProgress:(BOOL)progress;	// 0x33374914
- (void)postMediaOpenSuccess:(id)success;	// 0x33374ad0
// declared property getter: - (double)sampleReportWindow;	// 0x33372398
- (void)selectedPlaylist:(id)playlist;	// 0x33375ca8
// declared property setter: - (void)setBufferingStartBytes:(long long)bytes;	// 0x33372418
// declared property setter: - (void)setBufferingStartTime:(double)time;	// 0x333723e8
// declared property setter: - (void)setBwEntry:(BwEntry *)entry;	// 0x333724d0
// declared property setter: - (void)setErrorStack:(id)stack;	// 0x33372a40
// declared property setter: - (void)setLastBwEntryBytes:(long long)bytes;	// 0x33372470
// declared property setter: - (void)setLastBwEntryTime:(double)time;	// 0x333724a4
// declared property setter: - (void)setLastKnownMappedBitrate:(unsigned)bitrate;	// 0x333725e0
// declared property setter: - (void)setLastNumAccessLogEvents:(unsigned)events;	// 0x333725b8
// declared property setter: - (void)setMediaControl:(IMediaControl *)control;	// 0x33377590
// declared property setter: - (void)setMediaControlListener:(NetflixMediaControlListener *)listener;	// 0x33372350
// declared property setter: - (void)setMovieDetails:(id)details;	// 0x33372998
// declared property setter: - (void)setNetworkInterfaceType:(int)type;	// 0x33372444
// declared property setter: - (void)setObservedBitrate:(double)bitrate;	// 0x3337255c
// declared property setter: - (void)setOpenNotificationSent:(BOOL)sent;	// 0x333726f0
// declared property setter: - (void)setPlayReadyKey:(id)key;	// 0x333729ec
// declared property setter: - (void)setPlaybackCommandInProgress:(BOOL)progress;	// 0x33372634
// declared property setter: - (void)setPlaybackCommandLock:(id)lock;	// 0x33372ac8
// declared property setter: - (void)setPollBytesStart:(long long)start;	// 0x333724fc
// declared property setter: - (void)setPollNetworkInterface:(BOOL)interface;	// 0x3337252c
// declared property setter: - (void)setSampleReportWindow:(double)window;	// 0x333723b4
// declared property setter: - (void)setState:(int)state;	// 0x33372608
// declared property setter: - (void)setSubtitlesProcessing:(BOOL)processing;	// 0x33372688
// declared property setter: - (void)setSubtitlesProcessingLock:(id)lock;	// 0x33372a74
// declared property setter: - (void)setSubtitlesTrackIndex:(int)index;	// 0x3337265c
// declared property setter: - (void)setTotalBytesTransferred:(long long)transferred;	// 0x3337258c
// declared property getter: - (int)state;	// 0x333725f4
- (void)stop:(double)stop;	// 0x33377358
- (void)streamSelected:(int)selected streamIndex:(int)index;	// 0x33376b84
- (void)subtitlesDisable;	// 0x33375c18
- (void)subtitlesDisableAsync;	// 0x333730b4
// declared property getter: - (BOOL)subtitlesProcessing;	// 0x33372670
// declared property getter: - (id)subtitlesProcessingLock;	// 0x33372aa8
- (void)subtitlesSelect:(id)select;	// 0x33375c60
- (void)subtitlesSelectAbort;	// 0x33375bb4
- (void)subtitlesSelectAsync:(id)async;	// 0x33373254
// declared property getter: - (int)subtitlesTrackIndex;	// 0x33372648
// declared property getter: - (long long)totalBytesTransferred;	// 0x33372574
- (void)unpause:(double)unpause;	// 0x333773d4
- (void)updatePts:(double)pts;	// 0x3337661c
- (void)updatePts:(double)pts accessLogEvents:(id)events;	// 0x3337600c
@end

