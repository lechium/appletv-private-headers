/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import "GMM-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GMMTileStore : NSObject {
	TileStore *_tileStore;	// 4 = 0x4
}
@property(assign, nonatomic) int tileEdition;	// G=0x35ba7295; S=0x35ba72a9; @dynamic
- (id)initWithPath:(id)path;	// 0x35ba71ad
- (void)beginWrites;	// 0x35ba72d9
- (void)endWrites;	// 0x35ba72ed
- (void)evict;	// 0x35ba734d
- (BOOL)hasDataForTilePath:(const XXStruct_j8inqB *)tilePath;	// 0x35ba7315
- (void)insertData:(const char *)data length:(unsigned long)length forTilePath:(const XXStruct_j8inqB *)tilePath;	// 0x35ba7301
- (void)openDatabase:(BOOL)database;	// 0x35ba72bd
- (BOOL)selectData:(char **)data length:(unsigned *)length forTilePath:(const XXStruct_j8inqB *)tilePath;	// 0x35ba7331
// declared property setter: - (void)setTileEdition:(int)edition;	// 0x35ba72a9
// declared property getter: - (int)tileEdition;	// 0x35ba7295
@end
