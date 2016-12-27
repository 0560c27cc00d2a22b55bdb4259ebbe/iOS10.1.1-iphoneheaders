/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_NCWidgetController_Host_IPC.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCListener, WGWidgetDiscoveryController, NSMutableDictionary, NSString;

@interface WGWidgetPersistentStateController : NSObject <_NCWidgetController_Host_IPC, NSXPCListenerDelegate> {

	NSXPCListener* _listener;
	WGWidgetDiscoveryController* _discoveryController;
	NSMutableDictionary* _widgetIdentifiersToCachedState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)hasContentForWidgetWithIdentifier:(id)arg1 containingBundleIdentifier:(id)arg2 ;
+(id)_persistentStateForWidgetWithIdentifier:(id)arg1 containingBundleIdentifier:(id)arg2 ;
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)initWithDiscoveryController:(id)arg1 ;
-(BOOL)doesWidgetWithIdentifierHaveContent:(id)arg1 ;
-(long long)largestAvailableDisplayModeForWidgetWithIdentifier:(id)arg1 ;
-(BOOL)setLargestAvailableDisplayMode:(long long)arg1 forWidgetWithIdentifier:(id)arg2 ;
-(id)_updateCachedStateForWidgetWithIdentifier:(id)arg1 containingBundleID:(id)arg2 ;
-(void)_synchronizePersistentStateForWidgetWithIdentifier:(id)arg1 ;
-(id)_valueForKey:(id)arg1 forWidgetWithIdentifier:(id)arg2 ;
-(void)_setValue:(id)arg1 forKey:(id)arg2 forWidgetWithIdentifier:(id)arg3 containingBundleID:(id)arg4 ;
-(void)__setHasContent:(BOOL)arg1 forWidgetWithBundleIdentifier:(id)arg2 ;
-(void)__requestRefreshAfterDate:(id)arg1 forWidgetWithBundleIdentifier:(id)arg2 ;
-(BOOL)_setHasContent:(BOOL)arg1 forWidgetWithIdentifier:(id)arg2 ;
@end
