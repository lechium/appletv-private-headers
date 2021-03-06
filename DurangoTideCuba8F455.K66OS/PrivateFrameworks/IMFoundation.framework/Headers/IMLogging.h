/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

#import <NSObject.h> // Unknown library


@interface IMLogging : NSObject {
}
+ (void)_appendString:(id)string toFileNamed:(id)fileNamed;	// 0x30b868ad
+ (id)dateFormatter;	// 0x30b86501
+ (void)enableConsoleLoggingForLevel:(int)level;	// 0x30b864f5
+ (void)initialize;	// 0x30b86641
+ (void)logAtLevel:(int)level category:(id)category format:(id)format;	// 0x30b8668d
+ (void)logAtLevel:(int)level category:(id)category format:(id)format arguments:(void *)arguments;	// 0x30b866bd
+ (id)logFileDirectory;	// 0x30b8687d
+ (BOOL)loggingEnabledForLevel:(int)level;	// 0x30b864f1
@end

