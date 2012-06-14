/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVTask.h> // Unknown library

@class NSSet;
@protocol CoreDAVTaskDelegate, CalDAVMkcalendarTaskDelegate;

@interface CalDAVMkcalendarTask : CoreDAVTask {
	NSSet *_setElements;	// 132 = 0x84
}
@property(assign, nonatomic) id<CoreDAVTaskDelegate, CalDAVMkcalendarTaskDelegate> delegate;	// @dynamic
@property(retain) NSSet *setElements;	// G=0x36e4b0bd; S=0x36e4b0d1; @synthesize=_setElements
- (id)initWithPropertiesToSet:(id)set atURL:(id)url;	// 0x36e4a93d
- (id)initWithURL:(id)url;	// 0x36e4a929
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x36e4af29
- (void)dealloc;	// 0x36e4ab79
- (id)description;	// 0x36e4abbd
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x36e4afb9
- (id)httpMethod;	// 0x36e4acdd
- (id)requestBody;	// 0x36e4ace9
// declared property getter: - (id)setElements;	// 0x36e4b0bd
// declared property setter: - (void)setSetElements:(id)elements;	// 0x36e4b0d1
- (void)setSupportForEvents:(BOOL)events tasks:(BOOL)tasks;	// 0x36e4a989
@end

