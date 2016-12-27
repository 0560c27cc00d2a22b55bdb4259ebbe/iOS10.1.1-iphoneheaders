/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:42 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/MFMailComposeViewControllerDelegate.h>

@class NSArray, NSString, EKEvent;

@interface EKUIInviteesViewMessageSendingViewController : UIViewController <MFMailComposeViewControllerDelegate> {

	NSArray* _recipients;
	NSString* _subjectPrefix;
	NSString* _body;
	/*^block*/id _messageSendingComplete;
	EKEvent* _event;

}

@property (nonatomic,retain) EKEvent * event;                       //@synthesize event=_event - In the implementation block
@property (retain) NSArray * recipients;                            //@synthesize recipients=_recipients - In the implementation block
@property (retain) NSString * subjectPrefix;                        //@synthesize subjectPrefix=_subjectPrefix - In the implementation block
@property (retain) NSString * body;                                 //@synthesize body=_body - In the implementation block
@property (copy) id messageSendingComplete;                         //@synthesize messageSendingComplete=_messageSendingComplete - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)canShowForEvent:(id)arg1 withRecipients:(id)arg2 ;
+(id)_recipientEmailAddressesToDisplayNames:(id)arg1 recipients:(id)arg2 ;
+(id)_attendeesIgnorningMe:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(EKEvent *)event;
-(void)setEvent:(EKEvent *)arg1 ;
-(NSString *)body;
-(void)setBody:(NSString *)arg1 ;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3 ;
-(id)initWithEvent:(id)arg1 ;
-(void)setMessageSendingComplete:(id)arg1 ;
-(void)setSubjectPrefix:(NSString *)arg1 ;
-(NSString *)subjectPrefix;
-(id)_htmlBodyForMailMessageWithNames:(id)arg1 ;
-(id)messageSendingComplete;
-(BOOL)prefersToBePresentedFromApplicationRootViewController;
-(BOOL)prefersForcedModalShowViewController;
-(NSArray *)recipients;
-(void)setRecipients:(NSArray *)arg1 ;
@end

