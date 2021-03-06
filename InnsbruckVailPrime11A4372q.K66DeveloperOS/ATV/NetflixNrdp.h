/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NetflixNrdObject.h"
#import "NetflixNrdObjectProtocol.h"

@class NSMutableDictionary, NSString;

@interface NetflixNrdp : NetflixNrdObject <NetflixNrdObjectProtocol> {
	BOOL isReady_;	// 4 = 0x4
	BOOL isError_;	// 5 = 0x5
	NSMutableDictionary *eventListeners_;	// 8 = 0x8
	NSMutableDictionary *syncData_;	// 12 = 0xc
	NSMutableDictionary *setPropertyPending_;	// 16 = 0x10
	NSMutableDictionary *setPropertyCurrent_;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) NSString *ACTION_ID;	// G=0x56b00d; 
@property(readonly, assign, nonatomic) NSString *COMPLETE;	// G=0x56b019; 
@property(readonly, assign, nonatomic) NSString *ERROR;	// G=0x56b031; 
@property(readonly, assign, nonatomic) NSString *NETWORK_ERROR;	// G=0x56b025; 
@property(readonly, assign, nonatomic) NSString *READY;	// G=0x56b001; 
@property(retain) NSMutableDictionary *eventListeners;	// G=0x56c581; S=0x56c595; @synthesize=eventListeners_
@property(assign) BOOL isError;	// G=0x56c551; S=0x56c569; @synthesize=isError_
@property(assign) BOOL isReady;	// G=0x56c521; S=0x56c539; @synthesize=isReady_
@property(retain) NSMutableDictionary *setPropertyCurrent;	// G=0x56c5ed; S=0x56c601; @synthesize=setPropertyCurrent_
@property(retain) NSMutableDictionary *setPropertyPending;	// G=0x56c5c9; S=0x56c5dd; @synthesize=setPropertyPending_
@property(retain) NSMutableDictionary *syncData;	// G=0x56c5a5; S=0x56c5b9; @synthesize=syncData_
+ (id)sharedInstance;	// 0x56ad8d
- (id)init;	// 0x56ae79
// declared property getter: - (id)ACTION_ID;	// 0x56b00d
// declared property getter: - (id)COMPLETE;	// 0x56b019
// declared property getter: - (id)ERROR;	// 0x56b031
// declared property getter: - (id)NETWORK_ERROR;	// 0x56b025
// declared property getter: - (id)READY;	// 0x56b001
- (void)addEventListener:(id)listener listener:(id)listener2 name:(id)name;	// 0x56b9b1
- (void)addEventListener:(id)listener name:(id)name;	// 0x56b959
- (void)callEventListeners:(id)listeners event:(id)event;	// 0x56bcbd
- (void)dealloc;	// 0x56af59
// declared property getter: - (id)eventListeners;	// 0x56c581
- (id)getSubObject:(id)object;	// 0x56c489
- (void)gotEvent:(id)event;	// 0x56b03d
- (BOOL)handleEvent:(id)event;	// 0x56b869
- (BOOL)handleNccpEvent:(id)event object:(id)object type:(id)type;	// 0x56c1f1
// declared property getter: - (BOOL)isError;	// 0x56c551
// declared property getter: - (BOOL)isReady;	// 0x56c521
- (void)notifyEventListeners:(id)listeners type:(id)type parameters:(id)parameters;	// 0x56be15
- (void)removeEventListener:(id)listener listener:(id)listener2 name:(id)name;	// 0x56badd
- (void)removeEventListener:(id)listener name:(id)name;	// 0x56b985
// declared property setter: - (void)setEventListeners:(id)listeners;	// 0x56c595
// declared property setter: - (void)setIsError:(BOOL)error;	// 0x56c569
// declared property setter: - (void)setIsReady:(BOOL)ready;	// 0x56c539
- (void)setProperty:(id)property property:(id)property2 value:(id)value;	// 0x56bf1d
// declared property getter: - (id)setPropertyCurrent;	// 0x56c5ed
// declared property getter: - (id)setPropertyPending;	// 0x56c5c9
// declared property setter: - (void)setSetPropertyCurrent:(id)current;	// 0x56c601
// declared property setter: - (void)setSetPropertyPending:(id)pending;	// 0x56c5dd
// declared property setter: - (void)setSyncData:(id)data;	// 0x56c5b9
// declared property getter: - (id)syncData;	// 0x56c5a5
- (id)syncDataForObject:(id)object;	// 0x56c0f9
@end

