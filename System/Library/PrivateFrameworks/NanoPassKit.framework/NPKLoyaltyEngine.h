/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:43 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSArray, NSObject;

@interface NPKLoyaltyEngine : NSObject {

	NSArray* _storedValueCardDescriptions;
	NSArray* _whitelistedLoyaltyCardDescriptions;
	NSArray* _greylistedLoyaltyCardDescriptions;
	NSObject*<OS_dispatch_queue> _internalQueue;

}

@property (retain) NSObject*<OS_dispatch_queue> internalQueue;                  //@synthesize internalQueue=_internalQueue - In the implementation block
@property (readonly) NSArray * storedValueCardDescriptions; 
@property (readonly) NSArray * whitelistedLoyaltyCardDescriptions; 
@property (readonly) NSArray * greylistedLoyaltyCardDescriptions; 
+(id)shouldAutomaticallyPresentForSettings:(unsigned long long)arg1 ;
+(id)sharedQuickPaymentLoyaltyEngine;
-(id)init;
-(id)_init;
-(void)reset;
-(void)_postLoyaltyEngineConfigurationChanged;
-(NSArray *)storedValueCardDescriptions;
-(NSArray *)greylistedLoyaltyCardDescriptions;
-(NSArray *)whitelistedLoyaltyCardDescriptions;
-(void)moveCardDescriptionFromGreylistToWhitelist:(id)arg1 ;
-(void)removeCardDescriptionFromGreylistAndWhitelist:(id)arg1 ;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
@end

