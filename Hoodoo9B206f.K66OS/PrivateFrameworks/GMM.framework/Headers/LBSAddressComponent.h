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
@property(retain, nonatomic) LBSFeatureId *featureId;	// G=0x33cd728d; S=0x33cd729d; @synthesize=_featureId
@property(assign, nonatomic) int featureType;	// G=0x33cd727d; S=0x33cd6ab9; @synthesize=_featureType
@property(readonly, assign, nonatomic) BOOL hasFeatureId;	// G=0x33cd6add; 
@property(assign, nonatomic) BOOL hasFeatureType;	// G=0x33cd725d; S=0x33cd726d; @synthesize=_hasFeatureType
@property(readonly, assign, nonatomic) BOOL hasRange;	// G=0x33cd6af5; 
@property(retain, nonatomic) NSMutableArray *parsedNames;	// G=0x33cd7229; S=0x33cd7239; @synthesize=_parsedNames
@property(retain, nonatomic) LBSAddressRange *range;	// G=0x33cd72c1; S=0x33cd72d1; @synthesize=_range
@property(assign, nonatomic) int type;	// G=0x33cd7209; S=0x33cd7219; @synthesize=_type
- (void)addParsedName:(id)name;	// 0x33cd6a15
- (void)dealloc;	// 0x33cd69a9
- (id)description;	// 0x33cd6b0d
- (id)dictionaryRepresentation;	// 0x33cd6b7d
// declared property getter: - (id)featureId;	// 0x33cd728d
// declared property getter: - (int)featureType;	// 0x33cd727d
// declared property getter: - (BOOL)hasFeatureId;	// 0x33cd6add
// declared property getter: - (BOOL)hasFeatureType;	// 0x33cd725d
// declared property getter: - (BOOL)hasRange;	// 0x33cd6af5
- (id)parsedNameAtIndex:(unsigned)index;	// 0x33cd6a99
// declared property getter: - (id)parsedNames;	// 0x33cd7229
- (unsigned)parsedNamesCount;	// 0x33cd6a79
// declared property getter: - (id)range;	// 0x33cd72c1
- (BOOL)readFrom:(id)from;	// 0x33cd6c9d
// declared property setter: - (void)setFeatureId:(id)anId;	// 0x33cd729d
// declared property setter: - (void)setFeatureType:(int)type;	// 0x33cd6ab9
// declared property setter: - (void)setHasFeatureType:(BOOL)type;	// 0x33cd726d
// declared property setter: - (void)setParsedNames:(id)names;	// 0x33cd7239
// declared property setter: - (void)setRange:(id)range;	// 0x33cd72d1
// declared property setter: - (void)setType:(int)type;	// 0x33cd7219
// declared property getter: - (int)type;	// 0x33cd7209
- (void)writeTo:(id)to;	// 0x33cd6f85
@end
