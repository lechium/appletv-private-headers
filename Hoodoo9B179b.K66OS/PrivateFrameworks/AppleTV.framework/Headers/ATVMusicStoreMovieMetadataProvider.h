/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVMusicStoreBaseMetadataProvider.h"


__attribute__((visibility("hidden")))
@interface ATVMusicStoreMovieMetadataProvider : ATVMusicStoreBaseMetadataProvider {
}
+ (void)initialize;	// 0x30195fa1
- (void)_populateActors:(id)actors;	// 0x30196cbd
- (void)_populateAudio:(id)audio;	// 0x30196f69
- (void)_populateDirector:(id)director;	// 0x30196d5d
- (void)_populateMetadataDetails:(id)details withStoreOffer:(id)storeOffer;	// 0x30196579
- (void)_populateMovieDetails:(id)details withStoreOffer:(id)storeOffer;	// 0x30196621
- (void)_populateProducers:(id)producers;	// 0x30196e15
- (void)_populateSubtitles:(id)subtitles;	// 0x30196ecd
- (void)_populateSubtitlesAndAudio:(id)audio;	// 0x30197005
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x30196355
- (void)populateMetadataForControl:(id)control;	// 0x301964f1
@end

