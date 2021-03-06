/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogAccounting/PLAccountingOwnerDependencyManager.h>
#import <libobjc.A.dylib/PLAccountingDistributionOwnerManager.h>

@protocol PLAccountingDistributionManagerDelegate;
@class NSString;

@interface PLAccountingDistributionManager : PLAccountingOwnerDependencyManager <PLAccountingDistributionOwnerManager> {

	id<PLAccountingDistributionManagerDelegate> _delegate;

}

@property (__weak) id<PLAccountingDistributionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)freeTimerInterval;
-(id)init;
-(void)setDelegate:(id<PLAccountingDistributionManagerDelegate>)arg1 ;
-(id<PLAccountingDistributionManagerDelegate>)delegate;
-(id)ownerIDsForDependency:(id)arg1 ;
-(void)addEnergyEstimate:(id)arg1 withNow:(id)arg2 ;
-(void)reloadDependenciesNewerThanDate:(id)arg1 ;
-(id)dependencyIDsForOwner:(id)arg1 ;
-(void)didDistributeEnergyEstimate:(id)arg1 ;
-(void)didDistributeToChildEnergyEstimate:(id)arg1 fromParentEnergyEstimate:(id)arg2 ;
-(void)addDistributionEvent:(id)arg1 ;
-(void)closeLastDistributionEventForwardWithDistributionID:(id)arg1 withEndDate:(id)arg2 ;
@end

