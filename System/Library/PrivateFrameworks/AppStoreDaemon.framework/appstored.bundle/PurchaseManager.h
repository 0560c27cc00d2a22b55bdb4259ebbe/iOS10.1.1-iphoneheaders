/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSPurchaseManagerDelegate.h>

@class SSPurchaseManager, NSString;

@interface PurchaseManager : NSObject <SSPurchaseManagerDelegate> {

	SSPurchaseManager* _purchaseManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedPurchaseManager;
-(void)makePurchase:(id)arg1 forEntityType:(id)arg2 entityID:(long long)arg3 ;
-(long long)_findJobForPurchaseWithID:(long long)arg1 inDatabase:(id)arg2 ;
-(id)init;
-(void)purchaseManager:(id)arg1 didFinishPurchasesWithResponses:(id)arg2 ;
@end

