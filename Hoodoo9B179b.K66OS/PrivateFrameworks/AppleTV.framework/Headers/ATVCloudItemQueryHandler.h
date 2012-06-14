/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVCloudQueryHandler.h"
#import "AppleTV-Structs.h"


__attribute__((visibility("hidden")))
@interface ATVCloudItemQueryHandler : ATVCloudQueryHandler {
}
+ (id)_mlPropertiesForATVProperties:(id)atvproperties;	// 0x3039d509
+ (id)atvMediaItemsForCloudIDs:(id)cloudIDs mlLibrary:(id)library dataClient:(ATVDataClientRef)client propertiesRequested:(id)requested;	// 0x3039ab59
+ (id)atvMediaItemsForTrackIDs:(id)trackIDs mlLibrary:(id)library dataClient:(ATVDataClientRef)client propertiesRequested:(id)requested;	// 0x3039b35d
+ (id)mlPredicatePropertyForATVProperty:(CFStringRef)atvproperty;	// 0x3039a8a9
+ (id)mlPropertyForATVProperty:(CFStringRef)atvproperty;	// 0x3039aa7d
+ (id)mlQueryPropertyForATVProperty:(CFStringRef)atvproperty;	// 0x3039a2a1
- (void)_handleDAAPQuery:(ATVMediaQueryRef)query;	// 0x3039c061
- (void)_handleQuery:(ATVMediaQueryRef)query;	// 0x3039b971
- (id)_mlQueryForATVMediaQuery:(ATVMediaQueryRef)atvmediaQuery playlist:(id *)playlist usingSections:(BOOL *)sections;	// 0x3039b57d
- (id)_orderingPropertiesForProperty:(id)property;	// 0x3039d425
- (void)_setValue:(id)value forKey:(id)key inResponseBuffer:(id)responseBuffer;	// 0x3039d2d9
- (void)handleQuery:(ATVMediaQueryRef)query withContext:(void *)context;	// 0x3039a265
@end
