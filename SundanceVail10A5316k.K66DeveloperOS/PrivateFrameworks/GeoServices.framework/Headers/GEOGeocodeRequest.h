/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import "GEOPlaceSearchRequest.h"

@class NSString;

@interface GEOGeocodeRequest : GEOPlaceSearchRequest {
@private
	unsigned short _geocodeProvider;	// 194 = 0xc2
	NSString *_logRequestToFile;	// 196 = 0xc4
	NSString *_logResponseToFile;	// 200 = 0xc8
}
@property(assign, nonatomic) unsigned short geocodeProvider;	// G=0x34b1e43d; S=0x34b1e44d; @synthesize=_geocodeProvider
@property(retain, nonatomic) NSString *logRequestToFile;	// G=0x34b1e45d; S=0x34b1e46d; @synthesize=_logRequestToFile
@property(retain, nonatomic) NSString *logResponseToFile;	// G=0x34b1e47d; S=0x34b1e48d; @synthesize=_logResponseToFile
- (id)initForwardGeocodeWithAddressDictionary:(id)addressDictionary;	// 0x34b1df4d
- (id)initForwardGeocodeWithAddressString:(id)addressString;	// 0x34b1e2b1
- (id)initReverseGeocodeWithCoordinate:(XXStruct_zYrK5D)coordinate;	// 0x34b1df21
- (id)initReverseGeocodeWithCoordinate:(XXStruct_zYrK5D)coordinate includeBusinessOptions:(BOOL)options;	// 0x34b1dde5
- (void)dealloc;	// 0x34b1e3d9
// declared property getter: - (unsigned short)geocodeProvider;	// 0x34b1e43d
// declared property getter: - (id)logRequestToFile;	// 0x34b1e45d
// declared property getter: - (id)logResponseToFile;	// 0x34b1e47d
// declared property setter: - (void)setGeocodeProvider:(unsigned short)provider;	// 0x34b1e44d
// declared property setter: - (void)setLogRequestToFile:(id)file;	// 0x34b1e46d
// declared property setter: - (void)setLogResponseToFile:(id)file;	// 0x34b1e48d
@end

