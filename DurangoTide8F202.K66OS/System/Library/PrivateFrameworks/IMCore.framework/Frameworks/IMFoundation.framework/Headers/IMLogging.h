/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

#import <NSObject.h> // Unknown library


@interface IMLogging : NSObject {
}
+ (void)_appendString:(id)string toFileNamed:(id)fileNamed;	// 0x312188ad
+ (id)dateFormatter;	// 0x31218501
+ (void)enableConsoleLoggingForLevel:(int)level;	// 0x312184f5
+ (void)initialize;	// 0x31218641
+ (void)logAtLevel:(int)level category:(id)category format:(id)format;	// 0x3121868d
+ (void)logAtLevel:(int)level category:(id)category format:(id)format arguments:(void *)arguments;	// 0x312186bd
+ (id)logFileDirectory;	// 0x3121887d
+ (BOOL)loggingEnabledForLevel:(int)level;	// 0x312184f1
@end

