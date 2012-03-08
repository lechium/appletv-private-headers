/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library


@interface LBSFeatureId : PBCodable {
	unsigned long long _cellId;	// 4 = 0x4
	unsigned long long _fprint;	// 12 = 0xc
}
@property(assign, nonatomic) unsigned long long cellId;	// G=0x33a9ff11; S=0x33a9ff29; @synthesize=_cellId
@property(assign, nonatomic) unsigned long long fprint;	// G=0x33a9ff3d; S=0x33a9ff55; @synthesize=_fprint
// declared property getter: - (unsigned long long)cellId;	// 0x33a9ff11
- (void)dealloc;	// 0x33a9fc75
- (id)description;	// 0x33a9fca1
- (id)dictionaryRepresentation;	// 0x33a9fd11
// declared property getter: - (unsigned long long)fprint;	// 0x33a9ff3d
- (BOOL)readFrom:(id)from;	// 0x33a9fdc5
// declared property setter: - (void)setCellId:(unsigned long long)anId;	// 0x33a9ff29
// declared property setter: - (void)setFprint:(unsigned long long)fprint;	// 0x33a9ff55
- (void)writeTo:(id)to;	// 0x33a9febd
@end

