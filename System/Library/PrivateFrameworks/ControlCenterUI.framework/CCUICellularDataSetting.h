/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:21 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUI/CCUISettingModule.h>

@interface CCUICellularDataSetting : CCUISettingModule
+(id)identifier;
+(id)displayName;
+(id)statusOnString;
+(id)statusOffString;
+(BOOL)isSupported:(int)arg1 ;
+(BOOL)isInternalButton;
-(void)deactivate;
-(void)_updateState;
-(void)activate;
-(id)aggdKey;
-(id)selectedStateColor;
-(BOOL)_toggleState;
-(id)glyphImageForState:(int)arg1 ;
-(BOOL)_isCellularDataRestricted;
@end

