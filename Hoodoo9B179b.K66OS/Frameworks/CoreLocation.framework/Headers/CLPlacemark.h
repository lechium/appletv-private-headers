/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import "NSCopying.h"
#import "NSCoding.h"
#import "CoreLocation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray, CLRegion, NSString, CLPlacemarkInternal, CLLocation, NSDictionary;

@interface CLPlacemark : NSObject <NSCopying, NSCoding> {
@private
	CLPlacemarkInternal *_internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *ISOcountryCode;	// G=0x31c87a45; 
@property(readonly, assign, nonatomic) NSDictionary *addressDictionary;	// G=0x31c87865; 
@property(readonly, assign, nonatomic) NSString *administrativeArea;	// G=0x31c8799d; 
@property(readonly, assign, nonatomic) NSArray *areasOfInterest;	// G=0x31c87b25; 
@property(readonly, assign, nonatomic) NSString *country;	// G=0x31c87a7d; 
@property(readonly, assign, nonatomic) NSString *inlandWater;	// G=0x31c87b45; 
@property(readonly, assign, nonatomic) NSString *locality;	// G=0x31c8792d; 
@property(readonly, assign, nonatomic) CLLocation *location;	// G=0x31c87825; 
@property(readonly, assign, nonatomic) NSString *name;	// G=0x31c87885; 
@property(readonly, assign, nonatomic) NSString *ocean;	// G=0x31c87b7d; 
@property(readonly, assign, nonatomic) NSString *postalCode;	// G=0x31c87a0d; 
@property(readonly, assign, nonatomic) CLRegion *region;	// G=0x31c87845; 
@property(readonly, assign, nonatomic) NSString *subAdministrativeArea;	// G=0x31c879d5; 
@property(readonly, assign, nonatomic) NSString *subLocality;	// G=0x31c87965; 
@property(readonly, assign, nonatomic) NSString *subThoroughfare;	// G=0x31c878f5; 
@property(readonly, assign, nonatomic) NSString *thoroughfare;	// G=0x31c878bd; 
- (id)initWithCoder:(id)coder;	// 0x31c876b1
- (id)initWithLocation:(id)location addressDictionary:(id)dictionary region:(id)region areasOfInterest:(id)interest;	// 0x31c873e9
- (id)initWithPlacemark:(id)placemark;	// 0x31c874d9
// declared property getter: - (id)ISOcountryCode;	// 0x31c87a45
// declared property getter: - (id)addressDictionary;	// 0x31c87865
// declared property getter: - (id)administrativeArea;	// 0x31c8799d
// declared property getter: - (id)areasOfInterest;	// 0x31c87b25
- (id)copyWithZone:(NSZone *)zone;	// 0x31c877e1
// declared property getter: - (id)country;	// 0x31c87a7d
- (void)dealloc;	// 0x31c87605
- (id)description;	// 0x31c87bb5
- (void)encodeWithCoder:(id)coder;	// 0x31c8773d
- (id)formattedAddressLines;	// 0x31c87aed
- (id)fullThoroughfare;	// 0x31c87ab5
// declared property getter: - (id)inlandWater;	// 0x31c87b45
// declared property getter: - (id)locality;	// 0x31c8792d
// declared property getter: - (id)location;	// 0x31c87825
// declared property getter: - (id)name;	// 0x31c87885
// declared property getter: - (id)ocean;	// 0x31c87b7d
// declared property getter: - (id)postalCode;	// 0x31c87a0d
// declared property getter: - (id)region;	// 0x31c87845
// declared property getter: - (id)subAdministrativeArea;	// 0x31c879d5
// declared property getter: - (id)subLocality;	// 0x31c87965
// declared property getter: - (id)subThoroughfare;	// 0x31c878f5
// declared property getter: - (id)thoroughfare;	// 0x31c878bd
@end

