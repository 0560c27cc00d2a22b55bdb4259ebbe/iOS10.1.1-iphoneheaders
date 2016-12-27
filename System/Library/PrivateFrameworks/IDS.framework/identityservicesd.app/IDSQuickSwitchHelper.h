/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <identityservicesd/identityservicesd-Structs.h>
@interface IDSQuickSwitchHelper : NSObject {

	opaque_pthread_mutex_t _isQuickSwitchingMutex;
	BOOL _isQuickSwitching;

}

@property (nonatomic,readonly) BOOL isQuickSwitching; 
+(id)sharedInstance;
-(BOOL)isQuickSwitching;
-(void)_setIsQuickSwitching:(BOOL)arg1 ;
-(void)resetCommunicationStateBeforeQuickSwitchWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)initiateQuickSwitchToDeviceWithCBUUID:(id)arg1 broadcaster:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)init;
-(void)dealloc;
@end

