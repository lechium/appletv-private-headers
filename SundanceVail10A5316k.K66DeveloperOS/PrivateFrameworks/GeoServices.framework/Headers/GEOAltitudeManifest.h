/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library
#import "GeoServices-Structs.h"
#import "NSXMLParserDelegate.h"


@interface GEOAltitudeManifest : NSObject <NSXMLParserDelegate> {
@private
	map<unsigned int, _GEOAltitudeTriggerData, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, _GEOAltitudeTriggerData>> > _triggerData;	// 4 = 0x4
}
+ (id)sharedManager;	// 0x34b7f2a5
- (id)init;	// 0x34b7f311
- (id).cxx_construct;	// 0x34b7f649
- (void).cxx_destruct;	// 0x34b7f635
- (void)_activeTileGroupChanged:(id)changed;	// 0x34b7f39d
- (void)dealloc;	// 0x34b7f431
- (void)parseManifest:(id)manifest;	// 0x34b7f4e9
- (void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;	// 0x34b7f581
- (unsigned)versionForRegion:(unsigned)region;	// 0x34b7f48d
@end

