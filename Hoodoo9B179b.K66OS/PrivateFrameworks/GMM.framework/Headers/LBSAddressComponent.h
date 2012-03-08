/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray, LBSAddressRange, LBSFeatureId;

@interface LBSAddressComponent : PBCodable {
	int _type;	// 4 = 0x4
	NSMutableArray *_parsedNames;	// 8 = 0x8
	BOOL _hasFeatureType;	// 12 = 0xc
	int _featureType;	// 16 = 0x10
	LBSFeatureId *_featureId;	// 20 = 0x14
	LBSAddressRange *_range;	// 24 = 0x18
}
@property(retain, nonatomic) LBSFeatureId *featureId;	// G=0x31d0228d; S=0x31d0229d; @synthesize=_featureId
@property(assign, nonatomic) int featureType;	// G=0x31d0227d; S=0x31d01ab9; @synthesize=_featureType
@property(readonly, assign, nonatomic) BOOL hasFeatureId;	// G=0x31d01add; 
@property(assign, nonatomic) BOOL hasFeatureType;	// G=0x31d0225d; S=0x31d0226d; @synthesize=_hasFeatureType
@property(readonly, assign, nonatomic) BOOL hasRange;	// G=0x31d01af5; 
@property(retain, nonatomic) NSMutableArray *parsedNames;	// G=0x31d02229; S=0x31d02239; @synthesize=_parsedNames
@property(retain, nonatomic) LBSAddressRange *range;	// G=0x31d022c1; S=0x31d022d1; @synthesize=_range
@property(assign, nonatomic) int type;	// G=0x31d02209; S=0x31d02219; @synthesize=_type
- (void)addParsedName:(id)name;	// 0x31d01a15
- (void)dealloc;	// 0x31d019a9
- (id)description;	// 0x31d01b0d
- (id)dictionaryRepresentation;	// 0x31d01b7d
// declared property getter: - (id)featureId;	// 0x31d0228d
// declared property getter: - (int)featureType;	// 0x31d0227d
// declared property getter: - (BOOL)hasFeatureId;	// 0x31d01add
// declared property getter: - (BOOL)hasFeatureType;	// 0x31d0225d
// declared property getter: - (BOOL)hasRange;	// 0x31d01af5
- (id)parsedNameAtIndex:(unsigned)index;	// 0x31d01a99
// declared property getter: - (id)parsedNames;	// 0x31d02229
- (unsigned)parsedNamesCount;	// 0x31d01a79
// declared property getter: - (id)range;	// 0x31d022c1
- (BOOL)readFrom:(id)from;	// 0x31d01c9d
// declared property setter: - (void)setFeatureId:(id)anId;	// 0x31d0229d
// declared property setter: - (void)setFeatureType:(int)type;	// 0x31d01ab9
// declared property setter: - (void)setHasFeatureType:(BOOL)type;	// 0x31d0226d
// declared property setter: - (void)setParsedNames:(id)names;	// 0x31d02239
// declared property setter: - (void)setRange:(id)range;	// 0x31d022d1
// declared property setter: - (void)setType:(int)type;	// 0x31d02219
// declared property getter: - (int)type;	// 0x31d02209
- (void)writeTo:(id)to;	// 0x31d01f85
@end

