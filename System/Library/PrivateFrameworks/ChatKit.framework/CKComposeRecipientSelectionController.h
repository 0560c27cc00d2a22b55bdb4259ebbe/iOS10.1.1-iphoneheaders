/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/CKRecipientSelectionController.h>
#import <UIKit/UITextFieldDelegate.h>

@class NSArray, NSString;

@interface CKComposeRecipientSelectionController : CKRecipientSelectionController <UITextFieldDelegate> {

	/*^block*/id _sendBlock;

}

@property (nonatomic,copy) id sendBlock;                                                                     //@synthesize sendBlock=_sendBlock - In the implementation block
@property (assign,nonatomic,__weak) id<CKComposeRecipientSelectionControllerDelegate> delegate; 
@property (nonatomic,readonly) NSArray * expandedRecipients; 
@property (nonatomic,readonly) NSArray * proposedRecipients; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)reset;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)addRecipient:(id)arg1 ;
-(BOOL)homogenizePreferredServiceForiMessage;
-(void)recipientSelectionControllerDidChange;
-(BOOL)shouldAtomizeToConversationName;
-(BOOL)shouldSuppressSearchResultsTable;
-(BOOL)alwaysShowSearchResultsTable;
-(NSArray *)expandedRecipients;
-(void)atomizeAndInvokeBlock:(/*^block*/id)arg1 ;
-(NSArray *)proposedRecipients;
-(void)setSendBlock:(id)arg1 ;
-(void)atomizeAndSendTimeoutHandler;
-(id)sendBlock;
-(void)_updateBackfillForNewRecipients;
@end

