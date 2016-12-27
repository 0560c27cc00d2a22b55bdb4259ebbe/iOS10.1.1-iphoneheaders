/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKChatController.h>
#import <libobjc.A.dylib/CKComposeRecipientSelectionControllerDelegate.h>

@class CKComposeRecipientSelectionController, NSArray, CKComposition, UIBarButtonItem, NSString;

@interface CKComposeChatController : CKChatController <CKComposeRecipientSelectionControllerDelegate> {

	BOOL _newComposeCancelled;
	CKComposeRecipientSelectionController* _composeRecipientSelectionController;
	NSArray* _prepopulatedRecipients;
	CKComposition* _prepopulatedComposition;
	UIBarButtonItem* _composeCancelItem;

}

@property (nonatomic,retain) CKComposeRecipientSelectionController * composeRecipientSelectionController;              //@synthesize composeRecipientSelectionController=_composeRecipientSelectionController - In the implementation block
@property (nonatomic,retain) NSArray * prepopulatedRecipients;                                                         //@synthesize prepopulatedRecipients=_prepopulatedRecipients - In the implementation block
@property (nonatomic,retain) CKComposition * prepopulatedComposition;                                                  //@synthesize prepopulatedComposition=_prepopulatedComposition - In the implementation block
@property (assign,nonatomic) BOOL newComposeCancelled;                                                                 //@synthesize newComposeCancelled=_newComposeCancelled - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * composeCancelItem;                                                      //@synthesize composeCancelItem=_composeCancelItem - In the implementation block
@property (assign,nonatomic,__weak) id<CKComposeChatControllerDelegate> delegate; 
@property (nonatomic,readonly) NSArray * proposedRecipients; 
@property (nonatomic,readonly) NSString * unatomizedRecipientText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)becomeFirstResponder;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)inputAccessoryView;
-(void)cancelButtonTapped:(id)arg1 ;
-(void)recipientSelectionController:(id)arg1 textDidChange:(id)arg2 ;
-(void)recipientSelectionControllerReturnPressed:(id)arg1 ;
-(void)recipientSelectionControllerDidChangeSize:(id)arg1 ;
-(void)recipientSelectionControllerRequestDismissKeyboard:(id)arg1 ;
-(void)recipientSelectionControllerDidPushABViewController:(id)arg1 ;
-(void)recipientSelectionController:(id)arg1 didFinishAvailaiblityLookupForRecipient:(id)arg2 ;
-(void)recipientSelectionControllerSearchListDidShowOrHide:(id)arg1 ;
-(UIEdgeInsets)navigationBarInsetsForRecipientSelectionController:(id)arg1 ;
-(void)parentControllerDidResume:(BOOL)arg1 animating:(BOOL)arg2 ;
-(BOOL)hasUnreachableEmergencyRecipient;
-(void)messageEntryViewSendButtonHitWhileDisabled:(id)arg1 ;
-(void)messageEntryViewDidChange:(id)arg1 ;
-(void)messageEntryViewSendButtonHit:(id)arg1 ;
-(BOOL)hasFailedRecipients;
-(BOOL)isComposingRecipient;
-(void)sendComposition:(id)arg1 ;
-(void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 tappedForChatItem:(id)arg3 ;
-(BOOL)transcriptCollectionViewControllerPlaybackForOutgoingEffectsIsAllowed:(id)arg1 ;
-(BOOL)shouldUseNavigationBarCanvasView;
-(BOOL)_chatShowsUnexpectedlyLoggedOutNotification;
-(void)reloadEntryViewIfNeeded;
-(void)_saveDraftState;
-(void)prepareForSuspend;
-(void)_updateNavigationButtons;
-(void)_setConversationDeferredSetup;
-(BOOL)isSafeToMarkAsRead;
-(double)topInsetPadding;
-(void)_updateTitleAnimated:(BOOL)arg1 ;
-(double)_entryViewTopInsetPadding;
-(id)outgoingComposeViewForSendAnimation;
-(CKComposeRecipientSelectionController *)composeRecipientSelectionController;
-(void)setPrepopulatedRecipients:(NSArray *)arg1 ;
-(void)setPrepopulatedComposition:(CKComposition *)arg1 ;
-(void)setComposeRecipientSelectionController:(CKComposeRecipientSelectionController *)arg1 ;
-(NSArray *)prepopulatedRecipients;
-(CKComposition *)prepopulatedComposition;
-(UIBarButtonItem *)composeCancelItem;
-(void)setNewComposeCancelled:(BOOL)arg1 ;
-(BOOL)newComposeCancelled;
-(NSArray *)proposedRecipients;
-(void)recipientSelectionController:(id)arg1 didSelectConversation:(id)arg2 ;
-(id)initWithRecipientAddresses:(id)arg1 composition:(id)arg2 ;
-(NSString *)unatomizedRecipientText;
-(void)conversationLeft;
-(void)setComposeCancelItem:(UIBarButtonItem *)arg1 ;
@end

