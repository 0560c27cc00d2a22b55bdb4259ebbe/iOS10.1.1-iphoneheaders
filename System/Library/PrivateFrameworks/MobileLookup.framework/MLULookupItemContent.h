/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:35 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MobileLookup.framework/MobileLookup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MobileLookup/MobileLookup-Structs.h>
@class UIViewController, NSURL, CNContact;

@interface MLULookupItemContent : NSObject {

	BOOL _valid;
	UIViewController* _previewViewController;
	unsigned long long _commitType;
	UIViewController* _commitViewController;
	NSURL* _commitURL;

}

@property (assign,nonatomic) unsigned long long commitType;                         //@synthesize commitType=_commitType - In the implementation block
@property (nonatomic,retain) UIViewController * commitViewController;               //@synthesize commitViewController=_commitViewController - In the implementation block
@property (nonatomic,retain) NSURL * commitURL;                                     //@synthesize commitURL=_commitURL - In the implementation block
@property (assign) BOOL valid;                                                      //@synthesize valid=_valid - In the implementation block
@property (nonatomic,retain) UIViewController * previewViewController;              //@synthesize previewViewController=_previewViewController - In the implementation block
@property (nonatomic,readonly) CNContact * contact; 
+(id)contentWithURL:(id)arg1 result:(DDResultRef)arg2 documentProperties:(id)arg3 ;
+(id)contentWithAttachments:(id)arg1 currentAttachmentIndex:(unsigned long long)arg2 ;
+(id)contentWithText:(id)arg1 range:(NSRange)arg2 ;
-(BOOL)valid;
-(unsigned long long)commitType;
-(id)children;
-(CNContact *)contact;
-(BOOL)wantsSeamlessCommit;
-(void)dismissViewController;
-(void)setCommitURL:(NSURL *)arg1 ;
-(NSURL *)commitURL;
-(void)setValid:(BOOL)arg1 ;
-(void)setupViewControllerInCommitMode;
-(BOOL)commitPreviewInController:(id)arg1 ;
-(void)setCommitType:(unsigned long long)arg1 ;
-(UIViewController *)commitViewController;
-(void)setCommitViewController:(UIViewController *)arg1 ;
-(id)requiredEntitlements;
-(UIViewController *)previewViewController;
-(void)setPreviewViewController:(UIViewController *)arg1 ;
@end

