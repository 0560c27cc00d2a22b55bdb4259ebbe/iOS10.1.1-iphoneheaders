/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:41 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UINavigationController.h>

@protocol EKEventEditViewDelegate;
@class EKEventStore, EKEvent, NSString, EKEventEditor, UIColor;

@interface EKEventEditViewController : UINavigationController {

	EKEventStore* _store;
	EKEvent* _event;
	NSString* _eventId;
	int _transitionForModalViewPresentation;
	id<EKEventEditViewDelegate> _editViewDelegate;
	EKEventEditor* _editor;
	EKEventEditViewController* _strongSelf;

}

@property (nonatomic,retain) EKEventEditor * editor;                                           //@synthesize editor=_editor - In the implementation block
@property (nonatomic,retain) EKEventEditViewController * strongSelf;                           //@synthesize strongSelf=_strongSelf - In the implementation block
@property (assign,nonatomic) BOOL showAttachments; 
@property (assign,nonatomic) BOOL scrollToNotes; 
@property (assign,nonatomic) BOOL canHideDoneAndCancelButtons; 
@property (nonatomic,retain) UIColor * editorBackgroundColor; 
@property (assign,nonatomic) int transitionForModalViewPresentation;                           //@synthesize transitionForModalViewPresentation=_transitionForModalViewPresentation - In the implementation block
@property (assign,nonatomic) double editorNavBarLeftContentInset; 
@property (assign,nonatomic) double editorNavBarRightContentInset; 
@property (assign,nonatomic) BOOL timeImplicitlySet; 
@property (assign,nonatomic,__weak) id<EKEventEditViewDelegate> editViewDelegate;              //@synthesize editViewDelegate=_editViewDelegate - In the implementation block
@property (nonatomic,retain) EKEventStore * eventStore; 
@property (nonatomic,retain) EKEvent * event; 
+(void)setDefaultDatesForEvent:(id)arg1 ;
+(id)eventEditViewControllerWithEvent:(id)arg1 eventStore:(id)arg2 editViewDelegate:(id)arg3 ;
-(void)dealloc;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(CGSize)preferredContentSize;
-(EKEvent *)event;
-(void)setEvent:(EKEvent *)arg1 ;
-(BOOL)hasUnsavedChanges;
-(EKEventStore *)eventStore;
-(void)_storeChanged:(id)arg1 ;
-(void)setTransitionForModalViewPresentation:(int)arg1 ;
-(void)refreshStartAndEndDates;
-(BOOL)saveWithSpan:(long long)arg1 animated:(BOOL)arg2 ;
-(BOOL)scrollToNotes;
-(void)setScrollToNotes:(BOOL)arg1 ;
-(BOOL)showAttachments;
-(void)setShowAttachments:(BOOL)arg1 ;
-(BOOL)canHideDoneAndCancelButtons;
-(void)setCanHideDoneAndCancelButtons:(BOOL)arg1 ;
-(void)handleTapOutside;
-(void)completeAndSave;
-(BOOL)willPresentDialogOnSave;
-(void)focusAndSelectTitle;
-(BOOL)timeImplicitlySet;
-(void)setTimeImplicitlySet:(BOOL)arg1 ;
-(EKEventEditor *)editor;
-(void)setEventStore:(EKEventStore *)arg1 ;
-(void)editor:(id)arg1 didCompleteWithAction:(long long)arg2 ;
-(void)editor:(id)arg1 prepareCalendarItemForEdit:(id)arg2 ;
-(void)setEditorBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)editorBackgroundColor;
-(void)setEditorNavBarLeftContentInset:(double)arg1 ;
-(double)editorNavBarLeftContentInset;
-(void)setEditorNavBarRightContentInset:(double)arg1 ;
-(double)editorNavBarRightContentInset;
-(id)_eventEditorForTestingOnly;
-(id<EKEventEditViewDelegate>)editViewDelegate;
-(void)setEditor:(EKEventEditor *)arg1 ;
-(EKEventEditViewController *)strongSelf;
-(void)setStrongSelf:(EKEventEditViewController *)arg1 ;
-(int)transitionForModalViewPresentation;
-(void)setEditViewDelegate:(id<EKEventEditViewDelegate>)arg1 ;
-(void)cancelEditing;
@end

