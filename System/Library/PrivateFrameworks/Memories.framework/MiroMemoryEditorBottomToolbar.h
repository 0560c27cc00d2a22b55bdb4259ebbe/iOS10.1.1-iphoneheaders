/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIToolbar.h>
#import <libobjc.A.dylib/MiroMemoryEditorAutoEditCompletionActionDelegate.h>

@protocol MiroPlayerControlling, MiroMemoryEditorToolbarDelegate;
@class UIBarButtonItem, NSString;

@interface MiroMemoryEditorBottomToolbar : UIToolbar <MiroMemoryEditorAutoEditCompletionActionDelegate> {

	BOOL _showDoneCancelButtons;
	BOOL _fromTitle;
	BOOL _fromMusic;
	BOOL _fromDuration;
	BOOL _isSpinning;
	BOOL _autoEditingIsInProgress;
	id<MiroPlayerControlling> _playerController;
	id<MiroMemoryEditorToolbarDelegate> _toolbarDelegate;
	UIBarButtonItem* _doneButtonItem;

}

@property (assign,nonatomic) BOOL isSpinning;                                                         //@synthesize isSpinning=_isSpinning - In the implementation block
@property (assign,nonatomic) BOOL autoEditingIsInProgress;                                            //@synthesize autoEditingIsInProgress=_autoEditingIsInProgress - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * doneButtonItem;                                        //@synthesize doneButtonItem=_doneButtonItem - In the implementation block
@property (assign,nonatomic,__weak) id<MiroPlayerControlling> playerController;                       //@synthesize playerController=_playerController - In the implementation block
@property (assign,nonatomic,__weak) id<MiroMemoryEditorToolbarDelegate> toolbarDelegate;              //@synthesize toolbarDelegate=_toolbarDelegate - In the implementation block
@property (assign,nonatomic) BOOL showDoneCancelButtons;                                              //@synthesize showDoneCancelButtons=_showDoneCancelButtons - In the implementation block
@property (assign,nonatomic) BOOL fromTitle;                                                          //@synthesize fromTitle=_fromTitle - In the implementation block
@property (assign,nonatomic) BOOL fromMusic;                                                          //@synthesize fromMusic=_fromMusic - In the implementation block
@property (assign,nonatomic) BOOL fromDuration;                                                       //@synthesize fromDuration=_fromDuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)updateItems;
-(void)_applicationWillResignActive:(id)arg1 ;
-(id)_cancelButtonItem;
-(id<MiroPlayerControlling>)playerController;
-(void)setPlayerController:(id<MiroPlayerControlling>)arg1 ;
-(void)setToolbarDelegate:(id<MiroMemoryEditorToolbarDelegate>)arg1 ;
-(void)autoEditingWillBegin;
-(void)setShowDoneCancelButtons:(BOOL)arg1 ;
-(void)cancelAutoEditWaitingBehavior;
-(void)startAutoEditWaitingBehavior;
-(void)pause:(id)arg1 ;
-(void)setFromTitle:(BOOL)arg1 ;
-(void)setFromDuration:(BOOL)arg1 ;
-(void)setFromMusic:(BOOL)arg1 ;
-(void)autoEditingDidEnd;
-(void)performAutoEditDidCompleteAction;
-(void)_updateItemsAnimated:(BOOL)arg1 ;
-(void)setAutoEditingIsInProgress:(BOOL)arg1 ;
-(void)_handlePlayerDidBeginPlayingNotification:(id)arg1 ;
-(void)_handlePlayerDidDidPlayToEndTimeNotification:(id)arg1 ;
-(id)_activityButtonRow;
-(void)setIsSpinning:(BOOL)arg1 ;
-(BOOL)isSpinning;
-(id)_playButtonRow;
-(void)_play:(id)arg1 ;
-(BOOL)autoEditingIsInProgress;
-(id<MiroMemoryEditorToolbarDelegate>)toolbarDelegate;
-(id)_pauseButtonRow;
-(void)_postAggDPlayerStatus:(BOOL)arg1 ;
-(BOOL)showDoneCancelButtons;
-(id)_flexibleSpaceItem;
-(id)_playButtonItem;
-(UIBarButtonItem *)doneButtonItem;
-(id)_pauseButtonItem;
-(id)_activityItem;
-(BOOL)fromMusic;
-(BOOL)fromTitle;
-(BOOL)fromDuration;
-(void)setDoneButtonItem:(UIBarButtonItem *)arg1 ;
@end

