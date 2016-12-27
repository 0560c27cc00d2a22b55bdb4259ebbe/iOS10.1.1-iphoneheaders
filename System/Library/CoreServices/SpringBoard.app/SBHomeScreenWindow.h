/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBWindow.h>

@class SBHomeScreenViewController;

@interface SBHomeScreenWindow : SBWindow

@property (nonatomic,__weak,readonly) SBHomeScreenViewController * homeScreenViewController; 
+(BOOL)sb_autorotates;
+(CGRect)constrainFrameToScreen:(CGRect)arg1 ;
-(SBHomeScreenViewController *)homeScreenViewController;
-(id)_initWithScreen:(id)arg1 layoutStrategy:(id)arg2 debugName:(id)arg3 rootViewController:(id)arg4 scene:(id)arg5 ;
@end

