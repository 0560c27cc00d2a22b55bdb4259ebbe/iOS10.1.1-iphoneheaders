/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/PipelineDriver.h>

@class NSString;

@interface RestorePipelineDriver : NSObject <PipelineDriver>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)queryWithDatabase:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3 ;
-(Class)classForType:(id)arg1 ;
-(id)initWithDatabase:(id)arg1 ;
-(id)propertyMap;
@end

