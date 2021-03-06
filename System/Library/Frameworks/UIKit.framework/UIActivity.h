/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:10 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSExtension, NSString, UIImage, UIViewController;

@interface UIActivity : NSObject {

	long long _defaultPriority;
	/*^block*/id _activityCompletionWithItemsHandler;

}

@property (nonatomic,readonly) NSExtension * applicationExtension; 
@property (nonatomic,copy) id activityCompletionWithItemsHandler;                      //@synthesize activityCompletionWithItemsHandler=_activityCompletionWithItemsHandler - In the implementation block
@property (nonatomic,readonly) NSString * activityType; 
@property (nonatomic,readonly) NSString * activityTitle; 
@property (nonatomic,readonly) UIImage * activityImage; 
@property (nonatomic,readonly) UIViewController * activityViewController; 
+(void)streamActivitiesWithCompletion:(/*^block*/id)arg1 ;
+(id)ph_PhotosApplicationActivitiesTypePublish;
+(id)ph_PhotosApplicationActivityTypeOrder;
+(id)_activityImageForApplication:(id)arg1 ;
+(id)_activitySettingsImageForApplication:(id)arg1 ;
+(long long)activityCategory;
+(id)_activityFunctionImage:(id)arg1 ;
-(void)_cleanup;
-(void)activityDidFinish:(BOOL)arg1 ;
-(void)activityDidFinish:(BOOL)arg1 items:(id)arg2 error:(id)arg3 ;
-(NSString *)activityType;
-(id)_activityImage;
-(id)_activitySettingsImage;
-(NSString *)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(void)prepareWithActivityItems:(id)arg1 ;
-(UIViewController *)activityViewController;
-(CGSize)_thumbnailSize;
-(id)_attachmentNameForActivityItem:(id)arg1 ;
-(id)_subjectForActivityItem:(id)arg1 ;
-(id)_thumbnailImageForActivityItem:(id)arg1 ;
-(id)_dataTypeIdentifierForActivityItem:(id)arg1 ;
-(BOOL)_activitySupportsPromiseURLs;
-(UIImage *)activityImage;
-(NSExtension *)applicationExtension;
-(void)_injectedJavaScriptResult:(id)arg1 ;
-(BOOL)_canBeExcludedByActivityViewController:(id)arg1 ;
-(BOOL)_presentActivityOnViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_dismissActivityFromViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)_beforeActivity;
-(BOOL)_canPerformWithSuppliedActivityItems:(id)arg1 ;
-(id)activityCompletionWithItemsHandler;
-(void)setActivityCompletionWithItemsHandler:(id)arg1 ;
-(id)activitySettingsImage;
-(void)_setActivityCompletionWithItemsHandler:(/*^block*/id)arg1 ;
-(id)_embeddedActivityViewController;
-(void)_willPresentAsFormSheet;
-(void)_setSubject:(id)arg1 ;
@end

