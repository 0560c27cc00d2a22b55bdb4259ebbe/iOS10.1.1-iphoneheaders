/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBThermalWarningAlertItemDelegate.h>
#import <SpringBoard/SBTestRecipe.h>

@class SBAlertItem, NSString;

@interface SBOmnibusAlertItemTestRecipe : NSObject <SBThermalWarningAlertItemDelegate, SBTestRecipe> {

	SBAlertItem* _item;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)title;
-(void)handleVolumeIncrease;
-(void)handleVolumeDecrease;
-(id)_nextAlertItemToTest;
-(void)_dismissCurrentItem;
-(id)_anyAppIcon;
-(id)_anySUDescriptor;
-(id)_anyLeafIcon;
-(id)_anyUserInstalledAppIcon;
-(id)_mapsApp;
-(void)thermalWarningAlert:(id)arg1 didTriggerAction:(int)arg2 ;
@end

