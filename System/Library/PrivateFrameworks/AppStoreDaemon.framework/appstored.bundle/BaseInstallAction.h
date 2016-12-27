/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/PipelineAction.h>

@class NSString, DaemonDatabase, Event;

@interface BaseInstallAction : NSObject <PipelineAction> {

	NSString* _bundleID;
	DaemonDatabase* _database;
	Event* _event;
	long long _installID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsMultipleEntities;
-(void)run;
-(void)transitionToState:(id)arg1 ;
-(id)initWithEvent:(id)arg1 ;
-(BOOL)applicationIsInstalled:(id)arg1 ;
@end

