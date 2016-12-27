/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IDSServiceMonitor, NSMutableSet;

@interface IDSServiceContainer : NSObject {

	IDSServiceMonitor* _monitor;
	NSMutableSet* _listeners;

}

@property (nonatomic,retain) IDSServiceMonitor * monitor;                    //@synthesize monitor=_monitor - In the implementation block
@property (nonatomic,retain,readonly) NSMutableSet * listeners;              //@synthesize listeners=_listeners - In the implementation block
-(void)dealloc;
-(IDSServiceMonitor *)monitor;
-(BOOL)hasListenerID:(id)arg1 ;
-(BOOL)addListenerID:(id)arg1 ;
-(BOOL)removeListenerID:(id)arg1 ;
-(id)initWithService:(id)arg1 ;
-(void)setMonitor:(IDSServiceMonitor *)arg1 ;
-(NSMutableSet *)listeners;
@end

