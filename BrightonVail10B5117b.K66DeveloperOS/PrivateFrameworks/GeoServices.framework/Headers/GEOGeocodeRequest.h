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
	unsigned short _geocodeProvider;	// 200 = 0xc8
	NSString *_logRequestToFile;	// 204 = 0xcc
	NSString *_logResponseToFile;	// 208 = 0xd0
}
@property(assign, nonatomic) unsigned short geocodeProvider;	// G=0x3415533d; S=0x341540fd; @synthesize=_geocodeProvider
@property(retain, nonatomic) NSString *logRequestToFile;	// G=0x3415563d; S=0x3418bc19; @synthesize=_logRequestToFile
@property(retain, nonatomic) NSString *logResponseToFile;	// G=0x3415564d; S=0x3418bc29; @synthesize=_logResponseToFile
- (id)initForwardGeocodeWithAddressDictionary:(id)addressDictionary;	// 0x3418b729
- (id)initForwardGeocodeWithAddressString:(id)addressString;	// 0x3418ba8d
- (id)initReverseGeocodeWithCoordinate:(XXStruct_zYrK5D)coordinate;	// 0x3418b6fd
- (id)initReverseGeocodeWithCoordinate:(XXStruct_zYrK5D)coordinate includeBusinessOptions:(BOOL)options;	// 0x34153fc1
- (void)dealloc;	// 0x3418bbb5
// declared property getter: - (unsigned short)geocodeProvider;	// 0x3415533d
// declared property getter: - (id)logRequestToFile;	// 0x3415563d
// declared property getter: - (id)logResponseToFile;	// 0x3415564d
// declared property setter: - (void)setGeocodeProvider:(unsigned short)provider;	// 0x341540fd
// declared property setter: - (void)setLogRequestToFile:(id)file;	// 0x3418bc19
// declared property setter: - (void)setLogResponseToFile:(id)file;	// 0x3418bc29
@end
