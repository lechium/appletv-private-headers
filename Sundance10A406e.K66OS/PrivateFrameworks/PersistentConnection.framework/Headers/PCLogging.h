/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

#import <NSObject.h> // Unknown library


@interface PCLogging : NSObject {
}
+ (void)_appendString:(id)string toFileNamed:(id)fileNamed;	// 0x32ff0211
+ (void)_configureLogFacilityIfNeeded:(id)needed;	// 0x32fef8b5
+ (id)_facilityForIdentifier:(id)identifier;	// 0x32fef875
+ (id)_fileNameForIdentifier:(id)identifier;	// 0x32fef811
+ (id)_formatBlock;	// 0x32fefc21
+ (void)enableConsoleLoggingForLevel:(int)level;	// 0x32ff0741
+ (void)enableFileLogging:(BOOL)logging;	// 0x32ff075d
+ (void)enableLoggingForCustomHandler:(id)customHandler;	// 0x32ff0779
+ (id)getMainBundleId;	// 0x32fefb49
+ (void)initialize;	// 0x32fef4ad
+ (void)logAtLevel:(int)level delegate:(id)delegate format:(id)format;	// 0x32fefbf9
+ (void)logAtLevel:(int)level delegate:(id)delegate format:(id)format arguments:(void *)arguments;	// 0x32fefc75
+ (id)logFileDirectory;	// 0x32ff0159
+ (void)logKeepAliveInterval:(double)interval forServiceIdentifier:(id)serviceIdentifier;	// 0x32ff0051
+ (BOOL)loggingEnabledForLevel:(int)level;	// 0x32fefbcd
@end

