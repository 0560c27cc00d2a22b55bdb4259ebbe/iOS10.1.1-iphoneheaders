/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUQuickControlController.h>

@class HFMultiStateControlItem;

@interface HUQuickControlMultiStateController : HUQuickControlController

@property (nonatomic,readonly) HFMultiStateControlItem * controlItem; 
+(Class)controlItemClass;
-(id)viewProfile;
-(id)overrideStatusText;
-(id)createInteractionCoordinator;
-(id)controlToViewValueTransformer;
-(void)modelValueDidChange;
-(BOOL)_useOverrideStatusText;
@end

