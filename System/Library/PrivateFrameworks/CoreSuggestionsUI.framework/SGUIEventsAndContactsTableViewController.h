/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:37 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSuggestionsUI/CoreSuggestionsUI-Structs.h>
#import <UIKit/UITableViewController.h>
#import <libobjc.A.dylib/CNContactViewControllerDelegate.h>
#import <libobjc.A.dylib/EKEventEditViewDelegate.h>
#import <libobjc.A.dylib/EKEventViewDelegate.h>
#import <libobjc.A.dylib/SGUIEventSuggestionTableViewCellDelegate.h>
#import <libobjc.A.dylib/SGUIContactSuggestionTableViewCellDelegate.h>
#import <libobjc.A.dylib/SGUIAddAllTableViewCellDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@protocol SGUIEventsAndContactsTableViewControllerDelegate;
@class NSMutableArray, NSString;

@interface SGUIEventsAndContactsTableViewController : UITableViewController <CNContactViewControllerDelegate, EKEventEditViewDelegate, EKEventViewDelegate, SGUIEventSuggestionTableViewCellDelegate, SGUIContactSuggestionTableViewCellDelegate, SGUIAddAllTableViewCellDelegate, UIPopoverPresentationControllerDelegate> {

	NSMutableArray* _realtimeEvents;
	NSMutableArray* _realtimeContacts;
	id _presentedSuggestion;
	id<SGUIEventsAndContactsTableViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SGUIEventsAndContactsTableViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<SGUIEventsAndContactsTableViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id<SGUIEventsAndContactsTableViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)eventViewController:(id)arg1 didCompleteWithAction:(long long)arg2 ;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
-(void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2 ;
-(void)addAllTableViewCellDidTapAddAll:(id)arg1 ;
-(void)contactSuggestionCell:(id)arg1 didTapIgnoreForContactSuggestion:(id)arg2 ;
-(void)contactSuggestionCell:(id)arg1 didTapConfirmForContactSuggestion:(id)arg2 ;
-(void)eventSuggestionCell:(id)arg1 didTapIgnoreForEventSuggestion:(id)arg2 ;
-(void)eventSuggestionCell:(id)arg1 didTapConfirmForEventSuggestion:(id)arg2 ;
-(id)initWithRealtimeEvents:(id)arg1 realtimeContacts:(id)arg2 ;
-(void)removeSuggestion:(id)arg1 ;
-(void)presentViewControllerInCurrentContext:(id)arg1 ;
@end

