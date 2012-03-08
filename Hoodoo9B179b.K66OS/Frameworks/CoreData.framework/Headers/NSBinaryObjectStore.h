/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSMappedObjectStore.h"


__attribute__((visibility("hidden")))
@interface NSBinaryObjectStore : NSMappedObjectStore {
}
+ (id)metadataForPersistentStoreWithURL:(id)url error:(id *)error;	// 0x32b2af95
+ (BOOL)setMetadata:(id)metadata forPersistentStoreWithURL:(id)url error:(id *)error;	// 0x32b2b235
- (id)initWithPersistentStoreCoordinator:(id)persistentStoreCoordinator configurationName:(id)name URL:(id)url options:(id)options;	// 0x32b2b525
- (id *)knownKeyValuesForObjectID:(id)objectID withContext:(id)context;	// 0x32b2af91
- (void)saveDocumentToPath:(id)path;	// 0x32b2b175
- (id)type;	// 0x32b2af81
@end

