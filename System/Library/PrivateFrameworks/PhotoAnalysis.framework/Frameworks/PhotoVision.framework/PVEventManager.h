/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:37 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotoVision.framework/PhotoVision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, PVContext;

@interface PVEventManager : NSObject {

	NSMutableArray* _notificationListeners;
	PVContext* _context;

}
-(id)initWithContext:(id)arg1 ;
-(void)addNotificationListener:(id)arg1 ;
-(void)removeNotificationListener:(id)arg1 ;
-(void)publishEvent:(id)arg1 source:(id)arg2 ;
-(void)notifyListeners:(id)arg1 ;
@end

