/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GMMStreetViewViewpoint : PBCodable {
@private
	int _panningCount;	// 4 = 0x4
	BOOL _hasPanningCount;	// 8 = 0x8
	int _zoomingCount;	// 12 = 0xc
	BOOL _hasZoomingCount;	// 16 = 0x10
	int _navigationCount;	// 20 = 0x14
	BOOL _hasNavigationCount;	// 24 = 0x18
	int _scene;	// 28 = 0x1c
	BOOL _hasScene;	// 32 = 0x20
}
@property(readonly, assign, nonatomic) BOOL hasNavigationCount;	// G=0x30a910fd; @synthesize=_hasNavigationCount
@property(readonly, assign, nonatomic) BOOL hasPanningCount;	// G=0x30a9113d; @synthesize=_hasPanningCount
@property(readonly, assign, nonatomic) BOOL hasScene;	// G=0x30a910dd; @synthesize=_hasScene
@property(readonly, assign, nonatomic) BOOL hasZoomingCount;	// G=0x30a9111d; @synthesize=_hasZoomingCount
@property(assign, nonatomic) int navigationCount;	// G=0x30a9110d; S=0x30a910a5; @synthesize=_navigationCount
@property(assign, nonatomic) int panningCount;	// G=0x30a9114d; S=0x30a9106d; @synthesize=_panningCount
@property(assign, nonatomic) int scene;	// G=0x30a910ed; S=0x30a910c1; @synthesize=_scene
@property(assign, nonatomic) int zoomingCount;	// G=0x30a9112d; S=0x30a91089; @synthesize=_zoomingCount
- (id)init;	// 0x30a9164d
- (void)dealloc;	// 0x30a9115d
- (id)description;	// 0x30a912e5
- (id)dictionaryRepresentation;	// 0x30a91189
// declared property getter: - (BOOL)hasNavigationCount;	// 0x30a910fd
// declared property getter: - (BOOL)hasPanningCount;	// 0x30a9113d
// declared property getter: - (BOOL)hasScene;	// 0x30a910dd
// declared property getter: - (BOOL)hasZoomingCount;	// 0x30a9111d
// declared property getter: - (int)navigationCount;	// 0x30a9110d
// declared property getter: - (int)panningCount;	// 0x30a9114d
- (BOOL)readFrom:(id)from;	// 0x30a91505
// declared property getter: - (int)scene;	// 0x30a910ed
// declared property setter: - (void)setNavigationCount:(int)count;	// 0x30a910a5
// declared property setter: - (void)setPanningCount:(int)count;	// 0x30a9106d
// declared property setter: - (void)setScene:(int)scene;	// 0x30a910c1
// declared property setter: - (void)setZoomingCount:(int)count;	// 0x30a91089
- (void)writeTo:(id)to;	// 0x30a9142d
// declared property getter: - (int)zoomingCount;	// 0x30a9112d
@end

