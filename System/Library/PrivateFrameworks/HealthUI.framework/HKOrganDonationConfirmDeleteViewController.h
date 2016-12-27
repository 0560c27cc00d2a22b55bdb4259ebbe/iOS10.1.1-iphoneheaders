/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:39 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKOrganDonationBaseViewController.h>

@class HKOrganDonationConnectionManager;

@interface HKOrganDonationConfirmDeleteViewController : HKOrganDonationBaseViewController {

	HKOrganDonationConnectionManager* _connectionManager;

}
-(id)titleString;
-(id)titleImage;
-(id)initWithConnectionManager:(id)arg1 medicalIDData:(id)arg2 ;
-(id)bottomAnchoredButtons;
-(id)bodyString;
-(void)buttonAtIndexTapped:(long long)arg1 ;
-(void)deleteButtonTapped:(id)arg1 ;
@end

