/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSData;

@interface GMMIncomingSuperTile : PBCodable {
@private
	NSData *_superTileData;	// 4 = 0x4
}
@property(retain, nonatomic) NSData *superTileData;	// G=0x30a921ed; S=0x30a92459; @synthesize=_superTileData
- (id)init;	// 0x30a921fd
- (void)dealloc;	// 0x30a92411
- (id)description;	// 0x30a92271
- (id)dictionaryRepresentation;	// 0x30a92229
- (BOOL)readFrom:(id)from;	// 0x30a92339
// declared property setter: - (void)setSuperTileData:(id)data;	// 0x30a92459
// declared property getter: - (id)superTileData;	// 0x30a921ed
- (void)writeTo:(id)to;	// 0x30a9230d
@end

