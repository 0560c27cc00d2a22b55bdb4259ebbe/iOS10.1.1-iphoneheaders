/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/NotificationsSettings.bundle/NotificationsSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class UIImageView, NSString;

@interface NotificationCell : PSTableCell {

	UIImageView* _appIcon;
	NSString* _bundlePath;

}

@property (nonatomic,copy) NSString * bundlePath;              //@synthesize bundlePath=_bundlePath - In the implementation block
+(double)defaultCellHeight;
+(long long)cellStyle;
-(void)setNotificationTypes:(id)arg1 ;
-(void)dealloc;
-(NSString *)bundlePath;
-(void)setAppIcon:(id)arg1 ;
-(id)getLazyIcon;
-(void)setBundlePath:(NSString *)arg1 ;
-(void)setAppName:(id)arg1 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(BOOL)canReload;
@end

