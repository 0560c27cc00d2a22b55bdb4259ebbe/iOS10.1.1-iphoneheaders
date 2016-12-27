/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivity.h>
#import <libobjc.A.dylib/LSOpenResourceOperationDelegate.h>

@class NSURL, NSString, LSApplicationProxy, NSOperation;

@interface UIOpenInIBooksActivity : UIActivity <LSOpenResourceOperationDelegate> {

	BOOL _sourceIsManaged;
	BOOL _shouldUnlinkFile;
	NSURL* _url;
	NSString* _applicationIdentifier;
	LSApplicationProxy* _applicationProxy;
	NSOperation* _operation;

}

@property (nonatomic,retain) NSURL * url;                                        //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) BOOL shouldUnlinkFile;                              //@synthesize shouldUnlinkFile=_shouldUnlinkFile - In the implementation block
@property (nonatomic,retain) NSString * applicationIdentifier;                   //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,retain) LSApplicationProxy * applicationProxy;              //@synthesize applicationProxy=_applicationProxy - In the implementation block
@property (nonatomic,retain) NSOperation * operation;                            //@synthesize operation=_operation - In the implementation block
@property (assign,nonatomic) BOOL sourceIsManaged;                               //@synthesize sourceIsManaged=_sourceIsManaged - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bestJobNameForActivityItems:(id)arg1 ;
+(id)jobNameFormatForFile;
+(id)defaultJobName;
+(long long)activityCategory;
-(NSOperation *)operation;
-(void)setOperation:(NSOperation *)arg1 ;
-(NSURL *)url;
-(void)_cleanup;
-(void)setUrl:(NSURL *)arg1 ;
-(LSApplicationProxy *)applicationProxy;
-(BOOL)sourceIsManaged;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(NSString *)applicationIdentifier;
-(void)setApplicationProxy:(LSApplicationProxy *)arg1 ;
-(void)_finishedCopyingResource;
-(BOOL)shouldUnlinkFile;
-(id)printInteractionController;
-(void)setShouldUnlinkFile:(BOOL)arg1 ;
-(void)_openDocumentWithApplication;
-(void)openResourceOperation:(id)arg1 didFinishCopyingResource:(id)arg2 ;
-(id)activityType;
-(id)_activityImage;
-(id)_activitySettingsImage;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(void)prepareWithActivityItems:(id)arg1 ;
-(void)setSourceIsManaged:(BOOL)arg1 ;
@end

