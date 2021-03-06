/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "ATVCloudQueryHandler.h"


__attribute__((visibility("hidden")))
@interface ATVCloudItemQueryHandler : ATVCloudQueryHandler {
}
+ (id)_mlPropertiesForATVProperties:(id)atvproperties;	// 0x3679ccb9
+ (id)atvMediaItemsForCloudIDs:(id)cloudIDs mlLibrary:(id)library dataClient:(ATVDataClientRef)client propertiesRequested:(id)requested;	// 0x3679a309
+ (id)atvMediaItemsForTrackIDs:(id)trackIDs mlLibrary:(id)library dataClient:(ATVDataClientRef)client propertiesRequested:(id)requested;	// 0x3679ab0d
+ (id)mlPredicatePropertyForATVProperty:(CFStringRef)atvproperty;	// 0x3679a059
+ (id)mlPropertyForATVProperty:(CFStringRef)atvproperty;	// 0x3679a22d
+ (id)mlQueryPropertyForATVProperty:(CFStringRef)atvproperty;	// 0x36799a51
- (void)_handleDAAPQuery:(ATVMediaQueryRef)query;	// 0x3679b811
- (void)_handleQuery:(ATVMediaQueryRef)query;	// 0x3679b121
- (id)_mlQueryForATVMediaQuery:(ATVMediaQueryRef)atvmediaQuery playlist:(id *)playlist usingSections:(BOOL *)sections;	// 0x3679ad2d
- (id)_orderingPropertiesForProperty:(id)property;	// 0x3679cbd5
- (void)_setValue:(id)value forKey:(id)key inResponseBuffer:(id)responseBuffer;	// 0x3679ca89
- (void)handleQuery:(ATVMediaQueryRef)query withContext:(void *)context;	// 0x36799a15
@end

