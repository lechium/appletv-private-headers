/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSString;

@interface GMMStructuredAddress : PBCodable {
	NSString *_thoroughfare;	// 4 = 0x4
	NSString *_dependentLocality;	// 8 = 0x8
	NSString *_locality;	// 12 = 0xc
	NSString *_region;	// 16 = 0x10
	NSString *_postalCode;	// 20 = 0x14
	NSString *_countryCode;	// 24 = 0x18
	NSString *_countryName;	// 28 = 0x1c
}
@property(retain, nonatomic) NSString *countryCode;	// G=0x31cf538d; S=0x31cf539d; @synthesize=_countryCode
@property(retain, nonatomic) NSString *countryName;	// G=0x31cf53c1; S=0x31cf53d1; @synthesize=_countryName
@property(retain, nonatomic) NSString *dependentLocality;	// G=0x31cf52bd; S=0x31cf52cd; @synthesize=_dependentLocality
@property(readonly, assign, nonatomic) BOOL hasCountryCode;	// G=0x31cf4e05; 
@property(readonly, assign, nonatomic) BOOL hasCountryName;	// G=0x31cf4e1d; 
@property(readonly, assign, nonatomic) BOOL hasDependentLocality;	// G=0x31cf4da5; 
@property(readonly, assign, nonatomic) BOOL hasLocality;	// G=0x31cf4dbd; 
@property(readonly, assign, nonatomic) BOOL hasPostalCode;	// G=0x31cf4ded; 
@property(readonly, assign, nonatomic) BOOL hasRegion;	// G=0x31cf4dd5; 
@property(readonly, assign, nonatomic) BOOL hasThoroughfare;	// G=0x31cf4d8d; 
@property(retain, nonatomic) NSString *locality;	// G=0x31cf52f1; S=0x31cf5301; @synthesize=_locality
@property(retain, nonatomic) NSString *postalCode;	// G=0x31cf5359; S=0x31cf5369; @synthesize=_postalCode
@property(retain, nonatomic) NSString *region;	// G=0x31cf5325; S=0x31cf5335; @synthesize=_region
@property(retain, nonatomic) NSString *thoroughfare;	// G=0x31cf5289; S=0x31cf5299; @synthesize=_thoroughfare
// declared property getter: - (id)countryCode;	// 0x31cf538d
// declared property getter: - (id)countryName;	// 0x31cf53c1
- (void)dealloc;	// 0x31cf4cd1
// declared property getter: - (id)dependentLocality;	// 0x31cf52bd
- (id)description;	// 0x31ce3b7d
- (id)description;	// 0x31cf4e35
- (id)dictionaryRepresentation;	// 0x31cf4ea5
// declared property getter: - (BOOL)hasCountryCode;	// 0x31cf4e05
// declared property getter: - (BOOL)hasCountryName;	// 0x31cf4e1d
// declared property getter: - (BOOL)hasDependentLocality;	// 0x31cf4da5
// declared property getter: - (BOOL)hasLocality;	// 0x31cf4dbd
// declared property getter: - (BOOL)hasPostalCode;	// 0x31cf4ded
// declared property getter: - (BOOL)hasRegion;	// 0x31cf4dd5
// declared property getter: - (BOOL)hasThoroughfare;	// 0x31cf4d8d
// declared property getter: - (id)locality;	// 0x31cf52f1
// declared property getter: - (id)postalCode;	// 0x31cf5359
- (BOOL)readFrom:(id)from;	// 0x31cf5001
// declared property getter: - (id)region;	// 0x31cf5325
// declared property setter: - (void)setCountryCode:(id)code;	// 0x31cf539d
// declared property setter: - (void)setCountryName:(id)name;	// 0x31cf53d1
// declared property setter: - (void)setDependentLocality:(id)locality;	// 0x31cf52cd
// declared property setter: - (void)setLocality:(id)locality;	// 0x31cf5301
// declared property setter: - (void)setPostalCode:(id)code;	// 0x31cf5369
// declared property setter: - (void)setRegion:(id)region;	// 0x31cf5335
// declared property setter: - (void)setThoroughfare:(id)thoroughfare;	// 0x31cf5299
// declared property getter: - (id)thoroughfare;	// 0x31cf5289
- (void)writeTo:(id)to;	// 0x31cf517d
@end

