/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"

@class MRLayer, MRLayerEffect, NSString;
@protocol MRSlidePositionSupport;

@interface MRHitBlob : NSObject {
@private
	MRLayer *_outerLayer;	// 4 = 0x4
	MRLayerEffect *_effectLayer;	// 8 = 0x8
	NSString *_innerPath;	// 12 = 0xc
	NSString *_elementID;	// 16 = 0x10
	id _clientObject;	// 20 = 0x14
	id<MRSlidePositionSupport> _proxyForSlide;	// 24 = 0x18
	unsigned char _currentLayoutIndex;	// 28 = 0x1c
}
@property(readonly, assign) float aspectRatio;	// G=0x36598241; 
@property(retain) id clientObject;	// G=0x3659849d; S=0x365984b1; @synthesize=_clientObject
@property(assign, nonatomic) unsigned char currentLayoutIndex;	// G=0x36598501; S=0x36598511; @synthesize=_currentLayoutIndex
@property(retain) MRLayerEffect *effectLayer;	// G=0x365983f5; S=0x36598409; @synthesize=_effectLayer
@property(copy) NSString *elementID;	// G=0x36598465; S=0x36598479; @synthesize=_elementID
@property(copy) NSString *innerPath;	// G=0x3659842d; S=0x36598441; @synthesize=_innerPath
@property(readonly, assign) CGSize innerResolution;	// G=0x365982b1; 
@property(readonly, assign) NSString *mediaType;	// G=0x365982e1; 
@property(retain) MRLayer *outerLayer;	// G=0x365983bd; S=0x365983d1; @synthesize=_outerLayer
@property(assign) id<MRSlidePositionSupport> proxyForSlide;	// G=0x365984d5; S=0x365984e9; @synthesize=_proxyForSlide
// declared property getter: - (float)aspectRatio;	// 0x36598241
// declared property getter: - (id)clientObject;	// 0x3659849d
// declared property getter: - (unsigned char)currentLayoutIndex;	// 0x36598501
// declared property getter: - (id)effectLayer;	// 0x365983f5
// declared property getter: - (id)elementID;	// 0x36598465
// declared property getter: - (id)innerPath;	// 0x3659842d
// declared property getter: - (CGSize)innerResolution;	// 0x365982b1
- (BOOL)isEqualToHitBlob:(id)hitBlob;	// 0x36598345
// declared property getter: - (id)mediaType;	// 0x365982e1
// declared property getter: - (id)outerLayer;	// 0x365983bd
// declared property getter: - (id)proxyForSlide;	// 0x365984d5
// declared property setter: - (void)setClientObject:(id)object;	// 0x365984b1
// declared property setter: - (void)setCurrentLayoutIndex:(unsigned char)index;	// 0x36598511
// declared property setter: - (void)setEffectLayer:(id)layer;	// 0x36598409
// declared property setter: - (void)setElementID:(id)anId;	// 0x36598479
// declared property setter: - (void)setInnerPath:(id)path;	// 0x36598441
// declared property setter: - (void)setOuterLayer:(id)layer;	// 0x365983d1
// declared property setter: - (void)setProxyForSlide:(id)slide;	// 0x365984e9
@end

