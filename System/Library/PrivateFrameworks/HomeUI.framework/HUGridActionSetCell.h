/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:50 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUGridCell.h>
#import <libobjc.A.dylib/HUAccessoryViewCellProtocol.h>

@class UIView, HFItem, NAFuture, HUIconView, _HUGridActionSetTitleAndDescriptionView, HUPieProgressView, NSArray, HUGridSceneCellLayoutOptions, NSString;

@interface HUGridActionSetCell : HUGridCell <HUAccessoryViewCellProtocol> {

	HFItem* _item;
	NAFuture* _executeActionSetFuture;
	UIView* _accessoryView;
	HUIconView* _iconView;
	_HUGridActionSetTitleAndDescriptionView* _titleAndDescriptionView;
	HUPieProgressView* _progressView;
	NSArray* _actionSetCellConstraints;
	NAFuture* _internalExecuteActionSetFuture;
	HUGridSceneCellLayoutOptions* _sceneCellLayoutOptions;

}

@property (nonatomic,retain) HUIconView * iconView;                                                          //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) _HUGridActionSetTitleAndDescriptionView * titleAndDescriptionView;              //@synthesize titleAndDescriptionView=_titleAndDescriptionView - In the implementation block
@property (nonatomic,retain) HUPieProgressView * progressView;                                               //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) NSArray * actionSetCellConstraints;                                             //@synthesize actionSetCellConstraints=_actionSetCellConstraints - In the implementation block
@property (nonatomic,retain) NAFuture * internalExecuteActionSetFuture;                                      //@synthesize internalExecuteActionSetFuture=_internalExecuteActionSetFuture - In the implementation block
@property (assign,nonatomic,__weak) HUGridSceneCellLayoutOptions * sceneCellLayoutOptions;                   //@synthesize sceneCellLayoutOptions=_sceneCellLayoutOptions - In the implementation block
@property (nonatomic,retain) NAFuture * executeActionSetFuture;                                              //@synthesize executeActionSetFuture=_executeActionSetFuture - In the implementation block
@property (nonatomic,retain) UIView * accessoryView;                                                         //@synthesize accessoryView=_accessoryView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)requiresConstraintBasedLayout;
+(Class)layoutOptionsClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)item;
-(void)updateConstraints;
-(void)prepareForReuse;
-(void)setItem:(id)arg1 ;
-(UIView *)accessoryView;
-(void)setAccessoryView:(UIView *)arg1 ;
-(HUPieProgressView *)progressView;
-(void)setProgressView:(HUPieProgressView *)arg1 ;
-(HUIconView *)iconView;
-(void)_updateLabels;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(void)setExecuteActionSetFuture:(NAFuture *)arg1 ;
-(void)layoutOptionsDidChange;
-(void)displayStyleDidChange;
-(void)_setupActionSetCell;
-(void)setInternalExecuteActionSetFuture:(NAFuture *)arg1 ;
-(void)setTitleAndDescriptionView:(_HUGridActionSetTitleAndDescriptionView *)arg1 ;
-(_HUGridActionSetTitleAndDescriptionView *)titleAndDescriptionView;
-(NAFuture *)internalExecuteActionSetFuture;
-(void)_updateLabelsWithTitle:(id)arg1 description:(id)arg2 primaryState:(long long)arg3 ;
-(HUGridSceneCellLayoutOptions *)sceneCellLayoutOptions;
-(NSArray *)actionSetCellConstraints;
-(void)setActionSetCellConstraints:(NSArray *)arg1 ;
-(NAFuture *)executeActionSetFuture;
-(void)setSceneCellLayoutOptions:(HUGridSceneCellLayoutOptions *)arg1 ;
-(void)_invalidateConstraints;
-(void)setIconView:(HUIconView *)arg1 ;
@end

