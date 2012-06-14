/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSMappedObjectStore.h"


__attribute__((visibility("hidden")))
@interface NSMemoryObjectStore : NSMappedObjectStore {
}
+ (id)metadataForPersistentStoreWithURL:(id)url error:(id *)error;	// 0x32d93abd
+ (BOOL)setMetadata:(id)metadata forPersistentStoreWithURL:(id)url error:(id *)error;	// 0x32d93a75
- (id)initWithPersistentStoreCoordinator:(id)persistentStoreCoordinator configurationName:(id)name URL:(id)url options:(id)options;	// 0x32d93735
- (id)_archivedData;	// 0x32d93b05
- (void)_preflightCrossCheck;	// 0x32d93b25
- (void)saveDocumentToPath:(id)path;	// 0x32d93a61
- (id)type;	// 0x32d93a65
@end

