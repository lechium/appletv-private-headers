/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSData;

__attribute__((visibility("hidden")))
@interface GMMPolyLine : PBCodable {
@private
	int _lineWidth;	// 4 = 0x4
	BOOL _hasLineWidth;	// 8 = 0x8
	int _lineColor;	// 12 = 0xc
	BOOL _hasLineColor;	// 16 = 0x10
	NSData *_line;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) BOOL hasLine;	// G=0x30a6b381; 
@property(readonly, assign, nonatomic) BOOL hasLineColor;	// G=0x30a6b3a5; @synthesize=_hasLineColor
@property(readonly, assign, nonatomic) BOOL hasLineWidth;	// G=0x30a6b3c5; @synthesize=_hasLineWidth
@property(retain, nonatomic) NSData *line;	// G=0x30a6b395; S=0x30a6b825; @synthesize=_line
@property(assign, nonatomic) int lineColor;	// G=0x30a6b3b5; S=0x30a6b365; @synthesize=_lineColor
@property(assign, nonatomic) int lineWidth;	// G=0x30a6b3d5; S=0x30a6b349; @synthesize=_lineWidth
- (id)init;	// 0x30a6b3e5
- (void)dealloc;	// 0x30a6b7dd
- (id)description;	// 0x30a6b4f9
- (id)dictionaryRepresentation;	// 0x30a6b411
// declared property getter: - (BOOL)hasLine;	// 0x30a6b381
// declared property getter: - (BOOL)hasLineColor;	// 0x30a6b3a5
// declared property getter: - (BOOL)hasLineWidth;	// 0x30a6b3c5
// declared property getter: - (id)line;	// 0x30a6b395
// declared property getter: - (int)lineColor;	// 0x30a6b3b5
// declared property getter: - (int)lineWidth;	// 0x30a6b3d5
- (BOOL)readFrom:(id)from;	// 0x30a6b6b5
// declared property setter: - (void)setLine:(id)line;	// 0x30a6b825
// declared property setter: - (void)setLineColor:(int)color;	// 0x30a6b365
// declared property setter: - (void)setLineWidth:(int)width;	// 0x30a6b349
- (void)writeTo:(id)to;	// 0x30a6b611
@end

