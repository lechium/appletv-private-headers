/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVPropFindTaskDelegate.h"
#import "CoreDAVTaskGroup.h"

@class NSSet, NSString, NSMutableSet;
@protocol CoreDAVContainerInfoTaskGroupDelegate;

@interface CoreDAVContainerInfoTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate> {
	int _phase;	// 44 = 0x2c
	NSMutableSet *_containerURLs;	// 48 = 0x30
	NSMutableSet *_containers;	// 52 = 0x34
	int _containerInfoDepth;	// 56 = 0x38
	NSString *_appSpecificHomeSetPropNameSpace;	// 60 = 0x3c
	NSString *_appSpecificHomeSetPropName;	// 64 = 0x40
}
@property(assign) int containerInfoDepth;	// G=0x33a36fe9; S=0x33a36ffd; @synthesize=_containerInfoDepth
@property(readonly, assign) NSSet *containerURLs;	// G=0x33a37015; @synthesize=_containerURLs
@property(assign, nonatomic) id<CoreDAVContainerInfoTaskGroupDelegate> delegate;	// @dynamic
- (id)initWithAccountInfoProvider:(id)accountInfoProvider containerURLs:(id)urls taskManager:(id)manager;	// 0x33a36245
- (id)_copyContainerParserMappings;	// 0x33a36fcd
- (id)_copyContainerWithURL:(id)url andProperties:(id)properties;	// 0x33a36f91
- (void)_getContainerHomeSet;	// 0x33a36475
- (void)_getContainerTopLevelInfo;	// 0x33a36621
// declared property getter: - (int)containerInfoDepth;	// 0x33a36fe9
- (int)containerInfoDepthForURL:(id)url;	// 0x33a36465
// declared property getter: - (id)containerURLs;	// 0x33a37015
- (void)dealloc;	// 0x33a362b1
- (id)description;	// 0x33a3633d
- (void)propFindTask:(id)task parsedResponses:(id)responses error:(id)error;	// 0x33a36845
// declared property setter: - (void)setContainerInfoDepth:(int)depth;	// 0x33a36ffd
- (void)startTaskGroup;	// 0x33a363ad
- (void)taskGroupWillCancelWithError:(id)taskGroup;	// 0x33a363f9
@end

