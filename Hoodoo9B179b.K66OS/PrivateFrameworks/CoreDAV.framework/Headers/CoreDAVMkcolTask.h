/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVActionBackedTask.h"

@class NSSet, NSURL;
@protocol CoreDAVTaskDelegate;

@interface CoreDAVMkcolTask : CoreDAVActionBackedTask {
	NSSet *_propertiesToSet;	// 136 = 0x88
	BOOL _sendOrder;	// 140 = 0x8c
	int _absoluteOrder;	// 144 = 0x90
	NSURL *_priorOrderedURL;	// 148 = 0x94
}
@property(assign, nonatomic) int absoluteOrder;	// G=0x30cb1471; S=0x30cb13b9; @synthesize=_absoluteOrder
@property(assign, nonatomic) id<CoreDAVTaskDelegate> delegate;	// @dynamic
@property(retain, nonatomic) NSURL *priorOrderedURL;	// G=0x30cb1481; S=0x30cb13dd; @synthesize=_priorOrderedURL
@property(retain) NSSet *propertiesToSet;	// G=0x30cb1439; S=0x30cb144d; @synthesize=_propertiesToSet
- (id)initWithPropertiesToSet:(id)set atURL:(id)url;	// 0x30cb0aed
- (id)initWithURL:(id)url;	// 0x30cb0ad9
// declared property getter: - (int)absoluteOrder;	// 0x30cb1471
- (id)additionalHeaderValues;	// 0x30cb0d65
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x30cb1101
- (void)dealloc;	// 0x30cb0b45
- (id)description;	// 0x30cb0ba5
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x30cb1191
- (id)httpMethod;	// 0x30cb0d59
// declared property getter: - (id)priorOrderedURL;	// 0x30cb1481
// declared property getter: - (id)propertiesToSet;	// 0x30cb1439
- (id)requestBody;	// 0x30cb0ed5
// declared property setter: - (void)setAbsoluteOrder:(int)order;	// 0x30cb13b9
// declared property setter: - (void)setPriorOrderedURL:(id)url;	// 0x30cb13dd
// declared property setter: - (void)setPropertiesToSet:(id)set;	// 0x30cb144d
@end

