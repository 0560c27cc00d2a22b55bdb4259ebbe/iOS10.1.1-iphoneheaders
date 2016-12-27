/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBLayoutElementContainerView.h>

@class SBAppView;

@interface SBAppContainerView : SBLayoutElementContainerView {

	SBAppView* _appView;

}

@property (nonatomic,retain) SBAppView * appView; 
-(SBAppView *)appView;
-(void)setLayoutElementViewAlpha:(double)arg1 ;
-(unsigned long long)_supportedOrientations;
-(void)setAppView:(SBAppView *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)snapshotView;
-(void)prepareForReuse;
-(long long)displayMode;
-(void)setDisplayMode:(long long)arg1 ;
@end

