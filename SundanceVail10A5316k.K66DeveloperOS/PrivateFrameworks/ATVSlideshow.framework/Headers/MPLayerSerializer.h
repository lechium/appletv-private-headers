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
- (id)container;	// 0x3645b615
- (void)dealloc;	// 0x3645aa41
- (id)description;	// 0x3645a991
- (void)finalize;	// 0x3645aa01
- (void)insertEffectContainers:(id)containers atIndex:(int)index;	// 0x3645aaad
- (void)moveEffectContainersFromIndices:(id)indices toIndex:(int)index;	// 0x3645b391
- (void)removeEffectContainersAtIndices:(id)indices;	// 0x3645b039
- (void)setAudioPlaylist:(id)playlist;	// 0x3645b511
- (void)setLayerSerializer:(id)serializer;	// 0x3645b625
@end

