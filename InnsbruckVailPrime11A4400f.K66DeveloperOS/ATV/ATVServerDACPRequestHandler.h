/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSTimer;

__attribute__((visibility("hidden")))
@interface ATVServerDACPRequestHandler : XXUnknownSuperclass {
	NSTimer *_updateTimer;	// 4 = 0x4
}
+ (id)_atvFilterWithQueueFilterType:(id)queueFilterType filterValue:(id)value;	// 0x3be909
+ (BOOL)_connectToDataServer:(id *)dataServer withRequest:(ATVServerRequestRef)request arguments:(id)arguments machineID:(unsigned long long *)anId;	// 0x3be1c9
+ (int)_daapSortTypeFromSortStr:(id)sortStr;	// 0x3be7c9
+ (id)_dataClientForRequestArguments:(id)requestArguments dataServer:(id)server;	// 0x3be155
+ (id)_dataClientWithMachineID:(unsigned long long)machineID;	// 0x3be885
+ (id)_dataServerForRequestArguments:(id)requestArguments;	// 0x3bdecd
+ (id)_dmapItemIDFromQueueQueryStr:(id)queueQueryStr dmapKey:(id *)key;	// 0x3bea69
+ (void)_filterType:(id *)type andValue:(id *)value fromString:(id)string;	// 0x3bebed
+ (void)_startPlaybackWithItems:(id)items initialIndex:(long)index shuffleMode:(unsigned long)mode repeatMode:(unsigned long)mode4;	// 0x3be59d
+ (void)addNowPlayingSpecToBuffer:(id)buffer;	// 0x3b77f9
+ (id)albumForMedia:(id)media;	// 0x3bde39
+ (id)argumentsForRequest:(ATVServerRequestRef)request;	// 0x3bdc29
+ (unsigned long)availableRepeatStates;	// 0x3bd231
+ (unsigned long)availableShuffleStates;	// 0x3bd1a1
+ (BOOL)connectHomeShareWithMachineID:(unsigned long long)machineID;	// 0x3bd9dd
+ (void)dacpGeniusItemsQueryCompleted:(id)completed;	// 0x3bcbe1
+ (void)dacpPlayRequestQueryCompleted:(id)completed;	// 0x3bc1d9
+ (id)dataServerWithMachineID:(unsigned long long)machineID;	// 0x3bd8cd
+ (void)handleBonjourSourcesUpdateRequest:(ATVServerRequestRef)request;	// 0x3b9671
+ (void)handleControlInterfacesRequest:(ATVServerRequestRef)request;	// 0x3b71e5
+ (void)handleGeniusSeedRequest:(ATVServerRequestRef)request withArguments:(id)arguments;	// 0x3ba84d
+ (void)handleGetPropertyRequest:(ATVServerRequestRef)request;	// 0x3b99dd
+ (void)handleNowPlayingArtworkRequest:(ATVServerRequestRef)request;	// 0x3bcd29
+ (void)handlePlayOrCueRequest:(ATVServerRequestRef)request withArguments:(id)arguments machineID:(unsigned long long)anId;	// 0x3ba4dd
+ (void)handlePlayQueueContentsRequest:(ATVServerRequestRef)request;	// 0x3b7f1d
+ (void)handlePlayQueueEditAddRequest:(ATVServerRequestRef)request withArguments:(id)arguments machineID:(unsigned long long)anId;	// 0x3bab51
+ (void)handlePlayQueueEditClearRequest:(ATVServerRequestRef)request withArguments:(id)arguments;	// 0x3b8f01
+ (void)handlePlayQueueEditMoveRequest:(ATVServerRequestRef)request withArguments:(id)arguments;	// 0x3b8ca5
+ (void)handlePlayQueueEditPlayNowRequest:(ATVServerRequestRef)request withArguments:(id)arguments;	// 0x3b9011
+ (void)handlePlayQueueEditRemoveRequest:(ATVServerRequestRef)request withArguments:(id)arguments;	// 0x3b8ba5
+ (void)handlePlayQueueEditRequest:(ATVServerRequestRef)request;	// 0x3b8989
+ (void)handlePlayQueueEditStartGeniusRequest:(ATVServerRequestRef)request withArguments:(id)arguments;	// 0x3b90cd
+ (void)handlePlayRequest:(ATVServerRequestRef)request;	// 0x3ba3f1
+ (BOOL)handlePlayRequestWithMachineID:(unsigned long long)machineID containerName:(id)name playlistKind:(unsigned long)kind containerID:(unsigned long long)anId containerItemID:(unsigned long long)anId5 querySpecifier:(id)specifier queryCriteria:(SearchCriteriaList *)criteria sortType:(int)type isInvertedSort:(BOOL)sort index:(long)index shuffleState:(unsigned long)state repeatState:(unsigned long)state12;	// 0x3bbc05
+ (void)handlePlayStatusUpdateRequest:(ATVServerRequestRef)request;	// 0x3b7499
+ (unsigned long)handleSetPropertyRequest:(ATVServerRequestRef)request;	// 0x3b9f5d
+ (BOOL)isNowPlayingAssetScrubbable;	// 0x3bd7cd
+ (unsigned long)mediaKindForMedia:(id)media;	// 0x3bd425
+ (id)newItemsQuery;	// 0x3be35d
+ (unsigned long)nowPlayingMediaKind;	// 0x3bd3c9
+ (unsigned long)nowPlayingRemainingTime;	// 0x3bd321
+ (unsigned long)nowPlayingStopTime;	// 0x3bd281
+ (unsigned char)playerState;	// 0x3bd0fd
+ (unsigned char)repeatState;	// 0x3bd1ed
+ (id)sharedInstance;	// 0x3b6c39
+ (unsigned char)shuffleState;	// 0x3bd165
+ (id)transportDataProvider;	// 0x3bd869
+ (long)volume;	// 0x3bd811
- (id)init;	// 0x3b6ca5
- (void)_clearUpdateTimer;	// 0x3bee21
- (void)_coverArtChanged:(id)changed;	// 0x3bed71
- (void)_dataClientConnectionHandler:(id)handler;	// 0x3bf0d9
- (void)_dataServerConnectionHandler:(id)handler;	// 0x3bf1e5
- (void)_iTunesPlaybackMetadataChanged:(id)changed;	// 0x3bede1
- (void)_nowPlayingUpdated:(id)updated;	// 0x3bed51
- (void)_playerStateChanged:(id)changed;	// 0x3bece1
- (void)_playerTimeChanged:(id)changed;	// 0x3bec69
- (void)_playerTimeSkipped:(id)skipped;	// 0x3beda1
- (void)_playerVolumeChanged:(id)changed;	// 0x3bedc1
- (void)_processPendingRequestsWithDataServer:(id)dataServer;	// 0x3bf331
- (void)_queueChanged:(id)changed;	// 0x3bee01
- (void)_scaleImage:(id)image;	// 0x3bef05
- (void)_updateNowPlayingArtworkWithInfo:(id)info;	// 0x3bf019
- (void)_updateTimerFired:(id)fired;	// 0x3beef5
- (void)_updateTouchRemotes;	// 0x3bee55
- (void)_updateTouchRemotesWithDelay:(double)delay;	// 0x3bee8d
- (void)dealloc;	// 0x3b6e85
- (void)handleDACPRequest:(ATVServerRequestRef)request;	// 0x3b6ef5
@end

