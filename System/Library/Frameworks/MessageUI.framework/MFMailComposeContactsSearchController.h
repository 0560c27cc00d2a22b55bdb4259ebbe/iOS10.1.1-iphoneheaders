/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFContactsSearchConsumer.h>

@protocol MFMailComposeContactsSearchControllerDelegate;
@class MFContactsSearchManager, MFContactsSearchResultsModel, NSMutableArray, NSNumber, NSString;

@interface MFMailComposeContactsSearchController : NSObject <MFContactsSearchConsumer> {

	MFContactsSearchManager* _manager;
	MFContactsSearchResultsModel* _model;
	NSMutableArray* _autocompleteSearchResults;
	NSMutableArray* _corecipientSearchResults;
	NSNumber* _corecipientSearchTaskID;
	BOOL _foundAnySearchResults;
	unsigned long long _waitingOnSearchResultsCount;
	id<MFMailComposeContactsSearchControllerDelegate> _delegate;
	NSNumber* _taskID;

}

@property (nonatomic,retain) NSNumber * taskID;                                                       //@synthesize taskID=_taskID - In the implementation block
@property (assign,nonatomic) id<MFMailComposeContactsSearchControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setDelegate:(id<MFMailComposeContactsSearchControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MFMailComposeContactsSearchControllerDelegate>)delegate;
-(void)_reset;
-(void)searchWithString:(id)arg1 enteredRecipients:(id)arg2 title:(id)arg3 ;
-(void)findCorecipientsWithRecipients:(id)arg1 ;
-(NSNumber *)taskID;
-(void)_cancelSearchAndNotify:(BOOL)arg1 ;
-(void)setTaskID:(NSNumber *)arg1 ;
-(void)_finishSearch;
-(void)searchWithString:(id)arg1 ;
-(void)cancelSearch;
-(void)removeRecipient:(id)arg1 ;
-(void)consumeAutocompleteSearchResults:(id)arg1 taskID:(id)arg2 ;
-(void)finishedSearchingForAutocompleteResults;
-(void)consumeCorecipientSearchResults:(id)arg1 taskID:(id)arg2 ;
-(void)finishedSearchingForCorecipients;
-(void)finishedTaskWithID:(id)arg1 ;
-(void)beganNetworkActivity;
-(void)endedNetworkActivity;
-(void)consumeSearchResults:(id)arg1 type:(unsigned long long)arg2 taskID:(id)arg3 ;
-(void)finishedSearchingForType:(unsigned long long)arg1 ;
-(void)didSelectRecipient:(id)arg1 atIndex:(unsigned long long)arg2 ;
@end

