/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSManagedObjectContext.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface EKSideTableContext : NSManagedObjectContext {
	NSString *_path;	// 128 = 0x80
}
- (id)init;	// 0x31fb98c9
- (id)initWithPath:(id)path;	// 0x31f57321
- (id)_alarmsMatchingPredicate:(id)predicate;	// 0x31fb98dd
- (id)_managedObjectModel;	// 0x31f5773d
- (id)_pathForPersistentStore;	// 0x31f57691
- (id)_persistentStoreCoordinator;	// 0x31f573d5
- (void)_removeSqliteFiles;	// 0x31fb9c95
- (id)_settingForKey:(id)key;	// 0x31f57af9
- (id)_urlForPersistentStore;	// 0x31f57659
- (id)alarmsBetweenStartDate:(id)date endDate:(id)date2;	// 0x31fb9aa5
- (void)deleteAllAlarms;	// 0x31fb99b1
- (id)insertNewAlarm;	// 0x31fb9a7d
- (id)nextAlarmFireTime;	// 0x31f57901
- (id)rootDirectory;	// 0x31f576c5
- (void)setSetting:(id)setting forKey:(id)key;	// 0x31fb9c01
- (id)settingForKey:(id)key;	// 0x31f57ac5
@end
