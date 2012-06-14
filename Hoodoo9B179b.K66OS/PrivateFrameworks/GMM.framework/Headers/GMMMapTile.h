/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GMMMapTile : PBCodable {
	int _tileType;	// 4 = 0x4
	int _tileIndexX;	// 8 = 0x8
	int _tileIndexY;	// 12 = 0xc
	int _zoomLevel;	// 16 = 0x10
	BOOL _hasTextSize;	// 20 = 0x14
	int _textSize;	// 24 = 0x18
}
@property(assign, nonatomic) BOOL hasTextSize;	// G=0x31cee281; S=0x31cee291; @synthesize=_hasTextSize
@property(assign, nonatomic) int textSize;	// G=0x31cede25; S=0x31cede49; @synthesize=_textSize
@property(assign, nonatomic) int tileIndexX;	// G=0x31cee221; S=0x31cee231; @synthesize=_tileIndexX
@property(assign, nonatomic) int tileIndexY;	// G=0x31cee241; S=0x31cee251; @synthesize=_tileIndexY
@property(assign, nonatomic) int tileType;	// G=0x31cee201; S=0x31cee211; @synthesize=_tileType
@property(assign, nonatomic) int zoomLevel;	// G=0x31cee261; S=0x31cee271; @synthesize=_zoomLevel
- (void)dealloc;	// 0x31ceddf9
- (id)description;	// 0x31cede6d
- (id)dictionaryRepresentation;	// 0x31cededd
// declared property getter: - (BOOL)hasTextSize;	// 0x31cee281
- (BOOL)readFrom:(id)from;	// 0x31cee021
// declared property setter: - (void)setHasTextSize:(BOOL)size;	// 0x31cee291
// declared property setter: - (void)setTextSize:(int)size;	// 0x31cede49
// declared property setter: - (void)setTileIndexX:(int)x;	// 0x31cee231
// declared property setter: - (void)setTileIndexY:(int)y;	// 0x31cee251
// declared property setter: - (void)setTileType:(int)type;	// 0x31cee211
// declared property setter: - (void)setZoomLevel:(int)level;	// 0x31cee271
// declared property getter: - (int)textSize;	// 0x31cede25
// declared property getter: - (int)tileIndexX;	// 0x31cee221
// declared property getter: - (int)tileIndexY;	// 0x31cee241
// declared property getter: - (int)tileType;	// 0x31cee201
- (void)writeTo:(id)to;	// 0x31cee161
// declared property getter: - (int)zoomLevel;	// 0x31cee261
@end
