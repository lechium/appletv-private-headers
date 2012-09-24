/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVCloudCollectionQueryHandler.h"


__attribute__((visibility("hidden")))
@interface ATVCloudPlaylistQueryHandler : ATVCloudCollectionQueryHandler {
}
+ (id)mlPredicatePropertyForATVProperty:(id)atvproperty;	// 0xd4565
+ (id)mlPropertyForATVProperty:(id)atvproperty;	// 0xd46a9
+ (id)mlQueryPropertyForATVProperty:(id)atvproperty;	// 0xd43b9
- (void)_handleDAAPQuery:(id)query;	// 0xd59b5
- (void)_handleQuery:(id)query;	// 0xd4c59
- (id)_mlQueryForATVMediaQuery:(id)atvmediaQuery mediaTypePredicate:(id *)predicate;	// 0xd493d
- (id)_predicateForPlaylistMediaType:(id)playlistMediaType;	// 0xd630d
- (unsigned long)_specialPlaylistKindForMLKind:(id)mlkind;	// 0xd6419
- (Class)collectionClass;	// 0xd4921
- (id)countedPropertiesForATVProperties:(id)atvproperties;	// 0xd48fd
- (Class)entityClass;	// 0xd4905
- (id)foreignPersistentIDProperty;	// 0xd48f9
- (void)handleQuery:(id)query withContext:(void *)context;	// 0xd47c5
- (id)mlPropertyForMLCountedProperty:(id)mlcountedProperty;	// 0xd4901
- (id)orderingPropertiesForProperty:(id)property;	// 0xd4811
@end
