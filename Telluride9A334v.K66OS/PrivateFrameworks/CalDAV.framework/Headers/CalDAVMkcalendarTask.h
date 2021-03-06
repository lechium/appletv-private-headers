/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVTask.h> // Unknown library

@class NSSet;
@protocol CalDAVMkcalendarTaskDelegate, CoreDAVTaskDelegate;

@interface CalDAVMkcalendarTask : CoreDAVTask {
	NSSet *_setElements;	// 120 = 0x78
}
@property(assign, nonatomic) id<CoreDAVTaskDelegate, CalDAVMkcalendarTaskDelegate> delegate;	// @dynamic
@property(retain) NSSet *setElements;	// G=0x3594d5d5; S=0x3594d5b1; @synthesize=_setElements
- (id)initWithPropertiesToSet:(id)set atURL:(id)url;	// 0x3594d565
- (id)initWithURL:(id)url;	// 0x3594d445
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x3594d4cd
- (void)dealloc;	// 0x3594da4d
- (id)description;	// 0x3594d941
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x3594d5ed
- (id)httpMethod;	// 0x3594d439
- (id)requestBody;	// 0x3594d6ed
// declared property getter: - (id)setElements;	// 0x3594d5d5
// declared property setter: - (void)setSetElements:(id)elements;	// 0x3594d5b1
- (void)setSupportForEvents:(BOOL)events tasks:(BOOL)tasks;	// 0x3594da8d
@end

