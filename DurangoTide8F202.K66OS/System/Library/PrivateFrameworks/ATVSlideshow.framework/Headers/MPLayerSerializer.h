/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MPLayer.h"

@class MCContainerSerializer;

@interface MPLayerSerializer : MPLayer {
	MCContainerSerializer *_layerSerializer;	// 48 = 0x30
}
- (id)container;	// 0x31477e95
- (void)dealloc;	// 0x31477311
- (id)description;	// 0x31477261
- (void)finalize;	// 0x314772d1
- (void)insertEffectContainers:(id)containers atIndex:(int)index;	// 0x31477395
- (void)moveEffectContainersFromIndices:(id)indices toIndex:(int)index;	// 0x31477c01
- (void)recreateWithPlug:(id)plug;	// 0x314781dd
- (void)removeEffectContainersAtIndices:(id)indices;	// 0x31477901
- (void)setAudioPlaylist:(id)playlist;	// 0x31477d1d
- (void)setLayerSerializer:(id)serializer;	// 0x31477ea5
@end

