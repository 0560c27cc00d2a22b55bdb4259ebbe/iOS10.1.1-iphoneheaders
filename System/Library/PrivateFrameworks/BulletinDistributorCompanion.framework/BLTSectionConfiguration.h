/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinDistributorCompanion/BLTSectionConfigurationInternal.h>
#import <libobjc.A.dylib/BLTWatchKitAppListDelegate.h>

@protocol BLTSectionConfigurationDelegate;
@class BLTWatchKitAppList, NSCondition, NSString;

@interface BLTSectionConfiguration : BLTSectionConfigurationInternal <BLTWatchKitAppListDelegate> {

	BLTWatchKitAppList* _watchKitAppList;
	NSCondition* _watchKitAppListLoadedCondition;
	BOOL _watchKitAppListLoaded;
	id<BLTSectionConfigurationDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<BLTSectionConfigurationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<BLTSectionConfigurationDelegate>)arg1 ;
-(id<BLTSectionConfigurationDelegate>)delegate;
-(void)watchKitAppList:(id)arg1 added:(id)arg2 removed:(id)arg3 ;
-(BOOL)shouldSectionIDSettingsAlwaysSync:(id)arg1 ;
-(void)_waitForWatchKitAppListLoaded;
-(id)initWithWatchKitAppList:(id)arg1 ;
@end

