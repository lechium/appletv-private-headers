/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSString;

@interface LBSGAddressComponent : PBCodable {
	NSString *_name;	// 4 = 0x4
	int _featureType;	// 8 = 0x8
	NSString *_locale;	// 12 = 0xc
}
@property(assign, nonatomic) int featureType;	// G=0x31d038f9; S=0x31d03909; @synthesize=_featureType
@property(readonly, assign, nonatomic) BOOL hasLocale;	// G=0x31d035f9; 
@property(retain, nonatomic) NSString *locale;	// G=0x31d03919; S=0x31d03929; @synthesize=_locale
@property(retain, nonatomic) NSString *name;	// G=0x31d038c5; S=0x31d038d5; @synthesize=_name
- (void)dealloc;	// 0x31d035a1
- (id)description;	// 0x31d03611
- (id)dictionaryRepresentation;	// 0x31d03681
// declared property getter: - (int)featureType;	// 0x31d038f9
// declared property getter: - (BOOL)hasLocale;	// 0x31d035f9
// declared property getter: - (id)locale;	// 0x31d03919
// declared property getter: - (id)name;	// 0x31d038c5
- (BOOL)readFrom:(id)from;	// 0x31d03741
// declared property setter: - (void)setFeatureType:(int)type;	// 0x31d03909
// declared property setter: - (void)setLocale:(id)locale;	// 0x31d03929
// declared property setter: - (void)setName:(id)name;	// 0x31d038d5
- (void)writeTo:(id)to;	// 0x31d03859
@end
