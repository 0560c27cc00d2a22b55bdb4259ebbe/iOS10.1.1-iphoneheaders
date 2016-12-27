/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@protocol OS_os_activity, OS_dispatch_queue;
@class NSDictionary, NSObject, NSSet, PKDiscoveryLSWatcher, NSString;

@interface PKDiscoveryDriver : NSObject <LSApplicationWorkspaceObserverProtocol> {

	int _annotationNotifyToken;
	NSDictionary* _attributes;
	unsigned long long _flags;
	/*^block*/id _report;
	NSObject*<OS_os_activity> _relatedActivity;
	NSSet* _lastResults;
	id _mcNotificationToken;
	PKDiscoveryLSWatcher* _lsWatcher;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _sync;

}

@property (retain) NSDictionary * attributes;                              //@synthesize attributes=_attributes - In the implementation block
@property (assign) unsigned long long flags;                               //@synthesize flags=_flags - In the implementation block
@property (copy) id report;                                                //@synthesize report=_report - In the implementation block
@property (retain) NSObject*<OS_os_activity> relatedActivity;              //@synthesize relatedActivity=_relatedActivity - In the implementation block
@property (retain) NSSet * lastResults;                                    //@synthesize lastResults=_lastResults - In the implementation block
@property (assign) int annotationNotifyToken;                              //@synthesize annotationNotifyToken=_annotationNotifyToken - In the implementation block
@property (retain) id mcNotificationToken;                                 //@synthesize mcNotificationToken=_mcNotificationToken - In the implementation block
@property (retain) PKDiscoveryLSWatcher * lsWatcher;                       //@synthesize lsWatcher=_lsWatcher - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> sync;                      //@synthesize sync=_sync - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(void)dealloc;
-(NSDictionary *)attributes;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setSync:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setRelatedActivity:(NSObject*<OS_os_activity>)arg1 ;
-(NSObject*<OS_os_activity>)relatedActivity;
-(void)removeWatchers;
-(void)setLastResults:(NSSet *)arg1 ;
-(int)annotationNotifyToken;
-(void)installWatchers;
-(NSSet *)lastResults;
-(void)setLsWatcher:(PKDiscoveryLSWatcher *)arg1 ;
-(void)performWithPreviousResults:(id)arg1 forceNotify:(BOOL)arg2 ;
-(void)setAnnotationNotifyToken:(int)arg1 ;
-(void)setMcNotificationToken:(id)arg1 ;
-(PKDiscoveryLSWatcher *)lsWatcher;
-(id)mcNotificationToken;
-(id)initWithAttributes:(id)arg1 flags:(unsigned long long)arg2 report:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue>)sync;
-(void)setReport:(id)arg1 ;
-(id)report;
-(void)setFlags:(unsigned long long)arg1 ;
-(unsigned long long)flags;
@end

