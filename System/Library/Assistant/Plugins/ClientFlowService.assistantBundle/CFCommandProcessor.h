/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:43:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Assistant/Plugins/ClientFlowService.assistantBundle/ClientFlowService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CFCommandProcessor.h>

@protocol CFCommandProcessor <NSObject>
@required
-(BOOL)isDeviceLockedWithPasscode;
-(void)handleOneWayCommand:(id)arg1;
-(void)handleCommand:(id)arg1 reply:(/*^block*/id)arg2;
-(void)handleOneWayCommand:(id)arg1 reply:(/*^block*/id)arg2;
-(void)handleCommand:(id)arg1 replyWithMetrics:(/*^block*/id)arg2;
-(void)handleOneWayCommand:(id)arg1 replyWithMetrics:(/*^block*/id)arg2;

@end


@class CFServiceHelper, NSString;

@interface CFCommandProcessor : NSObject <CFCommandProcessor> {

	CFServiceHelper* _serviceHelper;

}

@property (nonatomic,copy,readonly) CFServiceHelper * serviceHelper;              //@synthesize serviceHelper=_serviceHelper - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isDeviceLockedWithPasscode;
-(id)initWithServiceHelper:(id)arg1 ;
-(CFServiceHelper *)serviceHelper;
-(void)handleOneWayCommand:(id)arg1 ;
-(void)handleCommand:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)handleOneWayCommand:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)handleCommand:(id)arg1 replyWithMetrics:(/*^block*/id)arg2 ;
-(void)handleOneWayCommand:(id)arg1 replyWithMetrics:(/*^block*/id)arg2 ;
@end

