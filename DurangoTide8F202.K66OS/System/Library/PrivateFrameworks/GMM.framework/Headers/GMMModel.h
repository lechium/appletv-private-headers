/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSData;

__attribute__((visibility("hidden")))
@interface GMMModel : PBCodable {
@private
	NSData *_panoMap;	// 4 = 0x4
	NSData *_depthMap;	// 8 = 0x8
}
@property(retain, nonatomic) NSData *depthMap;	// G=0x30a90859; S=0x30a90be5; @synthesize=_depthMap
@property(readonly, assign, nonatomic) BOOL hasDepthMap;	// G=0x30a90845; 
@property(readonly, assign, nonatomic) BOOL hasPanoMap;	// G=0x30a90831; 
@property(retain, nonatomic) NSData *panoMap;	// G=0x30a90869; S=0x30a90bbd; @synthesize=_panoMap
- (id)init;	// 0x30a90879
- (void)dealloc;	// 0x30a90b61
// declared property getter: - (id)depthMap;	// 0x30a90859
- (id)description;	// 0x30a90915
- (id)dictionaryRepresentation;	// 0x30a908a5
// declared property getter: - (BOOL)hasDepthMap;	// 0x30a90845
// declared property getter: - (BOOL)hasPanoMap;	// 0x30a90831
// declared property getter: - (id)panoMap;	// 0x30a90869
- (BOOL)readFrom:(id)from;	// 0x30a90a69
// declared property setter: - (void)setDepthMap:(id)map;	// 0x30a90be5
// declared property setter: - (void)setPanoMap:(id)map;	// 0x30a90bbd
- (void)writeTo:(id)to;	// 0x30a909f9
@end

