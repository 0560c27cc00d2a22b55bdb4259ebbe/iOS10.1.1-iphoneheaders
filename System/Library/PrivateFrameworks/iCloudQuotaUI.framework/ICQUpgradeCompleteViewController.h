/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iCloudQuotaUI/ICQViewController.h>

@class _ICQUpgradeCompletePageSpecification;

@interface ICQUpgradeCompleteViewController : ICQViewController {

	_ICQUpgradeCompletePageSpecification* _upgradeCompletePageSpecification;

}

@property (nonatomic,retain) _ICQUpgradeCompletePageSpecification * upgradeCompletePageSpecification;              //@synthesize upgradeCompletePageSpecification=_upgradeCompletePageSpecification - In the implementation block
+(BOOL)supportsPageClassIdentifier:(id)arg1 ;
-(void)loadView;
-(id)initWithUpgradeCompletePageSpecification:(id)arg1 ;
-(id)initWithPageSpecification:(id)arg1 ;
-(_ICQUpgradeCompletePageSpecification *)upgradeCompletePageSpecification;
-(void)setUpgradeCompletePageSpecification:(_ICQUpgradeCompletePageSpecification *)arg1 ;
@end

